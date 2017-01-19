using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Active_FormsApp
{
    public partial class LogActivityForm : MetroFramework.Forms.MetroForm
    {
        public LogActivityForm()
        {
            InitializeComponent();
        }

        private void GeneralActivityTile_Click(object sender, EventArgs e)
        {
            LogGenAct LogGA = new LogGenAct();
            LogGA.Show();

        }

        private void CardioTile_Click(object sender, EventArgs e)
        {
            LogCardio LogC = new LogCardio();
            LogC.Show();

        }

        private void WeightTile_Click(object sender, EventArgs e)
        {
            LogWeights LogW = new LogWeights();
            LogW.Show();

        }

        private void WriteFile_Click(object sender, EventArgs e)
        {
            // Save profile and activities to log
            Application.Exit();
        }
    }
}
