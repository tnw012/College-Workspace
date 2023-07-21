package com.recipeapp.database;

import android.content.Context;
import android.content.res.Resources;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;

import com.recipeapp.DetailFragment;
import com.recipeapp.R;
import com.recipeapp.controllers.RecipeDatabaseController;
import com.recipeapp.model.RecipeModel;

import java.util.ArrayList;
import java.util.List;

public class SQLite3DatabaseController extends SQLiteOpenHelper {

    // this class abstract away the common function on the database and provides an interface
    // for the models to implement.
    public static abstract class DatabaseController {
        public DatabaseController() {}

        public abstract void onCreate(SQLiteDatabase db);
        public abstract void onUpgrade(SQLiteDatabase db, int oldVersion, int newVersion);
    }

    //CONSTANTS
    private static final String DATABASE_NAME = "recipes.db";
    private static final int DB_VERSION = 1;
    private final DatabaseController[] databaseControllers = new DatabaseController[]{
            new RecipeDatabaseController()
    };

    //ATTRIBUTES
    private SQLiteDatabase dbConnection;
    private int numOfConnections;
    private static SQLite3DatabaseController instance;

    public synchronized static SQLite3DatabaseController getInstance(Context context) {
        if(instance == null) {
            instance = new SQLite3DatabaseController(context.getApplicationContext());
        }

        return instance;
    }

    //Constructor
    public SQLite3DatabaseController(Context context) {
        super(context, DATABASE_NAME, null, DB_VERSION);
        this.dbConnection = null;
        this.numOfConnections = 0;
        instance = null;
    }

    @Override
    public synchronized void close() {
        if(dbConnection == null || this.numOfConnections == 0) {
            throw new IllegalStateException("Database already closed or was never open.");
        }
        this.numOfConnections--;

        if(this.numOfConnections != 0) {
            return;
        }
        this.dbConnection = null;
        super.close();
    }

    // do not manually call this method
    @Override
    public synchronized SQLiteDatabase getReadableDatabase() { return this.getWritableDatabase(); }

    // do not manually call this method
    @Override
    public synchronized SQLiteDatabase getWritableDatabase() {
        if(this.dbConnection == null) {
            this.dbConnection = super.getWritableDatabase();
        }

        this.numOfConnections++;
        return dbConnection;
    }

    // call this method to open the database initially
    public synchronized void open() { this.getWritableDatabase(); }

    // call this method to get a database instance.
    public synchronized SQLiteDatabase getDatabase() {
        if(this.dbConnection == null) {
            throw new IllegalStateException("Database has not been opened yet!");
        }

        return this.dbConnection;
    }

    //Creates a table for each model if they do not exist.
    @Override
    public synchronized void onCreate(SQLiteDatabase db) {
        for (DatabaseController controller: databaseControllers) {
            controller.onCreate(db);
        }
    }

    //Updates each model table in database.
    @Override
    public void onUpgrade(SQLiteDatabase db, int oldVersion, int newVersion) {
        for (DatabaseController model: databaseControllers) {
            model.onUpgrade(db, oldVersion, newVersion);
        }
    }
}
