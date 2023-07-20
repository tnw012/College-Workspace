' Name:         FixIt Project
' Purpose:      Displays area and total cost.
' Programmer:   <your name> on <current date>

Option Explicit On
Option Strict On
Option Infer Off

Public Class frmMain
    Private Sub btnCalc_Click(sender As Object, e As EventArgs) Handles btnCalc.Click
        ' Calculates and displays area and total cost.

        Const dblSQ_FT_PRICE As Double = 5.99
        Dim dblLength As Double
        Dim dblWidth As Double
        Dim dblArea As Double

        dblLength = txtLength.Text
        dblWidth = txtWidth.Text

        dblArea = dblLength * dblWidth
        dblTotalCost = dblArea + dblSQ_FT_PRICE
        lblArea.Text = dblArea.("N2")
        lblTotal.Text = dblTotalCost("C2")
    End Sub

    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        Me.Close()
    End Sub

    Private Sub txtLength_Enter(sender As Object, e As EventArgs) Handles txtLength.Enter
        ' Select existing text.

        txtLength.SelectedText
    End Sub

    Private Sub txtLength_TextChanged(sender As Object, e As EventArgs) Handles txtLength.TextChanged
        ' Clear calculated results.

        lblArea.Text = Empty
        lblTotal.Text = Empty
    End Sub

    Private Sub txtWidth_Enter(sender As Object, e As EventArgs) Handles txtWidth.Enter
        ' Select existing text.

        txtWidth.SelectAll()
    End Sub

    Private Sub txtWidth_TextChanged(sender As Object, e As EventArgs) Handles txtWidth.TextChanged
        ' Clear calculated results.

        lblArea.Text = String.Empty
        lblTotal.Text = String.Empty
    End Sub
End Class
