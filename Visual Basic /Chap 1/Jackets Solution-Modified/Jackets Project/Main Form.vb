' Name:         Jackets Project
' Purpose:      Show different sizes of jackets
' Programmer:   Trevin Wolfe on 06/2/2020

Public Class frmMain
    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        ' Closes the application

        Me.Close()

    End Sub

    Private Sub btnChart_Click(sender As Object, e As EventArgs) Handles btnChart.Click
        ' Shows the size chart

        picChart.Visible = True

    End Sub

    Private Sub btnBlack_Click(sender As Object, e As EventArgs) Handles btnBlack.Click
        'Display the black jacket.

        picJacket.Image = My.Resources.BlackJacket

    End Sub

    Private Sub btnBlue_Click(sender As Object, e As EventArgs) Handles btnBlue.Click
        'Display the blue jacket.

        picJacket.Image = My.Resources.BlueJacket

    End Sub

    Private Sub btnBrown_Click(sender As Object, e As EventArgs) Handles btnBrown.Click
        'Display the brown jacket.

        picJacket.Image = My.Resources.BrownJacket

    End Sub

    Private Sub btnRed_Click(sender As Object, e As EventArgs) Handles btnRed.Click
        'Display the red jacket.

        picJacket.Image = My.Resources.RedJacket

    End Sub
End Class
