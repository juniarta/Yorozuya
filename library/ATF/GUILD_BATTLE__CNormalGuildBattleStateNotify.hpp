// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "ATL__CTimeSpan.hpp"
#include "GUILD_BATTLE__CNormalGuildBattle.hpp"
#include "GUILD_BATTLE__CNormalGuildBattleState.hpp"


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        struct  CNormalGuildBattleStateNotify : CNormalGuildBattleState
        {
        public:
            CNormalGuildBattleStateNotify()
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleStateNotify*);
                (org_ptr(0x1403f06b0L))(this);
            };
            void ctor_CNormalGuildBattleStateNotify()
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleStateNotify*);
                (org_ptr(0x1403f06b0L))(this);
            };
            int Enter(struct CNormalGuildBattle* pkBattle)
            {
                using org_ptr = int (WINAPIV*)(struct CNormalGuildBattleStateNotify*, struct CNormalGuildBattle*);
                return (org_ptr(0x1403f0700L))(this, pkBattle);
            };
            struct ATL::CTimeSpan* GetTerm(struct ATL::CTimeSpan* result)
            {
                using org_ptr = struct ATL::CTimeSpan* (WINAPIV*)(struct CNormalGuildBattleStateNotify*, struct ATL::CTimeSpan*);
                return (org_ptr(0x14007fc20L))(this, result);
            };
            ~CNormalGuildBattleStateNotify()
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleStateNotify*);
                (org_ptr(0x14007faf0L))(this);
            };
            void dtor_CNormalGuildBattleStateNotify()
            {
                using org_ptr = void (WINAPIV*)(struct CNormalGuildBattleStateNotify*);
                (org_ptr(0x14007faf0L))(this);
            };
        };
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE