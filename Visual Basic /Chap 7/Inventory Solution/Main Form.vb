' Name:         Inventory Project
' Purpose:      Add items to a list box.
' Programmer:   <your name> on <current date>

Option Explicit On
Option Strict On
Option Infer Off

Public Class frmMain
    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        Me.Close()
    End Sub

    Private Sub txtNumber_Enter(sender As Object, e As EventArgs) Handles txtNumber.Enter
        txtNumber.SelectAll()
    End Sub

    Private Sub btnAdd_Click(sender As Object, e As EventArgs) Handles btnAdd.Click
        ' Add an inventory number to a list box.

        Dim strNumber As String

        strNumber = txtNumber.Text.ToUpper.Trim
        If  Then
            lstNumbers.Items.Add(strNumber)
        Else
            MessageBox.Show("Incorrect inventory number.",
                            "Inventory", MessageBoxButtons.OK,
                            MessageBoxIcon.Information)
        End If
    End Sub
End Class
