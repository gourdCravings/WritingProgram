// Control for ChapterTextBoxes.
#region TODO
#endregion TODO
#region DATES
// 10/02/2025 -- Initial creation.
// 10/06/2025 -- Initial writing.
#endregion DATES
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
        private void SetLeading(double spacing)
        {
            textBox.Spacing = spacing;
        }
        #endregion PRIVATE_METHODS

        private void leadingOne_Click(object sender, EventArgs e)
        {
            SetLeading(1.0);
        }

        private void leadingTwo_Click(object sender, EventArgs e)
        {
            SetLeading(1.5);
        }
        private void leadingThree_Click(object sender, EventArgs e)
        {
            SetLeading(2.0);
        }
    }
}
