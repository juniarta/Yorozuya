// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _trade_wait_link
    {
        struct __node
        {
            bool bLoad;
             _STORAGE_LIST::_db_con Item;
            unsigned int dwPrice;
            unsigned __int16 wPassSec;
        };
        __node m_Link[10];
    };
END_ATF_NAMESPACE