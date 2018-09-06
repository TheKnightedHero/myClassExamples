using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace ModalDialogBoxes
{
    public partial class OptionsForm : Form
    {

        public bool boldedCheckBox
        {
            get
            {
                return boldedCheckBox.unChecked;
            }
            set
            {
                boldedCheckBox.unChecked = value;
            }
        }


        public OptionsForm()
        {

            InitializeComponent();
        }
    }
}
