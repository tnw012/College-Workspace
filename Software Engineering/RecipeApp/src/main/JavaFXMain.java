package main;//javafx imports

import javafx.application.Application;
import javafx.fxml.FXMLLoader;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.stage.Stage;


//Java Standard API
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;


public class JavaFXMain extends Application {

    static final String PROJECT_ROOT = "C:\\Users\\Nick\\IdeaProjects\\Recipe2";
    static final String PROJECT_DB_PATH = "jdbc:sqlite:C:\\Program Files (x86)\\sqlite3\\recipes.db";

    @Override
    public void start(Stage primaryStage) throws Exception {
        Connection conn = SQLiteConnection.connect();
        FXMLLoader.setDefaultClassLoader(getClass().getClassLoader());
        // Load the FXML file
        FXMLLoader loader = new FXMLLoader(getClass().getResource("/gui/guiLayout.fxml"));
        Parent root = loader.load();
        // Create a scene with the root node
        Scene scene = new Scene(root);

        // Set the scene to the primary stage
        primaryStage.setScene(scene);
        primaryStage.show();

    }

    public static class SQLiteConnection {
        public static Connection connect() {
            Connection conn = null;
            try {
                Class.forName("org.sqlite.JDBC");
                conn = DriverManager.getConnection(PROJECT_DB_PATH);
                System.out.println("Connection to SQLite has been established.");
            } catch (SQLException | ClassNotFoundException e) {
                System.out.println(e.getMessage());
            }
            return conn;
        }
    }


    public static void main(String[] args) {
        launch(args);
    }

}
