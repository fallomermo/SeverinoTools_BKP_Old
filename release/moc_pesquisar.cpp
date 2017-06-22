/****************************************************************************
** Meta object code from reading C++ file 'pesquisar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../pesquisar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pesquisar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Pesquisar_t {
    QByteArrayData data[9];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Pesquisar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Pesquisar_t qt_meta_stringdata_Pesquisar = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Pesquisar"
QT_MOC_LITERAL(1, 10, 7), // "getData"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 10), // "getEmpresa"
QT_MOC_LITERAL(4, 30, 9), // "getFilial"
QT_MOC_LITERAL(5, 40, 15), // "preencherTabela"
QT_MOC_LITERAL(6, 56, 7), // "setData"
QT_MOC_LITERAL(7, 64, 10), // "setEmpresa"
QT_MOC_LITERAL(8, 75, 9) // "setFilial"

    },
    "Pesquisar\0getData\0\0getEmpresa\0getFilial\0"
    "preencherTabela\0setData\0setEmpresa\0"
    "setFilial"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Pesquisar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       3,    1,   57,    2, 0x06 /* Public */,
       4,    1,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   63,    2, 0x08 /* Private */,
       6,    2,   64,    2, 0x08 /* Private */,
       6,    0,   69,    2, 0x08 /* Private */,
       7,    2,   70,    2, 0x08 /* Private */,
       8,    2,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,

       0        // eod
};

void Pesquisar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Pesquisar *_t = static_cast<Pesquisar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->getEmpresa((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->getFilial((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->preencherTabela(); break;
        case 4: _t->setData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->setData(); break;
        case 6: _t->setEmpresa((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->setFilial((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Pesquisar::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Pesquisar::getData)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Pesquisar::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Pesquisar::getEmpresa)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Pesquisar::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Pesquisar::getFilial)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject Pesquisar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Pesquisar.data,
      qt_meta_data_Pesquisar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Pesquisar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Pesquisar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Pesquisar.stringdata0))
        return static_cast<void*>(const_cast< Pesquisar*>(this));
    return QWidget::qt_metacast(_clname);
}

int Pesquisar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Pesquisar::getData(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Pesquisar::getEmpresa(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Pesquisar::getFilial(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
