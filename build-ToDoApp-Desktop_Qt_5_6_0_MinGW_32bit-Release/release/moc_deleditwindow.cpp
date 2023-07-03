/****************************************************************************
** Meta object code from reading C++ file 'deleditwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ToDoApp/deleditwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'deleditwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DelEditwindow_t {
    QByteArrayData data[10];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DelEditwindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DelEditwindow_t qt_meta_stringdata_DelEditwindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DelEditwindow"
QT_MOC_LITERAL(1, 14, 13), // "buttonclicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 35), // "on_TaskcomboBox_currentIndexC..."
QT_MOC_LITERAL(4, 65, 4), // "arg1"
QT_MOC_LITERAL(5, 70, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(6, 94, 27), // "on_DeletepushButton_clicked"
QT_MOC_LITERAL(7, 122, 25), // "on_EditpushButton_clicked"
QT_MOC_LITERAL(8, 148, 11), // "receiveData"
QT_MOC_LITERAL(9, 160, 4) // "data"

    },
    "DelEditwindow\0buttonclicked\0\0"
    "on_TaskcomboBox_currentIndexChanged\0"
    "arg1\0on_pushButton_3_clicked\0"
    "on_DeletepushButton_clicked\0"
    "on_EditpushButton_clicked\0receiveData\0"
    "data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DelEditwindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   45,    2, 0x08 /* Private */,
       5,    0,   48,    2, 0x08 /* Private */,
       6,    0,   49,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    1,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void DelEditwindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DelEditwindow *_t = static_cast<DelEditwindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->buttonclicked(); break;
        case 1: _t->on_TaskcomboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_3_clicked(); break;
        case 3: _t->on_DeletepushButton_clicked(); break;
        case 4: _t->on_EditpushButton_clicked(); break;
        case 5: _t->receiveData((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DelEditwindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DelEditwindow::buttonclicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject DelEditwindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DelEditwindow.data,
      qt_meta_data_DelEditwindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DelEditwindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DelEditwindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DelEditwindow.stringdata0))
        return static_cast<void*>(const_cast< DelEditwindow*>(this));
    return QDialog::qt_metacast(_clname);
}

int DelEditwindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void DelEditwindow::buttonclicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
