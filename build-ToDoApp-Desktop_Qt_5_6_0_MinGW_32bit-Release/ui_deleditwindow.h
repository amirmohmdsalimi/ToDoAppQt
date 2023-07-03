/********************************************************************************
** Form generated from reading UI file 'deleditwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELEDITWINDOW_H
#define UI_DELEDITWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DelEditwindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *TaskcomboBox;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *TasklineEdit;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QTextEdit *DesctextEdit;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_5;
    QCheckBox *ItsdonecheckBox;
    QFrame *line;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *PrioritycomboBox;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLabel *Datelabel;
    QFrame *line_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLabel *DateofEditlabel;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *EditpushButton;
    QPushButton *DeletepushButton;
    QPushButton *pushButton_3;

    void setupUi(QDialog *DelEditwindow)
    {
        if (DelEditwindow->objectName().isEmpty())
            DelEditwindow->setObjectName(QStringLiteral("DelEditwindow"));
        DelEditwindow->resize(605, 521);
        verticalLayout_2 = new QVBoxLayout(DelEditwindow);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(DelEditwindow);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(62, 0));

        horizontalLayout->addWidget(label);

        TaskcomboBox = new QComboBox(DelEditwindow);
        TaskcomboBox->setObjectName(QStringLiteral("TaskcomboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(TaskcomboBox->sizePolicy().hasHeightForWidth());
        TaskcomboBox->setSizePolicy(sizePolicy1);
        TaskcomboBox->setMinimumSize(QSize(50, 0));

        horizontalLayout->addWidget(TaskcomboBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(DelEditwindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(50);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setMinimumSize(QSize(62, 0));

        horizontalLayout_2->addWidget(label_2);

        TasklineEdit = new QLineEdit(DelEditwindow);
        TasklineEdit->setObjectName(QStringLiteral("TasklineEdit"));

        horizontalLayout_2->addWidget(TasklineEdit);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(DelEditwindow);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        DesctextEdit = new QTextEdit(DelEditwindow);
        DesctextEdit->setObjectName(QStringLiteral("DesctextEdit"));

        horizontalLayout_3->addWidget(DesctextEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_8->setContentsMargins(0, -1, -1, -1);
        label_5 = new QLabel(DelEditwindow);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(17);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy3);
        label_5->setMinimumSize(QSize(17, 0));
        label_5->setMaximumSize(QSize(63, 16777215));

        horizontalLayout_8->addWidget(label_5);

        ItsdonecheckBox = new QCheckBox(DelEditwindow);
        ItsdonecheckBox->setObjectName(QStringLiteral("ItsdonecheckBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(ItsdonecheckBox->sizePolicy().hasHeightForWidth());
        ItsdonecheckBox->setSizePolicy(sizePolicy4);
        ItsdonecheckBox->setMinimumSize(QSize(15, 0));
        ItsdonecheckBox->setMaximumSize(QSize(17, 20));

        horizontalLayout_8->addWidget(ItsdonecheckBox);


        horizontalLayout_9->addLayout(horizontalLayout_8);

        line = new QFrame(DelEditwindow);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_9->addWidget(line);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(DelEditwindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(0, 0));

        horizontalLayout_4->addWidget(label_4, 0, Qt::AlignLeft);

        PrioritycomboBox = new QComboBox(DelEditwindow);
        PrioritycomboBox->setObjectName(QStringLiteral("PrioritycomboBox"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(PrioritycomboBox->sizePolicy().hasHeightForWidth());
        PrioritycomboBox->setSizePolicy(sizePolicy5);
        PrioritycomboBox->setMinimumSize(QSize(0, 0));

        horizontalLayout_4->addWidget(PrioritycomboBox, 0, Qt::AlignLeft);


        horizontalLayout_9->addLayout(horizontalLayout_4);

        line_2 = new QFrame(DelEditwindow);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_9->addWidget(line_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_7 = new QLabel(DelEditwindow);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setMinimumSize(QSize(1, 0));

        horizontalLayout_7->addWidget(label_7, 0, Qt::AlignLeft);

        Datelabel = new QLabel(DelEditwindow);
        Datelabel->setObjectName(QStringLiteral("Datelabel"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(Datelabel->sizePolicy().hasHeightForWidth());
        Datelabel->setSizePolicy(sizePolicy6);
        Datelabel->setMinimumSize(QSize(1, 0));

        horizontalLayout_7->addWidget(Datelabel, 0, Qt::AlignLeft);


        horizontalLayout_9->addLayout(horizontalLayout_7);

        line_3 = new QFrame(DelEditwindow);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_9->addWidget(line_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_6 = new QLabel(DelEditwindow);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setMinimumSize(QSize(8, 0));

        horizontalLayout_5->addWidget(label_6, 0, Qt::AlignLeft);

        DateofEditlabel = new QLabel(DelEditwindow);
        DateofEditlabel->setObjectName(QStringLiteral("DateofEditlabel"));
        sizePolicy.setHeightForWidth(DateofEditlabel->sizePolicy().hasHeightForWidth());
        DateofEditlabel->setSizePolicy(sizePolicy);
        DateofEditlabel->setMinimumSize(QSize(0, 0));

        horizontalLayout_5->addWidget(DateofEditlabel, 0, Qt::AlignLeft);


        horizontalLayout_9->addLayout(horizontalLayout_5);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        EditpushButton = new QPushButton(DelEditwindow);
        EditpushButton->setObjectName(QStringLiteral("EditpushButton"));

        horizontalLayout_6->addWidget(EditpushButton);

        DeletepushButton = new QPushButton(DelEditwindow);
        DeletepushButton->setObjectName(QStringLiteral("DeletepushButton"));

        horizontalLayout_6->addWidget(DeletepushButton);

        pushButton_3 = new QPushButton(DelEditwindow);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_6->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout_6);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(DelEditwindow);

        QMetaObject::connectSlotsByName(DelEditwindow);
    } // setupUi

    void retranslateUi(QDialog *DelEditwindow)
    {
        DelEditwindow->setWindowTitle(QApplication::translate("DelEditwindow", "Dialog", 0));
        label->setText(QApplication::translate("DelEditwindow", "Task", 0));
        label_2->setText(QApplication::translate("DelEditwindow", "Title", 0));
        label_3->setText(QApplication::translate("DelEditwindow", "Description", 0));
        label_5->setText(QApplication::translate("DelEditwindow", "Done?", 0));
        ItsdonecheckBox->setText(QString());
        label_4->setText(QApplication::translate("DelEditwindow", "Priority", 0));
        PrioritycomboBox->clear();
        PrioritycomboBox->insertItems(0, QStringList()
         << QApplication::translate("DelEditwindow", "High", 0)
         << QApplication::translate("DelEditwindow", "Average", 0)
         << QApplication::translate("DelEditwindow", "Low", 0)
        );
        label_7->setText(QApplication::translate("DelEditwindow", "Date:", 0));
        Datelabel->setText(QApplication::translate("DelEditwindow", "None", 0));
        label_6->setText(QApplication::translate("DelEditwindow", "Date fo Edit:", 0));
        DateofEditlabel->setText(QApplication::translate("DelEditwindow", "None", 0));
        EditpushButton->setText(QApplication::translate("DelEditwindow", "Edit", 0));
        DeletepushButton->setText(QApplication::translate("DelEditwindow", "Delete", 0));
        pushButton_3->setText(QApplication::translate("DelEditwindow", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class DelEditwindow: public Ui_DelEditwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELEDITWINDOW_H
