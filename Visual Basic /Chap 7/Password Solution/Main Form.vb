' Name:         Password Project
' Purpose:      Create a password.
' Programmer:   <your name> on <current date>

Option Explicit On
Option Strict On
Option Infer Off

Public Class frmMain
    Private Sub btnCreate_Click(sender As Object, e As EventArgs) Handles btnCreate.Click
        ' Create a password.

        Dim strWords As String
        Dim strPassword As String
        Dim intSpaceIndex As Integer


        If  Then
            ' Assign the first character as the password.

            ' Search for the first space in the input.

            Do Until 
                ' Concatenate the character that follows 
                ' the space to the password.

                ' Search for the next space.

            Loop

            ' Insert the number after the first character. 

            ' Display the final password.

        End If
    End Sub

    Private Sub txtWords_Enter(sender As Object, e As EventArgs) Handles txtWords.Enter
        txtWords.SelectAll()
    End Sub

    Private Sub txtWords_TextChanged(sender As Object, e As EventArgs) Handles txtWords.TextChanged
        lblPassword.Text = String.Empty
    End Sub

    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        Me.Close()
    End Sub
End Class
