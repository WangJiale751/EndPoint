/****************************************************************************
** Meta object code from reading C++ file 'End_Point.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../End_Point.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'End_Point.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_End_Point_t {
    QByteArrayData data[11];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_End_Point_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_End_Point_t qt_meta_stringdata_End_Point = {
    {
QT_MOC_LITERAL(0, 0, 9), // "End_Point"
QT_MOC_LITERAL(1, 10, 11), // "BtnOpenFile"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 14), // "EndPoint_Begin"
QT_MOC_LITERAL(4, 38, 14), // "EndPoint_Close"
QT_MOC_LITERAL(5, 53, 10), // "ImgToLabel"
QT_MOC_LITERAL(6, 64, 3), // "Mat"
QT_MOC_LITERAL(7, 68, 8), // "LaserImg"
QT_MOC_LITERAL(8, 77, 8), // "ImgLabel"
QT_MOC_LITERAL(9, 86, 19), // "SaveconfigureToJson"
QT_MOC_LITERAL(10, 106, 21) // "OpenconfigureFromJson"

    },
    "End_Point\0BtnOpenFile\0\0EndPoint_Begin\0"
    "EndPoint_Close\0ImgToLabel\0Mat\0LaserImg\0"
    "ImgLabel\0SaveconfigureToJson\0"
    "OpenconfigureFromJson"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_End_Point[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    2,   47,    2, 0x08 /* Private */,
       9,    0,   52,    2, 0x08 /* Private */,
      10,    0,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int, 0x80000000 | 6, QMetaType::QImage,    7,    8,
    QMetaType::Int,
    QMetaType::Int,

       0        // eod
};

void End_Point::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        End_Point *_t = static_cast<End_Point *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->BtnOpenFile();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: { int _r = _t->EndPoint_Begin();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: { int _r = _t->EndPoint_Close();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { int _r = _t->ImgToLabel((*reinterpret_cast< Mat(*)>(_a[1])),(*reinterpret_cast< QImage(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { int _r = _t->SaveconfigureToJson();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { int _r = _t->OpenconfigureFromJson();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject End_Point::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_End_Point.data,
      qt_meta_data_End_Point,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *End_Point::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *End_Point::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_End_Point.stringdata0))
        return static_cast<void*>(const_cast< End_Point*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int End_Point::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
