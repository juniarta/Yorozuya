// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_AIOC_A_MACRODATA.hpp>
#include <_ANIMUS_DB_BASE.hpp>
#include <_AVATOR_DB_BASE.hpp>
#include <_BUDDY_DB_BASE.hpp>
#include <_CRYMSG_DB_BASE.hpp>
#include <_CUTTING_DB_BASE.hpp>
#include <_EQUIP_DB_BASE.hpp>
#include <_FORCE_DB_BASE.hpp>
#include <_INVEN_DB_BASE.hpp>
#include <_ITEMCOMBINE_DB_BASE.hpp>
#include <_LINK_DB_BASE.hpp>
#include <_PCBANG_FAVOR_ITEM_DB_BASE.hpp>
#include <_PCBANG_PLAY_TIME.hpp>
#include <_PERSONALAMINE_INVEN_DB_BASE.hpp>
#include <_POSTDATA_DB_BASE.hpp>
#include <_POTION_NEXT_USE_TIME_DB_BASE.hpp>
#include <_PVPPOINT_LIMIT_DB_BASE.hpp>
#include <_PVP_ORDER_VIEW_DB_BASE.hpp>
#include <_QUEST_DB_BASE.hpp>
#include <_SFCONT_DB_BASE.hpp>
#include <_STAT_DB_BASE.hpp>
#include <_SUPPLEMENT_DB_BASE.hpp>
#include <_TIMELIMITINFO_DB_BASE.hpp>
#include <_TRADE_DB_BASE.hpp>
#include <_TRUNK_DB_BASE.hpp>
#include <_UNIT_DB_BASE.hpp>
#include <_worlddb_sf_delay_info.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _AVATOR_DATA
    {
        _AVATOR_DB_BASE dbAvator;
        _LINK_DB_BASE dbLink;
        _EQUIP_DB_BASE dbEquip;
        _FORCE_DB_BASE dbForce;
        _ANIMUS_DB_BASE dbAnimus;
        _STAT_DB_BASE dbStat;
        _INVEN_DB_BASE dbInven;
        _CUTTING_DB_BASE dbCutting;
        _QUEST_DB_BASE dbQuest;
        _UNIT_DB_BASE dbUnit;
        _SFCONT_DB_BASE dbSfcont;
        _TRADE_DB_BASE dbTrade;
        _BUDDY_DB_BASE dbBuddy;
        _TRUNK_DB_BASE dbTrunk;
        _ITEMCOMBINE_DB_BASE dbItemCombineEx;
        _AIOC_A_MACRODATA dbMacro;
        _POSTDATA_DB_BASE dbPostData;
        _CRYMSG_DB_BASE dbBossCry;
        char m_byHSKTime;
        char m_byPvpGrade;
        unsigned __int16 m_wKillPoint;
        int m_iPvpPoint;
        unsigned __int16 m_wDiePoint;
        char m_byCristalBattleDBInfo;
        _PERSONALAMINE_INVEN_DB_BASE dbPersonalAmineInven;
        _PVPPOINT_LIMIT_DB_BASE dbPvpPointLimit;
        _PVP_ORDER_VIEW_DB_BASE dbPvpOrderView;
        _worlddb_sf_delay_info dbSFDelay;
        _SUPPLEMENT_DB_BASE dbSupplement;
        _PCBANG_PLAY_TIME dbPlayTimeInPcbang;
        int m_bCristalBattleDateUpdate;
        _POTION_NEXT_USE_TIME_DB_BASE dbPotionNextUseTime;
        _PCBANG_FAVOR_ITEM_DB_BASE dbPcBangFavorItem;
        _TIMELIMITINFO_DB_BASE dbTimeLimitInfo;
    public:
        void InitData();
        void PostUpdateInit();
        _AVATOR_DATA();
        void ctor__AVATOR_DATA();
        ~_AVATOR_DATA();
        void dtor__AVATOR_DATA();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_AVATOR_DATA, 37215>(), "_AVATOR_DATA");
END_ATF_NAMESPACE
