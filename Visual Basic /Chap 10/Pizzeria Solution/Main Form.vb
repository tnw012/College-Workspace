' Name:         Pizzeria Project
' Purpose:      Display the number of square pizza slices that can be cut from a square pizza.
' Programmer:   <your name> on <current date>

Option Explicit On
Option Strict On
Option Infer Off

Public Class frmMain

    Private Sub btnCalc_Click(sender As Object, e As EventArgs) Handles btnCalc.Click
        ' Displays the number of square pizza slices.

        ' Declare variables.


        ' Display number of slices.
        lblSlices.Text = dblSlices.ToString("N1")
    End Sub

    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        Me.Close()
    End Sub

    Private Sub txtEntireSide_Enter(sender As Object, e As EventArgs) Handles txtEntireSide.Enter
        txtEntireSide.SelectAll()
    End Sub

    Private Sub txtSliceSide_Enter(sender As Object, e As EventArgs) Handles txtSliceSide.Enter
        txtSliceSide.SelectAll()
    End Sub

    Private Sub CancelKeys(sender As Object, e As KeyPressEventArgs) Handles txtEntireSide.KeyPress, txtSliceSide.KeyPress
        ' Accept only numbers and the Backspace key.

        If (e.KeyChar < "0" OrElse e.KeyChar > "9") AndAlso e.KeyChar <> ControlChars.Back Then
            e.Handled = True
        End If
    End Sub

    Private Sub ClearSlices(sender As Object, e As EventArgs) Handles txtEntireSide.TextChanged, txtSliceSide.TextChanged
        lblSlices.Text = String.Empty
    End Sub
End Class
