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
    public partial class LogCardio : MetroFramework.Forms.MetroForm
    {
        public LogCardio()
        {
            InitializeComponent();
        }

        private void CardioDoneButton_Click(object sender, EventArgs e)
        {
            Cardio C = new Cardio();
            C.date = CardioDateBox.Text;
            C.type = CardioTypeBox.Text;
            C.location = CardioLocBox.Text;
            C.duration = Int32.Parse(CardioDurBox.Text);

            // Save Cardio Activity

            LogActivityForm LogAct = new LogActivityForm();
            LogAct.Show();

        }
    }
}
