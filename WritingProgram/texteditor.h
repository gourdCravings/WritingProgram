#ifndef TEXTEDITOR_H
#define TEXTEDITOR_H

#include <QObject>
#include <QTextEdit>
#include <QWidget>
#include <QKeyEvent>

class TextEditor : public QTextEdit
{
    Q_OBJECT
public:
    explicit TextEditor(QWidget *parent = nullptr);
    void setLineHeight(int lineHeight);

protected:
    void keyPressEvent(QKeyEvent *event) override;

private:
    // properties, bool
    bool bold = false;
    bool italics = false;
    bool underline = false;
    bool strike = false;
    bool autoIndent = true;
    // properties, text
    QFont documentFont;
    qreal pointSize;
    // methods
    void selectText();
    void setupProperties();

signals:
    void fontChanged(const QFont &font);
    void fontSizeChanged(qreal size);
public slots:
    void changeFont(const QFont &font);
    // TODO: see if there's a way to merge these into one method -- 99% of the code is the same
    // possibly look into finding out if there's a way to know what button sends a signal?
    void boldClicked();
    void italicsClicked();
    void underlineClicked();
    void strikeClicked();
private slots:
    void onCharFormatChanged(const QTextCharFormat &format);
};

#endif // TEXTEDITOR_H
