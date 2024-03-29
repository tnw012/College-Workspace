﻿' Name:         Rearrange Project
' Purpose:      Change a name from first, space, and last to last, comma, space, and first.
' Programmer:   <your name> on <current date>

Option Explicit On
Option Strict On
Option Infer Off

Public Class frmMain
    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        Me.Close()
    End Sub

    Private Sub btnRearrange_Click(sender As Object, e As EventArgs) Handles btnRearrange.Click
        ' Rearranges and then displays a name.

        Dim strName As String
        Dim strFirstName As String
        Dim strLastName As String
        Dim intIndex As Integer

        strName = txtName.Text.Trim
        ' Search for the space in the name.

        If  Then
            ' Separate the first and last names.

            ' Display last name, comma, space, and first name.

        Else
            MessageBox.Show("The name does not contain a space.",
                            "Rearrange Name", MessageBoxButtons.OK,
                            MessageBoxIcon.Information)
        End If
    End Sub

    Private Sub txtName_Enter(sender As Object, e As EventArgs) Handles txtName.Enter
        txtName.SelectAll()
    End Sub

    Private Sub txtName_TextChanged(sender As Object, e As EventArgs) Handles txtName.TextChanged
        lblRearranged.Text = String.Empty
    End Sub
End Class
