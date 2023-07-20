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
        Me.lblSales = New System.Windows.Forms.Label()
        Me.txtCurrent = New System.Windows.Forms.TextBox()
        Me.btnCalc = New System.Windows.Forms.Button()
        Me.lblTax = New System.Windows.Forms.Label()
        Me.lblTotal = New System.Windows.Forms.Label()
        Me.lblIncrease = New System.Windows.Forms.Label()
        Me.lblProjected = New System.Windows.Forms.Label()
        Me.SuspendLayout()
        '
        'btnExit
        '
        Me.btnExit.Location = New System.Drawing.Point(370, 127)
        Me.btnExit.Name = "btnExit"
        Me.btnExit.Size = New System.Drawing.Size(87, 27)
        Me.btnExit.TabIndex = 7
        Me.btnExit.Text = "E&xit"
        Me.btnExit.UseVisualStyleBackColor = True
        '
        'lblSales
        '
        Me.lblSales.AutoSize = True
        Me.lblSales.Location = New System.Drawing.Point(14, 10)
        Me.lblSales.Name = "lblSales"
        Me.lblSales.Size = New System.Drawing.Size(78, 15)
        Me.lblSales.TabIndex = 0
        Me.lblSales.Text = "Sale &Amount:"
        Me.lblSales.TextAlign = System.Drawing.ContentAlignment.MiddleLeft
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
        Me.btnCalc.Location = New System.Drawing.Point(275, 127)
        Me.btnCalc.Name = "btnCalc"
        Me.btnCalc.Size = New System.Drawing.Size(87, 27)
        Me.btnCalc.TabIndex = 6
        Me.btnCalc.Text = "&Calculate"
        Me.btnCalc.UseVisualStyleBackColor = True
        '
        'lblTax
        '
        Me.lblTax.AutoSize = True
        Me.lblTax.Location = New System.Drawing.Point(14, 50)
        Me.lblTax.Name = "lblTax"
        Me.lblTax.Size = New System.Drawing.Size(56, 15)
        Me.lblTax.TabIndex = 2
        Me.lblTax.Text = "Sales &Tax:"
        Me.lblTax.TextAlign = System.Drawing.ContentAlignment.MiddleLeft
        '
        'lblTotal
        '
        Me.lblTotal.AutoSize = True
        Me.lblTotal.Location = New System.Drawing.Point(14, 93)
        Me.lblTotal.Name = "lblTotal"
        Me.lblTotal.Size = New System.Drawing.Size(59, 15)
        Me.lblTotal.TabIndex = 4
        Me.lblTotal.Text = "Total &Sale:"
        Me.lblTotal.TextAlign = System.Drawing.ContentAlignment.MiddleLeft
        '
        'lblIncrease
        '
        Me.lblIncrease.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.lblIncrease.Location = New System.Drawing.Point(98, 50)
        Me.lblIncrease.Name = "lblIncrease"
        Me.lblIncrease.Size = New System.Drawing.Size(116, 23)
        Me.lblIncrease.TabIndex = 3
        '
        'lblProjected
        '
        Me.lblProjected.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.lblProjected.Location = New System.Drawing.Point(98, 92)
        Me.lblProjected.Name = "lblProjected"
        Me.lblProjected.Size = New System.Drawing.Size(116, 23)
        Me.lblProjected.TabIndex = 5
        '
        'frmMain
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(7.0!, 15.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(471, 167)
        Me.Controls.Add(Me.lblProjected)
        Me.Controls.Add(Me.lblIncrease)
        Me.Controls.Add(Me.lblTotal)
        Me.Controls.Add(Me.lblTax)
        Me.Controls.Add(Me.btnCalc)
        Me.Controls.Add(Me.txtCurrent)
        Me.Controls.Add(Me.lblSales)
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
    Friend WithEvents lblSales As Label
    Friend WithEvents txtCurrent As TextBox
    Friend WithEvents btnCalc As Button
    Friend WithEvents lblTax As Label
    Friend WithEvents lblTotal As Label
    Friend WithEvents lblIncrease As Label
    Friend WithEvents lblProjected As Label
End Class
