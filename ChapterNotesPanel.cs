// Panels for ChapterNotesContainer.
// Consider depreciating.
#region DATES
// 10/02/2025 -- Initial writing.
#endregion DATES
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace SimpleWritingProgram
{
    internal class ChapterNotesPanel : Panel
    {
        private ChapterControl _textControl;
        public ChapterNotesPanel()
        {
            Initialize();
        }
        private void Initialize()
        {
            BuildStyle();
            BuildFunctionality();
        }
        #region PRIVATE_METHODS
        private void BuildStyle()
        {
            this.Dock = DockStyle.Fill;
        }
        private void BuildFunctionality()
        {
            // create & add TextControl
            _textControl = new ChapterControl();
            this.Controls.Add(_textControl);
        }
        #endregion PRIVATE_METHODS
        #region EVENTS
        protected override void OnDragEnter(DragEventArgs e)
        {
            base.OnDragEnter(e);
            // check if data is TextControl
            if (e.Data.GetDataPresent(typeof(ChapterControl)))
            {
                // data is TextControl, allow addition to panel
                e.Effect = DragDropEffects.Copy;
            }
            else
            {
                // invalid type, do not allow addition to panel
                e.Effect = DragDropEffects.None;
            }
        }
        #endregion EVENTS
    }
}
