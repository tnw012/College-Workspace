package com.recipeapp.model;

public class RecipeModel {
    private Integer recipe_id;
    private String title;
    private String picture;
    private String ingredients;
    private String instructions;
    private String type;

    public RecipeModel(Integer recipe_id, String title, String picture, String ingredients, String instructions, String type) {
        this.recipe_id = recipe_id;
        this.title = title;
        this.picture = picture;
        this.ingredients = ingredients;
        this.instructions = instructions;
        this.type = type;
    }


    public Integer returnId() {return this.recipe_id; }
    public String returnPicture() {return this.picture; }
    public String returnTitle() { return this.title; }
    public String returnIngredients() { return this.ingredients; }
    public String returnInstructions() { return this.instructions; }
    public String returnType() { return this.type; }


}
