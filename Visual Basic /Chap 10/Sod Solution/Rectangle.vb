' Name:         Rectangle.vb
' Programmer:   <your name> on <current date>

Option Explicit On
Option Strict On
Option Infer Off

Public Class Rectangle
    Private intLength As Integer
    Private intWidth As Integer

    Public Property Length As Integer
        Get
            Return intLength
        End Get
        Set(value As Integer)
            If value > 0 Then
                intLength = value
            Else
                intLength = 0
            End If
        End Set
    End Property

    Public Property Width As Integer
        Get
            Return intWidth
        End Get
        Set(value As Integer)
            If value > 0 Then
                intWidth = value
            Else
                intWidth = 0
            End If
        End Set
    End Property

    Public Sub New()
        intLength = 0
        intWidth = 0
    End Sub

    Public Sub New(ByVal intL As Integer, ByVal intW As Integer)
        Length = intL
        Width = intW
    End Sub

    Public Function GetArea() As Integer
        Return intLength * intWidth
    End Function
End Class
