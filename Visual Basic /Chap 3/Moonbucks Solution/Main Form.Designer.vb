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
        Me.btnExit = New System.Windows.Forms.Button()
        Me.label1 = New System.Windows.Forms.Label()
        Me.txtCurrent = New System.Windows.Forms.TextBox()
        Me.btnCalc = New System.Windows.Forms.Button()
        Me.label2 = New System.Windows.Forms.Label()
        Me.label3 = New System.Windows.Forms.Label()
        Me.lblIncrease = New System.Windows.Forms.Label()
        Me.lblProjected = New System.Windows.Forms.Label()
        Me.SuspendLayout()
        '
        'btnExit
        '
        Me.btnExit.Location = New System.Drawing.Point(257, 70)
        Me.btnExit.Name = "btnExit"
        Me.btnExit.Size = New System.Drawing.Size(87, 27)
        Me.btnExit.TabIndex = 7
        Me.btnExit.Text = "E&xit"
        Me.btnExit.UseVisualStyleBackColor = True
        '
        'label1
        '
        Me.label1.AutoSize = True
        Me.label1.Location = New System.Drawing.Point(14, 10)
        Me.label1.Name = "label1"
        Me.label1.Size = New System.Drawing.Size(78, 15)
        Me.label1.TabIndex = 0
        Me.label1.Text = "Sale &Amount:"
        Me.label1.TextAlign = System.Drawing.ContentAlignment.MiddleLeft
        '
        'txtCurrent
        '
        Me.txtCurrent.Location = New System.Drawing.Point(98, 7)
        Me.txtCurrent.Name = "txtCurrent"
        Me.txtCurrent.Size = New System.Drawing.Size(116, 23)
        Me.txtCurrent.TabIndex = 1
        '
        'btnCalc
        '
        Me.btnCalc.Location = New System.Drawing.Point(257, 37)
        Me.btnCalc.Name = "btnCalc"
        Me.btnCalc.Size = New System.Drawing.Size(87, 27)
        Me.btnCalc.TabIndex = 6
        Me.btnCalc.Text = "&Calculate"
        Me.btnCalc.UseVisualStyleBackColor = True
        '
        'label2
        '
        Me.label2.AutoSize = True
        Me.label2.Location = New System.Drawing.Point(14, 50)
        Me.label2.Name = "label2"
        Me.label2.Size = New System.Drawing.Size(56, 15)
        Me.label2.TabIndex = 2
        Me.label2.Text = "Sales &Tax:"
        Me.label2.TextAlign = System.Drawing.ContentAlignment.MiddleLeft
        '
        'label3
        '
        Me.label3.AutoSize = True
        Me.label3.Location = New System.Drawing.Point(12, 92)
        Me.label3.Name = "label3"
        Me.label3.Size = New System.Drawing.Size(84, 15)
        Me.label3.TabIndex = 4
        Me.label3.Text = "Projected &Sale:"
        Me.label3.TextAlign = System.Drawing.ContentAlignment.MiddleLeft
        '
        'lblIncrease
        '
        Me.lblIncrease.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.lblIncrease.Location = New System.Drawing.Point(98, 49)
        Me.lblIncrease.Name = "lblIncrease"
        Me.lblIncrease.Size = New System.Drawing.Size(116, 23)
        Me.lblIncrease.TabIndex = 3
        '
        'lblProjected
        '
        Me.lblProjected.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.lblProjected.Location = New System.Drawing.Point(98, 91)
        Me.lblProjected.Name = "lblProjected"
        Me.lblProjected.Size = New System.Drawing.Size(116, 23)
        Me.lblProjected.TabIndex = 5
        '
        'frmMain
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(7.0!, 15.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(393, 137)
        Me.Controls.Add(Me.lblProjected)
        Me.Controls.Add(Me.lblIncrease)
        Me.Controls.Add(Me.label3)
        Me.Controls.Add(Me.label2)
        Me.Controls.Add(Me.btnCalc)
        Me.Controls.Add(Me.txtCurrent)
        Me.Controls.Add(Me.label1)
        Me.Controls.Add(Me.btnExit)
        Me.Font = New System.Drawing.Font("Segoe UI", 9.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.MaximizeBox = False
        Me.Name = "frmMain"
        Me.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen
        Me.Text = "Moonbucks"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents btnExit As Button
    Friend WithEvents label1 As Label
    Friend WithEvents txtCurrent As TextBox
    Friend WithEvents btnCalc As Button
    Friend WithEvents label2 As Label
    Friend WithEvents label3 As Label
    Friend WithEvents lblIncrease As Label
    Friend WithEvents lblProjected As Label
End Class
