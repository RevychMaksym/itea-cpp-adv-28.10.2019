#pragma once

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QToolBar>
#include <QMenu>
#include <QStringListModel>
#include <QListView>
#include <QStringList>
#include <QItemSelection>
#include <QComboBox>
#include <QList>
#include <QListWidget>

class Scype : public QWidget
{
    Q_OBJECT
public:
    explicit Scype(QWidget * parent = nullptr);
    ~Scype() = default;

private:
    QToolBar* toolbar;
    QStringListModel* file_list;
    QMenu* menubar;
    QLabel* list_lbl;
    QLabel* chat_lbl;

    QStringListModel* regd_users;
    QListView* users_list;
    QItemSelectionModel* selection;

    QLineEdit* msg;

    QListView* chat;

    QPushButton* send_file;
    QPushButton* send_msg;
};
