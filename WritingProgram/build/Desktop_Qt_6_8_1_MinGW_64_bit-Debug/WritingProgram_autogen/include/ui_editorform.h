/********************************************************************************
** Form generated from reading UI file 'editorform.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORFORM_H
#define UI_EDITORFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditorForm
{
public:
    QTextEdit *textEdit;
    QFrame *toolFrame;
    QFontComboBox *fontCombo;
    QDoubleSpinBox *textSpin;
    QFrame *formatFrame;
    QPushButton *boldButton;

    void setupUi(QWidget *EditorForm)
    {
        if (EditorForm->objectName().isEmpty())
            EditorForm->setObjectName("EditorForm");
        EditorForm->resize(668, 519);
        textEdit = new QTextEdit(EditorForm);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(30, 170, 291, 241));
        toolFrame = new QFrame(EditorForm);
        toolFrame->setObjectName("toolFrame");
        toolFrame->setGeometry(QRect(10, 50, 631, 80));
        toolFrame->setFrameShape(QFrame::Shape::StyledPanel);
        toolFrame->setFrameShadow(QFrame::Shadow::Raised);
        fontCombo = new QFontComboBox(toolFrame);
        fontCombo->setObjectName("fontCombo");
        fontCombo->setGeometry(QRect(10, 30, 255, 28));
        fontCombo->setEditable(false);
        fontCombo->setCurrentIndex(172);
        textSpin = new QDoubleSpinBox(toolFrame);
        textSpin->setObjectName("textSpin");
        textSpin->setGeometry(QRect(320, 30, 44, 29));
        formatFrame = new QFrame(EditorForm);
        formatFrame->setObjectName("formatFrame");
        formatFrame->setGeometry(QRect(350, 250, 191, 80));
        formatFrame->setFrameShape(QFrame::Shape::StyledPanel);
        formatFrame->setFrameShadow(QFrame::Shadow::Raised);
        boldButton = new QPushButton(formatFrame);
        boldButton->setObjectName("boldButton");
        boldButton->setGeometry(QRect(20, 30, 31, 29));
        boldButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::FormatTextBold));
        boldButton->setIcon(icon);

        retranslateUi(EditorForm);

        QMetaObject::connectSlotsByName(EditorForm);
    } // setupUi

    void retranslateUi(QWidget *EditorForm)
    {
        EditorForm->setWindowTitle(QCoreApplication::translate("EditorForm", "Form", nullptr));
        boldButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class EditorForm: public Ui_EditorForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORFORM_H
