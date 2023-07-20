' Name:         Letter Guess Project
' Purpose:      Guess a random letter.
' Programmer:   <your name> on <current date>

Option Explicit On
Option Strict On
Option Infer Off

Public Class frmMain
    ' Class-level variable.

    Private Sub btnNewGame_Click(sender As Object, e As EventArgs) Handles btnNewGame.Click
        ' Select a random letter and prepare for a new game.

        Const strALPHABET As String = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

        ' Generate a random number and use it to select a letter.

        ' Clear lblGuesses, enable btnCheck, send focus to txtGuess.

    End Sub

    Private Sub btnCheck_Click(sender As Object, e As EventArgs) Handles btnCheck.Click
        ' Determine whether the user guessed the random letter.

        Dim strGuess As String

        strGuess = txtGuess.Text.Trim.ToUpper
        ' Display guess in lblGuesses.

        'If  Then
        MessageBox.Show("You guessed the correct letter: " & strGuess,
                            "Guess a Letter", MessageBoxButtons.OK,
                            MessageBoxIcon.Information)

        'Else
        MessageBox.Show("Guess again!", "Guess a Letter",
                            MessageBoxButtons.OK, MessageBoxIcon.Information)
        'End If

    End Sub

    Private Sub txtGuess_Enter(sender As Object, e As EventArgs) Handles txtGuess.Enter
        txtGuess.SelectAll()
    End Sub

    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        Me.Close()
    End Sub
End Class
