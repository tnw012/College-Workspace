' Name:         Potter Project
' Purpose:      Display a list of names that received a particular grade 
'               selected from a Grades list list
' Programmer:   Trevin Wolfe on 7/23/20

Option Explicit On
Option Strict On
Option Infer Off

Public Class frmMain

    ' Class level constants and variables
    Private Const intARRAY_SIZE As Integer = 15
    Private strNames(intARRAY_SIZE) As String
    Private strGrade(intARRAY_SIZE) As String

    Private Sub ReadFile()
        ' Fill both arrays with values

        ' Declare StreamReader variable.
        Dim inFile As IO.StreamReader

        ' Fill array with values from a sequential access file.
        If IO.File.Exists("NamesAndGrades.txt") Then
            inFile = IO.File.OpenText("NamesAndGrades.txt")
            For intIndex As Integer = 0 To intARRAY_SIZE
                strNames(intIndex) = inFile.ReadLine
                strGrade(intIndex) = inFile.ReadLine
            Next intIndex
            inFile.Close()
        Else
            MessageBox.Show("Cannot find the file.", "NamesAndGrades",
                            MessageBoxButtons.OK, MessageBoxIcon.Information)
        End If
    End Sub

    Private Sub AddNamesToList()
        ' Adds the names of students that match the grade selected in the grades list.

        ' Constants and variables.
        Dim intStudents As Integer

        ' Selects and displays the names in the Names list.
        lstNames.Items.Clear()
        For intIndex As Integer = 0 To strGrade.GetUpperBound(0)
            If strGrade(intIndex) = lstGrades.SelectedItem.ToString Then
                lstNames.Items.Add(strNames(intIndex))
                intStudents += 1
            End If
        Next intIndex

        ' Displays the number of students selected
        lblNumber.Text = intStudents.ToString
    End Sub

    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        ' Closes the application

        Me.Close()
    End Sub

    Private Sub frmMain_Load(sender As Object, e As EventArgs) Handles Me.Load
        ' Sets the selected index of the grade list to zero

        lstGrades.SelectedIndex = 0
    End Sub

    Private Sub lstGrades_SelectedValueChanged(sender As Object, e As EventArgs) Handles lstGrades.SelectedValueChanged
        ' Clears the Names list and the number of students label

        lstNames.Items.Clear()
        lblNumber.Text = String.Empty
    End Sub

    Private Sub btnDisplay_Click(sender As Object, e As EventArgs) Handles btnDisplay.Click
        ' Read a list of names and grades into a set of parallel arrays, and then select 
        ' which students received the grade selected in the Grade list and display
        ' the names in the Names list.

        ReadFile()

        AddNamesToList()
    End Sub
End Class
