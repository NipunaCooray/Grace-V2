#ifndef GLOBAL_H
#define GLOBAL_H
#include "styledata.h"
#include "serialreadwrite.h"


namespace GlobalData
{
    extern StyleData styleData;
    // Change to the db path
    static const QString path = "grace";

//    extern SerialReadWrite serialReadWrite;

}


#endif // GLOBAL_H

