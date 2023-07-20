' Name:         Multi Project
' Purpose:      Demonstrates single selection and multi-selection list boxes.
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

        lstNames.Items.Add("Debbie")
        lstNames.Items.Add("Bill")
        lstNames.Items.Add("Jim")
        lstNames.Items.Add("Ahmad")
        lstNames.Items.Add("Carol")
    End Sub
End Class
