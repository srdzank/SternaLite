/****************************************************************************
** Meta object code from reading C++ file 'qmyartikli.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qmyartikli.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmyartikli.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10QMyArtikliE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN10QMyArtikliE = QtMocHelpers::stringData(
    "QMyArtikli",
    "signCloseMyWidget",
    "",
    "eCloseArtikliFromPriemnica",
    "eupdateNanigator",
    "QWidget*",
    "succesfulEntryData",
    "closeWLista",
    "closeW",
    "retArtikliToPriemnica",
    "QString&",
    "text",
    "textName",
    "procF2",
    "procF3",
    "procDel",
    "textChanged"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN10QMyArtikliE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x06,    1 /* Public */,
       3,    0,   81,    2, 0x06,    2 /* Public */,
       4,    2,   82,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   87,    2, 0x0a,    6 /* Public */,
       7,    0,   88,    2, 0x0a,    7 /* Public */,
       8,    0,   89,    2, 0x0a,    8 /* Public */,
       9,    2,   90,    2, 0x0a,    9 /* Public */,
      13,    0,   95,    2, 0x0a,   12 /* Public */,
      14,    0,   96,    2, 0x0a,   13 /* Public */,
      15,    0,   97,    2, 0x0a,   14 /* Public */,
      16,    1,   98,    2, 0x0a,   15 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10,   11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject QMyArtikli::staticMetaObject = { {
    QMetaObject::SuperData::link<QMyBaseWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN10QMyArtikliE.offsetsAndSizes,
    qt_meta_data_ZN10QMyArtikliE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN10QMyArtikliE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QMyArtikli, std::true_type>,
        // method 'signCloseMyWidget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'eCloseArtikliFromPriemnica'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'eupdateNanigator'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        // method 'succesfulEntryData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeWLista'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeW'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'retArtikliToPriemnica'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>,
        // method 'procF2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'procF3'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'procDel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void QMyArtikli::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QMyArtikli *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->signCloseMyWidget(); break;
        case 1: _t->eCloseArtikliFromPriemnica(); break;
        case 2: _t->eupdateNanigator((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[2]))); break;
        case 3: _t->succesfulEntryData(); break;
        case 4: _t->closeWLista(); break;
        case 5: _t->closeW(); break;
        case 6: _t->retArtikliToPriemnica((*reinterpret_cast< std::add_pointer_t<QString&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString&>>(_a[2]))); break;
        case 7: _t->procF2(); break;
        case 8: _t->procF3(); break;
        case 9: _t->procDel(); break;
        case 10: _t->textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QMyArtikli::*)();
            if (_q_method_type _q_method = &QMyArtikli::signCloseMyWidget; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QMyArtikli::*)();
            if (_q_method_type _q_method = &QMyArtikli::eCloseArtikliFromPriemnica; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (QMyArtikli::*)(QWidget * , QWidget * );
            if (_q_method_type _q_method = &QMyArtikli::eupdateNanigator; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *QMyArtikli::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMyArtikli::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN10QMyArtikliE.stringdata0))
        return static_cast<void*>(this);
    return QMyBaseWidget::qt_metacast(_clname);
}

int QMyArtikli::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMyBaseWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QMyArtikli::signCloseMyWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QMyArtikli::eCloseArtikliFromPriemnica()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QMyArtikli::eupdateNanigator(QWidget * _t1, QWidget * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
