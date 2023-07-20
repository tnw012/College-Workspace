' Name:         Florist Project-Modified
' Purpose:      Display Store Information
' Programmer:   Trevin Wolfe on 06/2/2020

Public Class frmMain
    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        ' Closes the application

        Me.Close()

    End Sub

    Private Sub btnShow_Click(sender As Object, e As EventArgs) Handles btnShow.Click
        '  Show store hours

        picHours.Visible = True

    End Sub

    Private Sub btnHide_Click(sender As Object, e As EventArgs) Handles btnHide.Click
        ' Hide store hours

        picHours.Visible = False

    End Sub
End Class
