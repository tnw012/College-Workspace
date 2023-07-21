package sql;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;

public class MySQL {
    public void queryDatabase() {
        String url = "jdbc:mysql://localhost:3306/Recipes";
        String username = "";
        String password = "";

        try{
            Connection connection = DriverManager.getConnection(url, username, password);

            Statement statement = connection.createStatement();

            ResultSet resultSet = statement.executeQuery("select * from recipes");

            while(resultSet.next()){
                System.out.println(resultSet.getInt(1) + " | " + resultSet.getString(2) + " | " +
                                   resultSet.getString(3) + " | " + resultSet.getString(4) + " | "
                                   + resultSet.getString(5));
            }

            connection.close();
        }
        catch (Exception e){
            System.out.println(e.getMessage());
        }
    }
}
