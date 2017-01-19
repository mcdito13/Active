using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Active_FormsApp
{
    public class User
    {
        private string U_name;
        private int U_age;
        private int U_height;
        private int U_weight;
        private int U_BP_max;
        private int U_DL_max;
        private int U_SQ_max;
        private int U_BP_goal;
        private int U_DL_goal;
        private int U_SQ_goal;
        private string U_filename;

        public string name
        {
            get { return U_name; }
            set { U_name = value; }
        }

        public int age
        {
            get { return U_age; }
            set { U_age = value; }
        }

        public int height
        {
            get { return U_height; }
            set { U_height = value; }
        }

        public int weight
        {
            get { return U_weight; }
            set { U_weight = value; }
        }

        public int BP_max
        {
            get { return U_BP_max; }
            set { U_BP_max = value; }
        }

        public int DL_max
        {
            get { return U_DL_max; }
            set { U_DL_max = value; }
        }

        public int SQ_max
        {
            get { return U_SQ_max; }
            set { U_SQ_max = value; }
        }

        public int BP_goal
        {
            get { return U_BP_goal; }
            set { U_BP_goal = value; }
        }

        public int DL_goal
        {
            get { return U_DL_goal; }
            set { U_DL_goal = value; }
        }

        public int SQ_goal
        {
            get { return U_SQ_goal; }
            set { U_SQ_goal = value; }
        }

        public string filename
        {
            get { return U_filename; }
            set { U_filename = value; }
        }

        public User()
        {
            this.U_name = "NoName";
            this.U_age = 0;
            this.U_height = 0;
            this.U_weight = 0;
            this.U_BP_max = 0;
            this.U_DL_max = 0;
            this.U_SQ_max = 0;
            this.U_BP_goal = 0;
            this.U_DL_goal = 0;
            this.U_SQ_goal = 0;
            this.U_filename = "NoFilename";
    }

    }
}
