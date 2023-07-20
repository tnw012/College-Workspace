' Name:         Professor Juarez Project
' Purpose:      Display the names and number of students earning a specific grade.
' Programmer:   <your name> on <current date>

Option Explicit On
Option Strict On
Option Infer Off

Public Class frmMain
   Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        Me.Close()
    End Sub

    Private Sub btnDisplay_Click(sender As Object, e As EventArgs) Handles btnDisplay.Click
        ' Display the names and number of students earning a specific grade.

        Dim strNames() As String = {"Helen", "Peter", "Yolanda", "Carl", "Jennifer", "Charles", "Addison", "Aiden", "Treyson", "Sydney", "Jacob", "Nancy", "George", "Ursula", "Jack"}
        Dim strGrades() As String = {"A", "B", "B", "A", "D", "F", "A", "B", "A", "B", "F", "C", "C", "B", "D"}

    End Sub
End Class
