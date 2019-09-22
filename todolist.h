#ifndef TODOLIST_H
#define TODOLIST_H

#include <QMainWindow>
#include <QListView>
#include <QStringListModel>

class CToDoList : public QMainWindow
{
    Q_OBJECT
public:
    CToDoList();

protected slots:
    void onAdd();
    void onRemove();

private:
    QListView* m_pwPending = nullptr;
    QListView* m_pwCompleted = nullptr;

    QAction* m_pActAdd = nullptr;
    QAction* m_pActRemove = nullptr;
};


#endif // TODOLIST_H
