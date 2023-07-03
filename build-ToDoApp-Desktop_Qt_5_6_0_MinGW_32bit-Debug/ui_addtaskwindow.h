/********************************************************************************
** Form generated from reading UI file 'addtaskwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTASKWINDOW_H
#define UI_ADDTASKWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddTaskWindow
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_Title;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QTextEdit *textEdit_description;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *comboBox_Priority;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QCheckBox *checkBox_Itsdone;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *savebutton;
    QPushButton *Cancel;

    void setupUi(QDialog *AddTaskWindow)
    {
        if (AddTaskWindow->objectName().isEmpty())
            AddTaskWindow->setObjectName(QStringLiteral("AddTaskWindow"));
        AddTaskWindow->resize(756, 571);
        verticalLayout_4 = new QVBoxLayout(AddTaskWindow);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(AddTaskWindow);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit_Title = new QLineEdit(AddTaskWindow);
        lineEdit_Title->setObjectName(QStringLiteral("lineEdit_Title"));

        horizontalLayout->addWidget(lineEdit_Title);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(AddTaskWindow);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        textEdit_description = new QTextEdit(AddTaskWindow);
        textEdit_description->setObjectName(QStringLiteral("textEdit_description"));

        horizontalLayout_2->addWidget(textEdit_description);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(AddTaskWindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(25);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(63, 20));
        label_3->setMaximumSize(QSize(63, 20));

        horizontalLayout_3->addWidget(label_3, 0, Qt::AlignLeft);

        comboBox_Priority = new QComboBox(AddTaskWindow);
        comboBox_Priority->setObjectName(QStringLiteral("comboBox_Priority"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox_Priority->sizePolicy().hasHeightForWidth());
        comboBox_Priority->setSizePolicy(sizePolicy1);
        comboBox_Priority->setMinimumSize(QSize(120, 0));
        comboBox_Priority->setMaximumSize(QSize(120, 50));
        comboBox_Priority->setMouseTracking(true);
        comboBox_Priority->setIconSize(QSize(70, 20));

        horizontalLayout_3->addWidget(comboBox_Priority, 0, Qt::AlignLeft);

        horizontalSpacer_2 = new QSpacerItem(526, 10, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(AddTaskWindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(63, 20));
        label_4->setMaximumSize(QSize(63, 20));

        horizontalLayout_4->addWidget(label_4);

        checkBox_Itsdone = new QCheckBox(AddTaskWindow);
        checkBox_Itsdone->setObjectName(QStringLiteral("checkBox_Itsdone"));
        sizePolicy1.setHeightForWidth(checkBox_Itsdone->sizePolicy().hasHeightForWidth());
        checkBox_Itsdone->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(checkBox_Itsdone, 0, Qt::AlignLeft);

        horizontalSpacer = new QSpacerItem(635, 10, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        savebutton = new QPushButton(AddTaskWindow);
        savebutton->setObjectName(QStringLiteral("savebutton"));

        horizontalLayout_5->addWidget(savebutton);

        Cancel = new QPushButton(AddTaskWindow);
        Cancel->setObjectName(QStringLiteral("Cancel"));

        horizontalLayout_5->addWidget(Cancel);


        verticalLayout_3->addLayout(horizontalLayout_5);


        verticalLayout_4->addLayout(verticalLayout_3);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(lineEdit_Title);
        label_3->setBuddy(comboBox_Priority);
        label_4->setBuddy(checkBox_Itsdone);
#endif // QT_NO_SHORTCUT

        retranslateUi(AddTaskWindow);
        QObject::connect(Cancel, SIGNAL(clicked()), AddTaskWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(AddTaskWindow);
    } // setupUi

    void retranslateUi(QDialog *AddTaskWindow)
    {
        AddTaskWindow->setWindowTitle(QApplication::translate("AddTaskWindow", "Dialog", 0));
        label->setText(QApplication::translate("AddTaskWindow", "Title         ", 0));
        label_2->setText(QApplication::translate("AddTaskWindow", "Description", 0));
        label_3->setText(QApplication::translate("AddTaskWindow", "Priority      ", 0));
        comboBox_Priority->clear();
        comboBox_Priority->insertItems(0, QStringList()
         << QApplication::translate("AddTaskWindow", "High", 0)
         << QApplication::translate("AddTaskWindow", "Average", 0)
         << QApplication::translate("AddTaskWindow", "Low", 0)
        );
#ifndef QT_NO_ACCESSIBILITY
        comboBox_Priority->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        label_4->setText(QApplication::translate("AddTaskWindow", "done?      ", 0));
        checkBox_Itsdone->setText(QString());
        savebutton->setText(QApplication::translate("AddTaskWindow", "Save", 0));
        Cancel->setText(QApplication::translate("AddTaskWindow", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class AddTaskWindow: public Ui_AddTaskWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTASKWINDOW_H
