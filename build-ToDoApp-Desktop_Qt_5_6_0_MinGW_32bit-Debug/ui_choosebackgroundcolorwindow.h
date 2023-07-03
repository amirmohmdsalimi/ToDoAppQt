/********************************************************************************
** Form generated from reading UI file 'choosebackgroundcolorwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEBACKGROUNDCOLORWINDOW_H
#define UI_CHOOSEBACKGROUNDCOLORWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ChooseBackgroundColorWindow
{
public:
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QRadioButton *GreenRadioButton;
    QRadioButton *BlueRadioButton;
    QRadioButton *GrayRadioButton;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *PurpleRadioButton;
    QRadioButton *PinkRadioButton;
    QRadioButton *BrownRadioButton;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *ApplybgColor;
    QPushButton *CancelbgColor;

    void setupUi(QDialog *ChooseBackgroundColorWindow)
    {
        if (ChooseBackgroundColorWindow->objectName().isEmpty())
            ChooseBackgroundColorWindow->setObjectName(QStringLiteral("ChooseBackgroundColorWindow"));
        ChooseBackgroundColorWindow->resize(382, 318);
        verticalLayout_5 = new QVBoxLayout(ChooseBackgroundColorWindow);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox = new QGroupBox(ChooseBackgroundColorWindow);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        GreenRadioButton = new QRadioButton(groupBox);
        GreenRadioButton->setObjectName(QStringLiteral("GreenRadioButton"));

        verticalLayout->addWidget(GreenRadioButton);

        BlueRadioButton = new QRadioButton(groupBox);
        BlueRadioButton->setObjectName(QStringLiteral("BlueRadioButton"));

        verticalLayout->addWidget(BlueRadioButton);

        GrayRadioButton = new QRadioButton(groupBox);
        GrayRadioButton->setObjectName(QStringLiteral("GrayRadioButton"));

        verticalLayout->addWidget(GrayRadioButton);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        PurpleRadioButton = new QRadioButton(groupBox);
        PurpleRadioButton->setObjectName(QStringLiteral("PurpleRadioButton"));

        verticalLayout_2->addWidget(PurpleRadioButton);

        PinkRadioButton = new QRadioButton(groupBox);
        PinkRadioButton->setObjectName(QStringLiteral("PinkRadioButton"));

        verticalLayout_2->addWidget(PinkRadioButton);

        BrownRadioButton = new QRadioButton(groupBox);
        BrownRadioButton->setObjectName(QStringLiteral("BrownRadioButton"));

        verticalLayout_2->addWidget(BrownRadioButton);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(75, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        ApplybgColor = new QPushButton(groupBox);
        ApplybgColor->setObjectName(QStringLiteral("ApplybgColor"));

        horizontalLayout_2->addWidget(ApplybgColor);

        CancelbgColor = new QPushButton(groupBox);
        CancelbgColor->setObjectName(QStringLiteral("CancelbgColor"));

        horizontalLayout_2->addWidget(CancelbgColor);


        verticalLayout_4->addLayout(horizontalLayout_2);


        verticalLayout_3->addWidget(groupBox);


        verticalLayout_5->addLayout(verticalLayout_3);

        GreenRadioButton->raise();
        BlueRadioButton->raise();
        GrayRadioButton->raise();
        groupBox->raise();

        retranslateUi(ChooseBackgroundColorWindow);

        QMetaObject::connectSlotsByName(ChooseBackgroundColorWindow);
    } // setupUi

    void retranslateUi(QDialog *ChooseBackgroundColorWindow)
    {
        ChooseBackgroundColorWindow->setWindowTitle(QApplication::translate("ChooseBackgroundColorWindow", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("ChooseBackgroundColorWindow", "GroupBox", 0));
        GreenRadioButton->setText(QApplication::translate("ChooseBackgroundColorWindow", "Green", 0));
        BlueRadioButton->setText(QApplication::translate("ChooseBackgroundColorWindow", "Blue", 0));
        GrayRadioButton->setText(QApplication::translate("ChooseBackgroundColorWindow", "Gray", 0));
        PurpleRadioButton->setText(QApplication::translate("ChooseBackgroundColorWindow", "Purple", 0));
        PinkRadioButton->setText(QApplication::translate("ChooseBackgroundColorWindow", "Pink", 0));
        BrownRadioButton->setText(QApplication::translate("ChooseBackgroundColorWindow", "Brown", 0));
        ApplybgColor->setText(QApplication::translate("ChooseBackgroundColorWindow", "Apply", 0));
        CancelbgColor->setText(QApplication::translate("ChooseBackgroundColorWindow", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class ChooseBackgroundColorWindow: public Ui_ChooseBackgroundColorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEBACKGROUNDCOLORWINDOW_H
