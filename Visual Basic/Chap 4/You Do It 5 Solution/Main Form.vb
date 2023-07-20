' Name:         You Do It 5 Project
' Purpose:      Displays a shipping charge.
' Programmer:   <your name> on <currrent date>

Option Explicit On
Option Strict On
Option Infer Off

Public Class frmMain
    Private Sub btnDisplay_Click(sender As Object, e As EventArgs) Handles btnDisplay.Click
        ' Displays a shipping charge.

        Dim dblPurchase As Double
        Dim dblShip As Double

        Double.TryParse(txtPurchase.Text, dblPurchase)

        lblShipping.Text = dblShip.ToString("C2")
    End Sub

    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        Me.Close()
    End Sub

    Private Sub txtCode_Enter(sender As Object, e As EventArgs) Handles txtCode.Enter
        txtCode.SelectAll()
    End Sub

    Private Sub txtCode_TextChanged(sender As Object, e As EventArgs) Handles txtCode.TextChanged
        lblShipping.Text = String.Empty
    End Sub

    Private Sub txtPurchase_Enter(sender As Object, e As EventArgs) Handles txtPurchase.Enter
        txtPurchase.SelectAll()
    End Sub

    Private Sub txtPurchase_TextChanged(sender As Object, e As EventArgs) Handles txtPurchase.TextChanged
        lblShipping.Text = String.Empty
    End Sub
End Class
