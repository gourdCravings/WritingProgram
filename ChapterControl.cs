using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace SimpleWritingProgram
{
    public partial class ChapterControl : UserControl
    {
        public ChapterControl()
        {
            InitializeComponent();
            Initialize();
        }
        private void Initialize()
        {
            BuildStyle();
        }
        #region PRIVATE_METHODS
        private void BuildStyle()
        {
            this.Dock = DockStyle.Fill;
        }
        #endregion PRIVATE_METHODS
    }
}
