' Name:         First Name Project
' Purpose:      Add the characters from a string to a list box.
' Programmer:   <your name> on <current date>

Option Explicit On
Option Strict On
Option Infer Off

Public Class frmMain
   Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        Me.Close()
    End Sub

    Private Sub btnList_Click(sender As Object, e As EventArgs) Handles btnList.Click
        ' Add each character in a string to a list box.

        Dim strName As String

        strName = txtName.Text.Trim
        lstCharacters.Items.Clear()


    End Sub

    Private Sub txtName_Enter(sender As Object, e As EventArgs) Handles txtName.Enter
        txtName.SelectAll()
    End Sub

    Private Sub txtName_TextChanged(sender As Object, e As EventArgs) Handles txtName.TextChanged
        lstCharacters.Items.Clear()
    End Sub
End Class
