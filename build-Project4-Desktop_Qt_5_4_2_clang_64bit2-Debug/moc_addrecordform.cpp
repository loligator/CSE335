/****************************************************************************
** Meta object code from reading C++ file 'addrecordform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Project4/addrecordform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addrecordform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_addRecordForm_t {
    QByteArrayData data[8];
    char stringdata[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_addRecordForm_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_addRecordForm_t qt_meta_stringdata_addRecordForm = {
    {
QT_MOC_LITERAL(0, 0, 13), // "addRecordForm"
QT_MOC_LITERAL(1, 14, 15), // "observerDeleted"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 11), // "addEmployee"
QT_MOC_LITERAL(4, 43, 9), // "Employee*"
QT_MOC_LITERAL(5, 53, 24), // "on_pushButtonAdd_clicked"
QT_MOC_LITERAL(6, 78, 8), // "addFName"
QT_MOC_LITERAL(7, 87, 27) // "on_pushButtonCancel_clicked"

    },
    "addRecordForm\0observerDeleted\0\0"
    "addEmployee\0Employee*\0on_pushButtonAdd_clicked\0"
    "addFName\0on_pushButtonCancel_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_addRecordForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    1,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   43,    2, 0x0a /* Public */,
       6,    0,   44,    2, 0x0a /* Public */,
       7,    0,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void addRecordForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        addRecordForm *_t = static_cast<addRecordForm *>(_o);
        switch (_id) {
        case 0: _t->observerDeleted(); break;
        case 1: _t->addEmployee((*reinterpret_cast< Employee*(*)>(_a[1]))); break;
        case 2: _t->on_pushButtonAdd_clicked(); break;
        case 3: _t->addFName(); break;
        case 4: _t->on_pushButtonCancel_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (addRecordForm::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&addRecordForm::observerDeleted)) {
                *result = 0;
            }
        }
        {
            typedef void (addRecordForm::*_t)(Employee * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&addRecordForm::addEmployee)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject addRecordForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_addRecordForm.data,
      qt_meta_data_addRecordForm,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *addRecordForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *addRecordForm::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_addRecordForm.stringdata))
        return static_cast<void*>(const_cast< addRecordForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int addRecordForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void addRecordForm::observerDeleted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void addRecordForm::addEmployee(Employee * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
