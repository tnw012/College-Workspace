package com.recipeapp.controllers;

import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.graphics.Picture;

import com.recipeapp.database.SQLite3DatabaseController;
import com.recipeapp.model.RecipeModel;

import java.util.List;
import java.util.Vector;

public final class RecipeDatabaseController extends SQLite3DatabaseController.DatabaseController{
    private static final String TABLE_NAME = "recipes";
    private static final String ID_COL = "recipe_id";
    private static final String TITLE_COL = "title";
    private static final String PICTURE_COL = "picture";
    private static final String INGREDIENTS_COL = "ingredients";
    private static final String INSTRUCTIONS_COL = "instructions";
    private static final String TYPE_COL = "type";


    private List<RecipeModel> TitleList;

    public RecipeDatabaseController(){}

    @Override
    public void onCreate(SQLiteDatabase db) {
       final String CREATE_TABLE = "CREATE TABLE " + TABLE_NAME + " ("
                + ID_COL + " INTEGER PRIMARY KEY AUTOINCREMENT, "
                + TITLE_COL + " TEXT,"
                + PICTURE_COL + " TEXT,"
                + INGREDIENTS_COL + " TEXT,"
                + INSTRUCTIONS_COL + " TEXT,"
                + TYPE_COL + " TEXT)";

        db.execSQL(CREATE_TABLE);
    }

    @Override
    public void onUpgrade(SQLiteDatabase db, int oldVersion, int newVersion){
        db.execSQL("DROP TABLE IF EXISTS " + TABLE_NAME);
        onCreate(db);
    }

    private static RecipeModel getRecord(Cursor cursor) {
        RecipeModel RecipeRecord = null;

        //Pull data from database and store in appropriate string variable
        Integer recipe_id = cursor.getInt(cursor.getColumnIndexOrThrow(ID_COL));
        String title = cursor.getString(cursor.getColumnIndexOrThrow(TITLE_COL));
        String picture = cursor.getString(cursor.getColumnIndexOrThrow(PICTURE_COL));
        String ingredients = cursor.getString(cursor.getColumnIndexOrThrow(INGREDIENTS_COL));
        String instructions = cursor.getString(cursor.getColumnIndexOrThrow(INSTRUCTIONS_COL));
        String type = cursor.getString(cursor.getColumnIndexOrThrow(TYPE_COL));

        //Create a new Question object and add it to the vector.
        RecipeRecord = new RecipeModel(recipe_id, title, picture, ingredients, instructions, type);

        return RecipeRecord;
    }

    public static Vector<RecipeModel> getTitle(SQLite3DatabaseController db /*String whereKey*/) {
        String selectQuery = "SELECT * FROM " + TABLE_NAME/*+ " WHERE title=?"*/;
        Cursor cursor = db.getDatabase().rawQuery(selectQuery, null/*new String[] {whereKey}*/);
        Vector<RecipeModel> Title = new Vector<>();

        if(cursor != null && cursor.getCount() > 0) {
            while (cursor.moveToNext()) {
                Title.add(getRecord(cursor));
            }
            cursor.close();
        }
        return Title;
    }

    public static Vector<RecipeModel> getRecipe(SQLite3DatabaseController db) {
        String selectQuery = "SELECT * FROM " + TABLE_NAME;
        Cursor cursor = db.getDatabase().rawQuery(selectQuery, null);
        Vector<RecipeModel> recipeDetails = new Vector<>();

        if(cursor != null && cursor.getCount() > 0) {
            while (cursor.moveToNext()) {
                recipeDetails.add(getRecord(cursor));
            }
            cursor.close();
        }
        return recipeDetails;
    }
}
