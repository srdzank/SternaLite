/****************************************************************************
** Meta object code from reading C++ file 'qdnevenpromet.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qdnevenpromet.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdnevenpromet.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13QDnevenprometE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN13QDnevenprometE = QtMocHelpers::stringData(
    "QDnevenpromet",
    "signCloseMyWidget",
    "",
    "eCloseKomintentiFromPriemnica",
    "eupdateNanigator",
    "QWidget*",
    "disablePrint",
    "closeWLista",
    "callretDnevenprometToDokument",
    "QString&",
    "text",
    "textName",
    "textNameSaldo"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN13QDnevenprometE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,
       3,    0,   51,    2, 0x06,    2 /* Public */,
       4,    2,   52,    2, 0x06,    3 /* Public */,
       6,    1,   57,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   60,    2, 0x0a,    8 /* Public */,
       8,    3,   61,    2, 0x0a,    9 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9, 0x80000000 | 9,   10,   11,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject QDnevenpromet::staticMetaObject = { {
    QMetaObject::SuperData::link<QMyBaseWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN13QDnevenprometE.offsetsAndSizes,
    qt_meta_data_ZN13QDnevenprometE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN13QDnevenprometE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QDnevenpromet, std::true_type>,
        // method 'signCloseMyWidget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'eCloseKomintentiFromPriemnica'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'eupdateNanigator'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        // method 'disablePrint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'closeWLista'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'callretDnevenprometToDokument'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>
    >,
    nullptr
} };

void QDnevenpromet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QDnevenpromet *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->signCloseMyWidget(); break;
        case 1: _t->eCloseKomintentiFromPriemnica(); break;
        case 2: _t->eupdateNanigator((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[2]))); break;
        case 3: _t->disablePrint((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->closeWLista(); break;
        case 5: _t->callretDnevenprometToDokument((*reinterpret_cast< std::add_pointer_t<QString&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString&>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString&>>(_a[3]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QDnevenpromet::*)();
            if (_q_method_type _q_method = &QDnevenpromet::signCloseMyWidget; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QDnevenpromet::*)();
            if (_q_method_type _q_method = &QDnevenpromet::eCloseKomintentiFromPriemnica; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (QDnevenpromet::*)(QWidget * , QWidget * );
            if (_q_method_type _q_method = &QDnevenpromet::eupdateNanigator; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (QDnevenpromet::*)(bool );
            if (_q_method_type _q_method = &QDnevenpromet::disablePrint; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *QDnevenpromet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDnevenpromet::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN13QDnevenprometE.stringdata0))
        return static_cast<void*>(this);
    return QMyBaseWidget::qt_metacast(_clname);
}

int QDnevenpromet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QDnevenpromet::signCloseMyWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QDnevenpromet::eCloseKomintentiFromPriemnica()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QDnevenpromet::eupdateNanigator(QWidget * _t1, QWidget * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QDnevenpromet::disablePrint(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
