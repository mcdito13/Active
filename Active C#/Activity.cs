using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Active_FormsApp
{
    public class Activity
    {
        protected char A_name;
        protected string Date;
        protected string Type;
        protected string Location;
        protected int Duration;

        public string date
        {
            get { return Date; }
            set { Date = value; }
        }

        public string type
        {
            get { return Type; }
            set { Type = value; }
        }

        public string location
        {
            get { return Location; }
            set { Location = value; }
        }

        public int duration
        {
            get { return Duration; }
            set { Duration = value; }
        }

        public Activity()
        {
            this.A_name = 'A';
            this.Date = "no date";
            this.Type = "no type";
            this.Location = "no location";
            this.Duration = 0;
        }
    }
}
