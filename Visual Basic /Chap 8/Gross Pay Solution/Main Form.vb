' Name:         Gross Pay Project
' Purpose:      Displays an employee's gross pay.
' Programmer:   <your name> on <current date>

Option Explicit On
Option Strict On
Option Infer Off

Public Class frmMain

    Private Sub frmMain_Load(sender As Object, e As EventArgs) Handles Me.Load
        ' Selects the first pay code in the list box.

        lstCodes.SelectedIndex = 0
    End Sub

    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        Me.Close()
    End Sub

    Private Sub ClearGross(sender As Object, e As EventArgs) Handles lstCodes.SelectedIndexChanged, txtHours.TextChanged
        lblGross.Text = String.Empty
    End Sub

    Private Sub txtHours_Enter(sender As Object, e As EventArgs) Handles txtHours.Enter
        txtHours.SelectAll()
    End Sub

    Private Sub txtHours_KeyPress(sender As Object, e As KeyPressEventArgs) Handles txtHours.KeyPress
        ' Accept only numbers, the period, and the Backspace key.

        If (e.KeyChar < "0" OrElse e.KeyChar > "9") AndAlso e.KeyChar <> "." AndAlso e.KeyChar <> ControlChars.Back Then
            e.Handled = True
        End If
    End Sub
End Class
