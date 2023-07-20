<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class frmMain
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.lstLength = New System.Windows.Forms.ListBox()
        Me.lstWidth = New System.Windows.Forms.ListBox()
        Me.lstPrice = New System.Windows.Forms.ListBox()
        Me.Label1 = New System.Windows.Forms.Label()
        Me.Label2 = New System.Windows.Forms.Label()
        Me.Label3 = New System.Windows.Forms.Label()
        Me.Label4 = New System.Windows.Forms.Label()
        Me.lblSqFt = New System.Windows.Forms.Label()
        Me.Label5 = New System.Windows.Forms.Label()
        Me.lblCost = New System.Windows.Forms.Label()
        Me.btnCalc = New System.Windows.Forms.Button()
        Me.btnExit = New System.Windows.Forms.Button()
        Me.SuspendLayout()
        '
        'lstLength
        '
        Me.lstLength.FormattingEnabled = True
        Me.lstLength.ItemHeight = 15
        Me.lstLength.Location = New System.Drawing.Point(40, 31)
        Me.lstLength.Name = "lstLength"
        Me.lstLength.Size = New System.Drawing.Size(44, 94)
        Me.lstLength.TabIndex = 2
        '
        'lstWidth
        '
        Me.lstWidth.FormattingEnabled = True
        Me.lstWidth.ItemHeight = 15
        Me.lstWidth.Location = New System.Drawing.Point(127, 31)
        Me.lstWidth.Name = "lstWidth"
        Me.lstWidth.Size = New System.Drawing.Size(44, 94)
        Me.lstWidth.TabIndex = 4
        '
        'lstPrice
        '
        Me.lstPrice.FormattingEnabled = True
        Me.lstPrice.ItemHeight = 15
        Me.lstPrice.Location = New System.Drawing.Point(216, 31)
        Me.lstPrice.Name = "lstPrice"
        Me.lstPrice.Size = New System.Drawing.Size(59, 94)
        Me.lstPrice.TabIndex = 6
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Location = New System.Drawing.Point(37, 13)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(78, 15)
        Me.Label1.TabIndex = 1
        Me.Label1.Text = "&Length (feet):"
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Location = New System.Drawing.Point(124, 13)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(73, 15)
        Me.Label2.TabIndex = 3
        Me.Label2.Text = "&Width (feet):"
        '
        'Label3
        '
        Me.Label3.AutoSize = True
        Me.Label3.Location = New System.Drawing.Point(213, 12)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(127, 15)
        Me.Label3.TabIndex = 5
        Me.Label3.Text = "&Price (per square foot):"
        '
        'Label4
        '
        Me.Label4.AutoSize = True
        Me.Label4.Location = New System.Drawing.Point(29, 165)
        Me.Label4.Name = "Label4"
        Me.Label4.Size = New System.Drawing.Size(69, 15)
        Me.Label4.TabIndex = 8
        Me.Label4.Text = "Square feet:"
        '
        'lblSqFt
        '
        Me.lblSqFt.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.lblSqFt.Location = New System.Drawing.Point(32, 183)
        Me.lblSqFt.Name = "lblSqFt"
        Me.lblSqFt.Size = New System.Drawing.Size(65, 21)
        Me.lblSqFt.TabIndex = 9
        Me.lblSqFt.TextAlign = System.Drawing.ContentAlignment.MiddleCenter
        '
        'Label5
        '
        Me.Label5.AutoSize = True
        Me.Label5.Location = New System.Drawing.Point(116, 165)
        Me.Label5.Name = "Label5"
        Me.Label5.Size = New System.Drawing.Size(34, 15)
        Me.Label5.TabIndex = 10
        Me.Label5.Text = "Cost:"
        '
        'lblCost
        '
        Me.lblCost.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.lblCost.Location = New System.Drawing.Point(119, 183)
        Me.lblCost.Name = "lblCost"
        Me.lblCost.Size = New System.Drawing.Size(65, 21)
        Me.lblCost.TabIndex = 11
        Me.lblCost.TextAlign = System.Drawing.ContentAlignment.MiddleCenter
        '
        'btnCalc
        '
        Me.btnCalc.Location = New System.Drawing.Point(205, 181)
        Me.btnCalc.Name = "btnCalc"
        Me.btnCalc.Size = New System.Drawing.Size(75, 23)
        Me.btnCalc.TabIndex = 0
        Me.btnCalc.Text = "&Calculate"
        Me.btnCalc.UseVisualStyleBackColor = True
        '
        'btnExit
        '
        Me.btnExit.Location = New System.Drawing.Point(286, 181)
        Me.btnExit.Name = "btnExit"
        Me.btnExit.Size = New System.Drawing.Size(62, 23)
        Me.btnExit.TabIndex = 7
        Me.btnExit.Text = "E&xit"
        Me.btnExit.UseVisualStyleBackColor = True
        '
        'frmMain
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(7.0!, 15.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(377, 226)
        Me.Controls.Add(Me.btnExit)
        Me.Controls.Add(Me.btnCalc)
        Me.Controls.Add(Me.lblCost)
        Me.Controls.Add(Me.Label5)
        Me.Controls.Add(Me.lblSqFt)
        Me.Controls.Add(Me.Label4)
        Me.Controls.Add(Me.Label3)
        Me.Controls.Add(Me.Label2)
        Me.Controls.Add(Me.Label1)
        Me.Controls.Add(Me.lstPrice)
        Me.Controls.Add(Me.lstWidth)
        Me.Controls.Add(Me.lstLength)
        Me.Font = New System.Drawing.Font("Segoe UI", 9.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.MaximizeBox = False
        Me.Name = "frmMain"
        Me.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen
        Me.Text = "Franklin Decks"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents lstLength As ListBox
    Friend WithEvents lstWidth As ListBox
    Friend WithEvents lstPrice As ListBox
    Friend WithEvents Label1 As Label
    Friend WithEvents Label2 As Label
    Friend WithEvents Label3 As Label
    Friend WithEvents Label4 As Label
    Friend WithEvents lblSqFt As Label
    Friend WithEvents Label5 As Label
    Friend WithEvents lblCost As Label
    Friend WithEvents btnCalc As Button
    Friend WithEvents btnExit As Button
End Class
