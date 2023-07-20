' Name:         Franklin Project
' Purpose:      Displays the number of square feet of material and the cost of a deck.
' Programmer:   <your name> on <current date>

Option Explicit On
Option Strict On
Option Infer Off

Public Class frmMain
    Private Sub btnCalc_Click(sender As Object, e As EventArgs) Handles btnCalc.Click
        ' Displays square feet and deck cost.

        ' Instantiate a Rectangle object.
        Dim deck As New Rectangle

        ' Declare variables.
        Dim dblSqFtPrice As Double
        Dim intSqFt As Integer
        Dim dblCost As Double

        ' Assign length and width to the object's Public properties.
        Integer.TryParse(lstLength.SelectedItem.ToString, deck.Length)
        Integer.TryParse(lstWidth.SelectedItem.ToString, deck.Width)

        ' Assign price to variable.
        Double.TryParse(lstPrice.SelectedItem.ToString, dblSqFtPrice)

        ' Calculate area in square feet.
        intSqFt = deck.GetArea

        ' Calculate cost of deck.
        dblCost = intSqFt * dblSqFtPrice

        ' Display output.
        lblSqFt.Text = intSqFt.ToString
        lblCost.Text = dblCost.ToString("C2")
    End Sub

    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        Me.Close()
    End Sub

    Private Sub frmMain_Load(sender As Object, e As EventArgs) Handles Me.Load
        ' Fills the list boxes and then selects a default item.

        For intNums As Integer = 12 To 36 Step 2
            lstLength.Items.Add(intNums.ToString)
            lstWidth.Items.Add(intNums.ToString)
        Next intNums

        For dblPrices As Double = 5 To 25 Step 0.5
            lstPrice.Items.Add(dblPrices.ToString("N2").PadLeft(5))
        Next dblPrices

        lstLength.SelectedIndex = 0
        lstWidth.SelectedIndex = 0
        lstPrice.SelectedItem = "10.00"
    End Sub

    Private Sub ClearOutput(sender As Object, e As EventArgs) Handles lstLength.SelectedIndexChanged, lstWidth.SelectedIndexChanged, lstPrice.SelectedIndexChanged
        lblSqFt.Text = String.Empty
        lblCost.Text = String.Empty
    End Sub
End Class
