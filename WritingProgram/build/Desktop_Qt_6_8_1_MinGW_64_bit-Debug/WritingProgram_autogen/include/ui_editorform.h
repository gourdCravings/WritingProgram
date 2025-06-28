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
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "texteditor.h"

QT_BEGIN_NAMESPACE

class Ui_EditorForm
{
public:
    QAction *boldAction;
    QAction *italicsAction;
    QAction *underlineAction;
    QAction *strikeAction;
    QAction *alignLeftAction;
    QAction *alignCenterAction;
    QAction *alignJustifyAction;
    QAction *alignRightAction;
    QAction *normalAction;
    QAction *titleAction;
    QAction *headingAction;
    QVBoxLayout *verticalLayout;
    QFrame *toolFrame;
    QHBoxLayout *horizontalLayout_5;
    QWidget *fontWidget;
    QHBoxLayout *horizontalLayout;
    QToolButton *styleButton;
    QFontComboBox *fontCombo;
    QDoubleSpinBox *textSpin;
    QWidget *formatWidget;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *formatButton;
    QPushButton *colorButton;
    QPushButton *highlightButton;
    QWidget *paraWidget;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *alignButton;
    QToolButton *bulletButton;
    QPushButton *spacingButton;
    QWidget *indentWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *plusIndentButton;
    QPushButton *minusIndentButton;
    QPushButton *commentButton;
    TextEditor *textEdit;

