namespace Active_FormsApp
{
    partial class LogCardio
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
            this.CardioDurLabel = new MetroFramework.Controls.MetroLabel();
            this.CardioLocLabel = new MetroFramework.Controls.MetroLabel();
            this.CardioTypeLabel = new MetroFramework.Controls.MetroLabel();
            this.CardioDateLabel = new MetroFramework.Controls.MetroLabel();
            this.CardioDurBox = new MetroFramework.Controls.MetroTextBox();
            this.CardioLocBox = new MetroFramework.Controls.MetroTextBox();
            this.CardioTypeBox = new MetroFramework.Controls.MetroTextBox();
            this.CardioDateBox = new MetroFramework.Controls.MetroTextBox();
            this.CardioDoneButton = new MetroFramework.Controls.MetroTile();
            this.SuspendLayout();
            // 
            // CardioDurLabel
            // 
            this.CardioDurLabel.AutoSize = true;
            this.CardioDurLabel.Location = new System.Drawing.Point(166, 224);
            this.CardioDurLabel.Name = "CardioDurLabel";
            this.CardioDurLabel.Size = new System.Drawing.Size(93, 19);
            this.CardioDurLabel.TabIndex = 7;
            this.CardioDurLabel.Text = "Duration (min)";
            // 
            // CardioLocLabel
            // 
            this.CardioLocLabel.AutoSize = true;
            this.CardioLocLabel.Location = new System.Drawing.Point(166, 195);
            this.CardioLocLabel.Name = "CardioLocLabel";
            this.CardioLocLabel.Size = new System.Drawing.Size(58, 19);
            this.CardioLocLabel.TabIndex = 6;
            this.CardioLocLabel.Text = "Location";
            // 
            // CardioTypeLabel
            // 
            this.CardioTypeLabel.AutoSize = true;
            this.CardioTypeLabel.Location = new System.Drawing.Point(166, 166);
            this.CardioTypeLabel.Name = "CardioTypeLabel";
            this.CardioTypeLabel.Size = new System.Drawing.Size(36, 19);
            this.CardioTypeLabel.TabIndex = 5;
            this.CardioTypeLabel.Text = "Type";
            // 
            // CardioDateLabel
            // 
            this.CardioDateLabel.AutoSize = true;
            this.CardioDateLabel.Location = new System.Drawing.Point(166, 137);
            this.CardioDateLabel.Name = "CardioDateLabel";
            this.CardioDateLabel.Size = new System.Drawing.Size(36, 19);
            this.CardioDateLabel.TabIndex = 4;
            this.CardioDateLabel.Text = "Date";
            // 
            // CardioDurBox
            // 
            this.CardioDurBox.Location = new System.Drawing.Point(271, 220);
            this.CardioDurBox.Name = "CardioDurBox";
            this.CardioDurBox.Size = new System.Drawing.Size(114, 23);
            this.CardioDurBox.TabIndex = 11;
            this.CardioDurBox.Text = "60";
            // 
            // CardioLocBox
            // 
            this.CardioLocBox.Location = new System.Drawing.Point(271, 191);
            this.CardioLocBox.Name = "CardioLocBox";
            this.CardioLocBox.Size = new System.Drawing.Size(114, 23);
            this.CardioLocBox.TabIndex = 10;
            this.CardioLocBox.Text = "Stafford Lake";
            // 
            // CardioTypeBox
            // 
            this.CardioTypeBox.Location = new System.Drawing.Point(271, 162);
            this.CardioTypeBox.Name = "CardioTypeBox";
            this.CardioTypeBox.Size = new System.Drawing.Size(114, 23);
            this.CardioTypeBox.TabIndex = 9;
            this.CardioTypeBox.Text = "Run, Hike, Bike, ...";
            // 
            // CardioDateBox
            // 
            this.CardioDateBox.Location = new System.Drawing.Point(271, 133);
            this.CardioDateBox.Name = "CardioDateBox";
            this.CardioDateBox.Size = new System.Drawing.Size(114, 23);
            this.CardioDateBox.TabIndex = 8;
            this.CardioDateBox.Text = "MM/DD/YYYY";
            // 
            // CardioDoneButton
            // 
            this.CardioDoneButton.Location = new System.Drawing.Point(214, 307);
            this.CardioDoneButton.Name = "CardioDoneButton";
            this.CardioDoneButton.Size = new System.Drawing.Size(126, 52);
            this.CardioDoneButton.TabIndex = 12;
            this.CardioDoneButton.Text = "Done";
            this.CardioDoneButton.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.CardioDoneButton.Click += new System.EventHandler(this.CardioDoneButton_Click);
            // 
            // LogCardio
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(549, 446);
            this.Controls.Add(this.CardioDoneButton);
            this.Controls.Add(this.CardioDurBox);
            this.Controls.Add(this.CardioLocBox);
            this.Controls.Add(this.CardioTypeBox);
            this.Controls.Add(this.CardioDateBox);
            this.Controls.Add(this.CardioDurLabel);
            this.Controls.Add(this.CardioLocLabel);
            this.Controls.Add(this.CardioTypeLabel);
            this.Controls.Add(this.CardioDateLabel);
            this.Name = "LogCardio";
            this.Text = "Log Cardio";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private MetroFramework.Controls.MetroLabel CardioDurLabel;
        private MetroFramework.Controls.MetroLabel CardioLocLabel;
        private MetroFramework.Controls.MetroLabel CardioTypeLabel;
        private MetroFramework.Controls.MetroLabel CardioDateLabel;
        private MetroFramework.Controls.MetroTextBox CardioDurBox;
        private MetroFramework.Controls.MetroTextBox CardioLocBox;
        private MetroFramework.Controls.MetroTextBox CardioTypeBox;
        private MetroFramework.Controls.MetroTextBox CardioDateBox;
        private MetroFramework.Controls.MetroTile CardioDoneButton;
    }
}