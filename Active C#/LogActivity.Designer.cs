namespace Active_FormsApp
{
    partial class LogActivityForm
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
            this.GeneralActivityTile = new MetroFramework.Controls.MetroTile();
            this.CardioTile = new MetroFramework.Controls.MetroTile();
            this.WeightTile = new MetroFramework.Controls.MetroTile();
            this.WriteFile = new MetroFramework.Controls.MetroTile();
            this.SuspendLayout();
            // 
            // GeneralActivityTile
            // 
            this.GeneralActivityTile.Location = new System.Drawing.Point(200, 116);
            this.GeneralActivityTile.Name = "GeneralActivityTile";
            this.GeneralActivityTile.Size = new System.Drawing.Size(159, 66);
            this.GeneralActivityTile.TabIndex = 0;
            this.GeneralActivityTile.Text = "General Activity";
            this.GeneralActivityTile.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.GeneralActivityTile.Click += new System.EventHandler(this.GeneralActivityTile_Click);
            // 
            // CardioTile
            // 
            this.CardioTile.Location = new System.Drawing.Point(200, 197);
            this.CardioTile.Name = "CardioTile";
            this.CardioTile.Size = new System.Drawing.Size(159, 66);
            this.CardioTile.TabIndex = 1;
            this.CardioTile.Text = "Cardio";
            this.CardioTile.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.CardioTile.Click += new System.EventHandler(this.CardioTile_Click);
            // 
            // WeightTile
            // 
            this.WeightTile.Location = new System.Drawing.Point(200, 282);
            this.WeightTile.Name = "WeightTile";
            this.WeightTile.Size = new System.Drawing.Size(159, 66);
            this.WeightTile.TabIndex = 2;
            this.WeightTile.Text = "Weights";
            this.WeightTile.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.WeightTile.Click += new System.EventHandler(this.WeightTile_Click);
            // 
            // WriteFile
            // 
            this.WriteFile.Location = new System.Drawing.Point(172, 382);
            this.WriteFile.Name = "WriteFile";
            this.WriteFile.Size = new System.Drawing.Size(217, 30);
            this.WriteFile.TabIndex = 3;
            this.WriteFile.Text = "Save Activities to File";
            this.WriteFile.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.WriteFile.Click += new System.EventHandler(this.WriteFile_Click);
            // 
            // LogActivityForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(549, 446);
            this.Controls.Add(this.WriteFile);
            this.Controls.Add(this.WeightTile);
            this.Controls.Add(this.CardioTile);
            this.Controls.Add(this.GeneralActivityTile);
            this.Name = "LogActivityForm";
            this.Text = "Active - Log Activity";
            this.ResumeLayout(false);

        }

        #endregion

        private MetroFramework.Controls.MetroTile GeneralActivityTile;
        private MetroFramework.Controls.MetroTile CardioTile;
        private MetroFramework.Controls.MetroTile WeightTile;
        private MetroFramework.Controls.MetroTile WriteFile;
    }
}