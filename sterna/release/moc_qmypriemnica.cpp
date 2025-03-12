/****************************************************************************
** Meta object code from reading C++ file 'qmypriemnica.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qmypriemnica.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmypriemnica.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12QMyPriemnicaE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN12QMyPriemnicaE = QtMocHelpers::stringData(
    "QMyPriemnica",
    "signCloseMyWidget",
    "",
    "signKomintentiFromFaktura",
    "signKomintentiFromPriemnica",
    "QWidget*",
    "signArtikliFromPriemnica",
    "disablePrint",
    "closeWLista",
    "closeW",
    "callKomintenti",
    "callArtikli",
    "myobj",
    "text",
    "procF2",
    "procF3",
    "procDel"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN12QMyPriemnicaE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x06,    1 /* Public */,
       3,    0,   87,    2, 0x06,    2 /* Public */,
       4,    2,   88,    2, 0x06,    3 /* Public */,
       6,    2,   93,    2, 0x06,    6 /* Public */,
       7,    1,   98,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,  101,    2, 0x0a,   11 /* Public */,
       9,    0,  102,    2, 0x0a,   12 /* Public */,
      10,    2,  103,    2, 0x0a,   13 /* Public */,
      11,    2,  108,    2, 0x0a,   16 /* Public */,
      14,    0,  113,    2, 0x0a,   19 /* Public */,
      15,    0,  114,    2, 0x0a,   20 /* Public */,
      16,    0,  115,    2, 0x0a,   21 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,   12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject QMyPriemnica::staticMetaObject = { {
    QMetaObject::SuperData::link<QMyBaseWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN12QMyPriemnicaE.offsetsAndSizes,
    qt_meta_data_ZN12QMyPriemnicaE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN12QMyPriemnicaE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QMyPriemnica, std::true_type>,
        // method 'signCloseMyWidget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'signKomintentiFromFaktura'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'signKomintentiFromPriemnica'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'signArtikliFromPriemnica'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'disablePrint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'closeWLista'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeW'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'callKomintenti'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'callArtikli'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'procF2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'procF3'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'procDel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QMyPriemnica::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QMyPriemnica *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->signCloseMyWidget(); break;
        case 1: _t->signKomintentiFromFaktura(); break;
        case 2: _t->signKomintentiFromPriemnica((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->signArtikliFromPriemnica((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 4: _t->disablePrint((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->closeWLista(); break;
        case 6: _t->closeW(); break;
        case 7: _t->callKomintenti((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 8: _t->callArtikli((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 9: _t->procF2(); break;
        case 10: _t->procF3(); break;
        case 11: _t->procDel(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (QMyPriemnica::*)();
            if (_q_method_type _q_method = &QMyPriemnica::signCloseMyWidget; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (QMyPriemnica::*)();
            if (_q_method_type _q_method = &QMyPriemnica::signKomintentiFromFaktura; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (QMyPriemnica::*)(QWidget * , QString );
            if (_q_method_type _q_method = &QMyPriemnica::signKomintentiFromPriemnica; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (QMyPriemnica::*)(QWidget * , QString );
            if (_q_method_type _q_method = &QMyPriemnica::signArtikliFromPriemnica; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (QMyPriemnica::*)(bool );
            if (_q_method_type _q_method = &QMyPriemnica::disablePrint; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject *QMyPriemnica::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMyPriemnica::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN12QMyPriemnicaE.stringdata0))
        return static_cast<void*>(this);
    return QMyBaseWidget::qt_metacast(_clname);
}

int QMyPriemnica::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMyBaseWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void QMyPriemnica::signCloseMyWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QMyPriemnica::signKomintentiFromFaktura()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QMyPriemnica::signKomintentiFromPriemnica(QWidget * _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QMyPriemnica::signArtikliFromPriemnica(QWidget * _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QMyPriemnica::disablePrint(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
