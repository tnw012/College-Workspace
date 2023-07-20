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
        Me.btnDisplay = New System.Windows.Forms.Button()
        Me.btnExit = New System.Windows.Forms.Button()
        Me.Label1 = New System.Windows.Forms.Label()
        Me.Label2 = New System.Windows.Forms.Label()
        Me.Label3 = New System.Windows.Forms.Label()
        Me.lstGrades = New System.Windows.Forms.ListBox()
        Me.lstNames = New System.Windows.Forms.ListBox()
        Me.lblNumber = New System.Windows.Forms.Label()
        Me.SuspendLayout()
        '
        'btnDisplay
        '
        Me.btnDisplay.Location = New System.Drawing.Point(258, 135)
        Me.btnDisplay.Name = "btnDisplay"
        Me.btnDisplay.Size = New System.Drawing.Size(87, 27)
        Me.btnDisplay.TabIndex = 6
        Me.btnDisplay.Text = "&Display"
        Me.btnDisplay.UseVisualStyleBackColor = True
        '
        'btnExit
        '
        Me.btnExit.Location = New System.Drawing.Point(351, 135)
        Me.btnExit.Name = "btnExit"
        Me.btnExit.Size = New System.Drawing.Size(87, 27)
        Me.btnExit.TabIndex = 7
        Me.btnExit.Text = "E&xit"
        Me.btnExit.UseVisualStyleBackColor = True
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Location = New System.Drawing.Point(44, 37)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(41, 15)
        Me.Label1.TabIndex = 0
        Me.Label1.Text = "&Grade:"
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Location = New System.Drawing.Point(130, 37)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(56, 15)
        Me.Label2.TabIndex = 2
        Me.Label2.Text = "&Students:"
        '
        'Label3
        '
        Me.Label3.AutoSize = True
        Me.Label3.Location = New System.Drawing.Point(255, 37)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(116, 15)
        Me.Label3.TabIndex = 4
        Me.Label3.Text = "Number of students:"
        '
        'lstGrades
        '
        Me.lstGrades.FormattingEnabled = True
        Me.lstGrades.ItemHeight = 15
        Me.lstGrades.Items.AddRange(New Object() {"A", "B", "C", "D", "F"})
        Me.lstGrades.Location = New System.Drawing.Point(47, 55)
        Me.lstGrades.Name = "lstGrades"
        Me.lstGrades.Size = New System.Drawing.Size(26, 79)
        Me.lstGrades.TabIndex = 1
        '
        'lstNames
        '
        Me.lstNames.FormattingEnabled = True
        Me.lstNames.ItemHeight = 15
        Me.lstNames.Location = New System.Drawing.Point(133, 55)
        Me.lstNames.Name = "lstNames"
        Me.lstNames.SelectionMode = System.Windows.Forms.SelectionMode.None
        Me.lstNames.Size = New System.Drawing.Size(89, 94)
        Me.lstNames.Sorted = True
        Me.lstNames.TabIndex = 3
        '
        'lblNumber
        '
        Me.lblNumber.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.lblNumber.Location = New System.Drawing.Point(258, 52)
        Me.lblNumber.Name = "lblNumber"
        Me.lblNumber.Size = New System.Drawing.Size(60, 26)
        Me.lblNumber.TabIndex = 5
        Me.lblNumber.TextAlign = System.Drawing.ContentAlignment.MiddleCenter
        '
        'frmMain
        '
        Me.AcceptButton = Me.btnDisplay
        Me.AutoScaleDimensions = New System.Drawing.SizeF(7.0!, 15.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(461, 191)
        Me.Controls.Add(Me.lblNumber)
        Me.Controls.Add(Me.lstNames)
        Me.Controls.Add(Me.lstGrades)
        Me.Controls.Add(Me.Label3)
        Me.Controls.Add(Me.Label2)
        Me.Controls.Add(Me.Label1)
        Me.Controls.Add(Me.btnExit)
        Me.Controls.Add(Me.btnDisplay)
        Me.Font = New System.Drawing.Font("Segoe UI", 9.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.MaximizeBox = False
        Me.Name = "frmMain"
        Me.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen
        Me.Text = "Potter Jr High"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents btnDisplay As Button
    Friend WithEvents btnExit As Button
    Friend WithEvents Label1 As Label
    Friend WithEvents Label2 As Label
    Friend WithEvents Label3 As Label
    Friend WithEvents lstGrades As ListBox
    Friend WithEvents lstNames As ListBox
    Friend WithEvents lblNumber As Label
End Class
