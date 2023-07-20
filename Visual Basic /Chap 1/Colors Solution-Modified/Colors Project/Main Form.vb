' Name:         Colors Project
' Purpose:      Display the Spanish names for the colors.
' Programmer:   Trevn Wolfe on 06/3/2020

Public Class frmMain
    Private Sub btnBlue_Click(sender As Object, e As EventArgs) Handles btnBlue.Click
        ' Display the Spanish word for blue.

        lblSpanish.Text = "Azul"

        lblSpanish.BackColor = Color.Blue

    End Sub

    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        ' Closes the application.

        Me.Close()

    End Sub

    Private Sub btnGreen_Click(sender As Object, e As EventArgs) Handles btnGreen.Click
        ' Display the Spanish word for green.

        lblSpanish.Text = "Verde"

        lblSpanish.BackColor = Color.Green

    End Sub

    Private Sub btnRed_Click(sender As Object, e As EventArgs) Handles btnRed.Click
        ' Display the Spanish word for red.

        lblSpanish.Text = "Rojo"

        lblSpanish.BackColor = Color.Red

    End Sub
End Class
