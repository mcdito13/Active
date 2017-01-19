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
    public partial class LogWeights : MetroFramework.Forms.MetroForm
    {
        public LogWeights()
        {
            InitializeComponent();
        }

        private void LogWeights_Load(object sender, EventArgs e)
        {

        }

        private void WeightsDoneButton_Click(object sender, EventArgs e)
        {
            Weights W = new Weights();
            W.date = WeightsDateBox.Text;
            W.type = WeightsTypeBox.Text;
            W.location = WeightsLocBox.Text;

            LogActivityForm LogAct = new LogActivityForm();
            LogAct.Show();

        }
    }
}
