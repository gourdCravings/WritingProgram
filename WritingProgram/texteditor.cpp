#include "texteditor.h"
#include <QDebug>
#include <QTimer>
#include <QPushButton>

TextEditor::TextEditor(QWidget *parent)
    : QTextEdit(parent)
{
    setupProperties();
    connect(this, &QTextEdit::currentCharFormatChanged, this, &TextEditor::onCharFormatChanged);
    if (autoIndent == true)
    {
        this->append("\t");
    }
}

// retriggered on new line if previous line was empty
// retrigger results in reverting to default values
void TextEditor::changeFont(const QFont &font)
{
    QTextCharFormat newFormat;
    newFormat.setFontFamilies(font.families());
    mergeCurrentCharFormat(newFormat);
    qDebug() << "b";
}

// this gets triggered twice when changing font size for some reason
// also it gets retriggered if the previous line was blank, reverting font size & font family to defaults
void TextEditor::onCharFormatChanged(const QTextCharFormat &format)
{
    QFont font = format.font();
    emit fontChanged(font);
    emit fontSizeChanged(font.pointSizeF());
}

// NOTE:
// "random" formatting failures seem to be related to where the mouse is clicking the button
// look into button hitboxes

void TextEditor::boldClicked()
{
    // make it impossible to write until formatting is applied
    setDisabled(true);
    // toggle formatting
    bold = !bold;
    QTextCharFormat newFormat;
    // ternary operator does not work at all. i could not possibly tell you why
    if (bold == true)
    {
        newFormat.setFontWeight(QFont::Bold);
    } else
    {
        newFormat.setFontWeight(QFont::Normal);
    }
    mergeCurrentCharFormat(newFormat);
    // now that formatting has been applied, allow writing
    setEnabled(true);
    setFocus();
}

void TextEditor::italicsClicked()
{
    // make it impossible to write until formatting is applied
    setDisabled(true);
    // toggle italics
    italics = !italics;
    QTextCharFormat newFormat;
    newFormat.setFontItalic(italics);
    mergeCurrentCharFormat(newFormat);
    // now that formatting has been applied, allow writing
    setEnabled(true);
    setFocus();
}

void TextEditor::underlineClicked()
{
    // make it impossible to write until formatting is applied
    setDisabled(true);
    // toggle underline
    underline = !underline;
    QTextCharFormat newFormat;
    newFormat.setFontUnderline(underline);
    mergeCurrentCharFormat(newFormat);
    // now that formatting has been applied, allow writing
    setEnabled(true);
    setFocus();
}

void TextEditor::strikeClicked()
{
    // make it impossible to write until formatting is applied
    setDisabled(true);
    // toggle strike
    strike = !strike;
    QTextCharFormat newFormat;
    newFormat.setFontStrikeOut(strike);
    mergeCurrentCharFormat(newFormat);
    // now that formatting has been applied, allow writing
    setEnabled(true);
    setFocus();
}

void TextEditor::setLineHeight(int lineHeight)
{
    QTextBlockFormat* blockFormat = new QTextBlockFormat();
    blockFormat->setLineHeight(lineHeight, QTextBlockFormat::ProportionalHeight);
    textCursor().setBlockFormat(*blockFormat);
}
// TODO: once importing is properly implemented, debug non-empty case
void TextEditor::setupProperties()
{
    // check if textbox is empty
    if (document()->isEmpty())
    {
        documentFont.setFamily("Times New Roman");
        documentFont.setPointSizeF(12.00);
        setLineHeight(200);
    } else
    {
        // TODO: write code that checks for the current font and sets it appropriately
    }
    QTextCharFormat newFormat;
    newFormat.setFont(documentFont);
    mergeCurrentCharFormat(newFormat);
}

void TextEditor::keyPressEvent(QKeyEvent *event)
{
    if (autoIndent && (event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter)) {
        QTextCursor cursor = textCursor();

        // move to new block first
        QTextEdit::keyPressEvent(event);

        // insert indent @ beginning of paragraph
        cursor = textCursor();
        cursor.movePosition(QTextCursor::StartOfBlock);
        cursor.insertText("\t");
        setTextCursor(cursor);
    } else {
        QTextEdit::keyPressEvent(event);
    }
}
