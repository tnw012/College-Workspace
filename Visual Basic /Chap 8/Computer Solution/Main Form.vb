﻿' Name:         Computer Project
' Purpose:      Display the number of new computers sold and the number of refurbished computers sold.
' Programmer:   <your name> on <current date>

Option Explicit On
Option Strict On
Option Infer Off

Public Class frmMain
    Private Sub frmMain_Load(sender As Object, e As EventArgs) Handles Me.Load
        ' Fill the list box and select the first item.

        lstTypes.Items.Add("New")
        lstTypes.Items.Add("Refurbished")
        lstTypes.SelectedIndex = 0
    End Sub

    Private Sub btnAdd_Click(sender As Object, e As EventArgs) Handles btnAdd.Click
        ' Adds the amount sold to the appropriate total.


    End Sub

    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        Me.Close()
    End Sub

    Private Sub txtSold_Enter(sender As Object, e As EventArgs) Handles txtSold.Enter
        txtSold.SelectAll()
    End Sub

    Private Sub txtSold_KeyPress(sender As Object, e As KeyPressEventArgs) Handles txtSold.KeyPress
        ' Accept only numbers and the Backspace key.

        If (e.KeyChar < "0" OrElse e.KeyChar > "9") AndAlso e.KeyChar <> ControlChars.Back Then
            e.Handled = True
        End If
    End Sub

    Private Sub ClearLabels(sender As Object, e As EventArgs) Handles txtSold.TextChanged, lstTypes.SelectedIndexChanged
        lblNew.Text = String.Empty
        lblRefurbished.Text = String.Empty
    End Sub
End Class
