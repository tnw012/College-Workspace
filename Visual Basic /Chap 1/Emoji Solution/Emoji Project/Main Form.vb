' Name:         Emoji Project
' Purpose:      Display a message corresponding to an emoji.
' Programmer:   Trevin Wolfe on 06/3/2020

Public Class frmMain
    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        ' Closes the application. 

        Me.Close()

    End Sub

    Private Sub picCrying_Click(sender As Object, e As EventArgs) Handles picCrying.Click
        ' Displays the message I am crying.

        lblMessage.Text = "I am crying"

    End Sub

    Private Sub picHappy_Click(sender As Object, e As EventArgs) Handles picHappy.Click
        ' Displays the message I am happy.

        lblMessage.Text = "I am happy"

    End Sub

    Private Sub picLove_Click(sender As Object, e As EventArgs) Handles picLove.Click
        ' Displays the message I am in love.

        lblMessage.Text = "I am in love"

    End Sub

    Private Sub picSad_Click(sender As Object, e As EventArgs) Handles picSad.Click
        ' Displays the message I am sad.

        lblMessage.Text = "I am sad"

    End Sub

    Private Sub picTired_Click(sender As Object, e As EventArgs) Handles picTired.Click
        ' Displays the message I am tired.

        lblMessage.Text = "I am tired"

    End Sub
End Class
