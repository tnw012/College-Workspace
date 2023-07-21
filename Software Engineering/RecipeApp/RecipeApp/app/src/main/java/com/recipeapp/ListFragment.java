package com.recipeapp;

import android.content.Context;
import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.LinearLayout;
import android.widget.TextView;

import androidx.appcompat.app.AppCompatActivity;
import androidx.fragment.app.Fragment;
import androidx.navigation.Navigation;

import com.recipeapp.controllers.RecipeDatabaseController;
import com.recipeapp.database.SQLite3DatabaseController;
import com.recipeapp.model.RecipeModel;

import java.util.List;
import java.util.Vector;

public class ListFragment extends Fragment {
    private Vector<RecipeModel> recipe;
    private List<RecipeModel> listRecipe;


    private void populateRecipe() {
        SQLite3DatabaseController databaseController = SQLite3DatabaseController.getInstance(requireContext());
        databaseController.open();
        listRecipe = RecipeDatabaseController.getTitle(databaseController);
        databaseController.close();
    }

    public View onCreateView(LayoutInflater inflater, ViewGroup container, Bundle savedInstanceState) {

        super.onCreate(savedInstanceState);

        populateRecipe();

        View rootView = inflater.inflate(R.layout.list_fragment, container, false);

        LinearLayout layout = (LinearLayout) rootView;

        for (RecipeModel recipe: listRecipe) {
            Button button = new Button(requireContext());
            LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(LinearLayout.LayoutParams.MATCH_PARENT, LinearLayout.LayoutParams.WRAP_CONTENT);
            layoutParams.setMargins(0, 0, 0, 10);   // 10px bottom margin
            button.setLayoutParams(layoutParams);
            // Display band's name on button
            button.setText(recipe.returnTitle());
            // Navigate to detail screen when clicked
            button.setOnClickListener(buttonView -> {
                Navigation.findNavController(buttonView).navigate(R.id.show_item_detail);
            });
            // Add button to the LinearLayout
            layout.addView(button);
        }
        return rootView;
    }
}
