// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct _qry_case_addguildbattleschedule
    {
        unsigned int dwID;
        unsigned int dw1PGuildSerial;
        unsigned int dw2PGuildSerial;
        unsigned int dwMapID;
        char byBattleNumber;
        unsigned int dwSLID;
        char byState;
        __int64 tStartTime;
        unsigned __int16 wTurmMin;
    public:
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _qry_case_addguildbattleschedule*);
            return (org_ptr(0x1403d93c0L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE