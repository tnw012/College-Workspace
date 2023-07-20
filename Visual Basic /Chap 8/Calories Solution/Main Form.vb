' Name:         Calories Project
' Purpose:      Display calorie information.
' Programmer:   <your name> on <current date>

Option Explicit On
Option Strict On
Option Infer Off

Public Class frmMain
   Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        Me.Close()
    End Sub

    Private Sub btnDisplay_Click(sender As Object, e As EventArgs) Handles btnDisplay.Click
        ' Display calorie information.

        Dim intCalories() As Integer = {2250, 1920, 2125, 2505, 2010, 1950, 1825,
                                        2025, 2000, 1820, 1990, 1950, 1875, 1750}

    End Sub
End Class
