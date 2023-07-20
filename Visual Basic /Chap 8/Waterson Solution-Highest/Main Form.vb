' Name:         Waterson Project
' Purpose:      Displays the highest stock price and the number of days at that price.
' Programmer:   <your name> on <current date>

Option Explicit On
Option Strict On
Option Infer Off

Public Class frmMain

    ' Class-level array.
    Private dblPrices() As Double = {85.7, 89.5, 91, 99, 97.5,
                                     96, 96.8, 96.8, 96, 99}

    Private Sub frmMain_Load(sender As Object, e As EventArgs) Handles Me.Load
        ' Fills list box with prices.

        For Each dblStockPrice As Double In dblPrices
            lstPrices.Items.Add(dblStockPrice.ToString("N2"))
        Next dblStockPrice
    End Sub

    Private Sub btnDisplay_Click(sender As Object, e As EventArgs) Handles btnDisplay.Click
        ' Displays the highest stock price and the number of days at that price.

        ' Declare variables.
        Dim intLastsub As Integer = dblPrices.GetUpperBound(0)
        Dim dblHighest As Double = dblPrices(0)
        Dim intdays As Integer = 1

        For intSub As Integer = 1 To intLastsub
            If dblPrices(intSub) = dblHighest Then
                intdays += 1
            ElseIf dblPrices(intSub) > dblHighest Then
                dblHighest = dblPrices(intSub)
                intdays = 1
            End If
        Next intSub

        lblHighest.Text = dblHighest.ToString("C2")
        lblDays.Text = intDays.ToString
    End Sub

    Private Sub btnExit_Click(sender As Object, e As EventArgs) Handles btnExit.Click
        Me.Close()
    End Sub
End Class
