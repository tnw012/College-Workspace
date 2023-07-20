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
        Me.label2 = New System.Windows.Forms.Label()
        Me.label3 = New System.Windows.Forms.Label()
        Me.txtValue = New System.Windows.Forms.TextBox()
        Me.lblTaxes = New System.Windows.Forms.Label()
        Me.Label1 = New System.Windows.Forms.Label()
        CType(Me.picHouse, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.SuspendLayout()
        '
        'btnExit
        '
        Me.btnExit.Location = New System.Drawing.Point(319, 174)
        Me.btnExit.Name = "btnExit"
        Me.btnExit.Size = New System.Drawing.Size(87, 27)
        Me.btnExit.TabIndex = 7
        Me.btnExit.Text = "E&xit"
        Me.btnExit.UseVisualStyleBackColor = True
        '
        'btnCalc
        '
        Me.btnCalc.Location = New System.Drawing.Point(226, 174)
        Me.btnCalc.Name = "btnCalc"
        Me.btnCalc.Size = New System.Drawing.Size(87, 27)
        Me.btnCalc.TabIndex = 6
        Me.btnCalc.Text = "&Calculate"
        Me.btnCalc.UseVisualStyleBackColor = True
        '
        'picHouse
        '
        Me.picHouse.Image = Global.Tax_Project.My.Resources.Resources.house
        Me.picHouse.Location = New System.Drawing.Point(14, 14)
        Me.picHouse.Name = "picHouse"
        Me.picHouse.Size = New System.Drawing.Size(145, 138)
        Me.picHouse.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage
        Me.picHouse.TabIndex = 2
        Me.picHouse.TabStop = False
        '
        'label2
        '
        Me.label2.AutoSize = True
        Me.label2.Location = New System.Drawing.Point(165, 112)
        Me.label2.Name = "label2"
        Me.label2.Size = New System.Drawing.Size(86, 15)
        Me.label2.TabIndex = 0
        Me.label2.Text = "&Property Value:"
        Me.label2.TextAlign = System.Drawing.ContentAlignment.MiddleLeft
        '
        'label3
        '
        Me.label3.AutoSize = True
        Me.label3.Location = New System.Drawing.Point(287, 112)
        Me.label3.Name = "label3"
        Me.label3.Size = New System.Drawing.Size(62, 15)
        Me.label3.TabIndex = 4
        Me.label3.Text = "Taxes Due:"
        Me.label3.TextAlign = System.Drawing.ContentAlignment.MiddleLeft
        '
        'txtValue
        '
        Me.txtValue.Location = New System.Drawing.Point(168, 129)
        Me.txtValue.Name = "txtValue"
        Me.txtValue.Size = New System.Drawing.Size(116, 23)
        Me.txtValue.TabIndex = 1
        '
        'lblTaxes
        '
        Me.lblTaxes.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.lblTaxes.Location = New System.Drawing.Point(290, 129)
        Me.lblTaxes.Name = "lblTaxes"
        Me.lblTaxes.Size = New System.Drawing.Size(116, 23)
        Me.lblTaxes.TabIndex = 5
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Font = New System.Drawing.Font("Segoe UI", 14.25!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label1.Location = New System.Drawing.Point(180, 39)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(207, 25)
        Me.Label1.TabIndex = 8
        Me.Label1.Text = "Property Tax Calculator"
        Me.Label1.TextAlign = System.Drawing.ContentAlignment.MiddleLeft
        '
        'frmMain
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(7.0!, 15.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(418, 220)
        Me.Controls.Add(Me.Label1)
        Me.Controls.Add(Me.lblTaxes)
        Me.Controls.Add(Me.txtValue)
        Me.Controls.Add(Me.label3)
        Me.Controls.Add(Me.label2)
        Me.Controls.Add(Me.picHouse)
        Me.Controls.Add(Me.btnCalc)
        Me.Controls.Add(Me.btnExit)
        Me.Font = New System.Drawing.Font("Segoe UI", 9.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
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
    Friend WithEvents label2 As Label
    Friend WithEvents label3 As Label
    Friend WithEvents txtValue As TextBox
    Friend WithEvents lblTaxes As Label
    Friend WithEvents Label1 As Label
End Class
