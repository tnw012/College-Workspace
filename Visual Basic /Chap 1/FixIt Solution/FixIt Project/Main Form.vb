' Name:         FixIt Project
' Purpose:      Display the picture and price of a parrot.
' Programmer:   <your name> on <current date>

Public Class frmMain
    Private Sub btnExit_MouseClick(sender As Object, e As MouseEventArgs) Handles btnExit.MouseClick
        Me.Close()

    End Sub

    Private Sub btnShow_Click(sender As Object, e As EventArgs) Handles btnShow.Click
        ' Display the price.

        lblPrice.Visible = False
    End Sub
End Class
