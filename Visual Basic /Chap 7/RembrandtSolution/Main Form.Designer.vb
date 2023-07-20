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
        Me.Label1 = New System.Windows.Forms.Label()
        Me.Label2 = New System.Windows.Forms.Label()
        Me.GroupBox1 = New System.Windows.Forms.GroupBox()
        Me.lblPartTime = New System.Windows.Forms.Label()
        Me.lblFullTime = New System.Windows.Forms.Label()
        Me.lblUsed = New System.Windows.Forms.Label()
        Me.lblNew = New System.Windows.Forms.Label()
        Me.Label6 = New System.Windows.Forms.Label()
        Me.Label3 = New System.Windows.Forms.Label()
        Me.Label4 = New System.Windows.Forms.Label()
        Me.Label5 = New System.Windows.Forms.Label()
        Me.btnCalc = New System.Windows.Forms.Button()
        Me.btnExit = New System.Windows.Forms.Button()
        Me.txtID = New System.Windows.Forms.TextBox()
        Me.txtNumberSold = New System.Windows.Forms.TextBox()
        Me.GroupBox1.SuspendLayout()
        Me.SuspendLayout()
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Location = New System.Drawing.Point(24, 26)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(21, 15)
        Me.Label1.TabIndex = 0
        Me.Label1.Text = "&ID:"
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Location = New System.Drawing.Point(104, 26)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(79, 15)
        Me.Label2.TabIndex = 1
        Me.Label2.Text = "&Number sold:"
        '
        'GroupBox1
        '
        Me.GroupBox1.Controls.Add(Me.lblPartTime)
        Me.GroupBox1.Controls.Add(Me.lblFullTime)
        Me.GroupBox1.Controls.Add(Me.lblUsed)
        Me.GroupBox1.Controls.Add(Me.lblNew)
        Me.GroupBox1.Controls.Add(Me.Label6)
        Me.GroupBox1.Controls.Add(Me.Label3)
        Me.GroupBox1.Controls.Add(Me.Label4)
        Me.GroupBox1.Controls.Add(Me.Label5)
        Me.GroupBox1.Location = New System.Drawing.Point(39, 94)
        Me.GroupBox1.Name = "GroupBox1"
        Me.GroupBox1.Size = New System.Drawing.Size(218, 159)
        Me.GroupBox1.TabIndex = 2
        Me.GroupBox1.TabStop = False
        Me.GroupBox1.Text = "Cars sold by"
        '
        'lblPartTime
        '
        Me.lblPartTime.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.lblPartTime.Location = New System.Drawing.Point(147, 117)
        Me.lblPartTime.Name = "lblPartTime"
        Me.lblPartTime.Size = New System.Drawing.Size(46, 23)
        Me.lblPartTime.TabIndex = 5
        Me.lblPartTime.TextAlign = System.Drawing.ContentAlignment.MiddleCenter
        '
        'lblFullTime
        '
        Me.lblFullTime.BackColor = System.Drawing.SystemColors.Control
        Me.lblFullTime.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.lblFullTime.Location = New System.Drawing.Point(147, 24)
        Me.lblFullTime.Name = "lblFullTime"
        Me.lblFullTime.Size = New System.Drawing.Size(46, 23)
        Me.lblFullTime.TabIndex = 4
        Me.lblFullTime.TextAlign = System.Drawing.ContentAlignment.MiddleCenter
        '
        'lblUsed
        '
        Me.lblUsed.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.lblUsed.Location = New System.Drawing.Point(147, 55)
        Me.lblUsed.Name = "lblUsed"
        Me.lblUsed.Size = New System.Drawing.Size(46, 23)
        Me.lblUsed.TabIndex = 7
        Me.lblUsed.TextAlign = System.Drawing.ContentAlignment.MiddleCenter
        '
        'lblNew
        '
        Me.lblNew.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.lblNew.Location = New System.Drawing.Point(147, 86)
        Me.lblNew.Name = "lblNew"
        Me.lblNew.Size = New System.Drawing.Size(46, 23)
        Me.lblNew.TabIndex = 6
        Me.lblNew.TextAlign = System.Drawing.ContentAlignment.MiddleCenter
        '
        'Label6
        '
        Me.Label6.AutoSize = True
        Me.Label6.Location = New System.Drawing.Point(23, 121)
        Me.Label6.Name = "Label6"
        Me.Label6.Size = New System.Drawing.Size(115, 15)
        Me.Label6.TabIndex = 3
        Me.Label6.Text = "Used car employees:"
        '
        'Label3
        '
        Me.Label3.AutoSize = True
        Me.Label3.Location = New System.Drawing.Point(23, 28)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(118, 15)
        Me.Label3.TabIndex = 0
        Me.Label3.Text = "Full-time employees:"
        '
        'Label4
        '
        Me.Label4.AutoSize = True
        Me.Label4.Location = New System.Drawing.Point(23, 59)
        Me.Label4.Name = "Label4"
        Me.Label4.Size = New System.Drawing.Size(120, 15)
        Me.Label4.TabIndex = 1
        Me.Label4.Text = "Part-time employees:"
        '
        'Label5
        '
        Me.Label5.AutoSize = True
        Me.Label5.Location = New System.Drawing.Point(23, 90)
        Me.Label5.Name = "Label5"
        Me.Label5.Size = New System.Drawing.Size(113, 15)
        Me.Label5.TabIndex = 2
        Me.Label5.Text = "New car employees:"
        '
        'btnCalc
        '
        Me.btnCalc.Location = New System.Drawing.Point(204, 26)
        Me.btnCalc.Name = "btnCalc"
        Me.btnCalc.Size = New System.Drawing.Size(75, 23)
        Me.btnCalc.TabIndex = 3
        Me.btnCalc.Text = "&Calculate"
        Me.btnCalc.UseVisualStyleBackColor = True
        '
        'btnExit
        '
        Me.btnExit.Location = New System.Drawing.Point(204, 56)
        Me.btnExit.Name = "btnExit"
        Me.btnExit.Size = New System.Drawing.Size(75, 23)
        Me.btnExit.TabIndex = 4
        Me.btnExit.Text = "E&xit"
        Me.btnExit.UseVisualStyleBackColor = True
        '
        'txtID
        '
        Me.txtID.Location = New System.Drawing.Point(27, 44)
        Me.txtID.Name = "txtID"
        Me.txtID.Size = New System.Drawing.Size(63, 23)
        Me.txtID.TabIndex = 5
        '
        'txtNumberSold
        '
        Me.txtNumberSold.Location = New System.Drawing.Point(107, 44)
        Me.txtNumberSold.Name = "txtNumberSold"
        Me.txtNumberSold.Size = New System.Drawing.Size(40, 23)
        Me.txtNumberSold.TabIndex = 6
        '
        'frmMain
        '
        Me.AcceptButton = Me.btnCalc
        Me.AutoScaleDimensions = New System.Drawing.SizeF(7.0!, 15.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(306, 270)
        Me.Controls.Add(Me.txtNumberSold)
        Me.Controls.Add(Me.txtID)
        Me.Controls.Add(Me.btnExit)
        Me.Controls.Add(Me.btnCalc)
        Me.Controls.Add(Me.GroupBox1)
        Me.Controls.Add(Me.Label2)
        Me.Controls.Add(Me.Label1)
        Me.Font = New System.Drawing.Font("Segoe UI", 9.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.MaximizeBox = False
        Me.Name = "frmMain"
        Me.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen
        Me.Text = "Rembrandt Auto-Mart"
        Me.GroupBox1.ResumeLayout(False)
        Me.GroupBox1.PerformLayout()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents Label1 As Label
    Friend WithEvents Label2 As Label
    Friend WithEvents GroupBox1 As GroupBox
    Friend WithEvents Label6 As Label
    Friend WithEvents Label5 As Label
    Friend WithEvents Label4 As Label
    Friend WithEvents Label3 As Label
    Friend WithEvents btnCalc As Button
    Friend WithEvents btnExit As Button
    Friend WithEvents txtID As TextBox
    Friend WithEvents txtNumberSold As TextBox
    Friend WithEvents lblPartTime As Label
    Friend WithEvents lblFullTime As Label
    Friend WithEvents lblNew As Label
    Friend WithEvents lblUsed As Label
End Class
