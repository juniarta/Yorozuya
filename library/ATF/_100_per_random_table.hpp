// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _100_per_random_table
    {
        unsigned __int16 m_wCurTable;
        unsigned __int16 m_wCurPoint;
    public:
        uint16_t GetRand()
        {
            using org_ptr = uint16_t (WINAPIV*)(struct _100_per_random_table*);
            return (org_ptr(0x1400b81d0L))(this);
        };
        _100_per_random_table()
        {
            using org_ptr = void (WINAPIV*)(struct _100_per_random_table*);
            (org_ptr(0x1400726c0L))(this);
        };
        void ctor__100_per_random_table()
        {
            using org_ptr = void (WINAPIV*)(struct _100_per_random_table*);
            (org_ptr(0x1400726c0L))(this);
        };
        void reset()
        {
            using org_ptr = void (WINAPIV*)(struct _100_per_random_table*);
            (org_ptr(0x1400727e0L))(this);
        };
    };
END_ATF_NAMESPACE