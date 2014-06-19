#ifndef COMMON_H
#define COMMON_H

#include <QString>
#include <QColor>

namespace common {

    namespace colors{
        extern QColor nodeColors[10];
        extern QString colorNames[10];
        static const QString DEFAULT = "#DDDDFF";
        static const QString BEGIN   = "#FF0000";
        static const QString END     = "#00FF00";
        static const QString BLANK   = "#FFFFFF";
    } // namespace colors
    namespace attrs{
        static const QString POLYSHAPE   = "polygon";
        static const QString ELLIPSESHAPE = "ellipse";
        static const QString STYLE   = "filled";
        static const QString SIDES   = "6";
    } // namespace colors

} // namespace common

#endif // COMMON_H
