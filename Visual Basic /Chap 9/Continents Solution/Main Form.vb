' Name:         Continents Project
' Purpose:      Displays the names of the continents in either ascending or descending order.
' Programmer:   <your name> on <current date>

Option Explicit On
Option Strict On
Option Infer Off

Public Class frmMain
    ' Class-level array and variable.
    Private strContinents(6) As String
    Private intLastSub As Integer = strContinents.GetUpperBound(0)

    Private Sub FillArrayAndListBox()
        ' Fill array with values and then add values to list box.

        ' Declare StreamReader variable.
        Dim inFile As IO.StreamReader

        ' Fill array with values from a sequential access file.
        If IO.File.Exists("continents.txt") Then
            inFile = IO.File.OpenText("continents.txt")
            For intSub As Integer = 0 To intLastSub
                strContinents(intSub) = inFile.ReadLine
            Next intSub
            inFile.Close()
            ' Add array values to list Box
            AddToListBox()
        Else
            MessageBox.Show("Cannot find the file.", "continents",
                            MessageBoxButtons.OK, MessageBoxIcon.Information)
        End If
    End Sub
    Private Sub AddToListBox()
        ' Add array values to list box and select first value.

        lstContinents.Items.Clear()
        For intSub As Integer = 0 To intLastSub
            lstContinents.Items.Add(strContinents(intSub))
        Next intSub
        lstContinents.SelectedIndex = 0
    End Sub

    Private Sub frmMain_Load(sender As Object, e As EventArgs) Handles Me.Load
        ' Use a Sub procedure to fill the array and list box

        FillArrayAndListBox()
    End Sub

    Private Sub mnuFileExit_Click(sender As Object, e As EventArgs) Handles mnuFileExit.Click
        Me.Close()
    End Sub

    Private Sub mnuSortAscending_Click(sender As Object, e As EventArgs) Handles mnuSortAscending.Click
        ' Adds the array values in ascending order to the list box

        Array.Sort(strContinents)
        AddToListBox()
    End Sub

    Private Sub mnuSortDescending_Click(sender As Object, e As EventArgs) Handles mnuSortDescending.Click
        ' Adds the array values in descending order to the list box

        Array.Sort(strContinents)
        Array.Reverse(strContinents)
        AddToListBox()
    End Sub

    Private Sub mnuSortOriginal_Click(sender As Object, e As EventArgs) Handles mnuSortOriginal.Click
        ' Adds the array values in the original order to the list box.

        FillArrayAndListBox()
    End Sub
End Class
