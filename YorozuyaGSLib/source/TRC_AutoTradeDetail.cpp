#include <TRC_AutoTradeDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::TRC_AutoTradeAddGDalant2_ptr TRC_AutoTradeAddGDalant2_next(nullptr);
        Info::TRC_AutoTradeAddGDalant2_clbk TRC_AutoTradeAddGDalant2_user(nullptr);
        
        Info::TRC_AutoTradeCalcPrice4_ptr TRC_AutoTradeCalcPrice4_next(nullptr);
        Info::TRC_AutoTradeCalcPrice4_clbk TRC_AutoTradeCalcPrice4_user(nullptr);
        
        Info::TRC_AutoTradeChangeOwner6_ptr TRC_AutoTradeChangeOwner6_next(nullptr);
        Info::TRC_AutoTradeChangeOwner6_clbk TRC_AutoTradeChangeOwner6_user(nullptr);
        
        Info::TRC_AutoTradeChangeTaxRate8_ptr TRC_AutoTradeChangeTaxRate8_next(nullptr);
        Info::TRC_AutoTradeChangeTaxRate8_clbk TRC_AutoTradeChangeTaxRate8_user(nullptr);
        
        Info::TRC_AutoTradeChangeTaxRate10_ptr TRC_AutoTradeChangeTaxRate10_next(nullptr);
        Info::TRC_AutoTradeChangeTaxRate10_clbk TRC_AutoTradeChangeTaxRate10_user(nullptr);
        
        Info::TRC_AutoTradeInitialzie12_ptr TRC_AutoTradeInitialzie12_next(nullptr);
        Info::TRC_AutoTradeInitialzie12_clbk TRC_AutoTradeInitialzie12_user(nullptr);
        
        Info::TRC_AutoTradeIsMaster14_ptr TRC_AutoTradeIsMaster14_next(nullptr);
        Info::TRC_AutoTradeIsMaster14_clbk TRC_AutoTradeIsMaster14_user(nullptr);
        
        Info::TRC_AutoTradeIsOwnerGuild16_ptr TRC_AutoTradeIsOwnerGuild16_next(nullptr);
        Info::TRC_AutoTradeIsOwnerGuild16_clbk TRC_AutoTradeIsOwnerGuild16_user(nullptr);
        
        Info::TRC_AutoTradePushDQSData18_ptr TRC_AutoTradePushDQSData18_next(nullptr);
        Info::TRC_AutoTradePushDQSData18_clbk TRC_AutoTradePushDQSData18_user(nullptr);
        
        Info::TRC_AutoTradePushDQSData_GuildInMoney20_ptr TRC_AutoTradePushDQSData_GuildInMoney20_next(nullptr);
        Info::TRC_AutoTradePushDQSData_GuildInMoney20_clbk TRC_AutoTradePushDQSData_GuildInMoney20_user(nullptr);
        
        Info::TRC_AutoTradeSendMsg_PatriarchTaxRate22_ptr TRC_AutoTradeSendMsg_PatriarchTaxRate22_next(nullptr);
        Info::TRC_AutoTradeSendMsg_PatriarchTaxRate22_clbk TRC_AutoTradeSendMsg_PatriarchTaxRate22_user(nullptr);
        
        Info::TRC_AutoTradeSendMsg_UserLogInNotifyTaxRate24_ptr TRC_AutoTradeSendMsg_UserLogInNotifyTaxRate24_next(nullptr);
        Info::TRC_AutoTradeSendMsg_UserLogInNotifyTaxRate24_clbk TRC_AutoTradeSendMsg_UserLogInNotifyTaxRate24_user(nullptr);
        
        Info::TRC_AutoTradeSetGuildMaintainMoney26_ptr TRC_AutoTradeSetGuildMaintainMoney26_next(nullptr);
        Info::TRC_AutoTradeSetGuildMaintainMoney26_clbk TRC_AutoTradeSetGuildMaintainMoney26_user(nullptr);
        
        Info::TRC_AutoTradeSetPatriarchTaxMoney28_ptr TRC_AutoTradeSetPatriarchTaxMoney28_next(nullptr);
        Info::TRC_AutoTradeSetPatriarchTaxMoney28_clbk TRC_AutoTradeSetPatriarchTaxMoney28_user(nullptr);
        
        
        Info::TRC_AutoTradector_TRC_AutoTrade30_ptr TRC_AutoTradector_TRC_AutoTrade30_next(nullptr);
        Info::TRC_AutoTradector_TRC_AutoTrade30_clbk TRC_AutoTradector_TRC_AutoTrade30_user(nullptr);
        
        
        Info::TRC_AutoTradector_TRC_AutoTrade32_ptr TRC_AutoTradector_TRC_AutoTrade32_next(nullptr);
        Info::TRC_AutoTradector_TRC_AutoTrade32_clbk TRC_AutoTradector_TRC_AutoTrade32_user(nullptr);
        
        Info::TRC_AutoTrade_db_load34_ptr TRC_AutoTrade_db_load34_next(nullptr);
        Info::TRC_AutoTrade_db_load34_clbk TRC_AutoTrade_db_load34_user(nullptr);
        
        Info::TRC_AutoTrade_insert_info36_ptr TRC_AutoTrade_insert_info36_next(nullptr);
        Info::TRC_AutoTrade_insert_info36_clbk TRC_AutoTrade_insert_info36_user(nullptr);
        
        Info::TRC_AutoTradecheck40_ptr TRC_AutoTradecheck40_next(nullptr);
        Info::TRC_AutoTradecheck40_clbk TRC_AutoTradecheck40_user(nullptr);
        
        Info::TRC_AutoTradegetOwnerGuild42_ptr TRC_AutoTradegetOwnerGuild42_next(nullptr);
        Info::TRC_AutoTradegetOwnerGuild42_clbk TRC_AutoTradegetOwnerGuild42_user(nullptr);
        
        Info::TRC_AutoTradegetSuggestedTime44_ptr TRC_AutoTradegetSuggestedTime44_next(nullptr);
        Info::TRC_AutoTradegetSuggestedTime44_clbk TRC_AutoTradegetSuggestedTime44_user(nullptr);
        
        Info::TRC_AutoTradeget_guidlname46_ptr TRC_AutoTradeget_guidlname46_next(nullptr);
        Info::TRC_AutoTradeget_guidlname46_clbk TRC_AutoTradeget_guidlname46_user(nullptr);
        
        Info::TRC_AutoTradeget_next_tax48_ptr TRC_AutoTradeget_next_tax48_next(nullptr);
        Info::TRC_AutoTradeget_next_tax48_clbk TRC_AutoTradeget_next_tax48_user(nullptr);
        
        Info::TRC_AutoTradeget_race50_ptr TRC_AutoTradeget_race50_next(nullptr);
        Info::TRC_AutoTradeget_race50_clbk TRC_AutoTradeget_race50_user(nullptr);
        
        Info::TRC_AutoTradeget_taxrate52_ptr TRC_AutoTradeget_taxrate52_next(nullptr);
        Info::TRC_AutoTradeget_taxrate52_clbk TRC_AutoTradeget_taxrate52_user(nullptr);
        
        Info::TRC_AutoTradehis_income_money54_ptr TRC_AutoTradehis_income_money54_next(nullptr);
        Info::TRC_AutoTradehis_income_money54_clbk TRC_AutoTradehis_income_money54_user(nullptr);
        
        Info::TRC_AutoTradehistory_used_cheet_changetaxrate56_ptr TRC_AutoTradehistory_used_cheet_changetaxrate56_next(nullptr);
        Info::TRC_AutoTradehistory_used_cheet_changetaxrate56_clbk TRC_AutoTradehistory_used_cheet_changetaxrate56_user(nullptr);
        
        Info::TRC_AutoTradesendmsg_taxrate58_ptr TRC_AutoTradesendmsg_taxrate58_next(nullptr);
        Info::TRC_AutoTradesendmsg_taxrate58_clbk TRC_AutoTradesendmsg_taxrate58_user(nullptr);
        
        Info::TRC_AutoTradeset_owner60_ptr TRC_AutoTradeset_owner60_next(nullptr);
        Info::TRC_AutoTradeset_owner60_clbk TRC_AutoTradeset_owner60_user(nullptr);
        
        Info::TRC_AutoTradeset_suggested62_ptr TRC_AutoTradeset_suggested62_next(nullptr);
        Info::TRC_AutoTradeset_suggested62_clbk TRC_AutoTradeset_suggested62_user(nullptr);
        
        
        Info::TRC_AutoTradedtor_TRC_AutoTrade64_ptr TRC_AutoTradedtor_TRC_AutoTrade64_next(nullptr);
        Info::TRC_AutoTradedtor_TRC_AutoTrade64_clbk TRC_AutoTradedtor_TRC_AutoTrade64_user(nullptr);
        
        void TRC_AutoTradeAddGDalant2_wrapper(struct TRC_AutoTrade* _this, char* pdata)
        {
           TRC_AutoTradeAddGDalant2_user(_this, pdata, TRC_AutoTradeAddGDalant2_next);
        };
        unsigned int TRC_AutoTradeCalcPrice4_wrapper(struct TRC_AutoTrade* _this, unsigned int nGuildSerial, unsigned int nPrice)
        {
           return TRC_AutoTradeCalcPrice4_user(_this, nGuildSerial, nPrice, TRC_AutoTradeCalcPrice4_next);
        };
        int TRC_AutoTradeChangeOwner6_wrapper(struct TRC_AutoTrade* _this, struct CGuild* pGuild)
        {
           return TRC_AutoTradeChangeOwner6_user(_this, pGuild, TRC_AutoTradeChangeOwner6_next);
        };
        int TRC_AutoTradeChangeTaxRate8_wrapper(struct TRC_AutoTrade* _this, float fNewTaxRate)
        {
           return TRC_AutoTradeChangeTaxRate8_user(_this, fNewTaxRate, TRC_AutoTradeChangeTaxRate8_next);
        };
        void TRC_AutoTradeChangeTaxRate10_wrapper(struct TRC_AutoTrade* _this)
        {
           TRC_AutoTradeChangeTaxRate10_user(_this, TRC_AutoTradeChangeTaxRate10_next);
        };
        bool TRC_AutoTradeInitialzie12_wrapper(struct TRC_AutoTrade* _this)
        {
           return TRC_AutoTradeInitialzie12_user(_this, TRC_AutoTradeInitialzie12_next);
        };
        bool TRC_AutoTradeIsMaster14_wrapper(struct TRC_AutoTrade* _this, unsigned int dwSerial)
        {
           return TRC_AutoTradeIsMaster14_user(_this, dwSerial, TRC_AutoTradeIsMaster14_next);
        };
        bool TRC_AutoTradeIsOwnerGuild16_wrapper(struct TRC_AutoTrade* _this, unsigned int nGuildSerial)
        {
           return TRC_AutoTradeIsOwnerGuild16_user(_this, nGuildSerial, TRC_AutoTradeIsOwnerGuild16_next);
        };
        void TRC_AutoTradePushDQSData18_wrapper(struct TRC_AutoTrade* _this)
        {
           TRC_AutoTradePushDQSData18_user(_this, TRC_AutoTradePushDQSData18_next);
        };
        void TRC_AutoTradePushDQSData_GuildInMoney20_wrapper(struct TRC_AutoTrade* _this, unsigned int dwRetPrice, unsigned int dwSeller)
        {
           TRC_AutoTradePushDQSData_GuildInMoney20_user(_this, dwRetPrice, dwSeller, TRC_AutoTradePushDQSData_GuildInMoney20_next);
        };
        void TRC_AutoTradeSendMsg_PatriarchTaxRate22_wrapper(struct TRC_AutoTrade* _this, int n)
        {
           TRC_AutoTradeSendMsg_PatriarchTaxRate22_user(_this, n, TRC_AutoTradeSendMsg_PatriarchTaxRate22_next);
        };
        void TRC_AutoTradeSendMsg_UserLogInNotifyTaxRate24_wrapper(struct TRC_AutoTrade* _this, int n)
        {
           TRC_AutoTradeSendMsg_UserLogInNotifyTaxRate24_user(_this, n, TRC_AutoTradeSendMsg_UserLogInNotifyTaxRate24_next);
        };
        void TRC_AutoTradeSetGuildMaintainMoney26_wrapper(struct TRC_AutoTrade* _this, unsigned int dwTax, unsigned int dwSeller)
        {
           TRC_AutoTradeSetGuildMaintainMoney26_user(_this, dwTax, dwSeller, TRC_AutoTradeSetGuildMaintainMoney26_next);
        };
        void TRC_AutoTradeSetPatriarchTaxMoney28_wrapper(struct TRC_AutoTrade* _this, unsigned int dwTax)
        {
           TRC_AutoTradeSetPatriarchTaxMoney28_user(_this, dwTax, TRC_AutoTradeSetPatriarchTaxMoney28_next);
        };
        
        void TRC_AutoTradector_TRC_AutoTrade30_wrapper(struct TRC_AutoTrade* _this, char byRace)
        {
           TRC_AutoTradector_TRC_AutoTrade30_user(_this, byRace, TRC_AutoTradector_TRC_AutoTrade30_next);
        };
        
        void TRC_AutoTradector_TRC_AutoTrade32_wrapper(struct TRC_AutoTrade* _this)
        {
           TRC_AutoTradector_TRC_AutoTrade32_user(_this, TRC_AutoTradector_TRC_AutoTrade32_next);
        };
        bool TRC_AutoTrade_db_load34_wrapper(struct TRC_AutoTrade* _this, char byRace)
        {
           return TRC_AutoTrade_db_load34_user(_this, byRace, TRC_AutoTrade_db_load34_next);
        };
        char TRC_AutoTrade_insert_info36_wrapper(char* pdata)
        {
           return TRC_AutoTrade_insert_info36_user(pdata, TRC_AutoTrade_insert_info36_next);
        };
        int TRC_AutoTradecheck40_wrapper(struct TRC_AutoTrade* _this, unsigned int dwAvatorSerial, unsigned int dwGuildSerial)
        {
           return TRC_AutoTradecheck40_user(_this, dwAvatorSerial, dwGuildSerial, TRC_AutoTradecheck40_next);
        };
        struct CGuild* TRC_AutoTradegetOwnerGuild42_wrapper(struct TRC_AutoTrade* _this)
        {
           return TRC_AutoTradegetOwnerGuild42_user(_this, TRC_AutoTradegetOwnerGuild42_next);
        };
        unsigned int TRC_AutoTradegetSuggestedTime44_wrapper(struct TRC_AutoTrade* _this)
        {
           return TRC_AutoTradegetSuggestedTime44_user(_this, TRC_AutoTradegetSuggestedTime44_next);
        };
        char* TRC_AutoTradeget_guidlname46_wrapper(struct TRC_AutoTrade* _this)
        {
           return TRC_AutoTradeget_guidlname46_user(_this, TRC_AutoTradeget_guidlname46_next);
        };
        float TRC_AutoTradeget_next_tax48_wrapper(struct TRC_AutoTrade* _this)
        {
           return TRC_AutoTradeget_next_tax48_user(_this, TRC_AutoTradeget_next_tax48_next);
        };
        char TRC_AutoTradeget_race50_wrapper(struct TRC_AutoTrade* _this)
        {
           return TRC_AutoTradeget_race50_user(_this, TRC_AutoTradeget_race50_next);
        };
        float TRC_AutoTradeget_taxrate52_wrapper(struct TRC_AutoTrade* _this)
        {
           return TRC_AutoTradeget_taxrate52_user(_this, TRC_AutoTradeget_taxrate52_next);
        };
        void TRC_AutoTradehis_income_money54_wrapper(struct TRC_AutoTrade* _this)
        {
           TRC_AutoTradehis_income_money54_user(_this, TRC_AutoTradehis_income_money54_next);
        };
        void TRC_AutoTradehistory_used_cheet_changetaxrate56_wrapper(struct TRC_AutoTrade* _this, unsigned int dwProb, char* pName)
        {
           TRC_AutoTradehistory_used_cheet_changetaxrate56_user(_this, dwProb, pName, TRC_AutoTradehistory_used_cheet_changetaxrate56_next);
        };
        void TRC_AutoTradesendmsg_taxrate58_wrapper(struct TRC_AutoTrade* _this, int n, char byRet)
        {
           TRC_AutoTradesendmsg_taxrate58_user(_this, n, byRet, TRC_AutoTradesendmsg_taxrate58_next);
        };
        void TRC_AutoTradeset_owner60_wrapper(struct TRC_AutoTrade* _this, struct CGuild* pGuild)
        {
           TRC_AutoTradeset_owner60_user(_this, pGuild, TRC_AutoTradeset_owner60_next);
        };
        void TRC_AutoTradeset_suggested62_wrapper(struct TRC_AutoTrade* _this, char byMatterType, unsigned int dwMatterDst, char* wszMatterDst, unsigned int dwNext)
        {
           TRC_AutoTradeset_suggested62_user(_this, byMatterType, dwMatterDst, wszMatterDst, dwNext, TRC_AutoTradeset_suggested62_next);
        };
        
        void TRC_AutoTradedtor_TRC_AutoTrade64_wrapper(struct TRC_AutoTrade* _this)
        {
           TRC_AutoTradedtor_TRC_AutoTrade64_user(_this, TRC_AutoTradedtor_TRC_AutoTrade64_next);
        };
        
        ::std::array<hook_record, 31> TRC_AutoTrade_functions = 
        {
            _hook_record {
                (LPVOID)0x1402d85c0L,
                (LPVOID *)&TRC_AutoTradeAddGDalant2_user,
                (LPVOID *)&TRC_AutoTradeAddGDalant2_next,
                (LPVOID)cast_pointer_function(TRC_AutoTradeAddGDalant2_wrapper),
                (LPVOID)cast_pointer_function((void(TRC_AutoTrade::*)(char*))&TRC_AutoTrade::AddGDalant)
            },
            _hook_record {
                (LPVOID)0x1402d8030L,
                (LPVOID *)&TRC_AutoTradeCalcPrice4_user,
                (LPVOID *)&TRC_AutoTradeCalcPrice4_next,
                (LPVOID)cast_pointer_function(TRC_AutoTradeCalcPrice4_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(TRC_AutoTrade::*)(unsigned int, unsigned int))&TRC_AutoTrade::CalcPrice)
            },
            _hook_record {
                (LPVOID)0x1402d8c70L,
                (LPVOID *)&TRC_AutoTradeChangeOwner6_user,
                (LPVOID *)&TRC_AutoTradeChangeOwner6_next,
                (LPVOID)cast_pointer_function(TRC_AutoTradeChangeOwner6_wrapper),
                (LPVOID)cast_pointer_function((int(TRC_AutoTrade::*)(struct CGuild*))&TRC_AutoTrade::ChangeOwner)
            },
            _hook_record {
                (LPVOID)0x1402d8ab0L,
                (LPVOID *)&TRC_AutoTradeChangeTaxRate8_user,
                (LPVOID *)&TRC_AutoTradeChangeTaxRate8_next,
                (LPVOID)cast_pointer_function(TRC_AutoTradeChangeTaxRate8_wrapper),
                (LPVOID)cast_pointer_function((int(TRC_AutoTrade::*)(float))&TRC_AutoTrade::ChangeTaxRate)
            },
            _hook_record {
                (LPVOID)0x1402d88d0L,
                (LPVOID *)&TRC_AutoTradeChangeTaxRate10_user,
                (LPVOID *)&TRC_AutoTradeChangeTaxRate10_next,
                (LPVOID)cast_pointer_function(TRC_AutoTradeChangeTaxRate10_wrapper),
                (LPVOID)cast_pointer_function((void(TRC_AutoTrade::*)())&TRC_AutoTrade::ChangeTaxRate)
            },
            _hook_record {
                (LPVOID)0x1402d7e00L,
                (LPVOID *)&TRC_AutoTradeInitialzie12_user,
                (LPVOID *)&TRC_AutoTradeInitialzie12_next,
                (LPVOID)cast_pointer_function(TRC_AutoTradeInitialzie12_wrapper),
                (LPVOID)cast_pointer_function((bool(TRC_AutoTrade::*)())&TRC_AutoTrade::Initialzie)
            },
            _hook_record {
                (LPVOID)0x1402d7ff0L,
                (LPVOID *)&TRC_AutoTradeIsMaster14_user,
                (LPVOID *)&TRC_AutoTradeIsMaster14_next,
                (LPVOID)cast_pointer_function(TRC_AutoTradeIsMaster14_wrapper),
                (LPVOID)cast_pointer_function((bool(TRC_AutoTrade::*)(unsigned int))&TRC_AutoTrade::IsMaster)
            },
            _hook_record {
                (LPVOID)0x1402d7f80L,
                (LPVOID *)&TRC_AutoTradeIsOwnerGuild16_user,
                (LPVOID *)&TRC_AutoTradeIsOwnerGuild16_next,
                (LPVOID)cast_pointer_function(TRC_AutoTradeIsOwnerGuild16_wrapper),
                (LPVOID)cast_pointer_function((bool(TRC_AutoTrade::*)(unsigned int))&TRC_AutoTrade::IsOwnerGuild)
            },
            _hook_record {
                (LPVOID)0x1402d8d30L,
                (LPVOID *)&TRC_AutoTradePushDQSData18_user,
                (LPVOID *)&TRC_AutoTradePushDQSData18_next,
                (LPVOID)cast_pointer_function(TRC_AutoTradePushDQSData18_wrapper),
                (LPVOID)cast_pointer_function((void(TRC_AutoTrade::*)())&TRC_AutoTrade::PushDQSData)
            },
            _hook_record {
                (LPVOID)0x1402d8740L,
                (LPVOID *)&TRC_AutoTradePushDQSData_GuildInMoney20_user,
                (LPVOID *)&TRC_AutoTradePushDQSData_GuildInMoney20_next,
                (LPVOID)cast_pointer_function(TRC_AutoTradePushDQSData_GuildInMoney20_wrapper),
                (LPVOID)cast_pointer_function((void(TRC_AutoTrade::*)(unsigned int, unsigned int))&TRC_AutoTrade::PushDQSData_GuildInMoney)
            },
            _hook_record {
                (LPVOID)0x1402d8480L,
                (LPVOID *)&TRC_AutoTradeSendMsg_PatriarchTaxRate22_user,
                (LPVOID *)&TRC_AutoTradeSendMsg_PatriarchTaxRate22_next,
                (LPVOID)cast_pointer_function(TRC_AutoTradeSendMsg_PatriarchTaxRate22_wrapper),
                (LPVOID)cast_pointer_function((void(TRC_AutoTrade::*)(int))&TRC_AutoTrade::SendMsg_PatriarchTaxRate)
            },
            _hook_record {
                (LPVOID)0x1402d8540L,
                (LPVOID *)&TRC_AutoTradeSendMsg_UserLogInNotifyTaxRate24_user,
                (LPVOID *)&TRC_AutoTradeSendMsg_UserLogInNotifyTaxRate24_next,
                (LPVOID)cast_pointer_function(TRC_AutoTradeSendMsg_UserLogInNotifyTaxRate24_wrapper),
                (LPVOID)cast_pointer_function((void(TRC_AutoTrade::*)(int))&TRC_AutoTrade::SendMsg_UserLogInNotifyTaxRate)
            },
            _hook_record {
                (LPVOID)0x1402d8080L,
                (LPVOID *)&TRC_AutoTradeSetGuildMaintainMoney26_user,
                (LPVOID *)&TRC_AutoTradeSetGuildMaintainMoney26_next,
                (LPVOID)cast_pointer_function(TRC_AutoTradeSetGuildMaintainMoney26_wrapper),
                (LPVOID)cast_pointer_function((void(TRC_AutoTrade::*)(unsigned int, unsigned int))&TRC_AutoTrade::SetGuildMaintainMoney)
            },
            _hook_record {
                (LPVOID)0x1402d8120L,
                (LPVOID *)&TRC_AutoTradeSetPatriarchTaxMoney28_user,
                (LPVOID *)&TRC_AutoTradeSetPatriarchTaxMoney28_next,
                (LPVOID)cast_pointer_function(TRC_AutoTradeSetPatriarchTaxMoney28_wrapper),
                (LPVOID)cast_pointer_function((void(TRC_AutoTrade::*)(unsigned int))&TRC_AutoTrade::SetPatriarchTaxMoney)
            },
            _hook_record {
                (LPVOID)0x1402d7b70L,
                (LPVOID *)&TRC_AutoTradector_TRC_AutoTrade30_user,
                (LPVOID *)&TRC_AutoTradector_TRC_AutoTrade30_next,
                (LPVOID)cast_pointer_function(TRC_AutoTradector_TRC_AutoTrade30_wrapper),
                (LPVOID)cast_pointer_function((void(TRC_AutoTrade::*)(char))&TRC_AutoTrade::ctor_TRC_AutoTrade)
            },
            _hook_record {
                (LPVOID)0x1402d79c0L,
                (LPVOID *)&TRC_AutoTradector_TRC_AutoTrade32_user,
                (LPVOID *)&TRC_AutoTradector_TRC_AutoTrade32_next,
                (LPVOID)cast_pointer_function(TRC_AutoTradector_TRC_AutoTrade32_wrapper),
                (LPVOID)cast_pointer_function((void(TRC_AutoTrade::*)())&TRC_AutoTrade::ctor_TRC_AutoTrade)
            },
            _hook_record {
                (LPVOID)0x1402d8ea0L,
                (LPVOID *)&TRC_AutoTrade_db_load34_user,
                (LPVOID *)&TRC_AutoTrade_db_load34_next,
                (LPVOID)cast_pointer_function(TRC_AutoTrade_db_load34_wrapper),
                (LPVOID)cast_pointer_function((bool(TRC_AutoTrade::*)(char))&TRC_AutoTrade::_db_load)
            },
            _hook_record {
                (LPVOID)0x1402d9050L,
                (LPVOID *)&TRC_AutoTrade_insert_info36_user,
                (LPVOID *)&TRC_AutoTrade_insert_info36_next,
                (LPVOID)cast_pointer_function(TRC_AutoTrade_insert_info36_wrapper),
                (LPVOID)cast_pointer_function((char(*)(char*))&TRC_AutoTrade::_insert_info)
            },
            _hook_record {
                (LPVOID)0x1402d8850L,
                (LPVOID *)&TRC_AutoTradecheck40_user,
                (LPVOID *)&TRC_AutoTradecheck40_next,
                (LPVOID)cast_pointer_function(TRC_AutoTradecheck40_wrapper),
                (LPVOID)cast_pointer_function((int(TRC_AutoTrade::*)(unsigned int, unsigned int))&TRC_AutoTrade::check)
            },
            _hook_record {
                (LPVOID)0x1402d99f0L,
                (LPVOID *)&TRC_AutoTradegetOwnerGuild42_user,
                (LPVOID *)&TRC_AutoTradegetOwnerGuild42_next,
                (LPVOID)cast_pointer_function(TRC_AutoTradegetOwnerGuild42_wrapper),
                (LPVOID)cast_pointer_function((struct CGuild*(TRC_AutoTrade::*)())&TRC_AutoTrade::getOwnerGuild)
            },
            _hook_record {
                (LPVOID)0x14038efa0L,
                (LPVOID *)&TRC_AutoTradegetSuggestedTime44_user,
                (LPVOID *)&TRC_AutoTradegetSuggestedTime44_next,
                (LPVOID)cast_pointer_function(TRC_AutoTradegetSuggestedTime44_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(TRC_AutoTrade::*)())&TRC_AutoTrade::getSuggestedTime)
            },
            _hook_record {
                (LPVOID)0x1402d9a10L,
                (LPVOID *)&TRC_AutoTradeget_guidlname46_user,
                (LPVOID *)&TRC_AutoTradeget_guidlname46_next,
                (LPVOID)cast_pointer_function(TRC_AutoTradeget_guidlname46_wrapper),
                (LPVOID)cast_pointer_function((char*(TRC_AutoTrade::*)())&TRC_AutoTrade::get_guidlname)
            },
            _hook_record {
                (LPVOID)0x1402d9ae0L,
                (LPVOID *)&TRC_AutoTradeget_next_tax48_user,
                (LPVOID *)&TRC_AutoTradeget_next_tax48_next,
                (LPVOID)cast_pointer_function(TRC_AutoTradeget_next_tax48_wrapper),
                (LPVOID)cast_pointer_function((float(TRC_AutoTrade::*)())&TRC_AutoTrade::get_next_tax)
            },
            _hook_record {
                (LPVOID)0x1402d9b30L,
                (LPVOID *)&TRC_AutoTradeget_race50_user,
                (LPVOID *)&TRC_AutoTradeget_race50_next,
                (LPVOID)cast_pointer_function(TRC_AutoTradeget_race50_wrapper),
                (LPVOID)cast_pointer_function((char(TRC_AutoTrade::*)())&TRC_AutoTrade::get_race)
            },
            _hook_record {
                (LPVOID)0x1402d99a0L,
                (LPVOID *)&TRC_AutoTradeget_taxrate52_user,
                (LPVOID *)&TRC_AutoTradeget_taxrate52_next,
                (LPVOID)cast_pointer_function(TRC_AutoTradeget_taxrate52_wrapper),
                (LPVOID)cast_pointer_function((float(TRC_AutoTrade::*)())&TRC_AutoTrade::get_taxrate)
            },
            _hook_record {
                (LPVOID)0x1402d8250L,
                (LPVOID *)&TRC_AutoTradehis_income_money54_user,
                (LPVOID *)&TRC_AutoTradehis_income_money54_next,
                (LPVOID)cast_pointer_function(TRC_AutoTradehis_income_money54_wrapper),
                (LPVOID)cast_pointer_function((void(TRC_AutoTrade::*)())&TRC_AutoTrade::his_income_money)
            },
            _hook_record {
                (LPVOID)0x14038efc0L,
                (LPVOID *)&TRC_AutoTradehistory_used_cheet_changetaxrate56_user,
                (LPVOID *)&TRC_AutoTradehistory_used_cheet_changetaxrate56_next,
                (LPVOID)cast_pointer_function(TRC_AutoTradehistory_used_cheet_changetaxrate56_wrapper),
                (LPVOID)cast_pointer_function((void(TRC_AutoTrade::*)(unsigned int, char*))&TRC_AutoTrade::history_used_cheet_changetaxrate)
            },
            _hook_record {
                (LPVOID)0x1402d8320L,
                (LPVOID *)&TRC_AutoTradesendmsg_taxrate58_user,
                (LPVOID *)&TRC_AutoTradesendmsg_taxrate58_next,
                (LPVOID)cast_pointer_function(TRC_AutoTradesendmsg_taxrate58_wrapper),
                (LPVOID)cast_pointer_function((void(TRC_AutoTrade::*)(int, char))&TRC_AutoTrade::sendmsg_taxrate)
            },
            _hook_record {
                (LPVOID)0x14038ee40L,
                (LPVOID *)&TRC_AutoTradeset_owner60_user,
                (LPVOID *)&TRC_AutoTradeset_owner60_next,
                (LPVOID)cast_pointer_function(TRC_AutoTradeset_owner60_wrapper),
                (LPVOID)cast_pointer_function((void(TRC_AutoTrade::*)(struct CGuild*))&TRC_AutoTrade::set_owner)
            },
            _hook_record {
                (LPVOID)0x14038ee70L,
                (LPVOID *)&TRC_AutoTradeset_suggested62_user,
                (LPVOID *)&TRC_AutoTradeset_suggested62_next,
                (LPVOID)cast_pointer_function(TRC_AutoTradeset_suggested62_wrapper),
                (LPVOID)cast_pointer_function((void(TRC_AutoTrade::*)(char, unsigned int, char*, unsigned int))&TRC_AutoTrade::set_suggested)
            },
            _hook_record {
                (LPVOID)0x1402d7d30L,
                (LPVOID *)&TRC_AutoTradedtor_TRC_AutoTrade64_user,
                (LPVOID *)&TRC_AutoTradedtor_TRC_AutoTrade64_next,
                (LPVOID)cast_pointer_function(TRC_AutoTradedtor_TRC_AutoTrade64_wrapper),
                (LPVOID)cast_pointer_function((void(TRC_AutoTrade::*)())&TRC_AutoTrade::dtor_TRC_AutoTrade)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
