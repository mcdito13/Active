namespace Active_FormsApp
{
    partial class LogGenAct
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
            this.GenActDateLabel = new MetroFramework.Controls.MetroLabel();
            this.GenActTypeLabel = new MetroFramework.Controls.MetroLabel();
            this.GenActLocLabel = new MetroFramework.Controls.MetroLabel();
            this.GenActDurLabel = new MetroFramework.Controls.MetroLabel();
            this.GenActDateBox = new MetroFramework.Controls.MetroTextBox();
            this.GenActTypeBox = new MetroFramework.Controls.MetroTextBox();
            this.GenActLocBox = new MetroFramework.Controls.MetroTextBox();
            this.GenActDurBox = new MetroFramework.Controls.MetroTextBox();
            this.LogGenActDoneButton = new MetroFramework.Controls.MetroTile();
            this.SuspendLayout();
            // 
            // GenActDateLabel
            // 
            this.GenActDateLabel.AutoSize = true;
            this.GenActDateLabel.Location = new System.Drawing.Point(166, 137);
            this.GenActDateLabel.Name = "GenActDateLabel";
            this.GenActDateLabel.Size = new System.Drawing.Size(36, 19);
            this.GenActDateLabel.TabIndex = 0;
            this.GenActDateLabel.Text = "Date";
            // 
            // GenActTypeLabel
            // 
            this.GenActTypeLabel.AutoSize = true;
            this.GenActTypeLabel.Location = new System.Drawing.Point(166, 166);
            this.GenActTypeLabel.Name = "GenActTypeLabel";
            this.GenActTypeLabel.Size = new System.Drawing.Size(36, 19);
            this.GenActTypeLabel.TabIndex = 1;
            this.GenActTypeLabel.Text = "Type";
            // 
            // GenActLocLabel
            // 
            this.GenActLocLabel.AutoSize = true;
            this.GenActLocLabel.Location = new System.Drawing.Point(166, 195);
            this.GenActLocLabel.Name = "GenActLocLabel";
            this.GenActLocLabel.Size = new System.Drawing.Size(58, 19);
            this.GenActLocLabel.TabIndex = 2;
            this.GenActLocLabel.Text = "Location";
            // 
            // GenActDurLabel
            // 
            this.GenActDurLabel.AutoSize = true;
            this.GenActDurLabel.Location = new System.Drawing.Point(166, 224);
            this.GenActDurLabel.Name = "GenActDurLabel";
            this.GenActDurLabel.Size = new System.Drawing.Size(93, 19);
            this.GenActDurLabel.TabIndex = 3;
            this.GenActDurLabel.Text = "Duration (min)";
            // 
            // GenActDateBox
            // 
            this.GenActDateBox.Location = new System.Drawing.Point(271, 133);
            this.GenActDateBox.Name = "GenActDateBox";
            this.GenActDateBox.Size = new System.Drawing.Size(114, 23);
            this.GenActDateBox.TabIndex = 4;
            this.GenActDateBox.Text = "MM/DD/YYYY";
            // 
            // GenActTypeBox
            // 
            this.GenActTypeBox.Location = new System.Drawing.Point(271, 162);
            this.GenActTypeBox.Name = "GenActTypeBox";
            this.GenActTypeBox.Size = new System.Drawing.Size(114, 23);
            this.GenActTypeBox.TabIndex = 5;
            this.GenActTypeBox.Text = "Stretching, Yoga, ...";
            // 
            // GenActLocBox
            // 
            this.GenActLocBox.Location = new System.Drawing.Point(271, 191);
            this.GenActLocBox.Name = "GenActLocBox";
            this.GenActLocBox.Size = new System.Drawing.Size(114, 23);
            this.GenActLocBox.TabIndex = 6;
            this.GenActLocBox.Text = "Home";
            // 
            // GenActDurBox
            // 
            this.GenActDurBox.Location = new System.Drawing.Point(271, 220);
            this.GenActDurBox.Name = "GenActDurBox";
            this.GenActDurBox.Size = new System.Drawing.Size(114, 23);
            this.GenActDurBox.TabIndex = 7;
            this.GenActDurBox.Text = "30";
            // 
            // LogGenActDoneButton
            // 
            this.LogGenActDoneButton.Location = new System.Drawing.Point(214, 307);
            this.LogGenActDoneButton.Name = "LogGenActDoneButton";
            this.LogGenActDoneButton.Size = new System.Drawing.Size(126, 52);
            this.LogGenActDoneButton.TabIndex = 8;
            this.LogGenActDoneButton.Text = "Done";
            this.LogGenActDoneButton.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.LogGenActDoneButton.Click += new System.EventHandler(this.LogGenActDoneButton_Click);
            // 
            // LogGenAct
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(549, 446);
            this.Controls.Add(this.LogGenActDoneButton);
            this.Controls.Add(this.GenActDurBox);
            this.Controls.Add(this.GenActLocBox);
            this.Controls.Add(this.GenActTypeBox);
            this.Controls.Add(this.GenActDateBox);
            this.Controls.Add(this.GenActDurLabel);
            this.Controls.Add(this.GenActLocLabel);
            this.Controls.Add(this.GenActTypeLabel);
            this.Controls.Add(this.GenActDateLabel);
            this.Name = "LogGenAct";
            this.Text = "Log General Activity";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private MetroFramework.Controls.MetroLabel GenActDateLabel;
        private MetroFramework.Controls.MetroLabel GenActTypeLabel;
        private MetroFramework.Controls.MetroLabel GenActLocLabel;
        private MetroFramework.Controls.MetroLabel GenActDurLabel;
        private MetroFramework.Controls.MetroTextBox GenActDateBox;
        private MetroFramework.Controls.MetroTextBox GenActTypeBox;
        private MetroFramework.Controls.MetroTextBox GenActLocBox;
        private MetroFramework.Controls.MetroTile LogGenActDoneButton;
        private MetroFramework.Controls.MetroTextBox GenActDurBox;
    }
}