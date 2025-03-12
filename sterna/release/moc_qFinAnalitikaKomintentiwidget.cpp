/****************************************************************************
** Meta object code from reading C++ file 'qFinAnalitikaKomintentiwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qFinAnalitikaKomintentiwidget.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qFinAnalitikaKomintentiwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN26QFinAnalitKomintentiWidgetE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN26QFinAnalitKomintentiWidgetE = QtMocHelpers::stringData(
    "QFinAnalitKomintentiWidget",
    "closeW",
    "",
    "sFinAnalitKomintentiToDokument",
    "QString&",
    "text",
    "textName",
    "textNameSaldo",
    "on_tableView_clicked",
    "QModelIndex",
    "on_lineEdit_textChanged",
    "selectionChanged",
    "modelX",
    "modelY"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN26QFinAnalitKomintentiWidgetE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,
       3,    3,   45,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    1,   52,    2, 0x08,    6 /* Private */,
      10,    1,   55,    2, 0x08,    8 /* Private */,
      11,    2,   58,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4, 0x80000000 | 4,    5,    6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9,   12,   13,

       0        // eod
};

Q_CONSTINIT const QMetaObject QFinAnalitKomintentiWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QMyBaseFormWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN26QFinAnalitKomintentiWidgetE.offsetsAndSizes,
    qt_meta_data_ZN26QFinAnalitKomintentiWidgetE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN26QFinAnalitKomintentiWidgetE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QFinAnalitKomintentiWidget, std::true_type>,
        // method 'closeW'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sFinAnalitKomintentiToDokument'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>,
        // method 'on_tableView_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_lineEdit_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>
    >,
    nullptr
} };

void QFinAnalitKomintentiWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QFinAnalitKomintentiWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->closeW(); break;
        case 1: _t->sFinAnalitKomintentiToDokument((*reinterpret_cast< std::add_pointer_t<QString&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString&>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString&>>(_a[3]))); break;
        case 2: _t->on_tableView_clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 3: _t->on_lineEdit_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->selectionChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QFinAnalitKomintentiWidget::*)();
            if (_q_method_type _q_method = &QFinAnalitKomintentiWidget::closeW; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QFinAnalitKomintentiWidget::*)(QString & , QString & , QString & );
            if (_q_method_type _q_method = &QFinAnalitKomintentiWidget::sFinAnalitKomintentiToDokument; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *QFinAnalitKomintentiWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QFinAnalitKomintentiWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN26QFinAnalitKomintentiWidgetE.stringdata0))
        return static_cast<void*>(this);
    return QMyBaseFormWidget::qt_metacast(_clname);
}

int QFinAnalitKomintentiWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMyBaseFormWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QFinAnalitKomintentiWidget::closeW()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QFinAnalitKomintentiWidget::sFinAnalitKomintentiToDokument(QString & _t1, QString & _t2, QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
