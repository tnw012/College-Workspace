' Name:         State Capital Project
' Purpose:      Select a state from a list and display its capital
' Programmer:   Trevin Wolfe on 7/3/2020

Option Explicit On
Option Strict On
Option Infer Off

Public Class frmMain
    Private Sub frmMain_Load(sender As Object, e As EventArgs) Handles Me.Load
        ' Select the first item in the lstStates control.

        lstStates.SelectedIndex = 0
        lblCapital.Text = String.Empty
    End Sub

    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        ' Closes the application

        Me.Close()
    End Sub

    Private Sub lstStates_SelectedIndexChanged(sender As Object, e As EventArgs) Handles lstStates.SelectedIndexChanged
        ' When the selection index is changed in the states list box the states capital is displayed
        ' in the Capital label

        Select Case lstStates.SelectedIndex
            Case 0
                lblCapital.Text = "Des Moines"
            Case 1
                lblCapital.Text = "Topeka"
            Case 2
                lblCapital.Text = "Santa Fe"
            Case 3
                lblCapital.Text = "Columbus"
            Case 4
                lblCapital.Text = "Richmond"
        End Select

    End Sub
End Class
