#ifndef COMMONFUNCTIONLIB_GLOBAL_H
#define COMMONFUNCTIONLIB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(MCTRLCOMMFUNCLIB_LIBRARY)
    #define MCTRLCOMMFUNCLIB_EXPORT Q_DECL_EXPORT
#else
    #define MCTRLCOMMFUNCLIB_EXPORT Q_DECL_IMPORT
#endif

#endif // COMMONFUNCTIONLIB_GLOBAL_H
