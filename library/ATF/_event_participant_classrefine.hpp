// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 4)
    struct _event_participant_classrefine
    {
        unsigned __int16 nSock;
        unsigned int nAvatorSerial;
        bool bChange;
        unsigned int dwRefineDate;
        char nCurRefineCnt;
    public:
        bool IsChanged()
        {
            using org_ptr = bool (WINAPIV*)(struct _event_participant_classrefine*);
            return (org_ptr(0x140329680L))(this);
        };
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _event_participant_classrefine*);
            return (org_ptr(0x1401bfec0L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE