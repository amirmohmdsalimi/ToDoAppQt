/****************************************************************************
** Meta object code from reading C++ file 'addtaskwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ToDoApp/addtaskwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addtaskwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AddTaskWindow_t {
    QByteArrayData data[7];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddTaskWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddTaskWindow_t qt_meta_stringdata_AddTaskWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "AddTaskWindow"
QT_MOC_LITERAL(1, 14, 17), // "savebuttonclicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 21), // "on_savebutton_clicked"
QT_MOC_LITERAL(4, 55, 17), // "on_Cancel_clicked"
QT_MOC_LITERAL(5, 73, 11), // "receiveData"
QT_MOC_LITERAL(6, 85, 4) // "data"

    },
    "AddTaskWindow\0savebuttonclicked\0\0"
    "on_savebutton_clicked\0on_Cancel_clicked\0"
    "receiveData\0data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddTaskWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    1,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void AddTaskWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddTaskWindow *_t = static_cast<AddTaskWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->savebuttonclicked(); break;
        case 1: _t->on_savebutton_clicked(); break;
        case 2: _t->on_Cancel_clicked(); break;
        case 3: _t->receiveData((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AddTaskWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AddTaskWindow::savebuttonclicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject AddTaskWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddTaskWindow.data,
      qt_meta_data_AddTaskWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AddTaskWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddTaskWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AddTaskWindow.stringdata0))
        return static_cast<void*>(const_cast< AddTaskWindow*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddTaskWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void AddTaskWindow::savebuttonclicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
