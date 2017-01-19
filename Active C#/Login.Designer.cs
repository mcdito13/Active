namespace Active_FormsApp
{
    partial class LoginForm
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.LoginTile = new MetroFramework.Controls.MetroTile();
            this.LoginTextBox = new MetroFramework.Controls.MetroTextBox();
            this.CreateAccountTile = new MetroFramework.Controls.MetroTile();
            this.EnterFilenameLabel = new MetroFramework.Controls.MetroLabel();
            this.CreateAccountLabel = new MetroFramework.Controls.MetroLabel();
            this.SuspendLayout();
            // 
            // LoginTile
            // 
            this.LoginTile.Location = new System.Drawing.Point(273, 142);
            this.LoginTile.Name = "LoginTile";
            this.LoginTile.Size = new System.Drawing.Size(106, 23);
            this.LoginTile.TabIndex = 0;
            this.LoginTile.Text = "Login";
            this.LoginTile.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.LoginTile.Click += new System.EventHandler(this.LoginTile_Click);
            // 
            // LoginTextBox
            // 
            this.LoginTextBox.Location = new System.Drawing.Point(158, 142);
            this.LoginTextBox.Name = "LoginTextBox";
            this.LoginTextBox.Size = new System.Drawing.Size(109, 23);
            this.LoginTextBox.TabIndex = 2;
            this.LoginTextBox.Text = "example.txt";
            // 
            // CreateAccountTile
            // 
            this.CreateAccountTile.ForeColor = System.Drawing.SystemColors.ControlText;
            this.CreateAccountTile.Location = new System.Drawing.Point(218, 237);
            this.CreateAccountTile.Name = "CreateAccountTile";
            this.CreateAccountTile.Size = new System.Drawing.Size(109, 23);
            this.CreateAccountTile.TabIndex = 9;
            this.CreateAccountTile.Text = "Create Account";
            this.CreateAccountTile.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.CreateAccountTile.Click += new System.EventHandler(this.CreateAccountTile_Click);
            // 
            // EnterFilenameLabel
            // 
            this.EnterFilenameLabel.AutoSize = true;
            this.EnterFilenameLabel.Location = new System.Drawing.Point(207, 104);
            this.EnterFilenameLabel.Name = "EnterFilenameLabel";
            this.EnterFilenameLabel.Size = new System.Drawing.Size(138, 19);
            this.EnterFilenameLabel.TabIndex = 10;
            this.EnterFilenameLabel.Text = "Enter You\'re Filename:";
            // 
            // CreateAccountLabel
            // 
            this.CreateAccountLabel.AutoSize = true;
            this.CreateAccountLabel.Location = new System.Drawing.Point(188, 198);
            this.CreateAccountLabel.Name = "CreateAccountLabel";
            this.CreateAccountLabel.Size = new System.Drawing.Size(158, 19);
            this.CreateAccountLabel.TabIndex = 11;
            this.CreateAccountLabel.Text = "Or Create You\'re Account";
            // 
            // LoginForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(549, 446);
            this.Controls.Add(this.CreateAccountLabel);
            this.Controls.Add(this.EnterFilenameLabel);
            this.Controls.Add(this.CreateAccountTile);
            this.Controls.Add(this.LoginTextBox);
            this.Controls.Add(this.LoginTile);
            this.Name = "LoginForm";
            this.Text = "Active - Login";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private MetroFramework.Controls.MetroTile LoginTile;
        private MetroFramework.Controls.MetroTextBox LoginTextBox;
        private MetroFramework.Controls.MetroTile CreateAccountTile;
        private MetroFramework.Controls.MetroLabel EnterFilenameLabel;
        private MetroFramework.Controls.MetroLabel CreateAccountLabel;
    }
}

