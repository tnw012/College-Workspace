' Name:         Word Guess Project
' Purpose:      Guess the word entered by player 1.
' Programmer:   <your name> on <current date>

Option Explicit On
Option Strict On
Option Infer Off

Public Class frmMain
    Private Sub btnNewWord_Click(sender As Object, e As EventArgs) Handles btnNewWord.Click
        ' Determine whether the word contains five letters.

        If  Then

        Else
            MessageBox.Show("Please enter 5 letters.", "Guess the Word Game",
                            MessageBoxButtons.OK, MessageBoxIcon.Information)
        End If
    End Sub

    Private Sub btnTryLetter_Click(sender As Object, e As EventArgs) Handles btnTryLetter.Click
        ' Determine whether player 2 has guessed the word.

        Dim strWord As String
        Dim strLetter As String
        Dim strResult As String

        strWord = txtWord.Text.Trim.ToUpper
        strLetter = txtLetter.Text.Trim.ToUpper
        strResult = lblResult.Text

        ' If Then
        ' Replace the hyphen(s) in strResult.

        ' Display the contents of strResult.

        ' Determine whether strResult contains any hyphens.

        ' Else
        MessageBox.Show("Try again!", "Guess the Word Game",
                 MessageBoxButtons.OK, MessageBoxIcon.Information)
        ' End If
        txtLetter.Text = String.Empty
    End Sub

    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        Me.Close()
    End Sub

    Private Sub txtWord_Enter(sender As Object, e As EventArgs) Handles txtWord.Enter
        txtWord.SelectAll()
    End Sub

    Private Sub txtLetter_Enter(sender As Object, e As EventArgs) Handles txtLetter.Enter
        txtLetter.SelectAll()
    End Sub
End Class
