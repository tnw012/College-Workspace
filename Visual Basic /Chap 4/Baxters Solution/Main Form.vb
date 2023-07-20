' Name:         Baxters Solution
' Purpose:      Enter a total number of drills and display total cost 
' Programmer:   Trevin Wolfe on 6/27/2020

Option Explicit On
Option Strict On
Option Infer Off

Public Class frmMain
    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        ' Closes the application

        Me.Close()
    End Sub

    Private Sub btnCalc_Click(sender As Object, e As EventArgs) Handles btnCalc.Click
        ' Displays how much a certain amount of drills cost. An employee discount and 
        ' and coupon for shipping can be applied

        ' Declare variables and constants
        Const decEMPLOYEE_DISCOUNT As Decimal = 0.1D
        Const decDRILL_COST18V As Decimal = 25.99D
        Const decSHIPPING_FEE As Decimal = 9.99D
        Const decCOUPON_FEE As Decimal = 4.99D
        Dim intOrdered As Integer
        Dim decDiscount As Decimal
        Dim decTotalCost As Decimal

        ' Convert string in ordered text box to a number variable
        Integer.TryParse(txtOrdered.Text, intOrdered)

        ' Checks and calculates how much a certain amount of drills cost with 
        ' Employee discounts, coupons, or both
        If chkDiscount.Checked = True AndAlso chkCoupon.Checked = True Then
            decTotalCost = decDRILL_COST18V * intOrdered
            decDiscount = decTotalCost * decEMPLOYEE_DISCOUNT
            decTotalCost = (decTotalCost - decDiscount) + decCOUPON_FEE
        ElseIf chkCoupon.Checked = True Then
            decTotalCost = (decDRILL_COST18V * intOrdered) + decCOUPON_FEE
        ElseIf chkDiscount.Checked = True Then
            decTotalCost = decDRILL_COST18V * intOrdered
            decDiscount = decTotalCost * decEMPLOYEE_DISCOUNT
            decTotalCost = (decTotalCost - decDiscount) + decSHIPPING_FEE
        Else
            decTotalCost = (decDRILL_COST18V * intOrdered) + decSHIPPING_FEE
        End If

        ' Converts the total cost back to a string
        lblTotalCost.Text = decTotalCost.ToString("C2")

    End Sub

    Private Sub chkDiscount_CheckedChanged(sender As Object, e As EventArgs) Handles chkDiscount.CheckedChanged
        ' Clears the Total due text box when a check box selection is changed

        lblTotalCost.Text = String.Empty
    End Sub

    Private Sub chkShipping_CheckedChanged(sender As Object, e As EventArgs) Handles chkCoupon.CheckedChanged
        ' Clears the Total due text box when a check box selection is changed

        lblTotalCost.Text = String.Empty
    End Sub

    Private Sub txtOrdered_Enter(sender As Object, e As EventArgs) Handles txtOrdered.Enter
        ' Selects all of the text inside the text box

        txtOrdered.SelectAll()
    End Sub

    Private Sub txtOrdered_TextChanged(sender As Object, e As EventArgs) Handles txtOrdered.TextChanged
        ' Clears out the total cost label when the text in the ordered text box is changed

        lblTotalCost.Text = String.Empty
    End Sub

    Private Sub txtOrdered_KeyPress(sender As Object, e As KeyPressEventArgs) Handles txtOrdered.KeyPress
        ' Text box only allows numbers and a backspace

        If (e.KeyChar < "0" OrElse e.KeyChar > "9") AndAlso e.KeyChar <> ControlChars.Back Then
            e.Handled = True
        End If
    End Sub
End Class
