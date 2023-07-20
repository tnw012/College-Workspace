' Name:         Tip Project
' Purpose:      Calculate and display a server's tip.
' Programmer:   Trevin Wolfe on 6/19/20

Option Explicit On
Option Strict On
Option Infer Off

Public Class frmMain
    Private Sub btnCalc_Click(sender As Object, e As EventArgs) Handles btnCalc.Click
        ' Calculates and displays a server's tip.

        ' Declare Decimal variables.
        Dim decBill As Decimal
        Dim decPercent As Decimal
        Dim decTip As Decimal

        ' Convert txtBill.Text and txtPercentage.Text to numbers.
        Decimal.TryParse(txtBill.Text, decBill)
        Decimal.TryParse(txtPercentage.Text, decPercent)

        ' Calculate the tip.
        decTip = decBill * decPercent / 100

        ' Display the tip with a dollar sign and two decimal places.
        lblTip.Text = decTip.ToString("C2")

    End Sub

    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        Me.Close()

    End Sub

    Private Sub txtBill_TextChanged(sender As Object, e As EventArgs) Handles txtBill.TextChanged
        ' Clears the bill text box

        lblTip.Text = String.Empty

    End Sub

    Private Sub txtPercentage_TextChanged(sender As Object, e As EventArgs) Handles txtPercentage.TextChanged
        ' Clears the percentage text box

        lblTip.Text = String.Empty

    End Sub

    Private Sub txtBill_Enter(sender As Object, e As EventArgs) Handles txtBill.Enter
        ' Selects the text in the text box

        txtBill.SelectAll()

    End Sub

    Private Sub txtPercentage_Enter(sender As Object, e As EventArgs) Handles txtPercentage.Enter
        ' Selects the text in the text box

        txtPercentage.SelectAll()

    End Sub
End Class
