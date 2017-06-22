/****************************************************************************
** Meta object code from reading C++ file 'planosaude.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../planosaude.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'planosaude.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlanoSaude_t {
    QByteArrayData data[8];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlanoSaude_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlanoSaude_t qt_meta_stringdata_PlanoSaude = {
    {
QT_MOC_LITERAL(0, 0, 10), // "PlanoSaude"
QT_MOC_LITERAL(1, 11, 12), // "getDatatable"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 17), // "exportarParaExcel"
QT_MOC_LITERAL(4, 43, 18), // "inserirLinhaTabela"
QT_MOC_LITERAL(5, 62, 18), // "EcoclinicRepasses*"
QT_MOC_LITERAL(6, 81, 17), // "inserirItemTabela"
QT_MOC_LITERAL(7, 99, 16) // "filtroItemTabela"

    },
    "PlanoSaude\0getDatatable\0\0exportarParaExcel\0"
    "inserirLinhaTabela\0EcoclinicRepasses*\0"
    "inserirItemTabela\0filtroItemTabela"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlanoSaude[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    3,   56,    2, 0x08 /* Private */,
       6,    3,   63,    2, 0x08 /* Private */,
       6,    3,   70,    2, 0x08 /* Private */,
       6,    3,   77,    2, 0x08 /* Private */,
       6,    3,   84,    2, 0x08 /* Private */,
       7,    1,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 5,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Double,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QDate,    2,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void PlanoSaude::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlanoSaude *_t = static_cast<PlanoSaude *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getDatatable(); break;
        case 1: _t->exportarParaExcel(); break;
        case 2: _t->inserirLinhaTabela((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< EcoclinicRepasses*(*)>(_a[3]))); break;
        case 3: _t->inserirItemTabela((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->inserirItemTabela((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 5: _t->inserirItemTabela((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 6: _t->inserirItemTabela((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QDate(*)>(_a[3]))); break;
        case 7: _t->filtroItemTabela((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EcoclinicRepasses* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PlanoSaude::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PlanoSaude.data,
      qt_meta_data_PlanoSaude,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PlanoSaude::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlanoSaude::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlanoSaude.stringdata0))
        return static_cast<void*>(const_cast< PlanoSaude*>(this));
    return QWidget::qt_metacast(_clname);
}

int PlanoSaude::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
