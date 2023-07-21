package com.recipeapp;

import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.TextView;
import android.widget.Toast;

import androidx.appcompat.app.AppCompatActivity;
import androidx.fragment.app.Fragment;

import com.recipeapp.controllers.RecipeDatabaseController;
import com.recipeapp.database.SQLite3DatabaseController;
import com.recipeapp.model.RecipeModel;

import java.util.Vector;

public class DetailFragment extends Fragment {

    private Vector<RecipeModel> recipe;


    private void populateRecipe() {
        SQLite3DatabaseController databaseController = SQLite3DatabaseController.getInstance(requireContext());
        databaseController.open();
        recipe = RecipeDatabaseController.getRecipe(databaseController);
        databaseController.close();
    }

    @Override
    public void onCreate(Bundle savedInstanceState) {

        super.onCreate(savedInstanceState);


    }

    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState) {
        View rootView = inflater.inflate(R.layout.detail_fragment, container, false);

        populateRecipe();
        if (recipe != null) {
            TextView TitleTextView = rootView.findViewById(R.id.Title);
            TitleTextView.setText(recipe.firstElement().returnTitle());
            TextView IngredientsTextView = rootView.findViewById(R.id.Ingredients);
            IngredientsTextView.setText(recipe.firstElement().returnIngredients());
            TextView InstructionsTextView = rootView.findViewById(R.id.Instructions);
            InstructionsTextView.setText(recipe.firstElement().returnInstructions());
        }
        return rootView;
    }
}
