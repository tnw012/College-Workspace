' Name:         CourseGrade.vb
' Programmer:   Trevin Wolfe on 7/23/20

Option Explicit On
Option Strict On
Option Infer Off

Public Class CourseGrade
    Public Property Score1 As Integer
    Public Property Score2 As Integer
    Private strGrade As String

    Public ReadOnly Property Grade As String
        Get
            Return strGrade
        End Get
    End Property

    Public Sub New()
        _Score1 = 0
        _Score2 = 0
        strGrade = String.Empty
    End Sub

    Public Sub DetermineGrade()
        Select Case _Score1 + _Score2
            Case Is >= 180
                strGrade = "A"
            Case Is >= 160
                strGrade = "B"
            Case Is >= 140
                strGrade = "C"
            Case Is >= 120
                strGrade = "D"
            Case Else
                strGrade = "F"
        End Select
    End Sub

End Class
