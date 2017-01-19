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
    public partial class LoginForm : MetroFramework.Forms.MetroForm
    {
        public LoginForm()
        {
            InitializeComponent();
        }

        private void LoginTile_Click(object sender, EventArgs e)
        {
            // Read File
        }

        private void CreateAccountTile_Click(object sender, EventArgs e)
        {
            CreateAccount Account = new CreateAccount();
            Account.Show();
        }
    }
}
