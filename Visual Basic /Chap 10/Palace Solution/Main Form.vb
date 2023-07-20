' Name:         Palace Project
' Purpose:      Displays the number of square yards needed to carpet a rectangular floor.
' Programmer:   <your name> on <current date>

Option Explicit On
Option Strict On
Option Infer Off

Public Class frmMain

    Private Sub btnCalc_Click(sender As Object, e As EventArgs) Handles btnCalc.Click
        ' Calculates the number of square yards needed to carpet a rectangular floor.
    End Sub

    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        Me.Close()
    End Sub

    Private Sub CancelKeys(sender As Object, e As KeyPressEventArgs) Handles txtLength.KeyPress, txtWidth.KeyPress
        ' Accept only numbers and the Backspace key.

        If (e.KeyChar < "0" OrElse e.KeyChar > "9") AndAlso e.KeyChar <> "." AndAlso e.KeyChar <> ControlChars.Back Then
            e.Handled = True
        End If
    End Sub

    Private Sub txtLength_Enter(sender As Object, e As EventArgs) Handles txtLength.Enter
        txtLength.SelectAll()
    End Sub

    Private Sub ClearOutput(sender As Object, e As EventArgs) Handles txtLength.TextChanged, txtWidth.TextChanged
        lblSqYards.Text = String.Empty
    End Sub

    Private Sub txtWidth_Enter(sender As Object, e As EventArgs) Handles txtWidth.Enter
        txtWidth.SelectAll()
    End Sub
End Class
