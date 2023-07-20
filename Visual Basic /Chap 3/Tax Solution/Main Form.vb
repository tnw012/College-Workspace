' Name:         Tax Solution
' Purpose:      Calculate and display the tax rate and taxes due.
' Programmer:   Trevin Wolfe on 6/18/2020

Option Explicit On
Option Strict On
Option Infer Off

Public Class frmMain
    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        ' Closes the application

        Me.Close()
    End Sub

    Private Sub btnCalc_Click(sender As Object, e As EventArgs) Handles btnCalc.Click
        ' Calculates the tax rate and displays the taxes due 

        ' Declare variables and constants
        Const decTAX_RATE As Decimal = 0.0135D
        Dim decPropertyValue As Decimal
        Dim decTaxesDue As Decimal

        ' Convert text to numbers
        Decimal.TryParse(txtValue.Text, decPropertyValue)

        ' Calculate property taxes
        decTaxesDue = decPropertyValue * decTAX_RATE

        ' Convert back to string for label
        lblTaxes.Text = decTaxesDue.ToString("C2")
    End Sub

    Private Sub txtValue_TextChanged(sender As Object, e As EventArgs) Handles txtValue.TextChanged
        ' Clear the property value text box

        lblTaxes.Text = String.Empty
    End Sub

    Private Sub txtValue_Enter(sender As Object, e As EventArgs) Handles txtValue.Enter
        ' Selects all of the text in the property value text box

        txtValue.SelectAll()
    End Sub

End Class
