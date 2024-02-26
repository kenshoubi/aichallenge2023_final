/****************************************************************************
** Meta object code from reading C++ file 'rviz_panel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/aichallenge_scoring/multi_data_monitor/multi_data_monitor/src/core/rviz/rviz_panel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rviz_panel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_multi_data_monitor__SettingWidget_t {
    QByteArrayData data[1];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_multi_data_monitor__SettingWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_multi_data_monitor__SettingWidget_t qt_meta_stringdata_multi_data_monitor__SettingWidget = {
    {
QT_MOC_LITERAL(0, 0, 33) // "multi_data_monitor::SettingWi..."

    },
    "multi_data_monitor::SettingWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_multi_data_monitor__SettingWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void multi_data_monitor::SettingWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject multi_data_monitor::SettingWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_multi_data_monitor__SettingWidget.data,
    qt_meta_data_multi_data_monitor__SettingWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *multi_data_monitor::SettingWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *multi_data_monitor::SettingWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_multi_data_monitor__SettingWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int multi_data_monitor::SettingWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_multi_data_monitor__MultiDataMonitor_t {
    QByteArrayData data[1];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_multi_data_monitor__MultiDataMonitor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_multi_data_monitor__MultiDataMonitor_t qt_meta_stringdata_multi_data_monitor__MultiDataMonitor = {
    {
QT_MOC_LITERAL(0, 0, 36) // "multi_data_monitor::MultiData..."

    },
    "multi_data_monitor::MultiDataMonitor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_multi_data_monitor__MultiDataMonitor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void multi_data_monitor::MultiDataMonitor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject multi_data_monitor::MultiDataMonitor::staticMetaObject = { {
    QMetaObject::SuperData::link<rviz_common::Panel::staticMetaObject>(),
    qt_meta_stringdata_multi_data_monitor__MultiDataMonitor.data,
    qt_meta_data_multi_data_monitor__MultiDataMonitor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *multi_data_monitor::MultiDataMonitor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *multi_data_monitor::MultiDataMonitor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_multi_data_monitor__MultiDataMonitor.stringdata0))
        return static_cast<void*>(this);
    return rviz_common::Panel::qt_metacast(_clname);
}

int multi_data_monitor::MultiDataMonitor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz_common::Panel::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
