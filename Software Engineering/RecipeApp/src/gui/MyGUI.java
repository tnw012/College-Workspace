package gui;

//Project Packages
import format.StringFormat;
import sql.*;

//Java Standard API
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.util.Objects;
import java.util.Vector;

public class MyGUI extends JFrame {
    final int BUTTON_LIST_SIZE = 50;

    private Container contentPane;
    private ImageIcon imageIcon;
    private JButton backButton;
    private JTextField searchField;
    private JLabel label;
    private JLabel imageLabel;
    private JLabel searchLabel;
    private JTextArea textBox;
    private JPanel listPanel;
    private JPanel textPanel;
    private JPanel bottomPanel;
    private JPanel topPanel;

    public MyGUI() {
        super("Recipe App");

        //Set up the search bar
        searchField = new JTextField(20);
        searchField.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                // TODO: handle search event
                if ((Objects.equals(searchField.getText(), "bass")) || (Objects.equals(searchField.getText(), "Bass"))) {
                    SQLite3 bassQuery = new SQLite3();
                    Vector<Recipe> bassRecipes = bassQuery.getRecipeByType("Bass");;
                    String bassString;

                    for(Recipe r: bassRecipes) {
                        bassString = StringFormat.formatToBlockText(r);
                        textBox.setText(bassString);
                    }
                }//END if bass handler

                if ((Objects.equals(searchField.getText(), "steak")) || (Objects.equals(searchField.getText(), "Steak"))) {
                    SQLite3 steakQuery = new SQLite3();
                    Vector<Recipe> steakRecipes = steakQuery.getRecipeByType("Steak");;
                    String steakString;

                    for(Recipe r: steakRecipes) {
                        steakString = StringFormat.formatToBlockText(r);
                        textBox.setText(steakString);
                    }
                }//END if steak handler
            }
        });

        //Set up the back button
        backButton = new JButton("HOME");
        backButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                // TODO: handle button click event
            }
        });

        //Init the JComponents of the class
        this.initImageLabel();
        this.initSearchLabel();
        this.initTextBox();
        this.initContentPane();
        this.initTopPanel();
        this.initBottomPanel();
        this.initTextPanel();
        this.initListPanel();
    }

    private void initContentPane(){
        // Add components to the JFrame
        this.contentPane = getContentPane();
        this.contentPane.setLayout(new BorderLayout());
    }

    private void initTextBox() {
        // Set up the text box
        this.textBox = new JTextArea(50, 75);
        this.textBox.setEditable(false);
    }

    private void initImageLabel() {
        // Set up image handling
        this.imageIcon = new ImageIcon("testimage.jpg");
        this.label = new JLabel(this.imageIcon);

        // Set up the image display area
        this.imageLabel = new JLabel();
        this.imageLabel.setPreferredSize(new Dimension(600, 200));
        this.imageLabel.setIcon(imageIcon);
    }

    private void initSearchLabel() {
        this.searchLabel = new JLabel("Search");
    }


    private void initListPanel() {
        this.listPanel = new JPanel(new GridLayout(50, 1));
        this.listPanel.setSize(10, 10);//initial value 450 for all
        getContentPane().add(this.listPanel, BorderLayout.CENTER);

        SQLite3 recipeQuery = new SQLite3();
        Vector<Recipe> allRecipes = recipeQuery.getAllRecipes();

        this.populateButtonList(allRecipes);

        this.bottomPanel.add(new JScrollPane(this.listPanel), BorderLayout.CENTER);
        this.bottomPanel.add(this.listPanel, BorderLayout.CENTER);
        this.contentPane.add(this.bottomPanel, BorderLayout.CENTER);

        setExtendedState(JFrame.MAXIMIZED_BOTH);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setVisible(true);
    }

    private void initTextPanel() {
        //Move textbox to separate panel
        this.textPanel = new JPanel();
        this.textPanel.setBorder(BorderFactory.createEmptyBorder(00, 0, 0, 0));
        this.textPanel.setPreferredSize(new Dimension(750, 725));

        //textPanel.add(textBox, BorderLayout.SOUTH);
        this.textPanel.add(new JScrollPane(this.textBox), BorderLayout.EAST);
        this.bottomPanel.add(this.textPanel, BorderLayout.EAST);

        this.contentPane.add(this.bottomPanel, BorderLayout.CENTER);

        // Add the image field to the bottom left area and the text field and search field panel to the bottom right area
        /*this.contentPane.add(new JScrollPane(this.imageLabel), BorderLayout.LINE_START);
        this.contentPane.add(this.bottomPanel, BorderLayout.CENTER);
        this.imageLabel.add(this.label);*/

        // Display the JFrame
        setExtendedState(JFrame.MAXIMIZED_BOTH);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setVisible(true);
    }

    private void initBottomPanel() {
        // Create a panel for the search field
        this.bottomPanel = new JPanel(new BorderLayout());
        this.bottomPanel.setBorder(BorderFactory.createEmptyBorder(0, 0, 0, 0));
    }

    private void initTopPanel() {
        // Create a panel for the back button
        this.topPanel = new JPanel(new FlowLayout(FlowLayout.LEFT));
        this.topPanel.add(this.backButton);

        this.topPanel.add(this.searchLabel);
        this.topPanel.add(this.searchField);
        this.topPanel.setPreferredSize(new Dimension(15, 30)); // smaller searchField
        this.topPanel.setMaximumSize(new Dimension(Integer.MAX_VALUE, 60));
        this.searchLabel.setPreferredSize(new Dimension(60, 20)); // size of label

        //searchLabel.setHorizontalAlignment(SwingConstants.LEFT);
        this.searchLabel.setVerticalAlignment(SwingConstants.CENTER);
        this.searchLabel.setLabelFor(this.searchField);

        this.contentPane.add(this.topPanel, BorderLayout.NORTH);
    }

    private void populateButtonList(Vector<Recipe> recipes) {
        Vector<JButton> buttonVec = new Vector<>();
        for (Recipe r: recipes) {
            JButton insertButton = new JButton();
            insertButton.setText(r.title);

            // adding the buttons so that it can be displayed
            buttonVec.add(insertButton);
            this.listPanel.add(insertButton);

            //Button Action Listener
            insertButton.addActionListener(new ActionListener() {
                public void actionPerformed(ActionEvent e) {
                    // TODO: handle button click event
                    if (e.getSource() == buttonVec.elementAt(0)) {
                        SQLite3 bassQuery = new SQLite3();
                        Vector<Recipe> bassRecipes = bassQuery.getRecipeByType("Bass");
                        String bassString;

                        for(Recipe r: bassRecipes) {
                            bassString = StringFormat.formatToBlockText(r);
                            textBox.setText(bassString);
                        }
                    }//END if bass handler

                    if (e.getSource() == buttonVec.elementAt(1)) {
                        SQLite3 salmonQuery = new SQLite3();
                        Vector<Recipe> salmonRecipes = salmonQuery.getRecipeByType("Salmon");
                        String salmonString;

                        for(Recipe r: salmonRecipes) {
                            salmonString = StringFormat.formatToBlockText(r);
                            textBox.setText(salmonString);
                        }
                    }//END if salmon handler

                    if (e.getSource() == buttonVec.elementAt(2)) {
                        SQLite3 steakQuery = new SQLite3();
                        Vector<Recipe> steakRecipes = steakQuery.getRecipeByType("Steak");
                        String steakString;

                        for(Recipe r: steakRecipes) {
                            steakString = StringFormat.formatToBlockText(r);
                            textBox.setText(steakString);
                        }
                    }//END if steak handler
                }
            });
        }
    }
}