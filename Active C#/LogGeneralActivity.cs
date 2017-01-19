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
    public partial class LogGenAct : MetroFramework.Forms.MetroForm
    {
        public LogGenAct()
        {
            InitializeComponent();
        }

        private void LogGenActDoneButton_Click(object sender, EventArgs e)
        {
            Activity A = new Activity();
            A.date = GenActDateBox.Text;
            A.type = GenActTypeBox.Text;
            A.location = GenActLocBox.Text;
            A.duration = Int32.Parse(GenActDurBox.Text);

            // Save General Activity

            LogActivityForm LogAct = new LogActivityForm();
            LogAct.Show();

        }
    }
}
