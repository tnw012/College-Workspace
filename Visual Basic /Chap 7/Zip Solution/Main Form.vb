' Name:         Zip Project
' Purpose:      Validate a ZIP code.
' Programmer:   <your name> on <current date>

Option Explicit On
Option Strict On
Option Infer Off

Public Class frmMain
    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        Me.Close()
    End Sub

    Private Sub txtZip_Enter(sender As Object, e As EventArgs) Handles txtZip.Enter
        txtZip.SelectAll()
    End Sub

    Private Sub txtZip_TextChanged(sender As Object, e As EventArgs) Handles txtZip.TextChanged
        lblStatus.Text = String.Empty
    End Sub

    Private Sub txtZip_KeyPress(sender As Object, e As KeyPressEventArgs) Handles txtZip.KeyPress
        ' Allow only numbers and the Backspace key.

        If (e.KeyChar < "0" OrElse e.KeyChar > "9") AndAlso e.KeyChar <> ControlChars.Back Then
            e.Handled = True
        End If
    End Sub
End Class
