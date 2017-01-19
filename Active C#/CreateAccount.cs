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
    public partial class CreateAccount : MetroFramework.Forms.MetroForm
    {
        public CreateAccount()
        {
            InitializeComponent();
        }

        private void CreateAcctDoneTile_Click(object sender, EventArgs e)
        {
            User U = new User();
            U.name = NameBox.Text;
            U.age = Int32.Parse(AgeBox.Text);
            U.height = Int32.Parse(HeightBox.Text);
            U.weight = Int32.Parse(WeightBox.Text);
            U.BP_max = Int32.Parse(BenchMaxBox.Text);
            U.DL_max = Int32.Parse(DeadliftMaxBox.Text);
            U.SQ_max = Int32.Parse(SquatMaxBox.Text);
            U.BP_goal = Int32.Parse(BenchGoalBox.Text);
            U.DL_goal = Int32.Parse(DeadliftGoalBox.Text);
            U.SQ_goal = Int32.Parse(SquatGoalBox.Text);
            U.filename = FilenameBox.Text;

            LogActivityForm LogAct = new LogActivityForm();
            LogAct.Show();

        }
    }
}
