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
        Me.btnCalc = New System.Windows.Forms.Button()
        Me.picHouse = New System.Windows.Forms.PictureBox()
        Me.lblValue = New System.Windows.Forms.Label()
        Me.lblTax = New System.Windows.Forms.Label()
        Me.lblTotal = New System.Windows.Forms.Label()
        Me.txtValue = New System.Windows.Forms.TextBox()
        Me.lblIncrease = New System.Windows.Forms.Label()
        Me.lblDue = New System.Windows.Forms.Label()
        CType(Me.picHouse, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.SuspendLayout()
        '
        'btnExit
        '
        Me.btnExit.Location = New System.Drawing.Point(269, 174)
        Me.btnExit.Name = "btnExit"
        Me.btnExit.Size = New System.Drawing.Size(75, 23)
        Me.btnExit.TabIndex = 7
        Me.btnExit.Text = "E&xit"
        Me.btnExit.UseVisualStyleBackColor = True
        '
        'btnCalc
        '
        Me.btnCalc.Location = New System.Drawing.Point(188, 174)
        Me.btnCalc.Name = "btnCalc"
        Me.btnCalc.Size = New System.Drawing.Size(75, 23)
        Me.btnCalc.TabIndex = 6
        Me.btnCalc.Text = "&Calculate"
        Me.btnCalc.UseVisualStyleBackColor = True
        '
        'picHouse
        '
        Me.picHouse.Image = Global.Tax_Project.My.Resources.Resources.house
        Me.picHouse.Location = New System.Drawing.Point(12, 12)
        Me.picHouse.Name = "picHouse"
        Me.picHouse.Size = New System.Drawing.Size(124, 83)
        Me.picHouse.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage
        Me.picHouse.TabIndex = 2
        Me.picHouse.TabStop = False
        '
        'lblValue
        '
        Me.lblValue.Location = New System.Drawing.Point(9, 113)
        Me.lblValue.Name = "lblValue"
        Me.lblValue.Size = New System.Drawing.Size(79, 13)
        Me.lblValue.TabIndex = 0
        Me.lblValue.Text = "&Property Value:"
        Me.lblValue.TextAlign = System.Drawing.ContentAlignment.MiddleLeft
        '
        'lblTax
        '
        Me.lblTax.Location = New System.Drawing.Point(125, 113)
        Me.lblTax.Name = "lblTax"
        Me.lblTax.Size = New System.Drawing.Size(79, 13)
        Me.lblTax.TabIndex = 2
        Me.lblTax.Text = "Tax &Rate:"
        Me.lblTax.TextAlign = System.Drawing.ContentAlignment.MiddleLeft
        '
        'lblTotal
        '
        Me.lblTotal.Location = New System.Drawing.Point(241, 113)
        Me.lblTotal.Name = "lblTotal"
        Me.lblTotal.Size = New System.Drawing.Size(79, 13)
        Me.lblTotal.TabIndex = 4
        Me.lblTotal.Text = "Taxes &Due:"
        Me.lblTotal.TextAlign = System.Drawing.ContentAlignment.MiddleLeft
        '
        'txtValue
        '
        Me.txtValue.Location = New System.Drawing.Point(12, 127)
        Me.txtValue.Name = "txtValue"
        Me.txtValue.Size = New System.Drawing.Size(100, 20)
        Me.txtValue.TabIndex = 1
        '
        'lblIncrease
        '
        Me.lblIncrease.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.lblIncrease.Location = New System.Drawing.Point(128, 127)
        Me.lblIncrease.Name = "lblIncrease"
        Me.lblIncrease.Size = New System.Drawing.Size(100, 20)
        Me.lblIncrease.TabIndex = 3
        '
        'lblDue
        '
        Me.lblDue.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.lblDue.Location = New System.Drawing.Point(244, 127)
        Me.lblDue.Name = "lblDue"
        Me.lblDue.Size = New System.Drawing.Size(100, 20)
        Me.lblDue.TabIndex = 5
        '
        'frmMain
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(358, 209)
        Me.Controls.Add(Me.lblDue)
        Me.Controls.Add(Me.lblIncrease)
        Me.Controls.Add(Me.txtValue)
        Me.Controls.Add(Me.lblTotal)
        Me.Controls.Add(Me.lblTax)
        Me.Controls.Add(Me.lblValue)
        Me.Controls.Add(Me.picHouse)
        Me.Controls.Add(Me.btnCalc)
        Me.Controls.Add(Me.btnExit)
        Me.MaximizeBox = False
        Me.Name = "frmMain"
        Me.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen
        Me.Text = "Property Tax"
        CType(Me.picHouse, System.ComponentModel.ISupportInitialize).EndInit()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents btnExit As Button
    Friend WithEvents btnCalc As Button
    Friend WithEvents picHouse As PictureBox
    Friend WithEvents lblValue As Label
    Friend WithEvents lblTax As Label
    Friend WithEvents lblTotal As Label
    Friend WithEvents txtValue As TextBox
    Friend WithEvents lblIncrease As Label
    Friend WithEvents lblDue As Label
End Class
