' Name:         Product Project
' Purpose:      Add items to a list box.
' Programmer:   <your name> on <current date>

Option Explicit On
Option Strict On
Option Infer Off

Public Class frmMain
    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        Me.Close()
    End Sub

    Private Sub txtId_Enter(sender As Object, e As EventArgs) Handles txtId.Enter
        txtId.SelectAll()
    End Sub

    Private Sub btnAdd_Click(sender As Object, e As EventArgs) Handles btnAdd.Click
        ' Add a product ID to a list box.

        Dim strId As String

        strId = txtId.Text.ToUpper.Trim
        If  Then
            lstIds.Items.Add(strId)
        Else
            MessageBox.Show("The ID must contain 5 characters.",
                            "Product ID", MessageBoxButtons.OK,
                            MessageBoxIcon.Information)
        End If
    End Sub
End Class
