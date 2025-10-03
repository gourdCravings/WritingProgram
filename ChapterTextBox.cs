// Text box for Chapters.
#region TODO
// Implement in ChapterControl.
// Methods for fonts & font properties (color, bold, etc).
// - Coloring certain parts of text.
// - Changing color/font/style and continuing to write in the color/font/style.
// Line spacing.
// Tabs? Unsure if that's already there by default.
// Page functionality -- while ideally listed in MainForm or ChapterControl, the actual page count functionality will probably be here.
#endregion TODO
#region DATES
// 10/02/2025 -- Initial writing.
#endregion DATES

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Drawing;

namespace SimpleWritingProgram
{
    internal class ChapterTextBox : RichTextBox
    {
        public decimal LineSpacing { get; set; }
        private bool _tabbing {  get; set; }

        #region PUBLIC_METHODS
        #endregion PUBLIC_METHODS
        #region PRIVATE_METHODS
        #endregion PRIVATE_METHODS
        #region EVENTS
        protected override void OnFontChanged(EventArgs e)
        {
            base.OnFontChanged(e);
        }
        #endregion EVENTS
    }
}
