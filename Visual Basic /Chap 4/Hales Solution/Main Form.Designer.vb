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
        Me.GroupBox1 = New System.Windows.Forms.GroupBox()
        Me.radKing = New System.Windows.Forms.RadioButton()
        Me.radQueen = New System.Windows.Forms.RadioButton()
        Me.radFull = New System.Windows.Forms.RadioButton()
        Me.radTwin = New System.Windows.Forms.RadioButton()
        Me.btnExit = New System.Windows.Forms.Button()
        Me.btnDisplay = New System.Windows.Forms.Button()
        Me.Label1 = New System.Windows.Forms.Label()
        Me.chkShipping = New System.Windows.Forms.CheckBox()
        Me.lblTotalCost = New System.Windows.Forms.Label()
        Me.GroupBox1.SuspendLayout()
        Me.SuspendLayout()
        '
        'GroupBox1
        '
        Me.GroupBox1.Controls.Add(Me.radKing)
        Me.GroupBox1.Controls.Add(Me.radQueen)
        Me.GroupBox1.Controls.Add(Me.radFull)
        Me.GroupBox1.Controls.Add(Me.radTwin)
        Me.GroupBox1.Location = New System.Drawing.Point(25, 12)
        Me.GroupBox1.Name = "GroupBox1"
        Me.GroupBox1.Size = New System.Drawing.Size(74, 142)
        Me.GroupBox1.TabIndex = 0
        Me.GroupBox1.TabStop = False
        Me.GroupBox1.Text = "Size"
        '
        'radKing
        '
        Me.radKing.AutoSize = True
        Me.radKing.Location = New System.Drawing.Point(6, 97)
        Me.radKing.Name = "radKing"
        Me.radKing.Size = New System.Drawing.Size(49, 19)
        Me.radKing.TabIndex = 3
        Me.radKing.Text = "&King"
        Me.radKing.UseVisualStyleBackColor = True
        '
        'radQueen
        '
        Me.radQueen.AutoSize = True
        Me.radQueen.Location = New System.Drawing.Point(6, 72)
        Me.radQueen.Name = "radQueen"
        Me.radQueen.Size = New System.Drawing.Size(63, 19)
        Me.radQueen.TabIndex = 2
        Me.radQueen.Text = "&Queen "
        Me.radQueen.UseVisualStyleBackColor = True
        '
        'radFull
        '
        Me.radFull.AutoSize = True
        Me.radFull.Location = New System.Drawing.Point(6, 47)
        Me.radFull.Name = "radFull"
        Me.radFull.Size = New System.Drawing.Size(44, 19)
        Me.radFull.TabIndex = 1
        Me.radFull.Text = "&Full"
        Me.radFull.UseVisualStyleBackColor = True
        '
        'radTwin
        '
        Me.radTwin.AutoSize = True
        Me.radTwin.Checked = True
        Me.radTwin.Location = New System.Drawing.Point(6, 22)
        Me.radTwin.Name = "radTwin"
        Me.radTwin.Size = New System.Drawing.Size(49, 19)
        Me.radTwin.TabIndex = 0
        Me.radTwin.TabStop = True
        Me.radTwin.Text = "&Twin"
        Me.radTwin.UseVisualStyleBackColor = True
        '
        'btnExit
        '
        Me.btnExit.Location = New System.Drawing.Point(134, 131)
        Me.btnExit.Name = "btnExit"
        Me.btnExit.Size = New System.Drawing.Size(115, 23)
        Me.btnExit.TabIndex = 5
        Me.btnExit.Text = "E&xit"
        Me.btnExit.UseVisualStyleBackColor = True
        '
        'btnDisplay
        '
        Me.btnDisplay.Location = New System.Drawing.Point(134, 102)
        Me.btnDisplay.Name = "btnDisplay"
        Me.btnDisplay.Size = New System.Drawing.Size(115, 23)
        Me.btnDisplay.TabIndex = 4
        Me.btnDisplay.Text = "&Display Cost"
        Me.btnDisplay.UseVisualStyleBackColor = True
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Location = New System.Drawing.Point(131, 48)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(34, 15)
        Me.Label1.TabIndex = 2
        Me.Label1.Text = "Cost:"
        '
        'chkShipping
        '
        Me.chkShipping.AutoSize = True
        Me.chkShipping.Location = New System.Drawing.Point(134, 22)
        Me.chkShipping.Name = "chkShipping"
        Me.chkShipping.Size = New System.Drawing.Size(107, 19)
        Me.chkShipping.TabIndex = 1
        Me.chkShipping.Text = "&Pick up in store"
        Me.chkShipping.UseVisualStyleBackColor = True
        '
        'lblTotalCost
        '
        Me.lblTotalCost.BackColor = System.Drawing.SystemColors.Info
        Me.lblTotalCost.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.lblTotalCost.Location = New System.Drawing.Point(134, 65)
        Me.lblTotalCost.Name = "lblTotalCost"
        Me.lblTotalCost.Size = New System.Drawing.Size(115, 23)
        Me.lblTotalCost.TabIndex = 3
        Me.lblTotalCost.TextAlign = System.Drawing.ContentAlignment.MiddleLeft
        '
        'frmMain
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(7.0!, 15.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(287, 186)
        Me.Controls.Add(Me.lblTotalCost)
        Me.Controls.Add(Me.chkShipping)
        Me.Controls.Add(Me.Label1)
        Me.Controls.Add(Me.btnDisplay)
        Me.Controls.Add(Me.btnExit)
        Me.Controls.Add(Me.GroupBox1)
        Me.Font = New System.Drawing.Font("Segoe UI", 9.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.MaximizeBox = False
        Me.Name = "frmMain"
        Me.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen
        Me.Text = "Hales Department Store"
        Me.GroupBox1.ResumeLayout(False)
        Me.GroupBox1.PerformLayout()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents GroupBox1 As GroupBox
    Friend WithEvents radKing As RadioButton
    Friend WithEvents radQueen As RadioButton
    Friend WithEvents radFull As RadioButton
    Friend WithEvents radTwin As RadioButton
    Friend WithEvents btnExit As Button
    Friend WithEvents btnDisplay As Button
    Friend WithEvents Label1 As Label
    Friend WithEvents chkShipping As CheckBox
    Friend WithEvents lblTotalCost As Label
End Class
