/****************************************************************************
** Meta object code from reading C++ file 'TabWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../TabWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TabWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TabWidget_t {
    QByteArrayData data[17];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TabWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TabWidget_t qt_meta_stringdata_TabWidget = {
    {
QT_MOC_LITERAL(0, 0, 9), // "TabWidget"
QT_MOC_LITERAL(1, 10, 18), // "enterButtonPressed"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 9), // "newSearch"
QT_MOC_LITERAL(4, 40, 14), // "refreshWebPage"
QT_MOC_LITERAL(5, 55, 15), // "previousWebPage"
QT_MOC_LITERAL(6, 71, 11), // "nextWebPage"
QT_MOC_LITERAL(7, 83, 10), // "stopReload"
QT_MOC_LITERAL(8, 94, 11), // "homeWebPage"
QT_MOC_LITERAL(9, 106, 15), // "closeCurrentTab"
QT_MOC_LITERAL(10, 122, 5), // "index"
QT_MOC_LITERAL(11, 128, 9), // "changeUrl"
QT_MOC_LITERAL(12, 138, 3), // "url"
QT_MOC_LITERAL(13, 142, 11), // "changeTitle"
QT_MOC_LITERAL(14, 154, 5), // "title"
QT_MOC_LITERAL(15, 160, 14), // "changeTabTitle"
QT_MOC_LITERAL(16, 175, 6) // "newTab"

    },
    "TabWidget\0enterButtonPressed\0\0newSearch\0"
    "refreshWebPage\0previousWebPage\0"
    "nextWebPage\0stopReload\0homeWebPage\0"
    "closeCurrentTab\0index\0changeUrl\0url\0"
    "changeTitle\0title\0changeTabTitle\0"
    "newTab"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TabWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   75,    2, 0x0a /* Public */,
       4,    0,   76,    2, 0x0a /* Public */,
       5,    0,   77,    2, 0x0a /* Public */,
       6,    0,   78,    2, 0x0a /* Public */,
       7,    0,   79,    2, 0x0a /* Public */,
       8,    0,   80,    2, 0x0a /* Public */,
       9,    1,   81,    2, 0x0a /* Public */,
      11,    1,   84,    2, 0x0a /* Public */,
      13,    1,   87,    2, 0x0a /* Public */,
      15,    1,   90,    2, 0x0a /* Public */,
      16,    0,   93,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::QUrl,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,

       0        // eod
};

void TabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TabWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enterButtonPressed(); break;
        case 1: _t->newSearch(); break;
        case 2: _t->refreshWebPage(); break;
        case 3: _t->previousWebPage(); break;
        case 4: _t->nextWebPage(); break;
        case 5: _t->stopReload(); break;
        case 6: _t->homeWebPage(); break;
        case 7: _t->closeCurrentTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->changeUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 9: _t->changeTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->changeTabTitle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->newTab(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TabWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TabWidget::enterButtonPressed)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TabWidget::staticMetaObject = { {
    &QTabWidget::staticMetaObject,
    qt_meta_stringdata_TabWidget.data,
    qt_meta_data_TabWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TabWidget.stringdata0))
        return static_cast<void*>(this);
    return QTabWidget::qt_metacast(_clname);
}

int TabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void TabWidget::enterButtonPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
