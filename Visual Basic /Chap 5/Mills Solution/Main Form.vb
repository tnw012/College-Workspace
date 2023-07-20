' Name:         Mills Project
' Purpose:      Input different scores to track a skaters total score and average score
' Programmer:   Trevin Wolfe on 7/3/2020

Option Explicit On
Option Strict On
Option Infer Off

Public Class frmMain

    ' Variables and constants
    Private dblAverageScore As Double
    Private dblTotalScore As Double
    Private intNumScores As Integer

    Private Sub frmMain_Load(sender As Object, e As EventArgs) Handles Me.Load
        ' Fills the list box with scores from 0 to 10

        For intNum As Integer = 0 To 10 Step 1
            lstScore.Items.Add(intNum)
        Next intNum
        lstScore.SelectedItem = "0"

    End Sub

    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        ' Closes the application

        Me.Close()
    End Sub

    Private Sub btnRecord_Click(sender As Object, e As EventArgs) Handles btnRecord.Click
        ' Records the current selected score from the score list box

        ' Variables and Constants
        Dim intScore As Integer

        'Inputs the score from the list box to a variable
        Integer.TryParse(lstScore.SelectedItem.ToString, intScore)

        ' Calculates the total score and average score
        dblTotalScore += intScore
        intNumScores += 1
        dblAverageScore = dblTotalScore / intNumScores

        ' Displays the total score, number of scores, and average score
        lblTotalScore.Text = dblTotalScore.ToString("N0")
        lblNumScores.Text = intNumScores.ToString("N0")
        lblAverageScores.Text = dblAverageScore.ToString("N1")

    End Sub

    Private Sub btnNext_Click(sender As Object, e As EventArgs) Handles btnNext.Click
        ' Clears out all of the labels for the next skater

        lblTotalScore.Text = String.Empty
        lblNumScores.Text = String.Empty
        lblAverageScores.Text = String.Empty

        dblTotalScore = 0
        dblAverageScore = 0.0
        intNumScores = 0

    End Sub

    Private Sub lstScore_SelectedIndexChanged(sender As Object, e As EventArgs) Handles lstScore.SelectedIndexChanged
        ' Clears the label boxes after each score

        lblTotalScore.Text = String.Empty
        lblNumScores.Text = String.Empty
        lblAverageScores.Text = String.Empty
    End Sub
End Class