    void setupUi(QWidget *EditorForm)
    {
        if (EditorForm->objectName().isEmpty())
            EditorForm->setObjectName("EditorForm");
        EditorForm->resize(1022, 688);
        boldAction = new QAction(EditorForm);
        boldAction->setObjectName("boldAction");
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::FormatTextBold));
        boldAction->setIcon(icon);
        boldAction->setMenuRole(QAction::MenuRole::NoRole);
        italicsAction = new QAction(EditorForm);
        italicsAction->setObjectName("italicsAction");
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::FormatTextItalic));
        italicsAction->setIcon(icon1);
        italicsAction->setMenuRole(QAction::MenuRole::NoRole);
        underlineAction = new QAction(EditorForm);
        underlineAction->setObjectName("underlineAction");
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::FormatTextUnderline));
        underlineAction->setIcon(icon2);
        underlineAction->setMenuRole(QAction::MenuRole::NoRole);
        strikeAction = new QAction(EditorForm);
        strikeAction->setObjectName("strikeAction");
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::FormatTextStrikethrough));
        strikeAction->setIcon(icon3);
        strikeAction->setMenuRole(QAction::MenuRole::NoRole);
        alignLeftAction = new QAction(EditorForm);
        alignLeftAction->setObjectName("alignLeftAction");
        QIcon icon4(QIcon::fromTheme(QIcon::ThemeIcon::FormatJustifyLeft));
        alignLeftAction->setIcon(icon4);
        alignLeftAction->setMenuRole(QAction::MenuRole::NoRole);
        alignCenterAction = new QAction(EditorForm);
        alignCenterAction->setObjectName("alignCenterAction");
        QIcon icon5(QIcon::fromTheme(QIcon::ThemeIcon::FormatJustifyCenter));
        alignCenterAction->setIcon(icon5);
        alignCenterAction->setMenuRole(QAction::MenuRole::NoRole);
        alignJustifyAction = new QAction(EditorForm);
        alignJustifyAction->setObjectName("alignJustifyAction");
        alignJustifyAction->setMenuRole(QAction::MenuRole::NoRole);
        alignRightAction = new QAction(EditorForm);
        alignRightAction->setObjectName("alignRightAction");
        QIcon icon6(QIcon::fromTheme(QIcon::ThemeIcon::FormatJustifyRight));
        alignRightAction->setIcon(icon6);
        alignRightAction->setMenuRole(QAction::MenuRole::NoRole);
        normalAction = new QAction(EditorForm);
        normalAction->setObjectName("normalAction");
        normalAction->setMenuRole(QAction::MenuRole::NoRole);
        titleAction = new QAction(EditorForm);
        titleAction->setObjectName("titleAction");
        titleAction->setMenuRole(QAction::MenuRole::NoRole);
        headingAction = new QAction(EditorForm);
        headingAction->setObjectName("headingAction");
        headingAction->setMenuRole(QAction::MenuRole::NoRole);
        verticalLayout = new QVBoxLayout(EditorForm);
        verticalLayout->setObjectName("verticalLayout");
        toolFrame = new QFrame(EditorForm);
        toolFrame->setObjectName("toolFrame");
        toolFrame->setFrameShape(QFrame::Shape::StyledPanel);
        toolFrame->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_5 = new QHBoxLayout(toolFrame);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        fontWidget = new QWidget(toolFrame);
        fontWidget->setObjectName("fontWidget");
        horizontalLayout = new QHBoxLayout(fontWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        styleButton = new QToolButton(fontWidget);
        styleButton->setObjectName("styleButton");
        styleButton->setPopupMode(QToolButton::ToolButtonPopupMode::InstantPopup);
        styleButton->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextOnly);

        horizontalLayout->addWidget(styleButton);

        fontCombo = new QFontComboBox(fontWidget);
        fontCombo->setObjectName("fontCombo");
        fontCombo->setEditable(false);
        fontCombo->setCurrentIndex(172);

        horizontalLayout->addWidget(fontCombo);

        textSpin = new QDoubleSpinBox(fontWidget);
        textSpin->setObjectName("textSpin");

        horizontalLayout->addWidget(textSpin);


        horizontalLayout_5->addWidget(fontWidget);

        formatWidget = new QWidget(toolFrame);
        formatWidget->setObjectName("formatWidget");
        horizontalLayout_2 = new QHBoxLayout(formatWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        formatButton = new QToolButton(formatWidget);
        formatButton->setObjectName("formatButton");
        formatButton->setIcon(icon);
        formatButton->setPopupMode(QToolButton::ToolButtonPopupMode::InstantPopup);

        horizontalLayout_2->addWidget(formatButton);

        colorButton = new QPushButton(formatWidget);
        colorButton->setObjectName("colorButton");
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        colorButton->setFont(font);
        QIcon icon7(QIcon::fromTheme(QString::fromUtf8("start-here")));
        colorButton->setIcon(icon7);

        horizontalLayout_2->addWidget(colorButton);

        highlightButton = new QPushButton(formatWidget);
        highlightButton->setObjectName("highlightButton");
        QIcon icon8(QIcon::fromTheme(QIcon::ThemeIcon::WeatherClear));
        highlightButton->setIcon(icon8);

        horizontalLayout_2->addWidget(highlightButton);


        horizontalLayout_5->addWidget(formatWidget);

        paraWidget = new QWidget(toolFrame);
        paraWidget->setObjectName("paraWidget");
        horizontalLayout_4 = new QHBoxLayout(paraWidget);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        alignButton = new QToolButton(paraWidget);
        alignButton->setObjectName("alignButton");
        alignButton->setIcon(icon4);
        alignButton->setPopupMode(QToolButton::ToolButtonPopupMode::InstantPopup);

        horizontalLayout_4->addWidget(alignButton);

        bulletButton = new QToolButton(paraWidget);
        bulletButton->setObjectName("bulletButton");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Wingdings")});
        bulletButton->setFont(font1);
        QIcon icon9(QIcon::fromTheme(QString::fromUtf8("user-bookmarks")));
        bulletButton->setIcon(icon9);
        bulletButton->setPopupMode(QToolButton::ToolButtonPopupMode::InstantPopup);

        horizontalLayout_4->addWidget(bulletButton);

        spacingButton = new QPushButton(paraWidget);
        spacingButton->setObjectName("spacingButton");
        QIcon icon10(QIcon::fromTheme(QIcon::ThemeIcon::ViewFullscreen));
        spacingButton->setIcon(icon10);

        horizontalLayout_4->addWidget(spacingButton);

        indentWidget = new QWidget(paraWidget);
        indentWidget->setObjectName("indentWidget");
        horizontalLayout_3 = new QHBoxLayout(indentWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        plusIndentButton = new QPushButton(indentWidget);
        plusIndentButton->setObjectName("plusIndentButton");
        QIcon icon11(QIcon::fromTheme(QIcon::ThemeIcon::GoNext));
        plusIndentButton->setIcon(icon11);

        horizontalLayout_3->addWidget(plusIndentButton);

        minusIndentButton = new QPushButton(indentWidget);
        minusIndentButton->setObjectName("minusIndentButton");
        QIcon icon12(QIcon::fromTheme(QIcon::ThemeIcon::GoPrevious));
        minusIndentButton->setIcon(icon12);

        horizontalLayout_3->addWidget(minusIndentButton);


        horizontalLayout_4->addWidget(indentWidget);


        horizontalLayout_5->addWidget(paraWidget);

        commentButton = new QPushButton(toolFrame);
        commentButton->setObjectName("commentButton");
        QIcon icon13(QIcon::fromTheme(QString::fromUtf8("emblem-mail")));
        commentButton->setIcon(icon13);

        horizontalLayout_5->addWidget(commentButton);


        verticalLayout->addWidget(toolFrame);

        textEdit = new TextEditor(EditorForm);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);


        retranslateUi(EditorForm);

        QMetaObject::connectSlotsByName(EditorForm);
    } // setupUi

    void retranslateUi(QWidget *EditorForm)
    {
        EditorForm->setWindowTitle(QCoreApplication::translate("EditorForm", "Form", nullptr));
        boldAction->setText(QCoreApplication::translate("EditorForm", "bold", nullptr));
#if QT_CONFIG(tooltip)
        boldAction->setToolTip(QCoreApplication::translate("EditorForm", "bold", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        boldAction->setShortcut(QCoreApplication::translate("EditorForm", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        italicsAction->setText(QCoreApplication::translate("EditorForm", "italics", nullptr));
#if QT_CONFIG(tooltip)
        italicsAction->setToolTip(QCoreApplication::translate("EditorForm", "italics", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        italicsAction->setShortcut(QCoreApplication::translate("EditorForm", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        underlineAction->setText(QCoreApplication::translate("EditorForm", "underline", nullptr));
#if QT_CONFIG(tooltip)
        underlineAction->setToolTip(QCoreApplication::translate("EditorForm", "underline", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        underlineAction->setShortcut(QCoreApplication::translate("EditorForm", "Ctrl+U", nullptr));
#endif // QT_CONFIG(shortcut)
        strikeAction->setText(QCoreApplication::translate("EditorForm", "strikethrough", nullptr));
#if QT_CONFIG(tooltip)
        strikeAction->setToolTip(QCoreApplication::translate("EditorForm", "strikethrough", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        strikeAction->setShortcut(QCoreApplication::translate("EditorForm", "Alt+Shift+5", nullptr));
#endif // QT_CONFIG(shortcut)
        alignLeftAction->setText(QCoreApplication::translate("EditorForm", "align left", nullptr));
#if QT_CONFIG(tooltip)
        alignLeftAction->setToolTip(QCoreApplication::translate("EditorForm", "align left", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        alignLeftAction->setShortcut(QCoreApplication::translate("EditorForm", "Ctrl+Shift+L, Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        alignCenterAction->setText(QCoreApplication::translate("EditorForm", "align center", nullptr));
#if QT_CONFIG(tooltip)
        alignCenterAction->setToolTip(QCoreApplication::translate("EditorForm", "align center", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        alignCenterAction->setShortcut(QCoreApplication::translate("EditorForm", "Ctrl+Shift+C", nullptr));
#endif // QT_CONFIG(shortcut)
        alignJustifyAction->setText(QCoreApplication::translate("EditorForm", "justify text", nullptr));
#if QT_CONFIG(tooltip)
        alignJustifyAction->setToolTip(QCoreApplication::translate("EditorForm", "justify text", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        alignJustifyAction->setShortcut(QCoreApplication::translate("EditorForm", "Ctrl+J", nullptr));
#endif // QT_CONFIG(shortcut)
        alignRightAction->setText(QCoreApplication::translate("EditorForm", "align right", nullptr));
#if QT_CONFIG(tooltip)
        alignRightAction->setToolTip(QCoreApplication::translate("EditorForm", "align right", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        alignRightAction->setShortcut(QCoreApplication::translate("EditorForm", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        normalAction->setText(QCoreApplication::translate("EditorForm", "Normal Text", nullptr));
        titleAction->setText(QCoreApplication::translate("EditorForm", "Title", nullptr));
        headingAction->setText(QCoreApplication::translate("EditorForm", "Heading", nullptr));
        styleButton->setText(QString());
        formatButton->setText(QString());
        colorButton->setText(QString());
        highlightButton->setText(QString());
        alignButton->setText(QString());
        bulletButton->setText(QString());
        spacingButton->setText(QString());
        plusIndentButton->setText(QString());
        minusIndentButton->setText(QString());
        commentButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class EditorForm: public Ui_EditorForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORFORM_H
