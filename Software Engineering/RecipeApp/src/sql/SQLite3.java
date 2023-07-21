package sql;

import java.sql.*;
import java.util.*;

public class SQLite3 {
    Connection dbConnection;
    String dbPath;

    public SQLite3() {
        this.dbConnection = null;
        this.dbPath = "jdbc:sqlite:C:\\Program Files (x86)\\sqlite3\\recipes.db";
    }

    public SQLite3(String path) {
        this.dbConnection = null;
        this.dbPath = path;
    }

    public Vector<Recipe> getAllRecipes() {
        Recipe newRecipe = new Recipe();
        Vector<Recipe> recipeVec = new Vector<>();

        try {
            this.dbConnection = DriverManager.getConnection(this.dbPath);
            String sql = "SELECT * FROM recipes";
            Statement statement = this.dbConnection.createStatement();
            ResultSet result = statement.executeQuery(sql);

            while (result.next()) {
                newRecipe = new Recipe();
                newRecipe.id = result.getInt("recipe_id");
                newRecipe.title = result.getString("title");
                newRecipe.ingredients = result.getString("ingredients");
                newRecipe.instructions = result.getString("instructions");

                //Add Recipe to vector
                recipeVec.add(newRecipe);
            }
            return recipeVec;

        } catch (SQLException e) {
            System.out.println(e.getMessage());
        } finally {
            try {
                if (this.dbConnection != null) {
                    this.dbConnection.close();
                }
            } catch (SQLException ex) {
                System.out.println(ex.getMessage());
            }
        }
        return null;
    }

    public Vector<Recipe> getRecipeByType(String typeValue) {
        Recipe queriedRecipes = null;
        Vector<Recipe> recipeVec = new Vector<>();

        try {
            this.dbConnection = DriverManager.getConnection(this.dbPath);
            String selectQuery = "SELECT * FROM recipes where type= ?";
            PreparedStatement selectStmt = this.dbConnection.prepareStatement(selectQuery);
            selectStmt.setString(1, typeValue);
            ResultSet result = selectStmt.executeQuery();

            while (result.next()) {
                queriedRecipes = new Recipe();
                queriedRecipes.id = result.getInt("recipe_id");
                queriedRecipes.title = result.getString("title");
                queriedRecipes.ingredients = result.getString("ingredients");
                queriedRecipes.instructions = result.getString("instructions");

                //Add Recipe to vector
                recipeVec.add(queriedRecipes);
            }

            return recipeVec;

        } catch (SQLException e) {
            System.out.println(e.getMessage());
        } finally {
            try {
                if (this.dbConnection != null) {
                    this.dbConnection.close();
                }
            } catch (SQLException ex) {
                System.out.println(ex.getMessage());
            }
        }
        return null;
    }

    public Vector<Recipe> getRecipeIntQuery(){
        Recipe queriedRecipes = new Recipe();
        Vector<Recipe> recipeVec = new Vector<>();

        try {
            this.dbConnection = DriverManager.getConnection(this.dbPath);
            String sql = "SELECT recipe_id FROM recipes";
            Statement statement = this.dbConnection.createStatement();
            ResultSet result = statement.executeQuery(sql);

            while (result.next()) {
                queriedRecipes = new Recipe();
                queriedRecipes.id = result.getInt("recipe_id");

                //Add Recipe to vector
                recipeVec.add(queriedRecipes);
            }
            return recipeVec;

        } catch (SQLException e) {
            System.out.println(e.getMessage());
        } finally {
            try {
                if (this.dbConnection != null) {
                    this.dbConnection.close();
                }
            } catch (SQLException ex) {
                System.out.println(ex.getMessage());
            }
        }
        return null;
    }

    public Vector<Recipe> getRecipeTitleQuery() {
        Recipe queriedRecipes = new Recipe();
        Vector<Recipe> recipeVec = new Vector<>();

        try {
            this.dbConnection = DriverManager.getConnection(this.dbPath);
            String sql = "SELECT title FROM recipes";
            Statement statement = this.dbConnection.createStatement();
            ResultSet result = statement.executeQuery(sql);

            while (result.next()) {
                queriedRecipes = new Recipe();
                queriedRecipes.title = result.getString("title");

                //Add Recipe to vector
                recipeVec.add(queriedRecipes);
            }
            return recipeVec;

        } catch (SQLException e) {
            System.out.println(e.getMessage());
        } finally {
            try {
                if (this.dbConnection != null) {
                    this.dbConnection.close();
                }
            } catch (SQLException ex) {
                System.out.println(ex.getMessage());
            }
        }
        return null;
    }
}