package com.recipeapp.database;

import com.recipeapp.model.RecipeModel;

public class FormatSQLResult {

    public static String formatToBlockText(RecipeModel recipe) {
        StringBuilder ingredients = new StringBuilder();
        StringBuilder instructions = new StringBuilder();
        String blockString = null;
        String[] parsedIngredients = stringParse(recipe.returnIngredients());
        String[] parsedInstructions = stringParse(recipe.returnInstructions());

        ingredients = buildString(parsedIngredients,false);
        instructions = buildString(parsedInstructions,true);

        blockString = recipe.returnTitle() + "\n" +
                "Ingredients : \n" + ingredients + "\n" +
                "Instructions: \n" + instructions + "\n";

        return blockString;
    }

    private static String[] stringParse(String stringToParse) {
        if(stringToParse != null) {
            return stringToParse.split(":");
        }

        return null;
    }

    public static Integer formatToBlockInt(RecipeModel recipe) {
        Integer blockInt = 0;
        blockInt = recipe.returnId();

        return blockInt;
    }

    public static String formatToTitleText(RecipeModel recipe) {
        StringBuilder title = new StringBuilder();
        String titleStr = null;
        String[] parsedTitle = titleParse(recipe.returnTitle());

        title = buildString(parsedTitle, false);
        titleStr = String.valueOf(title);

        return titleStr;
    }

    private static String[] titleParse(String stringToParse) {
        if(stringToParse != null) {
            return stringToParse.split(",");
        }

        return null;
    }

    private static StringBuilder buildString(String[] parsedString, Boolean numbered) {
        StringBuilder builtString = new StringBuilder();

        if(numbered) {
            int counter = 1;

            for(String s: parsedString) {
                String strCounter = String.valueOf(counter) + ". ";
                builtString.append(strCounter).append(s).append("\n");
                counter++;
            }
        }
        else {
            for(String s: parsedString) {
                builtString.append(s).append("\n");
            }
        }
        return builtString;
    }

}
