// 6/22/2025 -- converting row of formating buttons to a QToolButton


// TODO: have commentButton change icon if there's already a comment on a selected area
// TOOD: only have commentButton enable if you are selecting a line of text
#include "editorform.h"
#include "ui_editorform.h"
#include <QDebug>
#include "spacingdialog.h"

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
    //ui->fontCombo->setFont(defaultFont);
    ui->fontCombo->setCurrentFont(defaultFont);

    // connect the font selector w/ the text editor so that the font changes
    connect(ui->fontCombo, &QFontComboBox::currentFontChanged,
            ui->textEdit, &TextEditor::changeFont);

    // connect textEdit cursor change to update fontCombo selection
    connect(ui->textEdit, &TextEditor::fontChanged,
            ui->fontCombo, &QFontComboBox::setCurrentFont);

    // TODO: make it so that default point size changes when font point size changes --
    // if the user creates an empty line, and then creates a new line after that, font point size reverts to 9
    // connect the text spin w/ the text editor so that the text size changes
    connect(ui->textSpin, &QDoubleSpinBox::valueChanged,
            ui->textEdit, &QTextEdit::setFontPointSize);

    // connect textEdit cursor change to update textSpin value
    connect(ui->textEdit, &TextEditor::fontSizeChanged, ui->textSpin, &QDoubleSpinBox::setValue);
    makeButtons();
}

EditorForm::~EditorForm()
{
    delete ui;
}

void EditorForm::makeButtons()
{
    // STYLEBUTTON
    // create list for styleButton actions
    // TODO: add more styleActions
    const QList <QAction*> styleActions =
        {
            ui->normalAction,
            ui->titleAction,
            ui->headingAction
        };
    ui->styleButton->addActions(styleActions);
    // TODO: change styleButton's text to be whatever the text for the current styleAction is
    // FORMATBUTTON
    // create list for formatButton actions
    const QList <QAction*> formatActions =
        {
            ui->boldAction,
            ui->italicsAction,
            ui->underlineAction,
            ui->strikeAction
        };
    ui->formatButton->addActions(formatActions);
    // connect actions to textEdit
    connect(ui->boldAction, &QAction::triggered,
            ui->textEdit, &TextEditor::boldClicked);
    connect(ui->italicsAction, &QAction::triggered,
            ui->textEdit, &TextEditor::italicsClicked);
    connect(ui->underlineAction, &QAction::triggered,
            ui->textEdit, &TextEditor::underlineClicked);
    connect(ui->strikeAction, &QAction::triggered,
            ui->textEdit, &TextEditor::strikeClicked);
    // ALIGNBUTTON
    // create list for alignButton actions
    const QList <QAction*> alignActions =
        {
            ui->alignLeftAction,
            ui->alignCenterAction,
            ui->alignJustifyAction,
            ui->alignRightAction
        };
    // fix justify's weird icon problem
    // ui->alignJustifyAction->setIconText(QString("a"));
    ui->alignButton->addActions(alignActions);
    // BULLETBUTTON
}

void EditorForm::on_spacingButton_clicked()
{
    SpacingDialog spaceDialog(this);
    if (spaceDialog.exec() == QDialog::Accepted)
    {
        ui->textEdit->setFocus();
        ui->textEdit->setLineHeight(spaceDialog.spaceValue * 100);
    }
}

