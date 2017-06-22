/****************************************************************************
** Meta object code from reading C++ file 'controledao.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../controledao.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controledao.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ControleDAO_t {
    QByteArrayData data[6];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ControleDAO_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ControleDAO_t qt_meta_stringdata_ControleDAO = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ControleDAO"
QT_MOC_LITERAL(1, 12, 15), // "mensagemRetorno"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 15), // "statusProgresso"
QT_MOC_LITERAL(4, 45, 22), // "mensagemRetornoUsuario"
QT_MOC_LITERAL(5, 68, 20) // "statusProgressoAtual"

    },
    "ControleDAO\0mensagemRetorno\0\0"
    "statusProgresso\0mensagemRetornoUsuario\0"
    "statusProgressoAtual"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ControleDAO[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       3,    2,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   42,    2, 0x08 /* Private */,
       5,    2,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,

       0        // eod
};

void ControleDAO::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ControleDAO *_t = static_cast<ControleDAO *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mensagemRetorno((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->statusProgresso((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->mensagemRetornoUsuario((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->statusProgressoAtual((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ControleDAO::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ControleDAO::mensagemRetorno)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ControleDAO::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ControleDAO::statusProgresso)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ControleDAO::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ControleDAO.data,
      qt_meta_data_ControleDAO,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ControleDAO::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ControleDAO::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ControleDAO.stringdata0))
        return static_cast<void*>(const_cast< ControleDAO*>(this));
    return QObject::qt_metacast(_clname);
}

int ControleDAO::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void ControleDAO::mensagemRetorno(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ControleDAO::statusProgresso(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
