' Name:         Validate ISBN Project
' Purpose:      Validate a 13-character ISBN.
' Programmer:   <your name> on <current date>

Option Explicit On
Option Strict On
Option Infer Off

Public Class frmMain
    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        Me.Close()
    End Sub

    Private Sub txtIsbn_Enter(sender As Object, e As EventArgs) Handles txtIsbn.Enter
        txtIsbn.SelectAll()
    End Sub

    Private Sub txtIsbn_TextChanged(sender As Object, e As EventArgs) Handles txtIsbn.TextChanged
        lblStatus.Text = String.Empty
    End Sub

    Private Sub txtIsbn_KeyPress(sender As Object, e As KeyPressEventArgs) Handles txtIsbn.KeyPress
        ' Allow only numbers and the Backspace key.

        If (e.KeyChar < "0" OrElse e.KeyChar > "9") AndAlso e.KeyChar <> ControlChars.Back Then
            e.Handled = True
        End If
    End Sub

End Class
