#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QObject>
#include <QTextEdit>
#include <QWidget>

class Notepad : public QTextEdit
{
    Q_OBJECT
public:
    Notepad();
};

#endif // NOTEPAD_H
