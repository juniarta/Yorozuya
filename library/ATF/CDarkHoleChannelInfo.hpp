// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CDarkHoleChannel.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        using CDarkHoleChannelAddMonster2_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        using CDarkHoleChannelAddMonster2_clbk = void (WINAPIV*)(struct CDarkHoleChannel*, CDarkHoleChannelAddMonster2_ptr);
        
        using CDarkHoleChannelctor_CDarkHoleChannel4_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        using CDarkHoleChannelctor_CDarkHoleChannel4_clbk = void (WINAPIV*)(struct CDarkHoleChannel*, CDarkHoleChannelctor_CDarkHoleChannel4_ptr);
        using CDarkHoleChannelCanYouEnterHole6_ptr = bool (WINAPIV*)(struct CDarkHoleChannel*, struct CPlayer*);
        using CDarkHoleChannelCanYouEnterHole6_clbk = bool (WINAPIV*)(struct CDarkHoleChannel*, struct CPlayer*, CDarkHoleChannelCanYouEnterHole6_ptr);
        using CDarkHoleChannelChangeMonster8_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        using CDarkHoleChannelChangeMonster8_clbk = void (WINAPIV*)(struct CDarkHoleChannel*, CDarkHoleChannelChangeMonster8_ptr);
        using CDarkHoleChannelChangeMonsterApparition10_ptr = void (WINAPIV*)(struct CDarkHoleChannel*, int);
        using CDarkHoleChannelChangeMonsterApparition10_clbk = void (WINAPIV*)(struct CDarkHoleChannel*, int, CDarkHoleChannelChangeMonsterApparition10_ptr);
        using CDarkHoleChannelCheckCurrentMission12_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        using CDarkHoleChannelCheckCurrentMission12_clbk = void (WINAPIV*)(struct CDarkHoleChannel*, CDarkHoleChannelCheckCurrentMission12_ptr);
        using CDarkHoleChannelCheckEvent14_ptr = bool (WINAPIV*)(struct CDarkHoleChannel*, EM_DH_EVENT, int, int, int, struct CGameObject*);
        using CDarkHoleChannelCheckEvent14_clbk = bool (WINAPIV*)(struct CDarkHoleChannel*, EM_DH_EVENT, int, int, int, struct CGameObject*, CDarkHoleChannelCheckEvent14_ptr);
        using CDarkHoleChannelCheckInnerEventDummy16_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        using CDarkHoleChannelCheckInnerEventDummy16_clbk = void (WINAPIV*)(struct CDarkHoleChannel*, CDarkHoleChannelCheckInnerEventDummy16_ptr);
        using CDarkHoleChannelCheckMember18_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        using CDarkHoleChannelCheckMember18_clbk = void (WINAPIV*)(struct CDarkHoleChannel*, CDarkHoleChannelCheckMember18_ptr);
        using CDarkHoleChannelCheckRespawnMonster20_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        using CDarkHoleChannelCheckRespawnMonster20_clbk = void (WINAPIV*)(struct CDarkHoleChannel*, CDarkHoleChannelCheckRespawnMonster20_ptr);
        using CDarkHoleChannelCheckSendNewMissionMsg22_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        using CDarkHoleChannelCheckSendNewMissionMsg22_clbk = void (WINAPIV*)(struct CDarkHoleChannel*, CDarkHoleChannelCheckSendNewMissionMsg22_ptr);
        using CDarkHoleChannelCheckWaitNextMission24_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        using CDarkHoleChannelCheckWaitNextMission24_clbk = void (WINAPIV*)(struct CDarkHoleChannel*, CDarkHoleChannelCheckWaitNextMission24_ptr);
        using CDarkHoleChannelClearMember26_ptr = bool (WINAPIV*)(struct CDarkHoleChannel*, struct CPlayer*, bool, struct _dh_player_mgr::_pos*);
        using CDarkHoleChannelClearMember26_clbk = bool (WINAPIV*)(struct CDarkHoleChannel*, struct CPlayer*, bool, struct _dh_player_mgr::_pos*, CDarkHoleChannelClearMember26_ptr);
        using CDarkHoleChannelCloseDungeon28_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        using CDarkHoleChannelCloseDungeon28_clbk = void (WINAPIV*)(struct CDarkHoleChannel*, CDarkHoleChannelCloseDungeon28_ptr);
        using CDarkHoleChannelCreateMonster30_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        using CDarkHoleChannelCreateMonster30_clbk = void (WINAPIV*)(struct CDarkHoleChannel*, CDarkHoleChannelCreateMonster30_ptr);
        using CDarkHoleChannelGetAllMemberNum32_ptr = int (WINAPIV*)(struct CDarkHoleChannel*);
        using CDarkHoleChannelGetAllMemberNum32_clbk = int (WINAPIV*)(struct CDarkHoleChannel*, CDarkHoleChannelGetAllMemberNum32_ptr);
        using CDarkHoleChannelGetCurrentMemberNum34_ptr = int (WINAPIV*)(struct CDarkHoleChannel*);
        using CDarkHoleChannelGetCurrentMemberNum34_clbk = int (WINAPIV*)(struct CDarkHoleChannel*, CDarkHoleChannelGetCurrentMemberNum34_ptr);
        using CDarkHoleChannelGetEnterNewPos36_ptr = bool (WINAPIV*)(struct CDarkHoleChannel*, struct _ENTER_DUNGEON_NEW_POS*);
        using CDarkHoleChannelGetEnterNewPos36_clbk = bool (WINAPIV*)(struct CDarkHoleChannel*, struct _ENTER_DUNGEON_NEW_POS*, CDarkHoleChannelGetEnterNewPos36_ptr);
        using CDarkHoleChannelGetLeaderSerial38_ptr = unsigned int (WINAPIV*)(struct CDarkHoleChannel*);
        using CDarkHoleChannelGetLeaderSerial38_clbk = unsigned int (WINAPIV*)(struct CDarkHoleChannel*, CDarkHoleChannelGetLeaderSerial38_ptr);
        using CDarkHoleChannelGetMonsterNumInCurMissionArea40_ptr = int (WINAPIV*)(struct CDarkHoleChannel*, int);
        using CDarkHoleChannelGetMonsterNumInCurMissionArea40_clbk = int (WINAPIV*)(struct CDarkHoleChannel*, int, CDarkHoleChannelGetMonsterNumInCurMissionArea40_ptr);
        using CDarkHoleChannelGetPlayerInfo42_ptr = struct _dh_player_mgr* (WINAPIV*)(struct CDarkHoleChannel*, unsigned int);
        using CDarkHoleChannelGetPlayerInfo42_clbk = struct _dh_player_mgr* (WINAPIV*)(struct CDarkHoleChannel*, unsigned int, CDarkHoleChannelGetPlayerInfo42_ptr);
        using CDarkHoleChannelGotoNextMission44_ptr = bool (WINAPIV*)(struct CDarkHoleChannel*);
        using CDarkHoleChannelGotoNextMission44_clbk = bool (WINAPIV*)(struct CDarkHoleChannel*, CDarkHoleChannelGotoNextMission44_ptr);
        using CDarkHoleChannelGotoNextMissionByPosition46_ptr = bool (WINAPIV*)(struct CDarkHoleChannel*, float*);
        using CDarkHoleChannelGotoNextMissionByPosition46_clbk = bool (WINAPIV*)(struct CDarkHoleChannel*, float*, CDarkHoleChannelGotoNextMissionByPosition46_ptr);
        using CDarkHoleChannelInit48_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        using CDarkHoleChannelInit48_clbk = void (WINAPIV*)(struct CDarkHoleChannel*, CDarkHoleChannelInit48_ptr);
        using CDarkHoleChannelIsAllMemberNearPosition50_ptr = bool (WINAPIV*)(struct CDarkHoleChannel*, float*, int);
        using CDarkHoleChannelIsAllMemberNearPosition50_clbk = bool (WINAPIV*)(struct CDarkHoleChannel*, float*, int, CDarkHoleChannelIsAllMemberNearPosition50_ptr);
        using CDarkHoleChannelIsFill52_ptr = bool (WINAPIV*)(struct CDarkHoleChannel*);
        using CDarkHoleChannelIsFill52_clbk = bool (WINAPIV*)(struct CDarkHoleChannel*, CDarkHoleChannelIsFill52_ptr);
        using CDarkHoleChannelIsMoveNextMission54_ptr = bool (WINAPIV*)(struct CDarkHoleChannel*, int);
        using CDarkHoleChannelIsMoveNextMission54_clbk = bool (WINAPIV*)(struct CDarkHoleChannel*, int, CDarkHoleChannelIsMoveNextMission54_ptr);
        using CDarkHoleChannelIsOpenPartyMember56_ptr = bool (WINAPIV*)(struct CDarkHoleChannel*, struct CPlayer*);
        using CDarkHoleChannelIsOpenPartyMember56_clbk = bool (WINAPIV*)(struct CDarkHoleChannel*, struct CPlayer*, CDarkHoleChannelIsOpenPartyMember56_ptr);
        using CDarkHoleChannelIsReEnterable58_ptr = bool (WINAPIV*)(struct CDarkHoleChannel*, unsigned int);
        using CDarkHoleChannelIsReEnterable58_clbk = bool (WINAPIV*)(struct CDarkHoleChannel*, unsigned int, CDarkHoleChannelIsReEnterable58_ptr);
        using CDarkHoleChannelNextMissionOtherQuester60_ptr = void (WINAPIV*)(struct CDarkHoleChannel*, struct CPlayer*, struct _dh_mission_setup*);
        using CDarkHoleChannelNextMissionOtherQuester60_clbk = void (WINAPIV*)(struct CDarkHoleChannel*, struct CPlayer*, struct _dh_mission_setup*, CDarkHoleChannelNextMissionOtherQuester60_ptr);
        using CDarkHoleChannelOnLoop62_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        using CDarkHoleChannelOnLoop62_clbk = void (WINAPIV*)(struct CDarkHoleChannel*, CDarkHoleChannelOnLoop62_ptr);
        using CDarkHoleChannelOpenDungeon64_ptr = void (WINAPIV*)(struct CDarkHoleChannel*, struct _dh_quest_setup*, int, struct CPlayer*, struct CDarkHole*);
        using CDarkHoleChannelOpenDungeon64_clbk = void (WINAPIV*)(struct CDarkHoleChannel*, struct _dh_quest_setup*, int, struct CPlayer*, struct CDarkHole*, CDarkHoleChannelOpenDungeon64_ptr);
        using CDarkHoleChannelPushMember66_ptr = bool (WINAPIV*)(struct CDarkHoleChannel*, struct CPlayer*, bool, struct CMapData*, uint16_t, float*);
        using CDarkHoleChannelPushMember66_clbk = bool (WINAPIV*)(struct CDarkHoleChannel*, struct CPlayer*, bool, struct CMapData*, uint16_t, float*, CDarkHoleChannelPushMember66_ptr);
        using CDarkHoleChannelSearchMissionFromPos68_ptr = struct _dh_mission_setup* (WINAPIV*)(struct CDarkHoleChannel*, float*);
        using CDarkHoleChannelSearchMissionFromPos68_clbk = struct _dh_mission_setup* (WINAPIV*)(struct CDarkHoleChannel*, float*, CDarkHoleChannelSearchMissionFromPos68_ptr);
        using CDarkHoleChannelSendMsg_AskReEnter70_ptr = void (WINAPIV*)(struct CDarkHoleChannel*, struct CPlayer*);
        using CDarkHoleChannelSendMsg_AskReEnter70_clbk = void (WINAPIV*)(struct CDarkHoleChannel*, struct CPlayer*, CDarkHoleChannelSendMsg_AskReEnter70_ptr);
        using CDarkHoleChannelSendMsg_ChannelClose72_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        using CDarkHoleChannelSendMsg_ChannelClose72_clbk = void (WINAPIV*)(struct CDarkHoleChannel*, CDarkHoleChannelSendMsg_ChannelClose72_ptr);
        using CDarkHoleChannelSendMsg_GateDestroy74_ptr = void (WINAPIV*)(struct CDarkHoleChannel*, char*, char*, int);
        using CDarkHoleChannelSendMsg_GateDestroy74_clbk = void (WINAPIV*)(struct CDarkHoleChannel*, char*, char*, int, CDarkHoleChannelSendMsg_GateDestroy74_ptr);
        using CDarkHoleChannelSendMsg_JobCount76_ptr = void (WINAPIV*)(struct CDarkHoleChannel*, int, int);
        using CDarkHoleChannelSendMsg_JobCount76_clbk = void (WINAPIV*)(struct CDarkHoleChannel*, int, int, CDarkHoleChannelSendMsg_JobCount76_ptr);
        using CDarkHoleChannelSendMsg_JobPass78_ptr = void (WINAPIV*)(struct CDarkHoleChannel*, int);
        using CDarkHoleChannelSendMsg_JobPass78_clbk = void (WINAPIV*)(struct CDarkHoleChannel*, int, CDarkHoleChannelSendMsg_JobPass78_ptr);
        using CDarkHoleChannelSendMsg_LeaderChange80_ptr = void (WINAPIV*)(struct CDarkHoleChannel*, struct CPlayer*);
        using CDarkHoleChannelSendMsg_LeaderChange80_clbk = void (WINAPIV*)(struct CDarkHoleChannel*, struct CPlayer*, CDarkHoleChannelSendMsg_LeaderChange80_ptr);
        using CDarkHoleChannelSendMsg_MemberInfo82_ptr = void (WINAPIV*)(struct CDarkHoleChannel*, struct CPlayer*);
        using CDarkHoleChannelSendMsg_MemberInfo82_clbk = void (WINAPIV*)(struct CDarkHoleChannel*, struct CPlayer*, CDarkHoleChannelSendMsg_MemberInfo82_ptr);
        using CDarkHoleChannelSendMsg_MissionInfo84_ptr = void (WINAPIV*)(struct CDarkHoleChannel*, struct CPlayer*);
        using CDarkHoleChannelSendMsg_MissionInfo84_clbk = void (WINAPIV*)(struct CDarkHoleChannel*, struct CPlayer*, CDarkHoleChannelSendMsg_MissionInfo84_ptr);
        using CDarkHoleChannelSendMsg_MissionPass86_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        using CDarkHoleChannelSendMsg_MissionPass86_clbk = void (WINAPIV*)(struct CDarkHoleChannel*, CDarkHoleChannelSendMsg_MissionPass86_ptr);
        using CDarkHoleChannelSendMsg_NewMember88_ptr = void (WINAPIV*)(struct CDarkHoleChannel*, struct CPlayer*, bool);
        using CDarkHoleChannelSendMsg_NewMember88_clbk = void (WINAPIV*)(struct CDarkHoleChannel*, struct CPlayer*, bool, CDarkHoleChannelSendMsg_NewMember88_ptr);
        using CDarkHoleChannelSendMsg_NewMission90_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        using CDarkHoleChannelSendMsg_NewMission90_clbk = void (WINAPIV*)(struct CDarkHoleChannel*, CDarkHoleChannelSendMsg_NewMission90_ptr);
        using CDarkHoleChannelSendMsg_OpenPortalByReact92_ptr = void (WINAPIV*)(struct CDarkHoleChannel*, int);
        using CDarkHoleChannelSendMsg_OpenPortalByReact92_clbk = void (WINAPIV*)(struct CDarkHoleChannel*, int, CDarkHoleChannelSendMsg_OpenPortalByReact92_ptr);
        using CDarkHoleChannelSendMsg_OpenPortalByResult94_ptr = void (WINAPIV*)(struct CDarkHoleChannel*, int);
        using CDarkHoleChannelSendMsg_OpenPortalByResult94_clbk = void (WINAPIV*)(struct CDarkHoleChannel*, int, CDarkHoleChannelSendMsg_OpenPortalByResult94_ptr);
        using CDarkHoleChannelSendMsg_PopMember96_ptr = void (WINAPIV*)(struct CDarkHoleChannel*, struct CPlayer*, bool);
        using CDarkHoleChannelSendMsg_PopMember96_clbk = void (WINAPIV*)(struct CDarkHoleChannel*, struct CPlayer*, bool, CDarkHoleChannelSendMsg_PopMember96_ptr);
        using CDarkHoleChannelSendMsg_QuestInfo98_ptr = void (WINAPIV*)(struct CDarkHoleChannel*, struct CPlayer*);
        using CDarkHoleChannelSendMsg_QuestInfo98_clbk = void (WINAPIV*)(struct CDarkHoleChannel*, struct CPlayer*, CDarkHoleChannelSendMsg_QuestInfo98_ptr);
        using CDarkHoleChannelSendMsg_QuestPass100_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        using CDarkHoleChannelSendMsg_QuestPass100_clbk = void (WINAPIV*)(struct CDarkHoleChannel*, CDarkHoleChannelSendMsg_QuestPass100_ptr);
        using CDarkHoleChannelSendMsg_RealAddLimTime102_ptr = void (WINAPIV*)(struct CDarkHoleChannel*, int, char*);
        using CDarkHoleChannelSendMsg_RealAddLimTime102_clbk = void (WINAPIV*)(struct CDarkHoleChannel*, int, char*, CDarkHoleChannelSendMsg_RealAddLimTime102_ptr);
        using CDarkHoleChannelSendMsg_RealMsgInform104_ptr = void (WINAPIV*)(struct CDarkHoleChannel*, char*);
        using CDarkHoleChannelSendMsg_RealMsgInform104_clbk = void (WINAPIV*)(struct CDarkHoleChannel*, char*, CDarkHoleChannelSendMsg_RealMsgInform104_ptr);
        using CDarkHoleChannelSendMsg_TimeOut106_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        using CDarkHoleChannelSendMsg_TimeOut106_clbk = void (WINAPIV*)(struct CDarkHoleChannel*, CDarkHoleChannelSendMsg_TimeOut106_ptr);
        using CDarkHoleChannelShareItemToMonster108_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        using CDarkHoleChannelShareItemToMonster108_clbk = void (WINAPIV*)(struct CDarkHoleChannel*, CDarkHoleChannelShareItemToMonster108_ptr);
        using CDarkHoleChannelWaitNextMission110_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        using CDarkHoleChannelWaitNextMission110_clbk = void (WINAPIV*)(struct CDarkHoleChannel*, CDarkHoleChannelWaitNextMission110_ptr);
        using CDarkHoleChannel_Reward112_ptr = bool (WINAPIV*)(struct CDarkHoleChannel*);
        using CDarkHoleChannel_Reward112_clbk = bool (WINAPIV*)(struct CDarkHoleChannel*, CDarkHoleChannel_Reward112_ptr);
        
        using CDarkHoleChanneldtor_CDarkHoleChannel117_ptr = void (WINAPIV*)(struct CDarkHoleChannel*);
        using CDarkHoleChanneldtor_CDarkHoleChannel117_clbk = void (WINAPIV*)(struct CDarkHoleChannel*, CDarkHoleChanneldtor_CDarkHoleChannel117_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
