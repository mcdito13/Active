using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Active_FormsApp
{
    public class Weights : Activity
    {
        private int sets;
        private int[] set_reps;
        private int[] set_weights;

        public int Sets
        {
            get { return sets; }
            set
            {
                sets = value;
                set_reps = new int[sets];
                set_weights = new int[sets];
            }
        }

        public string Set_Reps
        {
            get
            {
                string sr = "";
                for (int i = 0; i < sets; i++)
                {
                    sr += set_reps[i];
                    if (i + 1 != sets)
                        sr += ' ';
                }
                    return sr;
            }
            set
            {
                for (int i = 0; i < sets; i++)
                {
                    set_reps[i] = Int32.Parse(value);
                }
            }
        }

        public string Set_Weights
        {
            get
            {
                string sw = "";
                for (int i = 0; i < sets; i++)
                {
                    sw += set_weights[i];
                    if (i + 1 != sets)
                        sw += ' ';
                }
                return sw;
            }
            set
            {
                for (int i = 0; i < sets; i++)
                {
                    set_weights[i] = Int32.Parse(value);
                }
            }
        }

        public Weights()
        {
            this.A_name = 'W';
            this.Date = "no date";
            this.Type = "no type";
            this.Location = "no location";
            this.Duration = 0;
        }
    }
}
