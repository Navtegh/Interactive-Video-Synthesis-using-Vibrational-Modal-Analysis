/****************************************************************************
** Meta object code from reading C++ file 'VideoSelector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../analysis/VideoSelector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VideoSelector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VideoSelector_t {
    QByteArrayData data[13];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VideoSelector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VideoSelector_t qt_meta_stringdata_VideoSelector = {
    {
QT_MOC_LITERAL(0, 0, 13), // "VideoSelector"
QT_MOC_LITERAL(1, 14, 15), // "selectVideoFile"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 4), // "name"
QT_MOC_LITERAL(4, 36, 15), // "selectFramesDir"
QT_MOC_LITERAL(5, 52, 3), // "dir"
QT_MOC_LITERAL(6, 56, 19), // "showVideoFileDialog"
QT_MOC_LITERAL(7, 76, 19), // "showFramesDirDialog"
QT_MOC_LITERAL(8, 96, 12), // "convertVideo"
QT_MOC_LITERAL(9, 109, 7), // "setName"
QT_MOC_LITERAL(10, 117, 4), // "text"
QT_MOC_LITERAL(11, 122, 10), // "endSession"
QT_MOC_LITERAL(12, 133, 16) // "directlySimulate"

    },
    "VideoSelector\0selectVideoFile\0\0name\0"
    "selectFramesDir\0dir\0showVideoFileDialog\0"
    "showFramesDirDialog\0convertVideo\0"
    "setName\0text\0endSession\0directlySimulate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VideoSelector[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       4,    1,   57,    2, 0x08 /* Private */,
       6,    0,   60,    2, 0x08 /* Private */,
       7,    0,   61,    2, 0x08 /* Private */,
       8,    0,   62,    2, 0x08 /* Private */,
       9,    1,   63,    2, 0x08 /* Private */,
      11,    0,   66,    2, 0x08 /* Private */,
      12,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void VideoSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VideoSelector *_t = static_cast<VideoSelector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectVideoFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->selectFramesDir((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->showVideoFileDialog(); break;
        case 3: _t->showFramesDirDialog(); break;
        case 4: _t->convertVideo(); break;
        case 5: _t->setName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->endSession(); break;
        case 7: _t->directlySimulate(); break;
        default: ;
        }
    }
}

const QMetaObject VideoSelector::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VideoSelector.data,
      qt_meta_data_VideoSelector,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *VideoSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VideoSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_VideoSelector.stringdata0))
        return static_cast<void*>(const_cast< VideoSelector*>(this));
    return QWidget::qt_metacast(_clname);
}

int VideoSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE