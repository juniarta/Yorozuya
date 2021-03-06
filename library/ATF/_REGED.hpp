// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_REGED_AVATOR_DB.hpp>
#include <_STORAGE_LIST.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct   _REGED : _REGED_AVATOR_DB
    {
        unsigned int m_dwFixEquipLv[8];
        unsigned int m_dwItemETSerial[8];
        unsigned __int64 m_lnUID[8];
        char m_byCsMethod[8];
        unsigned int m_dwET[8];
        unsigned int m_dwLendRegdTime[8];
    public:
        bool Release(char bySlot);
        bool Set(char bySlot, struct _STORAGE_LIST::_db_con* pItem);
        void UpdateEquipLv();
        _REGED();
        void ctor__REGED();
        void init();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_REGED, 269>(), "_REGED");
END_ATF_NAMESPACE
