/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEditManager;
    QPushButton *pushButtonExploreFileMan;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonAddManager;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonRenameManager;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonRemoveManager;
    QSpacerItem *verticalSpacer;
    QPlainTextEdit *plainTextEditManager;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEditObserver;
    QPushButton *pushButtonExploreFileObs;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonAddObserver;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonRenameObserver;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonRemoveObserver;
    QSpacerItem *verticalSpacer_2;
    QPlainTextEdit *plainTextEditObserver;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(674, 524);
        horizontalLayout_5 = new QHBoxLayout(Widget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lineEditManager = new QLineEdit(Widget);
        lineEditManager->setObjectName(QString::fromUtf8("lineEditManager"));

        horizontalLayout_3->addWidget(lineEditManager);

        pushButtonExploreFileMan = new QPushButton(Widget);
        pushButtonExploreFileMan->setObjectName(QString::fromUtf8("pushButtonExploreFileMan"));

        horizontalLayout_3->addWidget(pushButtonExploreFileMan);

        horizontalLayout_3->setStretch(0, 2);
        horizontalLayout_3->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButtonAddManager = new QPushButton(Widget);
        pushButtonAddManager->setObjectName(QString::fromUtf8("pushButtonAddManager"));

        horizontalLayout->addWidget(pushButtonAddManager);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButtonRenameManager = new QPushButton(Widget);
        pushButtonRenameManager->setObjectName(QString::fromUtf8("pushButtonRenameManager"));

        horizontalLayout->addWidget(pushButtonRenameManager);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButtonRemoveManager = new QPushButton(Widget);
        pushButtonRemoveManager->setObjectName(QString::fromUtf8("pushButtonRemoveManager"));

        horizontalLayout->addWidget(pushButtonRemoveManager);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(4, 1);

        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        plainTextEditManager = new QPlainTextEdit(Widget);
        plainTextEditManager->setObjectName(QString::fromUtf8("plainTextEditManager"));

        verticalLayout->addWidget(plainTextEditManager);

        verticalLayout->setStretch(4, 2);

        horizontalLayout_5->addLayout(verticalLayout);

        horizontalSpacer_5 = new QSpacerItem(22, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        lineEditObserver = new QLineEdit(Widget);
        lineEditObserver->setObjectName(QString::fromUtf8("lineEditObserver"));

        horizontalLayout_4->addWidget(lineEditObserver);

        pushButtonExploreFileObs = new QPushButton(Widget);
        pushButtonExploreFileObs->setObjectName(QString::fromUtf8("pushButtonExploreFileObs"));

        horizontalLayout_4->addWidget(pushButtonExploreFileObs);

        horizontalLayout_4->setStretch(0, 2);
        horizontalLayout_4->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButtonAddObserver = new QPushButton(Widget);
        pushButtonAddObserver->setObjectName(QString::fromUtf8("pushButtonAddObserver"));

        horizontalLayout_2->addWidget(pushButtonAddObserver);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButtonRenameObserver = new QPushButton(Widget);
        pushButtonRenameObserver->setObjectName(QString::fromUtf8("pushButtonRenameObserver"));

        horizontalLayout_2->addWidget(pushButtonRenameObserver);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        pushButtonRemoveObserver = new QPushButton(Widget);
        pushButtonRemoveObserver->setObjectName(QString::fromUtf8("pushButtonRemoveObserver"));

        horizontalLayout_2->addWidget(pushButtonRemoveObserver);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(2, 1);
        horizontalLayout_2->setStretch(4, 1);

        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        plainTextEditObserver = new QPlainTextEdit(Widget);
        plainTextEditObserver->setObjectName(QString::fromUtf8("plainTextEditObserver"));

        verticalLayout_2->addWidget(plainTextEditObserver);

        verticalLayout_2->setStretch(4, 2);

        horizontalLayout_5->addLayout(verticalLayout_2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\320\234\320\265\320\275\320\265\320\264\320\266\320\265\321\200", nullptr));
        pushButtonExploreFileMan->setText(QCoreApplication::translate("Widget", "\320\236\320\261\320\267\320\276\321\200", nullptr));
        pushButtonAddManager->setText(QCoreApplication::translate("Widget", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButtonRenameManager->setText(QCoreApplication::translate("Widget", "\320\237\320\265\321\200\320\265\320\270\320\274\320\265\320\275\320\276\320\262\320\260\321\202\321\214", nullptr));
        pushButtonRemoveManager->setText(QCoreApplication::translate("Widget", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\320\235\320\260\320\261\320\273\321\216\320\264\320\260\321\202\320\265\320\273\321\214", nullptr));
        pushButtonExploreFileObs->setText(QCoreApplication::translate("Widget", "\320\236\320\261\320\267\320\276\321\200", nullptr));
        pushButtonAddObserver->setText(QCoreApplication::translate("Widget", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButtonRenameObserver->setText(QCoreApplication::translate("Widget", "\320\237\320\265\321\200\320\265\320\270\320\274\320\265\320\275\320\276\320\262\320\260\321\202\321\214", nullptr));
        pushButtonRemoveObserver->setText(QCoreApplication::translate("Widget", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
