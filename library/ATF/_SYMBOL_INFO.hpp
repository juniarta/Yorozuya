// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 4)
    struct _SYMBOL_INFO
    {
        unsigned int SizeOfStruct;
        unsigned int TypeIndex;
        unsigned __int64 Reserved[2];
        unsigned int info;
        unsigned int Size;
        unsigned __int64 ModBase;
        unsigned int Flags;
        unsigned __int64 Value;
        unsigned __int64 Address;
        unsigned int Register;
        unsigned int Scope;
        unsigned int Tag;
        unsigned int NameLen;
        unsigned int MaxNameLen;
        char Name[1];
    };
    #pragma pack(pop)
END_ATF_NAMESPACE