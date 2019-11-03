#include "scype.h"

Scype::Scype(QWidget *parent) : QWidget(parent)
{
    QMenu* menubar = new QMenu();
    menubar->addAction("Открыть соединение");
    menubar->addAction("Выход");

    QAction* file_action = new QAction;
    file_action->setText("File");
    file_action->setMenu(menubar);

    toolbar = new QToolBar("File");
    toolbar->addAction(file_action);

    list_lbl = new QLabel("Пользователи");
    chat_lbl = new QLabel("Чат с...");

    msg = new QLineEdit;
    msg->setPlaceholderText("Писать сообщение тут...");

    regd_users = new QStringListModel;
    regd_users->setStringList(QStringList() << "Богдан Шамборский" << "Алексей Шишкo"
                              << "Юрий Саяпин" << "Александр Иванов" << "Сергей Жерехов"
                              << "Максим Ревич" << "Руслан Капустин" << "Богдан Хцинский");
    users_list = new QListView;
    users_list->setModel(regd_users);


    selection = new QItemSelectionModel(regd_users);
    users_list->setSelectionModel(selection);

    chat = new QListView;

    send_file = new QPushButton("Отправить файл");
    send_msg = new QPushButton("Отправить сообщение");

    QVBoxLayout * users_list_layo = new QVBoxLayout;
    users_list_layo->addWidget(list_lbl);
    users_list_layo->addWidget(users_list);

    QHBoxLayout * chat_tools = new QHBoxLayout;
    chat_tools->addWidget(send_file);
    chat_tools->addWidget(msg);
    chat_tools->addWidget(send_msg);

    QVBoxLayout * chat_layo = new QVBoxLayout;
    chat_layo->addWidget(chat_lbl);
    chat_layo->addWidget(chat);
    chat_layo->addLayout(chat_tools);

    QHBoxLayout * prog_layo = new QHBoxLayout;
    prog_layo->addLayout(users_list_layo);
    prog_layo->addLayout(chat_layo);

    QVBoxLayout * main = new QVBoxLayout;
    main->addWidget(toolbar); //file
    main->addLayout(prog_layo);

    setLayout(main);

}
