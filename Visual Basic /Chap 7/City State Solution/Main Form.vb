' Name:         City State Project
' Purpose:      Displays the index of the comma in a string.
' Programmer:   <your name> on <current date>

Option Explicit On
Option Strict On
Option Infer Off

Public Class frmMain
    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        Me.Close()
    End Sub

    Private Sub txtCityState_Enter(sender As Object, e As EventArgs) Handles txtCityState.Enter
        txtCityState.SelectAll()
    End Sub

    Private Sub txtCityState_TextChanged(sender As Object, e As EventArgs) Handles txtCityState.TextChanged
        lblIndex.Text = String.Empty
    End Sub

    Private Sub btnLocate_Click(sender As Object, e As EventArgs) Handles btnLocate.Click
        ' Displays the index of the comma contained in a string.

        Dim strCityState As String
        Dim intIndex As Integer

        strCityState = txtCityState.Text
        ' Determine the comma's index.

        lblIndex.Text = intIndex.ToString
    End Sub

End Class
