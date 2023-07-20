' Name:             Einstein Project
' Purpose:          Show/hide an equation
' Programmer:       Trevin Wolfe on 06/2/2020

Public Class frmMain
    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        Me.Close()

    End Sub

    Private Sub btnShow_Click(sender As Object, e As EventArgs) Handles btnShow.Click
        ' Show Einstein's equation

        picEquation.Visible = True

    End Sub

    Private Sub btnHide_Click(sender As Object, e As EventArgs) Handles btnHide.Click
        ' Hide Einstein's equation

        picEquation.Visible = False

    End Sub
End Class
