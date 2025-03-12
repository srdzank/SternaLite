/****************************************************************************
** Meta object code from reading C++ file 'qddv.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qddv.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qddv.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6QMyDdvE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN6QMyDdvE = QtMocHelpers::stringData(
    "QMyDdv",
    "signCloseMyWidget",
    "",
    "eCloseDdvFromPriemnica",
    "succesfulEntryData",
    "closeWLista",
    "closeW",
    "retKomintentToPriemnica",
    "QString&"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN6QMyDdvE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,
       3,    0,   51,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   52,    2, 0x0a,    3 /* Public */,
       5,    0,   53,    2, 0x0a,    4 /* Public */,
       6,    0,   54,    2, 0x0a,    5 /* Public */,
       7,    2,   55,    2, 0x0a,    6 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 8,    2,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject QMyDdv::staticMetaObject = { {
    QMetaObject::SuperData::link<QMyBaseWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN6QMyDdvE.offsetsAndSizes,
    qt_meta_data_ZN6QMyDdvE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN6QMyDdvE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QMyDdv, std::true_type>,
        // method 'signCloseMyWidget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'eCloseDdvFromPriemnica'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'succesfulEntryData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeWLista'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeW'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'retKomintentToPriemnica'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>
    >,
    nullptr
} };

void QMyDdv::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QMyDdv *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->signCloseMyWidget(); break;
        case 1: _t->eCloseDdvFromPriemnica(); break;
        case 2: _t->succesfulEntryData(); break;
        case 3: _t->closeWLista(); break;
        case 4: _t->closeW(); break;
        case 5: _t->retKomintentToPriemnica((*reinterpret_cast< std::add_pointer_t<QString&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString&>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QMyDdv::*)();
            if (_q_method_type _q_method = &QMyDdv::signCloseMyWidget; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QMyDdv::*)();
            if (_q_method_type _q_method = &QMyDdv::eCloseDdvFromPriemnica; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *QMyDdv::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMyDdv::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN6QMyDdvE.stringdata0))
        return static_cast<void*>(this);
    return QMyBaseWidget::qt_metacast(_clname);
}

int QMyDdv::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMyBaseWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QMyDdv::signCloseMyWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QMyDdv::eCloseDdvFromPriemnica()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
