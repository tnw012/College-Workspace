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
        Me.lblMessage = New System.Windows.Forms.Label()
        Me.btnExit = New System.Windows.Forms.Button()
        Me.picCrying = New System.Windows.Forms.PictureBox()
        Me.picHappy = New System.Windows.Forms.PictureBox()
        Me.picLove = New System.Windows.Forms.PictureBox()
        Me.picSad = New System.Windows.Forms.PictureBox()
        Me.picTired = New System.Windows.Forms.PictureBox()
        CType(Me.picCrying, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.picHappy, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.picLove, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.picSad, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.picTired, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.SuspendLayout()
        '
        'lblMessage
        '
        Me.lblMessage.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.lblMessage.Font = New System.Drawing.Font("Segoe UI", 15.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.lblMessage.ForeColor = System.Drawing.Color.Red
        Me.lblMessage.Location = New System.Drawing.Point(14, 96)
        Me.lblMessage.Name = "lblMessage"
        Me.lblMessage.Size = New System.Drawing.Size(253, 52)
        Me.lblMessage.TabIndex = 5
        Me.lblMessage.TextAlign = System.Drawing.ContentAlignment.MiddleCenter
        '
        'btnExit
        '
        Me.btnExit.Location = New System.Drawing.Point(273, 120)
        Me.btnExit.Name = "btnExit"
        Me.btnExit.Size = New System.Drawing.Size(75, 28)
        Me.btnExit.TabIndex = 6
        Me.btnExit.Text = "E&xit"
        Me.btnExit.UseVisualStyleBackColor = True
        '
        'picCrying
        '
        Me.picCrying.Image = Global.Emoji_Project.My.Resources.Resources.Crying
        Me.picCrying.Location = New System.Drawing.Point(14, 30)
        Me.picCrying.Name = "picCrying"
        Me.picCrying.Size = New System.Drawing.Size(62, 50)
        Me.picCrying.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage
        Me.picCrying.TabIndex = 7
        Me.picCrying.TabStop = False
        '
        'picHappy
        '
        Me.picHappy.Image = Global.Emoji_Project.My.Resources.Resources.Happy
        Me.picHappy.Location = New System.Drawing.Point(82, 30)
        Me.picHappy.Name = "picHappy"
        Me.picHappy.Size = New System.Drawing.Size(62, 50)
        Me.picHappy.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage
        Me.picHappy.TabIndex = 8
        Me.picHappy.TabStop = False
        '
        'picLove
        '
        Me.picLove.Image = Global.Emoji_Project.My.Resources.Resources.Love
        Me.picLove.Location = New System.Drawing.Point(150, 30)
        Me.picLove.Name = "picLove"
        Me.picLove.Size = New System.Drawing.Size(62, 50)
        Me.picLove.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage
        Me.picLove.TabIndex = 9
        Me.picLove.TabStop = False
        '
        'picSad
        '
        Me.picSad.Image = Global.Emoji_Project.My.Resources.Resources.Sad
        Me.picSad.Location = New System.Drawing.Point(218, 30)
        Me.picSad.Name = "picSad"
        Me.picSad.Size = New System.Drawing.Size(62, 50)
        Me.picSad.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage
        Me.picSad.TabIndex = 10
        Me.picSad.TabStop = False
        '
        'picTired
        '
        Me.picTired.Image = Global.Emoji_Project.My.Resources.Resources.Tired
        Me.picTired.Location = New System.Drawing.Point(286, 30)
        Me.picTired.Name = "picTired"
        Me.picTired.Size = New System.Drawing.Size(62, 50)
        Me.picTired.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage
        Me.picTired.TabIndex = 11
        Me.picTired.TabStop = False
        '
        'frmMain
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(7.0!, 15.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(362, 174)
        Me.Controls.Add(Me.picTired)
        Me.Controls.Add(Me.picSad)
        Me.Controls.Add(Me.picLove)
        Me.Controls.Add(Me.picHappy)
        Me.Controls.Add(Me.picCrying)
        Me.Controls.Add(Me.btnExit)
        Me.Controls.Add(Me.lblMessage)
        Me.Font = New System.Drawing.Font("Segoe UI", 9.0!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.MaximizeBox = False
        Me.Name = "frmMain"
        Me.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen
        Me.Text = "Monkey Emoji"
        CType(Me.picCrying, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.picHappy, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.picLove, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.picSad, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.picTired, System.ComponentModel.ISupportInitialize).EndInit()
        Me.ResumeLayout(False)

    End Sub
    Friend WithEvents lblMessage As Label
    Friend WithEvents btnExit As Button
    Friend WithEvents picCrying As PictureBox
    Friend WithEvents picHappy As PictureBox
    Friend WithEvents picLove As PictureBox
    Friend WithEvents picSad As PictureBox
    Friend WithEvents picTired As PictureBox
End Class
