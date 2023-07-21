package gui;

import javafx.collections.FXCollections;
import javafx.collections.ObservableList;
import javafx.fxml.FXML;
import javafx.scene.Scene;
import javafx.scene.control.ListView;
import javafx.scene.control.*;
import javafx.scene.text.Text;
import javafx.geometry.Pos;
import javafx.scene.control.*;
import javafx.scene.layout.*;
import javafx.stage.Popup;
import main.JavaFXMain;
import javafx.stage.*;

import javax.swing.*;
import java.sql.*;

public class FXMLController {

    // define accessed fields
    @FXML
    private TextField searchBar;
    @FXML
    private ListView<String> recipeList;
    @FXML
    private TextArea topRightTextArea;
    @FXML
    private TextArea bottomRightTextArea;
    @FXML
    private Text titleTextField;
    @FXML
    private Button homeButton;
    @FXML
    private Button addRecipeButton;




    //create the connection
    private Connection conn;


    public void initialize() {
        conn = JavaFXMain.SQLiteConnection.connect();
        ObservableList<String> recipes = FXCollections.observableArrayList();
        try {
            Statement stmt = conn.createStatement();
            ResultSet rs = stmt.executeQuery("SELECT title FROM recipes");
            while (rs.next()) {
                recipes.add(rs.getString("title"));
                System.out.println("Recipe " + rs.getString("title") + " loaded into program.");
            }
        } catch (SQLException e) {
            System.out.println("Error executing SQL query: " + e.getMessage());
        }

        //load recipes into recipeList pane on left
        recipeList.setItems(recipes);

        //handle clicks within the recipeList
        recipeList.setOnMouseClicked(event -> {
            if (event.getClickCount() == 1) { // check if clicked
                String selectedItem = recipeList.getSelectionModel().getSelectedItem();
                System.out.println("Selected item: " + selectedItem);

                // Execute SQL command to retrieve recipe data based on selected item
                try {
                    PreparedStatement stmt = conn.prepareStatement("SELECT * FROM recipes WHERE title = ?");
                    stmt.setString(1, selectedItem);
                    ResultSet rs = stmt.executeQuery();

                    // Update UI elements with recipe data
                    if (rs.next()) {
                        String ingredients = rs.getString("ingredients");
                        String instructions = rs.getString("instructions");


                        // set Wrap Text to true for the text areas
                        titleTextField.setWrappingWidth(500);
                        topRightTextArea.setWrapText(true);
                        bottomRightTextArea.setWrapText(true);

                        //set uneditable
                        topRightTextArea.setEditable(false);
                        bottomRightTextArea.setEditable(false);

                        //TODO: migrate this to separate CSS file
                        //set line spacing
                        topRightTextArea.setStyle("-fx-line-spacing: 20px;");
                        bottomRightTextArea.setStyle("-fx-line-spacing: 20px;");


                        //add colon listener to add newline for each colon
                        topRightTextArea.textProperty().addListener((observable, oldValue, newValue) -> {
                            if (newValue.contains(":")) {
                                String wrappedText = newValue.replace(":", "\n");
                                topRightTextArea.setText(wrappedText);
                            }
                        });

                        bottomRightTextArea.textProperty().addListener((observable, oldValue, newValue) -> {
                            if (newValue.contains(":")) {
                                String wrappedText = newValue.replace(":", "\n");
                                bottomRightTextArea.setText(wrappedText);
                            }
                        });

                        topRightTextArea.setText(ingredients);
                        bottomRightTextArea.setText(instructions);
                        titleTextField.setText(selectedItem);


                    }
                } catch (SQLException e) {
                    System.out.println("Error executing SQL query: " + e.getMessage());
                }
            }
        });


        // add a listener to the searchBar textProperty()
        searchBar.textProperty().addListener((observable, oldVal, newVal) -> {


            // if the search bar is empty, show all recipes
            if (newVal == null || newVal.trim().isEmpty()) {
                recipeList.setItems(recipes);
            } else {


                // filter the recipes by the search keyword
                ObservableList<String> filteredRecipes = FXCollections.observableArrayList();
                for (String recipe : recipes) {
                    if (recipe.toLowerCase().contains(newVal.toLowerCase())) {
                        filteredRecipes.add(recipe);
                    }
                }
                recipeList.setItems(filteredRecipes);
            }
        });


        //add listener to home button
        homeButton.setOnAction(event -> {
            System.out.println("Going Home!");
            titleTextField.setText("Recipe App");
            topRightTextArea.setText("");
            bottomRightTextArea.setText("");
            searchBar.setText("");

        });

        addRecipeButton.setOnAction(event-> {

            final Stage addRecipePopup = new Stage();

            addRecipePopup.initModality(Modality.APPLICATION_MODAL);
            addRecipePopup.setTitle("Add Recipe Popup");

            Label popupLabel = new Label("Add Your Recipe!");

            TextField popupTitleField = new TextField("Title");
            TextField popupIngredientField = new TextField("Ingredients");
            TextField popupInstructionField = new TextField("Instructions");


            Button popupAddRecipeButton = new Button("Add Recipe");

            popupAddRecipeButton.setOnAction(actionEvent -> {
                String addTitle = popupTitleField.getText();
                String addIngredients = popupIngredientField.getText();
                String addInstructions = popupInstructionField.getText();

                try {
                    Statement addRecipeStmt = conn.createStatement();

                    addRecipeStmt.executeUpdate("INSERT INTO recipes (title, picture, ingredients, instructions) " + "VALUES(" + "'" + addTitle + "'" + ", 'Null', "  + "'" + addIngredients + "'" +", "+ "'" + addInstructions + "'" +")");

                    Statement updateRecipeList = conn.createStatement();
                    ResultSet uRL = updateRecipeList.executeQuery("SELECT * FROM recipes ORDER BY recipe_id DESC LIMIT 1");
                    while (uRL.next()) {
                        recipes.add(uRL.getString("title"));
                    }

                } catch (SQLException ex) {
                    System.out.println("Error executing SQL query: " + ex.getMessage());
                }
                addRecipePopup.close();
            });

            VBox popupVbox = new VBox(10);


            popupVbox.getChildren().addAll(popupLabel, popupTitleField, popupIngredientField, popupInstructionField, popupAddRecipeButton);

            popupVbox.setAlignment(Pos.CENTER);

            Scene popupScene = new Scene(popupVbox, 300, 250);

            addRecipePopup.setScene(popupScene);

            addRecipePopup.showAndWait();
        });

    }


}
