' Name:         Orders Project
' Purpose:      Calculate and display the total numbered ordered.
' Programmer:   Trevin Wolfe on 6/20/20

Option Explicit On
Option Strict On
Option Infer Off

Public Class frmMain
    Private intTotalOrdered As Integer

    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        ' closes the application

        Me.Close()
    End Sub

    Private Sub btnAdd_Click(sender As Object, e As EventArgs) Handles btnAdd.Click
        ' Add orders to the total number of orders

        ' Declare variables and constants
        Dim intAddOrder As Integer

        ' convert text into numbers
        Integer.TryParse(txtNumOrdered.Text, intAddOrder)

        ' Calculate the total ordered
        intTotalOrdered = intTotalOrdered + intAddOrder

        ' Convert numbers to text in the lable
        lblTotal.Text = intTotalOrdered.ToString("N0")
    End Sub

    Private Sub btnSubtract_Click(sender As Object, e As EventArgs) Handles btnSubtract.Click
        ' subtract orders from the total number of ordered

        ' Declare variables and constants
        Dim intSubractOrder As Integer

        ' convert text into numbers
        Integer.TryParse(txtNumOrdered.Text, intSubractOrder)

        ' Calculate the total ordered
        intTotalOrdered = intTotalOrdered - intSubractOrder

        ' Convert numbers to text in the total ordered lable
        lblTotal.Text = intTotalOrdered.ToString("N0")
    End Sub

    Private Sub txtNumOrdered_Enter(sender As Object, e As EventArgs) Handles txtNumOrdered.Enter
        txtNumOrdered.SelectAll()
    End Sub

    Private Sub txtNumOrdered_TextChanged(sender As Object, e As EventArgs) Handles txtNumOrdered.TextChanged
        ' Clears the label text box

        lblTotal.Text = String.Empty
    End Sub
End Class
