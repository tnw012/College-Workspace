' Name:         States Capitals
' Purpose:      Select a state and display its capital.
' Programmer:   Trevin Wolfe on 6/26/2020

Option Explicit On
Option Strict On
Option Infer Off

Public Class frmMain
    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        Me.Close()
    End Sub

    Private Sub btnDisplay_Click(sender As Object, e As EventArgs) Handles btnDisplay.Click
        ' Displays a state capital depending on the state selected

        If radTexas.Checked = True Then
            lblCapital.Text = "Austin"
        ElseIf radOklahoma.Checked = True Then
            lblCapital.Text = "Oklahoma City"
        ElseIf radArizona.Checked = True Then
            lblCapital.Text = "Phoenix"
        ElseIf radColorado.Checked = True Then
            lblCapital.Text = "Denver"
        ElseIf radLouisana.Checked = True Then
            lblCapital.Text = "Baton Rouge"
        End If
    End Sub

    Private Sub radTexas_CheckedChanged(sender As Object, e As EventArgs) Handles radTexas.CheckedChanged
        ' Clears the Capital label box when a radio button selection is changed

        lblCapital.Text = String.Empty
    End Sub

    Private Sub radOklahoma_CheckedChanged(sender As Object, e As EventArgs) Handles radOklahoma.CheckedChanged
        ' Clears the Capital label box when a radio button selection is changed

        lblCapital.Text = String.Empty
    End Sub

    Private Sub radArizona_CheckedChanged(sender As Object, e As EventArgs) Handles radArizona.CheckedChanged
        ' Clears the Capital label box when a radio button selection is changed

        lblCapital.Text = String.Empty
    End Sub

    Private Sub radColorado_CheckedChanged(sender As Object, e As EventArgs) Handles radColorado.CheckedChanged
        ' Clears the Capital label box when a radio button selection is changed

        lblCapital.Text = String.Empty
    End Sub

    Private Sub radLouisana_CheckedChanged(sender As Object, e As EventArgs) Handles radLouisana.CheckedChanged
        ' Clears the Capital label box when a radio button selection is changed

        lblCapital.Text = String.Empty
    End Sub
End Class
