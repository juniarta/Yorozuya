// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _personal_automine_stop_zocl
    {
        unsigned int dwObjSerial;
        unsigned int dwOwnerSerial;
        char byStopType;
        unsigned __int16 wItemSerial;
    public:
        _personal_automine_stop_zocl()
        {
            using org_ptr = void (WINAPIV*)(struct _personal_automine_stop_zocl*);
            (org_ptr(0x1402de170L))(this);
        };
        void ctor__personal_automine_stop_zocl()
        {
            using org_ptr = void (WINAPIV*)(struct _personal_automine_stop_zocl*);
            (org_ptr(0x1402de170L))(this);
        };
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _personal_automine_stop_zocl*);
            return (org_ptr(0x1402de1c0L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE