/****************************************************************************
** Meta object code from reading C++ file 'qperiodicenizvestaj.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qperiodicenizvestaj.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qperiodicenizvestaj.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN19QPeriodicenIzvestajE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN19QPeriodicenIzvestajE = QtMocHelpers::stringData(
    "QPeriodicenIzvestaj",
    "signCloseMyWidget",
    "",
    "eCloseKomintentiFromPriemnica",
    "eupdateNanigator",
    "QWidget*",
    "closeWLista",
    "callretPeriodicenIzvestajToDokument",
    "QString&",
    "text",
    "textName",
    "textNameSaldo",
    "textChanged"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN19QPeriodicenIzvestajE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,
       3,    0,   51,    2, 0x06,    2 /* Public */,
       4,    2,   52,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   57,    2, 0x0a,    6 /* Public */,
       7,    3,   58,    2, 0x0a,    7 /* Public */,
      12,    1,   65,    2, 0x0a,   11 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 8, 0x80000000 | 8,    9,   10,   11,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject QPeriodicenIzvestaj::staticMetaObject = { {
    QMetaObject::SuperData::link<QMyBaseWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN19QPeriodicenIzvestajE.offsetsAndSizes,
    qt_meta_data_ZN19QPeriodicenIzvestajE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN19QPeriodicenIzvestajE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QPeriodicenIzvestaj, std::true_type>,
        // method 'signCloseMyWidget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'eCloseKomintentiFromPriemnica'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'eupdateNanigator'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        // method 'closeWLista'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'callretPeriodicenIzvestajToDokument'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>,
        // method 'textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void QPeriodicenIzvestaj::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QPeriodicenIzvestaj *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->signCloseMyWidget(); break;
        case 1: _t->eCloseKomintentiFromPriemnica(); break;
        case 2: _t->eupdateNanigator((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[2]))); break;
        case 3: _t->closeWLista(); break;
        case 4: _t->callretPeriodicenIzvestajToDokument((*reinterpret_cast< std::add_pointer_t<QString&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString&>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString&>>(_a[3]))); break;
        case 5: _t->textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QPeriodicenIzvestaj::*)();
            if (_q_method_type _q_method = &QPeriodicenIzvestaj::signCloseMyWidget; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QPeriodicenIzvestaj::*)();
            if (_q_method_type _q_method = &QPeriodicenIzvestaj::eCloseKomintentiFromPriemnica; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (QPeriodicenIzvestaj::*)(QWidget * , QWidget * );
            if (_q_method_type _q_method = &QPeriodicenIzvestaj::eupdateNanigator; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *QPeriodicenIzvestaj::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPeriodicenIzvestaj::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN19QPeriodicenIzvestajE.stringdata0))
        return static_cast<void*>(this);
    return QMyBaseWidget::qt_metacast(_clname);
}

int QPeriodicenIzvestaj::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QPeriodicenIzvestaj::signCloseMyWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QPeriodicenIzvestaj::eCloseKomintentiFromPriemnica()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QPeriodicenIzvestaj::eupdateNanigator(QWidget * _t1, QWidget * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
