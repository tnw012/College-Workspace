' Name:         Hales Department Store
' Purpose:      Select a comforter and display the cost of item and shipping if required
' Programmer:   Trevin Wolfe on 6/26/2020

Option Explicit On
Option Strict On
Option Infer Off

Public Class frmMain
    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        ' Closes the application

        Me.Close()
    End Sub

    Private Sub btnDisplay_Click(sender As Object, e As EventArgs) Handles btnDisplay.Click
        ' Charges the appropiate cost for a comforter and adds a shipping cost if required

        ' Declare variables and constants
        Const decTWIN_COST As Decimal = 39.99D
        Const decFULL_COST As Decimal = 49.99D
        Const decQUEEN_COST As Decimal = 49.99D
        Const decKING_COST As Decimal = 69.99D
        Const decSHIPPING_COST As Decimal = 5D

        Dim decTotalCost As Decimal

        ' Selects the right price depending on which radio button is pushed
        Select Case True
            Case radTwin.Checked
                decTotalCost += decTWIN_COST
            Case radFull.Checked
                decTotalCost += decFULL_COST
            Case radQueen.Checked
                decTotalCost += decQUEEN_COST
            Case radKing.Checked
                decTotalCost += decKING_COST
        End Select

        ' Determines if the shipping fee is added to the cost of the comforter
        If chkShipping.Checked = True Then
            decTotalCost += decSHIPPING_COST
        End If

        lblTotalCost.Text = decTotalCost.ToString("C2")
    End Sub

    Private Sub radTwin_CheckedChanged(sender As Object, e As EventArgs) Handles radTwin.CheckedChanged
        ' Clears the Cost label box when any radio button or check box is selected

        lblTotalCost.Text = String.Empty
    End Sub

    Private Sub radFull_CheckedChanged(sender As Object, e As EventArgs) Handles radFull.CheckedChanged
        ' Clears the Cost label box when any radio button or check box is selected

        lblTotalCost.Text = String.Empty
    End Sub

    Private Sub radQueen_CheckedChanged(sender As Object, e As EventArgs) Handles radQueen.CheckedChanged
        ' Clears the Cost label box when any radio button or check box is selected

        lblTotalCost.Text = String.Empty
    End Sub

    Private Sub radKing_CheckedChanged(sender As Object, e As EventArgs) Handles radKing.CheckedChanged
        ' Clears the Cost label box when any radio button or check box is selected

        lblTotalCost.Text = String.Empty
    End Sub

    Private Sub chkShipping_CheckedChanged(sender As Object, e As EventArgs) Handles chkShipping.CheckedChanged
        ' Clears the Cost label box when any radio button or check box is selected

        lblTotalCost.Text = String.Empty
    End Sub
End Class
