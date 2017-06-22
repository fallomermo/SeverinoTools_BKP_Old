/****************************************************************************
** Meta object code from reading C++ file 'relacaocolaborador.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../relacaocolaborador.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'relacaocolaborador.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RelacaoColaborador_t {
    QByteArrayData data[14];
    char stringdata0[225];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RelacaoColaborador_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RelacaoColaborador_t qt_meta_stringdata_RelacaoColaborador = {
    {
QT_MOC_LITERAL(0, 0, 18), // "RelacaoColaborador"
QT_MOC_LITERAL(1, 19, 16), // "filtroItemTabela"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 16), // "pesquisarEmpresa"
QT_MOC_LITERAL(4, 54, 10), // "setEmpresa"
QT_MOC_LITERAL(5, 65, 15), // "pesquisarFilial"
QT_MOC_LITERAL(6, 81, 9), // "setFilial"
QT_MOC_LITERAL(7, 91, 22), // "retornaCadastroEmpresa"
QT_MOC_LITERAL(8, 114, 21), // "retornaCadastroFilial"
QT_MOC_LITERAL(9, 136, 12), // "getDatatable"
QT_MOC_LITERAL(10, 149, 17), // "inserirItemTabela"
QT_MOC_LITERAL(11, 167, 18), // "inserirLinhaTabela"
QT_MOC_LITERAL(12, 186, 20), // "CadastroColaborador*"
QT_MOC_LITERAL(13, 207, 17) // "exportarParaExcel"

    },
    "RelacaoColaborador\0filtroItemTabela\0"
    "\0pesquisarEmpresa\0setEmpresa\0"
    "pesquisarFilial\0setFilial\0"
    "retornaCadastroEmpresa\0retornaCadastroFilial\0"
    "getDatatable\0inserirItemTabela\0"
    "inserirLinhaTabela\0CadastroColaborador*\0"
    "exportarParaExcel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RelacaoColaborador[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x08 /* Private */,
       3,    0,   92,    2, 0x08 /* Private */,
       4,    1,   93,    2, 0x08 /* Private */,
       5,    0,   96,    2, 0x08 /* Private */,
       6,    1,   97,    2, 0x08 /* Private */,
       7,    0,  100,    2, 0x08 /* Private */,
       8,    0,  101,    2, 0x08 /* Private */,
       8,    1,  102,    2, 0x08 /* Private */,
       9,    0,  105,    2, 0x08 /* Private */,
      10,    3,  106,    2, 0x08 /* Private */,
      10,    3,  113,    2, 0x08 /* Private */,
      10,    3,  120,    2, 0x08 /* Private */,
      10,    3,  127,    2, 0x08 /* Private */,
      11,    3,  134,    2, 0x08 /* Private */,
      13,    0,  141,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QDate,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Double,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 12,    2,    2,    2,
    QMetaType::Void,

       0        // eod
};

void RelacaoColaborador::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RelacaoColaborador *_t = static_cast<RelacaoColaborador *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->filtroItemTabela((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->pesquisarEmpresa(); break;
        case 2: _t->setEmpresa((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->pesquisarFilial(); break;
        case 4: _t->setFilial((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->retornaCadastroEmpresa(); break;
        case 6: _t->retornaCadastroFilial(); break;
        case 7: _t->retornaCadastroFilial((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->getDatatable(); break;
        case 9: _t->inserirItemTabela((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 10: _t->inserirItemTabela((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QDate(*)>(_a[3]))); break;
        case 11: _t->inserirItemTabela((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 12: _t->inserirItemTabela((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 13: _t->inserirLinhaTabela((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< CadastroColaborador*(*)>(_a[3]))); break;
        case 14: _t->exportarParaExcel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CadastroColaborador* >(); break;
            }
            break;
        }
    }
}

const QMetaObject RelacaoColaborador::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RelacaoColaborador.data,
      qt_meta_data_RelacaoColaborador,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RelacaoColaborador::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RelacaoColaborador::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RelacaoColaborador.stringdata0))
        return static_cast<void*>(const_cast< RelacaoColaborador*>(this));
    return QWidget::qt_metacast(_clname);
}

int RelacaoColaborador::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
