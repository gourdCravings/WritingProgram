// debugging notes:
// when selecting text, if you change the size before changing the font,
// upon the font being changed, size will revert to 9. unsure why
// if i had to guess, qfont *also* stores the size, not just the font
// so when the font is reset, it uses the default value

#include "editorform.h"
#include "ui_editorform.h"
#include <QDebug>

EditorForm::EditorForm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::EditorForm)
{
    ui->setupUi(this);

    // set textSpin to current size
    QTextCharFormat defaultFormat = ui->textEdit->currentCharFormat();
    QFont defaultFont = defaultFormat.font();
    qreal defaultSize = defaultFont.pointSizeF();
    ui->textSpin->setValue(defaultSize);
    // set fontCombo to current font
    ui->fontCombo->setFont(defaultFont);

    // connect the font selector w/ the text editor so that the font changes
    // note: when making TextEditor class, create a signal for TextEditor that
    // handles the logic in here
    connect(ui->fontCombo, &QFontComboBox::currentFontChanged, this, [this](const QFont &font) {
        QTextCharFormat format;
        format.setFontFamilies(font.families());
        // Preserve current point size
        format.setFontPointSize(ui->textSpin->value());

        ui->textEdit->mergeCurrentCharFormat(format);
    });

    // connect textEdit cursor change to update fontCombo selection
    // note: when making TextEditor class, create a signal for TextEditor that
    // handles the logic in here
    // note: this runs literally every single time something is typed. that is... horribly ineffective
    connect(ui->textEdit, &QTextEdit::cursorPositionChanged, this, [this]() {
        QTextCharFormat format = ui->textEdit->currentCharFormat();
        QFont currentFont = format.font();
        if (currentFont != ui->fontCombo->currentFont())
        {
            ui->fontCombo->setCurrentFont(currentFont);
        }
    });

    // connect the text spin w/ the text editor so that the text size changes
    connect(ui->textSpin, &QDoubleSpinBox::valueChanged,
            ui->textEdit, &QTextEdit::setFontPointSize);

    // connect textEdit cursor change to update textSpin value
    // note: when making TextEditor class, create a signal for TextEditor that
    // handles the logic in here
    // note: this runs literally every single time something is typed. that is... horribly ineffective
    connect(ui->textEdit, &QTextEdit::cursorPositionChanged, this, [this]() {
        QTextCharFormat format = ui->textEdit->currentCharFormat();
        QFont currentFont = format.font();
        qreal currentSize = currentFont.pointSizeF();
        if (currentSize != ui->textSpin->value())
        {
            ui->textSpin->setValue(currentSize);
        }
    });

    // connect formatting buttons to textEdit
    //connect(ui->boldButton, &QPushButton::clicked, )
}

EditorForm::~EditorForm()
{
    delete ui;
}
