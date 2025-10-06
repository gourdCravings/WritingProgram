// Global variables.
#region DATES
// 10/03/2025 -- Initial writing.
#endregion DATES
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace SimpleWritingProgram
{
    public static class Global
    {
        public static void ErrorMessage(string message, string title = "Error")
        {
            MessageBox.Show(message, title, MessageBoxButtons.OK, MessageBoxIcon.Error);
        }
    }
}
