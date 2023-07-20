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
        Me.btnDisplay = New System.Windows.Forms.Button()
        Me.radTexas = New System.Windows.Forms.RadioButton()
        Me.radOklahoma = New System.Windows.Forms.RadioButton()
        Me.radArizona = New System.Windows.Forms.RadioButton()
        Me.radColorado = New System.Windows.Forms.RadioButton()
        Me.radLouisana = New System.Windows.Forms.RadioButton()
        Me.Label1 = New System.Windows.Forms.Label()
        Me.lblCapital = New System.Windows.Forms.Label()
        Me.PictureBox1 = New System.Windows.Forms.PictureBox()
        CType(Me.PictureBox1, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.SuspendLayout()
        '
        'btnExit
        '
        Me.btnExit.Location = New System.Drawing.Point(209, 158)
        Me.btnExit.Name = "btnExit"
        Me.btnExit.Size = New System.Drawing.Size(75, 23)
        Me.btnExit.TabIndex = 8
        Me.btnExit.Text = "E&xit"
        Me.btnExit.UseVisualStyleBackColor = True
        '
        'btnDisplay
        '
        Me.btnDisplay.Location = New System.Drawing.Point(128, 158)
        Me.btnDisplay.Name = "btnDisplay"
        Me.btnDisplay.Size = New System.Drawing.Size(75, 23)
        Me.btnDisplay.TabIndex = 7
        Me.btnDisplay.Text = "&Display"
        Me.btnDisplay.UseVisualStyleBackColor = True
        '
        'radTexas
        '
        Me.radTexas.AutoSize = True
        Me.radTexas.Checked = True
        Me.radTexas.Location = New System.Drawing.Point(12, 12)
        Me.radTexas.Name = "radTexas"
        Me.radTexas.Size = New System.Drawing.Size(53, 19)
        Me.radTexas.TabIndex = 0
        Me.radTexas.TabStop = True
        Me.radTexas.Text = "&Texas"
        Me.radTexas.UseVisualStyleBackColor = True
        '
        'radOklahoma
        '
        Me.radOklahoma.AutoSize = True
        Me.radOklahoma.Location = New System.Drawing.Point(12, 43)
        Me.radOklahoma.Name = "radOklahoma"
        Me.radOklahoma.Size = New System.Drawing.Size(80, 19)
        Me.radOklahoma.TabIndex = 1
        Me.radOklahoma.Text = "&Oklahoma"
        Me.radOklahoma.UseVisualStyleBackColor = True
        '
        'radArizona
        '
        Me.radArizona.AutoSize = True
        Me.radArizona.Location = New System.Drawing.Point(12, 74)
        Me.radArizona.Name = "radArizona"
        Me.radArizona.Size = New System.Drawing.Size(65, 19)
        Me.radArizona.TabIndex = 2
        Me.radArizona.Text = "&Arizona"
        Me.radArizona.UseVisualStyleBackColor = True
        '
        'radColorado
        '
        Me.radColorado.AutoSize = True
        Me.radColorado.Location = New System.Drawing.Point(12, 105)
        Me.radColorado.Name = "radColorado"
        Me.radColorado.Size = New System.Drawing.Size(74, 19)
        Me.radColorado.TabIndex = 3
        Me.radColorado.Text = "&Colorado"
        Me.radColorado.UseVisualStyleBackColor = True
        '
        'radLouisana
        '
        Me.radLouisana.AutoSize = True
        Me.radLouisana.Location = New System.Drawing.Point(12, 136)
        Me.radLouisana.Name = "radLouisana"
        Me.radLouisana.Size = New System.Drawing.Size(72, 19)
        Me.radLouisana.TabIndex = 4
        Me.radLouisana.Text = "&Louisana"
        Me.radLouisana.UseVisualStyleBackColor = True
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Location = New System.Drawing.Point(119, 107)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(44, 15)
        Me.Label1.TabIndex = 5
        Me.Label1.Text = "Capital"
        Me.Label1.TextAlign = System.Drawing.ContentAlignment.MiddleLeft
        '
        'lblCapital
        '
        Me.lblCapital.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.lblCapital.Location = New System.Drawing.Point(169, 105)
        Me.lblCapital.Name = "lblCapital"
        Me.lblCapital.Size = New System.Drawing.Size(115, 28)
        Me.lblCapital.TabIndex = 6
        Me.lblCapital.TextAlign = System.Drawing.ContentAlignment.MiddleLeft
        '
        'PictureBox1
        '
        Me.PictureBox1.Image = Global.States_Capitals_Project.My.Resources.Resources.States1
        Me.PictureBox1.Location = New System.Drawing.Point(128, 12)
        Me.PictureBox1.Name = "PictureBox1"
        Me.PictureBox1.Size = New System.Drawing.Size(156, 81)
        Me.PictureBox1.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom
        Me.PictureBox1.TabIndex = 9
        Me.PictureBox1.TabStop = False
        '
        'frmMain
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(7.0!, 15.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(296, 193)
        Me.Controls.Add(Me.PictureBox1)
        Me.Controls.Add(Me.lblCapital)
        Me.Controls.Add(Me.Label1)
        Me.Controls.Add(Me.radLouisana)
        Me.Controls.Add(Me.radColorado)
        Me.Controls.Add(Me.radArizona)
        Me.Controls.Add(Me.radOklahoma)
        Me.Controls.Add(Me.radTexas)
        Me.Controls.Add(Me.btnDisplay)
        Me.Controls.Add(Me.btnExit)
        Me.Font = New System.Drawing.Font("Segoe UI", 9.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.MaximizeBox = False
        Me.Name = "frmMain"
        Me.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen
        Me.Text = "State Capitals"
        CType(Me.PictureBox1, System.ComponentModel.ISupportInitialize).EndInit()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents btnExit As Button
    Friend WithEvents btnDisplay As Button
    Friend WithEvents radTexas As RadioButton
    Friend WithEvents radOklahoma As RadioButton
    Friend WithEvents radArizona As RadioButton
    Friend WithEvents radColorado As RadioButton
    Friend WithEvents radLouisana As RadioButton
    Friend WithEvents Label1 As Label
    Friend WithEvents lblCapital As Label
    Friend WithEvents PictureBox1 As PictureBox
End Class
