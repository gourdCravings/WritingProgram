// Text box for Chapters.
#region TODO
// Methods for fonts & font properties (color, bold, etc).
// - Coloring certain parts of text.
// - Changing color/font/style and continuing to write in the color/font/style.
// Page functionality -- while ideally listed in MainForm or ChapterControl, the actual page count functionality will probably be here.
// Test line spacing.
// Cleanup code -- add more regions.
// Allow user to save default font choice.
#endregion TODO
#region DATES
// 10/02/2025 -- Initial writing.
// 10/03/2025 -- Added line spacing.
#endregion DATES

using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace SimpleWritingProgram
{
    public delegate void LeadingChangedEventHandler();
    internal class ChapterTextBox : RichTextBox
    {
        public event LeadingChangedEventHandler LeadingChanged;
        public double Spacing
        {
            get
            {
                return _spacing;
            }
            set
            {
                _spacing = (int)value * 240;
                //_leadingRTF = _SLMULT + _spacing.ToString() + "\\slmult1";
                string currentRtf = Rtf;
                string modifiedRtf = System.Text.RegularExpressions.Regex.Replace(
                    currentRtf,
                    @"(\\pard)(?!\\sl\d+)",
                    $"$1\\sl{_spacing}\\slmult1",
                    System.Text.RegularExpressions.RegexOptions.Multiline
                );
                Rtf = modifiedRtf;
                LeadingChanged?.Invoke();
            }
        }
        private bool _tabbing {  get; set; }
        private const string _SLMULT = @"\sl";
        private int _spacing;
        private string _leadingRTF;
        public ChapterTextBox()
        {
            AcceptsTab = true;
        }
        #region PUBLIC_METHODS
        #endregion PUBLIC_METHODS
        #region PRIVATE_METHODS
        #endregion PRIVATE_METHODS
        #region EVENTS
        protected override void OnFontChanged(EventArgs e)
        {
            base.OnFontChanged(e);
        }
        protected virtual void OnLeadingChanged(object sender, EventArgs e)
        {
            string newLeading;
            double leadingDouble;
            // object should always be the SelectedItem of a ComboBox, but check to make sure
            try
            {
                newLeading = sender.ToString();
            }
            catch (Exception ex)
            {
                Global.ErrorMessage(ex.Message);
                return;
            }
            // extract numeric value from sender
            if (double.TryParse(newLeading, out leadingDouble))
            {
                Spacing = leadingDouble;
            }
            else
            {
                Global.ErrorMessage("Invalid input in OnLeadingChanged().");
            }
        }
        #endregion EVENTS
    }
}
