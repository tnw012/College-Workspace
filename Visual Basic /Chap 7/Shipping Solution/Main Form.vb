' Name:         Shipping Project
' Purpose:      Selects the delivery method in a list box.
' Programmer:   <your name> on <current date>

Option Explicit On
Option Strict On
Option Infer Off

Public Class frmMain
    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        Me.Close()
    End Sub

    Private Sub frmMain_Load(sender As Object, e As EventArgs) Handles Me.Load
        ' Fills the list box with values.

        lstDelivery.Items.Add("Mail - Standard")
        lstDelivery.Items.Add("Mail - Priority")
        lstDelivery.Items.Add("FedEx - Standard")
        lstDelivery.Items.Add("FedEx - Overnight")
        lstDelivery.Items.Add("UPS")
    End Sub

    Private Sub txtCode_Enter(sender As Object, e As EventArgs) Handles txtCode.Enter
        txtCode.SelectAll()
    End Sub

    Private Sub txtCode_TextChanged(sender As Object, e As EventArgs) Handles txtCode.TextChanged
        ' Clears the list box selection.

        lstDelivery.SelectedIndex = -1
    End Sub
End Class
