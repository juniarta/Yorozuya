// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _guild_honor_list_result_zocl
    {
        struct  __list
        {
            unsigned int dwGuildSerial;
            unsigned int dwEmblemBack;
            unsigned int dwEmblemMark;
            char wszGuildName[17];
            char wszMasterName[17];
            char byTaxRate;
        };
        char byListNum;
        char byUI;
        __list GuildList[5];
    public:
        _guild_honor_list_result_zocl()
        {
            using org_ptr = void (WINAPIV*)(struct _guild_honor_list_result_zocl*);
            (org_ptr(0x1402604f0L))(this);
        };
        void ctor__guild_honor_list_result_zocl()
        {
            using org_ptr = void (WINAPIV*)(struct _guild_honor_list_result_zocl*);
            (org_ptr(0x1402604f0L))(this);
        };
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _guild_honor_list_result_zocl*);
            return (org_ptr(0x140260550L))(this);
        };
    };
END_ATF_NAMESPACE