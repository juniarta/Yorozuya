// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_monster_fld.hpp"


START_ATF_NAMESPACE
    struct __monster_group
    {
        char *pszGroupName;
        int nSubMonsterNum;
        _monster_fld *pSubMonster[32];
    public:
        __monster_group()
        {
            using org_ptr = void (WINAPIV*)(struct __monster_group*);
            (org_ptr(0x140279fb0L))(this);
        };
        void ctor___monster_group()
        {
            using org_ptr = void (WINAPIV*)(struct __monster_group*);
            (org_ptr(0x140279fb0L))(this);
        };
    };
END_ATF_NAMESPACE