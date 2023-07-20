' Name:         Moobucks Solution
' Purpose:      Calculate and display the sales tax and total due.
' Programmer:   Trevin Wolfe on 6/18/20

Option Explicit On
Option Strict On
Option Infer Off

Public Class frmMain
    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        ' Closes the application

        Me.Close()

    End Sub

    Private Sub btnCalc_Click(sender As Object, e As EventArgs) Handles btnCalc.Click
        ' calculate and displays a tax amount and projected sales


        ' Declare variables and constants
        Const dblINCREASE As Double = 0.1
        Dim dblSaleAmount As Double
        Dim dblProjectedSale As Double
        Dim dblTax As Double

        ' Convert text to numbers
        Double.TryParse(txtCurrent.Text, dblSaleAmount)

        ' Calculate the sales tax
        dblTax = dblSaleAmount * dblINCREASE
        dblProjectedSale = dblSaleAmount + dblTax

        ' Display the tax and projected amounts
        lblIncrease.Text = dblTax.ToString("N2")
        lblProjected.Text = dblProjectedSale.ToString("N2")

    End Sub

    Private Sub txtCurrent_TextChanged(sender As Object, e As EventArgs) Handles txtCurrent.TextChanged
        ' Clears the sales tax and projected sales 

        lblIncrease.Text = String.Empty
        lblProjected.Text = String.Empty

    End Sub

    Private Sub txtCurrent_Enter(sender As Object, e As EventArgs) Handles txtCurrent.Enter
        ' Selects the text in the sale amount box 

        txtCurrent.SelectAll()

    End Sub

End Class
