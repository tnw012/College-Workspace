' Name:         History Project
' Purpose:      Display a student's grade.
' Programmer:   <your name> on <current date>

Option Explicit On
Option Strict On
Option Infer Off

Public Class frmMain
    ' Independent Sub procedures.


    Private Sub btnDisplay_Click(sender As Object, e As EventArgs) Handles btnDisplay.Click
        ' Calls independent Sub procedures to display a grade.


    End Sub

    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        Me.Close()
    End Sub

    Private Sub txtPoints_Enter(sender As Object, e As EventArgs) Handles txtPoints.Enter
        txtPoints.SelectAll()
    End Sub

    Private Sub ClearGrade(sender As Object, e As EventArgs) Handles txtPoints.TextChanged, radHis101.CheckedChanged, radHis201.CheckedChanged
        lblGrade.Text = String.Empty
    End Sub

    Private Sub txtPoints_KeyPress(sender As Object, e As KeyPressEventArgs) Handles txtPoints.KeyPress
        ' Accept only numbers and the Backspace key

        If (e.KeyChar < "0" OrElse e.KeyChar > "9") AndAlso e.KeyChar <> ControlChars.Back Then
            e.Handled = True
        End If
    End Sub
End Class
