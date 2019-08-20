//
//  fact.cpp
//  lianxi_6
//
//  Created by arfer on 2019/8/19.
//  Copyright © 2019年 arfer. All rights reserved.
//

#include "Chapter6.h"

int fact(int ival)
{
    if(ival < 0)
        return -1;
    else if (ival == 0) {
        return 1;
    }
    else
        return fact(ival-1)*ival;
}
