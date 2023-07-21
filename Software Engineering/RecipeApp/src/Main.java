//Project Packages
import format.StringFormat;
import gui.MyGUI;

//Java Standard API
import java.util.Vector;
import sql.*;

public class Main {
    static final String PROJECT_ROOT = "C:\\Users\\Nick\\IdeaProjects\\Recipe2";
    static final String PROJECT_DB_PATH = "jdbc:sqlite:C:\\Program Files (x86)\\sqlite3\\recipes.db";

    public static void main(String[] args) {
        //String db_path = "jdbc:sqlite:" + PROJECT_ROOT + "\\database\\recipes.db";
        //System.out.println(db_path);
        MyGUI myGUI = new MyGUI();
        //testSQLite3(PROJECT_DB_PATH);
    }

    //Tests the database functionality and prints to console the results
    public static void testSQLite3(String path) {
        SQLite3 dbTest = new SQLite3(path);
        Vector<Recipe> testRecipeVec;
        testRecipeVec = dbTest.getAllRecipes();
        //testRecipeVec = dbTest.getRecipeByType("Steak");

        for (Recipe r : testRecipeVec) {
            System.out.println(StringFormat.formatToBlockText(r));
        }
    }
}