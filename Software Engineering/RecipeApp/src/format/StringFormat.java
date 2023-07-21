package format;

import java.util.Vector;
import org.apache.commons.text.WordUtils;
import sql.*;

public class StringFormat {
    public static String formatToBlockText(Recipe recipe) {
        StringBuilder ingredients = new StringBuilder();
        StringBuilder instructions = new StringBuilder();
        String blockString = null;
        String[] parsedIngredients = stringParse(recipe.ingredients);
        String[] parsedInstructions = stringParse(recipe.instructions);

        ingredients = buildString(parsedIngredients,false);
        instructions = buildString(parsedInstructions,true);

        blockString = recipe.title + "\n" +
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

    public static Integer formatToBlockInt(Recipe recipe) {
        Integer blockInt = 0;
        blockInt = recipe.id;

        return blockInt;
    }

    public static String formatToTitleText(Recipe recipe) {
        StringBuilder title = new StringBuilder();
        String titleStr = null;
        String[] parsedTitle = titleParse(recipe.title);

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
        String wrappedString = null;

        if(numbered) {
            int counter = 1;

            for(String s: parsedString){
                String strCounter = String.valueOf(counter) + ". ";
                wrappedString = wrapText(s, 125);
                builtString.append(strCounter).append(wrappedString).append("\n\n");
                counter++;
            }
        }
        else {
            for(String s: parsedString){

                wrappedString = wrapText(s, 125);
                builtString.append(wrappedString).append("\n");
            }
        }

        return builtString;
    }

    private static String wrapText(String toWrap, int wrapLength) {
        return WordUtils.wrap(toWrap, wrapLength, "\n", false);
    }
}
