/****************************************************************************
** Meta object code from reading C++ file 'guiainssfolha.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../guiainssfolha.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'guiainssfolha.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GuiaINSSFolha_t {
    QByteArrayData data[16];
    char stringdata0[246];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GuiaINSSFolha_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GuiaINSSFolha_t qt_meta_stringdata_GuiaINSSFolha = {
    {
QT_MOC_LITERAL(0, 0, 13), // "GuiaINSSFolha"
QT_MOC_LITERAL(1, 14, 16), // "filtroItemTabela"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 19), // "focusPeriodoInicial"
QT_MOC_LITERAL(4, 52, 17), // "focusPeriodoFinal"
QT_MOC_LITERAL(5, 70, 16), // "pesquisarEmpresa"
QT_MOC_LITERAL(6, 87, 10), // "setEmpresa"
QT_MOC_LITERAL(7, 98, 15), // "pesquisarFilial"
QT_MOC_LITERAL(8, 114, 9), // "setFilial"
QT_MOC_LITERAL(9, 124, 22), // "retornaCadastroEmpresa"
QT_MOC_LITERAL(10, 147, 21), // "retornaCadastroFilial"
QT_MOC_LITERAL(11, 169, 12), // "getDatatable"
QT_MOC_LITERAL(12, 182, 17), // "inserirItemTabela"
QT_MOC_LITERAL(13, 200, 18), // "inserirLinhaTabela"
QT_MOC_LITERAL(14, 219, 8), // "Eventos*"
QT_MOC_LITERAL(15, 228, 17) // "exportarParaExcel"

    },
    "GuiaINSSFolha\0filtroItemTabela\0\0"
    "focusPeriodoInicial\0focusPeriodoFinal\0"
    "pesquisarEmpresa\0setEmpresa\0pesquisarFilial\0"
    "setFilial\0retornaCadastroEmpresa\0"
    "retornaCadastroFilial\0getDatatable\0"
    "inserirItemTabela\0inserirLinhaTabela\0"
    "Eventos*\0exportarParaExcel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GuiaINSSFolha[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x08 /* Private */,
       3,    0,  102,    2, 0x08 /* Private */,
       4,    0,  103,    2, 0x08 /* Private */,
       5,    0,  104,    2, 0x08 /* Private */,
       6,    1,  105,    2, 0x08 /* Private */,
       7,    0,  108,    2, 0x08 /* Private */,
       8,    1,  109,    2, 0x08 /* Private */,
       9,    0,  112,    2, 0x08 /* Private */,
      10,    0,  113,    2, 0x08 /* Private */,
      10,    1,  114,    2, 0x08 /* Private */,
      11,    0,  117,    2, 0x08 /* Private */,
      12,    3,  118,    2, 0x08 /* Private */,
      12,    3,  125,    2, 0x08 /* Private */,
      12,    3,  132,    2, 0x08 /* Private */,
      12,    3,  139,    2, 0x08 /* Private */,
      13,    3,  146,    2, 0x08 /* Private */,
      15,    0,  153,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
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
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 14,    2,    2,    2,
    QMetaType::Void,

       0        // eod
};

void GuiaINSSFolha::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GuiaINSSFolha *_t = static_cast<GuiaINSSFolha *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->filtroItemTabela((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->focusPeriodoInicial(); break;
        case 2: _t->focusPeriodoFinal(); break;
        case 3: _t->pesquisarEmpresa(); break;
        case 4: _t->setEmpresa((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->pesquisarFilial(); break;
        case 6: _t->setFilial((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->retornaCadastroEmpresa(); break;
        case 8: _t->retornaCadastroFilial(); break;
        case 9: _t->retornaCadastroFilial((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->getDatatable(); break;
        case 11: _t->inserirItemTabela((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 12: _t->inserirItemTabela((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QDate(*)>(_a[3]))); break;
        case 13: _t->inserirItemTabela((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 14: _t->inserirItemTabela((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 15: _t->inserirLinhaTabela((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Eventos*(*)>(_a[3]))); break;
        case 16: _t->exportarParaExcel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Eventos* >(); break;
            }
            break;
        }
    }
}

const QMetaObject GuiaINSSFolha::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GuiaINSSFolha.data,
      qt_meta_data_GuiaINSSFolha,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GuiaINSSFolha::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GuiaINSSFolha::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GuiaINSSFolha.stringdata0))
        return static_cast<void*>(const_cast< GuiaINSSFolha*>(this));
    return QWidget::qt_metacast(_clname);
}

int GuiaINSSFolha::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
