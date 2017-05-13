// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CGuildVtbl.hpp"
#include "CPlayer.hpp"
#include "_guild_applier_download_zocl.hpp"
#include "_guild_applier_info.hpp"
#include "_guild_battle_suggest_matter.hpp"
#include "_guild_master_info.hpp"
#include "_guild_member_buddy_download_zocl.hpp"
#include "_guild_member_download_zocl.hpp"
#include "_guild_member_info.hpp"
#include "_guild_member_refresh_data.hpp"
#include "_guild_money_io_download_zocl.hpp"
#include "_guild_query_info_result_zocl.hpp"
#include "_io_money_data.hpp"
#include "_suggested_matter.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct CGuild
    {
        struct MakeBuddyPacket
        {
			struct __l2
			{
				struct __guild_buddy_list
				{
					unsigned int dwSerial;
					unsigned __int16 wMapCode;
					char byRegionIndex;
				};
			};
        };
        CGuildVtbl *vfptr;
        int m_nIndex;
        unsigned int m_dwSerial;
        char m_wszName[17];
        char m_aszName[17];
        char m_byGrade;
        long double m_dTotalDalant;
        long double m_dTotalGold;
        unsigned int m_dwEmblemBack;
        unsigned int m_dwEmblemMark;
        char m_byRace;
        char m_wszGreetingMsg[256];
        _guild_master_info m_MasterData;
        int m_nMemberNum;
        _guild_member_info *m_MemberData;
        _guild_member_info *m_pGuildCommittee[3];
        int m_nApplierNum;
        _guild_applier_info *m_ApplierData;
        bool m_bNowProcessSgtMter;
        unsigned int m_dwSuggesterSerial;
        _suggested_matter m_SuggestedMatter;
        _guild_battle_suggest_matter m_GuildBattleSugestMatter;
        bool m_bInGuildBattle;
        bool m_bPossibleElectMaster;
        unsigned int m_dwGuildBattleTotWin;
        unsigned int m_dwGuildBattleTotDraw;
        unsigned int m_dwGuildBattleTotLose;
        _guild_member_download_zocl *m_DownPacket_Member;
        _guild_applier_download_zocl *m_DownPacket_Applier;
        _guild_query_info_result_zocl *m_QueryPacket_Info;
        _guild_money_io_download_zocl *m_MoneyIO_List;
        _guild_member_buddy_download_zocl *m_Buddy_List;
        int m_nIOMoneyHistoryNum;
        _io_money_data m_IOMoneyHistory[100];
        bool m_bDBWait;
        bool m_bIOWait;
        bool m_bRankWait;
        char m_byMoneyOutputKind;
        int m_nTempMemberNum;
        unsigned int m_dwLastLoopTime;
        char m_szHistoryFileName[128];
    public:
        bool ActVote(struct _guild_member_info* pMemPtr, char byCode)
        {
            using org_ptr = bool (WINAPIV*)(struct CGuild*, struct _guild_member_info*, char);
            return (org_ptr(0x140254180L))(this, pMemPtr, byCode);
        };
        void AddScheduleComplete(char byRet, struct CGuild* pSrcGuild)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, char, struct CGuild*);
            (org_ptr(0x140258300L))(this, byRet, pSrcGuild);
        };
        CGuild()
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*);
            (org_ptr(0x1402515a0L))(this);
        };
        void ctor_CGuild()
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*);
            (org_ptr(0x1402515a0L))(this);
        };
        void CancelSuggestedMatter()
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*);
            (org_ptr(0x140254120L))(this);
        };
        char CheckGuildBattleSuggestRequestToDestGuild(unsigned int dwSrcGuildSerial, unsigned int dwStartTimeInx, unsigned int dwMemberCntInx, unsigned int dwMapInx)
        {
            using org_ptr = char (WINAPIV*)(struct CGuild*, unsigned int, unsigned int, unsigned int, unsigned int);
            return (org_ptr(0x1402579f0L))(this, dwSrcGuildSerial, dwStartTimeInx, dwMemberCntInx, dwMapInx);
        };
        void ClearGuildBattle()
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*);
            (org_ptr(0x140258290L))(this);
        };
        void ClearVote()
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*);
            (org_ptr(0x140254220L))(this);
        };
        void CompleteOutGuildbattleCost(unsigned int dwSrcGuildSerial, unsigned int dwStartTimeInx, unsigned int dwMemberCntInx, unsigned int dwMapInx)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, unsigned int, unsigned int, unsigned int, unsigned int);
            (org_ptr(0x140257b00L))(this, dwSrcGuildSerial, dwStartTimeInx, dwMemberCntInx, dwMapInx);
        };
        void CompleteSelectMasterLastConn(unsigned int dwLastConnTime)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, unsigned int);
            (org_ptr(0x140259ce0L))(this, dwLastConnTime);
        };
        void Complete_DB_Update_Committee(char* pData)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, char*);
            (org_ptr(0x1402597b0L))(this, pData);
        };
        bool DB_Update_GuildMaster(struct _guild_member_info* pNewguildMaster)
        {
            using org_ptr = bool (WINAPIV*)(struct CGuild*, struct _guild_member_info*);
            return (org_ptr(0x140252bd0L))(this, pNewguildMaster);
        };
        void DB_Update_GuildMaster_Complete(unsigned int in_guild_prev_masterSerial, char in_guild_prev_masterPrevGrade, unsigned int in_guild_new_masterSerial, char in_guild_new_masterPrevGrade)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, unsigned int, char, unsigned int, char);
            (org_ptr(0x140252d10L))(this, in_guild_prev_masterSerial, in_guild_prev_masterPrevGrade, in_guild_new_masterSerial, in_guild_new_masterPrevGrade);
        };
        char DestGuildIsAvailableBattleRequestState()
        {
            using org_ptr = char (WINAPIV*)(struct CGuild*);
            return (org_ptr(0x140257960L))(this);
        };
        void EndRankJob()
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*);
            (org_ptr(0x140344990L))(this);
        };
        void EstGuild(unsigned int dwSerial, char* pwszName, char byRace, int nMemberNum, struct _guild_member_info* pEstMember)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, unsigned int, char*, char, int, struct _guild_member_info*);
            (org_ptr(0x1402523e0L))(this, dwSerial, pwszName, byRace, nMemberNum, pEstMember);
        };
        void ForceLeave(unsigned int dwMemberSerial)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, unsigned int);
            (org_ptr(0x140258c80L))(this, dwMemberSerial);
        };
        struct _guild_applier_info* GetApplierFromSerial(unsigned int dwApplierSerial)
        {
            using org_ptr = struct _guild_applier_info* (WINAPIV*)(struct CGuild*, unsigned int);
            return (org_ptr(0x140254560L))(this, dwApplierSerial);
        };
        char GetGrade()
        {
            using org_ptr = char (WINAPIV*)(struct CGuild*);
            return (org_ptr(0x140078f50L))(this);
        };
        char* GetGuildMasterName()
        {
            using org_ptr = char* (WINAPIV*)(struct CGuild*);
            return (org_ptr(0x140252300L))(this);
        };
        unsigned int GetGuildMasterSerial()
        {
            using org_ptr = unsigned int (WINAPIV*)(struct CGuild*);
            return (org_ptr(0x14007c540L))(this);
        };
        struct _guild_member_info* GetMemberFromSerial(unsigned int dwMemberSerial)
        {
            using org_ptr = struct _guild_member_info* (WINAPIV*)(struct CGuild*, unsigned int);
            return (org_ptr(0x1402544b0L))(this, dwMemberSerial);
        };
        int GetMemberNum()
        {
            using org_ptr = int (WINAPIV*)(struct CGuild*);
            return (org_ptr(0x1400ad180L))(this);
        };
        int GetMemberNumForJoin()
        {
            using org_ptr = int (WINAPIV*)(struct CGuild*);
            return (org_ptr(0x1400ad1a0L))(this);
        };
        char GetRace()
        {
            using org_ptr = char (WINAPIV*)(struct CGuild*);
            return (org_ptr(0x1400ad150L))(this);
        };
        long double GetTotalDalant()
        {
            using org_ptr = long double (WINAPIV*)(struct CGuild*);
            return (org_ptr(0x1400ad2a0L))(this);
        };
        long double GetTotalGold()
        {
            using org_ptr = long double (WINAPIV*)(struct CGuild*);
            return (org_ptr(0x1400ad2e0L))(this);
        };
        char GuildBattleSuggestRequestToDestGuild(unsigned int dwSrcGuildSerial, unsigned int dwStartTimeInx, unsigned int dwMemberCntInx, unsigned int dwMapInx)
        {
            using org_ptr = char (WINAPIV*)(struct CGuild*, unsigned int, unsigned int, unsigned int, unsigned int);
            return (org_ptr(0x140257c30L))(this, dwSrcGuildSerial, dwStartTimeInx, dwMemberCntInx, dwMapInx);
        };
        void IOMoney(char* pwszIOerName, unsigned int dwIOerSerial, long double dIODalant, long double dIOGold, long double dTotalDalant, long double dTotalGold, char* pbyDate, bool bInPut)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, char*, unsigned int, long double, long double, long double, long double, char*, bool);
            (org_ptr(0x140253230L))(this, pwszIOerName, dwIOerSerial, dIODalant, dIOGold, dTotalDalant, dTotalGold, pbyDate, bInPut);
        };
        void Init(int nIndex)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, int);
            (org_ptr(0x140204e40L))(this, nIndex);
        };
        void InitVote()
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*);
            (org_ptr(0x140254200L))(this);
        };
        bool IsFill()
        {
            using org_ptr = bool (WINAPIV*)(struct CGuild*);
            return (org_ptr(0x140254310L))(this);
        };
        struct _guild_member_info* LoginMember(unsigned int dwMemberSerial, struct CPlayer* pPtr)
        {
            using org_ptr = struct _guild_member_info* (WINAPIV*)(struct CGuild*, unsigned int, struct CPlayer*);
            return (org_ptr(0x140253750L))(this, dwMemberSerial, pPtr);
        };
        bool LogoffMember(unsigned int dwMemberSerial)
        {
            using org_ptr = bool (WINAPIV*)(struct CGuild*, unsigned int);
            return (org_ptr(0x140253800L))(this, dwMemberSerial);
        };
        void Loop(bool bChangeDay)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, bool);
            (org_ptr(0x140253310L))(this, bChangeDay);
        };
        void MakeBuddyPacket()
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*);
            (org_ptr(0x1402551e0L))(this);
        };
        void MakeDownApplierPacket()
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*);
            (org_ptr(0x140254ac0L))(this);
        };
        void MakeDownMemberPacket()
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*);
            (org_ptr(0x140254620L))(this);
        };
        void MakeMoneyIOPacket()
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*);
            (org_ptr(0x140254f20L))(this);
        };
        void MakeQueryInfoPacket()
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*);
            (org_ptr(0x140254db0L))(this);
        };
        char ManageAcceptORRefuseGuildBattle(bool bAccept)
        {
            using org_ptr = char (WINAPIV*)(struct CGuild*, bool);
            return (org_ptr(0x140259ef0L))(this, bAccept);
        };
        char ManageBuyGuildEmblem(unsigned int dwBuyer, unsigned int dwBack, unsigned int dwMark)
        {
            using org_ptr = char (WINAPIV*)(struct CGuild*, unsigned int, unsigned int, unsigned int);
            return (org_ptr(0x140259160L))(this, dwBuyer, dwBack, dwMark);
        };
        char ManageExpulseMember(unsigned int dwMemberSerial)
        {
            using org_ptr = char (WINAPIV*)(struct CGuild*, unsigned int);
            return (org_ptr(0x140258db0L))(this, dwMemberSerial);
        };
        char ManageGuildCommittee(unsigned int dwDestSerial, bool bAppoint)
        {
            using org_ptr = char (WINAPIV*)(struct CGuild*, unsigned int, bool);
            return (org_ptr(0x140259530L))(this, dwDestSerial, bAppoint);
        };
        char ManagePopGuildMoney(unsigned int dwDest, unsigned int dwDalant, unsigned int dwGold)
        {
            using org_ptr = char (WINAPIV*)(struct CGuild*, unsigned int, unsigned int, unsigned int);
            return (org_ptr(0x140258ee0L))(this, dwDest, dwDalant, dwGold);
        };
        char ManageProposeGuildBattle(unsigned int dwDestGuild, unsigned int dwStartTimeIdx, unsigned int dwMemberCountIdx, unsigned int dwMapIdx)
        {
            using org_ptr = char (WINAPIV*)(struct CGuild*, unsigned int, unsigned int, unsigned int, unsigned int);
            return (org_ptr(0x1402593d0L))(this, dwDestGuild, dwStartTimeIdx, dwMemberCountIdx, dwMapIdx);
        };
        bool PopApplier(unsigned int dwApplierSerial, char byDelCode)
        {
            using org_ptr = bool (WINAPIV*)(struct CGuild*, unsigned int, char);
            return (org_ptr(0x140253ce0L))(this, dwApplierSerial, byDelCode);
        };
        bool PopMember(unsigned int dwMemberSerial)
        {
            using org_ptr = bool (WINAPIV*)(struct CGuild*, unsigned int);
            return (org_ptr(0x1402539f0L))(this, dwMemberSerial);
        };
        bool PushApplier(struct CPlayer* pApplier)
        {
            using org_ptr = bool (WINAPIV*)(struct CGuild*, struct CPlayer*);
            return (org_ptr(0x140253bf0L))(this, pApplier);
        };
        void PushDQSDestGuildOutputGuildBattleCost()
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*);
            (org_ptr(0x140258020L))(this);
        };
        void PushDQSGuildMasterLastConnn()
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*);
            (org_ptr(0x140259c30L))(this);
        };
        void PushDQSInGuildBattleCost()
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*);
            (org_ptr(0x140257db0L))(this);
        };
        void PushDQSInGuildBattleRewardMoney()
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*);
            (org_ptr(0x140258180L))(this);
        };
        void PushDQSSourceGuildOutputGuildBattleCost()
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*);
            (org_ptr(0x140257ec0L))(this);
        };
        void PushHistory_IOMoney(bool bInput, char* pwszIOerName, unsigned int dwIOerSerial, long double dIODalant, long double dIOGold, long double dLeftDalant, long double dLeftGold, char* pbyDate)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, bool, char*, unsigned int, long double, long double, long double, long double, char*);
            (org_ptr(0x140254330L))(this, bInput, pwszIOerName, dwIOerSerial, dIODalant, dIOGold, dLeftDalant, dLeftGold, pbyDate);
        };
        struct _guild_member_info* PushMember(struct _guild_member_info* pSheet)
        {
            using org_ptr = struct _guild_member_info* (WINAPIV*)(struct CGuild*, struct _guild_member_info*);
            return (org_ptr(0x1402538d0L))(this, pSheet);
        };
        void RefreshGuildMemberData(struct _guild_member_refresh_data* pRefreshMember)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, struct _guild_member_refresh_data*);
            (org_ptr(0x140252640L))(this, pRefreshMember);
        };
        bool RegSuggestedMatter(unsigned int dwSuggesterSerial, char byMatterType, unsigned int dwMatterDst, char* pwszComment, unsigned int dwMatterObj1, unsigned int dwMatterObj2, unsigned int dwMatterObj3)
        {
            using org_ptr = bool (WINAPIV*)(struct CGuild*, unsigned int, char, unsigned int, char*, unsigned int, unsigned int, unsigned int);
            return (org_ptr(0x140253dd0L))(this, dwSuggesterSerial, byMatterType, dwMatterDst, pwszComment, dwMatterObj1, dwMatterObj2, dwMatterObj3);
        };
        void Release()
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*);
            (org_ptr(0x140251b50L))(this);
        };
        void ReleaseTemp()
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*);
            (org_ptr(0x140251e20L))(this);
        };
        void SendMsg_AddJoinApplier(struct _guild_applier_info* p)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, struct _guild_applier_info*);
            (org_ptr(0x140256750L))(this, p);
        };
        void SendMsg_AlterMemberGrade()
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*);
            (org_ptr(0x1402576b0L))(this);
        };
        void SendMsg_AlterMemberState()
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*);
            (org_ptr(0x140257490L))(this);
        };
        void SendMsg_ApplyGuildBattleResultInform(char byRet, char* wszDestGuildName)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, char, char*);
            (org_ptr(0x140258550L))(this, byRet, wszDestGuildName);
        };
        void SendMsg_ChangeTaxRate(char byTax)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, char);
            (org_ptr(0x140255730L))(this, byTax);
        };
        void SendMsg_DelJoinApplier(struct _guild_applier_info* p, char byDelCode)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, struct _guild_applier_info*, char);
            (org_ptr(0x140256970L))(this, p, byDelCode);
        };
        void SendMsg_DownPacket(char bDowntype, struct _guild_member_info* pMem)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, char, struct _guild_member_info*);
            (org_ptr(0x140255470L))(this, bDowntype, pMem);
        };
        int SendMsg_GuildBattleProposed(char* pwszName)
        {
            using org_ptr = int (WINAPIV*)(struct CGuild*, char*);
            return (org_ptr(0x14025a120L))(this, pwszName);
        };
        void SendMsg_GuildBattleRefused(char* pwszName)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, char*);
            (org_ptr(0x14025a220L))(this, pwszName);
        };
        void SendMsg_GuildBattleSuggestResult(char byRet, char* wszDestGuildName)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, char, char*);
            (org_ptr(0x1402583f0L))(this, byRet, wszDestGuildName);
        };
        void SendMsg_GuildDisjointInform()
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*);
            (org_ptr(0x140256fe0L))(this);
        };
        void SendMsg_GuildInfoUpdateInform()
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*);
            (org_ptr(0x140255850L))(this);
        };
        void SendMsg_GuildJoinAcceptInform(struct _guild_member_info* p, unsigned int dwAcceptSerial)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, struct _guild_member_info*, unsigned int);
            (org_ptr(0x140256ae0L))(this, p, dwAcceptSerial);
        };
        void SendMsg_GuildMemberLogin(unsigned int dwSerial, uint16_t wMapCode, uint16_t wRegionIndex)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, unsigned int, uint16_t, uint16_t);
            (org_ptr(0x1402570f0L))(this, dwSerial, wMapCode, wRegionIndex);
        };
        void SendMsg_GuildMemberLogoff(unsigned int dwSerial)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, unsigned int);
            (org_ptr(0x140257250L))(this, dwSerial);
        };
        void SendMsg_GuildMemberPosInform(unsigned int dwSerial, uint16_t wMapCode, uint16_t wRegionIndex)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, unsigned int, uint16_t, uint16_t);
            (org_ptr(0x140257360L))(this, dwSerial, wMapCode, wRegionIndex);
        };
        void SendMsg_GuildOutputMoneyFail(unsigned int dwIOerSerial)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, unsigned int);
            (org_ptr(0x140256ed0L))(this, dwIOerSerial);
        };
        void SendMsg_GuildRoomRented(char byRoomType)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, char);
            (org_ptr(0x1402586a0L))(this, byRoomType);
        };
        void SendMsg_IOMoney(unsigned int dwIOerSerial, long double dIODalant, long double dIOGold, bool bInPut, char* pbyDate)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, unsigned int, long double, long double, bool, char*);
            (org_ptr(0x140256cf0L))(this, dwIOerSerial, dIODalant, dIOGold, bInPut, pbyDate);
        };
        void SendMsg_LeaveMember(unsigned int dwMemberSerial, bool bSelf, bool bPunish)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, unsigned int, bool, bool);
            (org_ptr(0x140255a30L))(this, dwMemberSerial, bSelf, bPunish);
        };
        void SendMsg_ManageGuildCommitteeResult(bool bAppoint, char* pwszCommitteeName)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, bool, char*);
            (org_ptr(0x140259b00L))(this, bAppoint, pwszCommitteeName);
        };
        void SendMsg_MasterElectPossible(bool bPossible)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, bool);
            (org_ptr(0x140259d50L))(this, bPossible);
        };
        void SendMsg_QueryPacket_Info(int n)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, int);
            (org_ptr(0x1402559b0L))(this, n);
        };
        void SendMsg_VoteCancelInform()
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*);
            (org_ptr(0x140256410L))(this);
        };
        void SendMsg_VoteComplete(bool bPass)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, bool);
            (org_ptr(0x140256630L))(this, bPass);
        };
        void SendMsg_VoteProcessInform_Continue(struct _guild_member_info* pMem)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, struct _guild_member_info*);
            (org_ptr(0x140255f20L))(this, pMem);
        };
        void SendMsg_VoteProcessInform_Start()
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*);
            (org_ptr(0x140255b90L))(this);
        };
        void SendMsg_VoteState()
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*);
            (org_ptr(0x140256270L))(this);
        };
        void SendMsg_VoteStop(unsigned int dwMatterVoteSynKey)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, unsigned int);
            (org_ptr(0x140256540L))(this, dwMatterVoteSynKey);
        };
        void SetCopmlteGuildBattleSuggest()
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*);
            (org_ptr(0x1402582e0L))(this);
        };
        void SetGreetingmsg_GUILD(char* wszgreetmsg)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, char*);
            (org_ptr(0x140258b60L))(this, wszgreetmsg);
        };
        void SetGuild(unsigned int dwSerial, char byGrade, char byRace, char* pwszName, char* pwszGreetingMsg, unsigned int dwEmblemBack, unsigned int dwEmblemMark, int nNum, struct _guild_member_info* pEstMember, long double dTotalDalant, long double dTotalGold, unsigned int dwMasterSerial, char byMasterPrevGrade, int nIOMoneyHisNum, struct _io_money_data* pIOMonHisList, unsigned int dwGuildBattleTotalWinCnt, unsigned int dwGuildBattleTotalDrawCnt, unsigned int dwGuildBattleTotalLoseCnt)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, unsigned int, char, char, char*, char*, unsigned int, unsigned int, int, struct _guild_member_info*, long double, long double, unsigned int, char, int, struct _io_money_data*, unsigned int, unsigned int, unsigned int);
            (org_ptr(0x140251e40L))(this, dwSerial, byGrade, byRace, pwszName, pwszGreetingMsg, dwEmblemBack, dwEmblemMark, nNum, pEstMember, dTotalDalant, dTotalGold, dwMasterSerial, byMasterPrevGrade, nIOMoneyHisNum, pIOMonHisList, dwGuildBattleTotalWinCnt, dwGuildBattleTotalDrawCnt, dwGuildBattleTotalLoseCnt);
        };
        void SetGuildBattleMatter(unsigned int dwSrcGuildSerial, unsigned int dwStartTime, unsigned int dwNumber, unsigned int dwMapIdx)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, unsigned int, unsigned int, unsigned int, unsigned int);
            (org_ptr(0x140259e40L))(this, dwSrcGuildSerial, dwStartTime, dwNumber, dwMapIdx);
        };
        void SetTemp(char* pwszName)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, char*);
            (org_ptr(0x140251da0L))(this, pwszName);
        };
        void SortRankInGuild()
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*);
            (org_ptr(0x140252780L))(this);
        };
        char SrcGuildIsAvailableBattleRequestState()
        {
            using org_ptr = char (WINAPIV*)(struct CGuild*);
            return (org_ptr(0x1402578d0L))(this);
        };
        void StartRankJob()
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*);
            (org_ptr(0x1403447f0L))(this);
        };
        void UpdateEmblem(unsigned int dwEmblemBack, unsigned int dwEmblemMark)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, unsigned int, unsigned int);
            (org_ptr(0x140252920L))(this, dwEmblemBack, dwEmblemMark);
        };
        void UpdateGrade(char byGrade)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, char);
            (org_ptr(0x1402529a0L))(this, byGrade);
        };
        void UpdateGuildBattleWinCnt(unsigned int dwTotWin, unsigned int dwTotDraw, unsigned int dwTotLose)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, unsigned int, unsigned int, unsigned int);
            (org_ptr(0x140253190L))(this, dwTotWin, dwTotDraw, dwTotLose);
        };
        void UpdateUTATax(char byTaxRate)
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*, char);
            (org_ptr(0x140252bb0L))(this, byTaxRate);
        };
        ~CGuild()
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*);
            (org_ptr(0x1402519e0L))(this);
        };
        void dtor_CGuild()
        {
            using org_ptr = void (WINAPIV*)(struct CGuild*);
            (org_ptr(0x1402519e0L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE