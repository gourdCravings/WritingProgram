// Container for Chapter/Notes.
#region TODO
// Figure out how to have the NotesControl listbox aligned with the notes textbox.
// Drag & Drop.
// Cleanup.
#endregion TODO
#region DATES
// 10/2/2025 -- Initial writing.
#endregion DATES
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace SimpleWritingProgram
{
    internal class ChapterNotesContainer : SplitContainer
    {
        private Padding _padding = new Padding(10, 10, 10, 10);
        public double PercentHeight = 0.66;
        public ChapterNotesContainer() 
        {
            Initialize();
        }
        #region PRIVATE_METHODS
        private void Initialize()
        {

            BuildStyle();
            BuildFunctionality();
            //BuildPanels();
        }
        #region BUILDERS
        private void BuildStyle()
        {
            // CONTAINER
            this.Dock = DockStyle.Fill;
            this.SplitterWidth = 5; // TODO: consider making this proportional?
            this.SplitterDistance = (int)(PercentHeight * this.Height);
            // PANELS
            this.Panel1.Padding = _padding;
            if (Panel2.Controls.OfType<ListBox>().Any())
            {
                this.Panel2.Padding = _padding;
                //this.Panel2.Margin = new Padding(_padding.Left+3, _padding.Right+3, _padding.Top, -5);
                //this.Panel2.Margin = new Padding(3, 3, 3, -3);
            }
            else 
            {
                this.Panel2.Padding = _padding;
            }
        }
        private void BuildFunctionality()
        {
            // allow drop
            this.AllowDrop = true;
        }
        //private void BuildPanels()
        //{
        //    _chapterPanel = new ChapterNotesPanel();
        //    _notesPanel = new TextBox();
        //    this.Panel1.Controls.Add(_chapterPanel);
        //    this.Panel2.Controls.Add(_notesPanel);
        //}
        #endregion BUILDERS
        #endregion PRIVATE_METHODS
    }
}
