// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct _guild_alter_member_state_inform_zocl
    {
        struct  __list
        {
            unsigned int dwMemberSerial;
            char byLv;
            unsigned int dwPvpPoint;
        };
        char byAlterMemberNum;
        __list MemberList[50];
    public:
        _guild_alter_member_state_inform_zocl();
        void ctor__guild_alter_member_state_inform_zocl();
        int size();
    };    
    #pragma pack(pop)
    static_assert(ATF::checkSize<_guild_alter_member_state_inform_zocl, 451>(), "_guild_alter_member_state_inform_zocl");
END_ATF_NAMESPACE
