#include <CNationSettingDataTWDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CNationSettingDataTWctor_CNationSettingDataTW2_ptr CNationSettingDataTWctor_CNationSettingDataTW2_next(nullptr);
        Info::CNationSettingDataTWctor_CNationSettingDataTW2_clbk CNationSettingDataTWctor_CNationSettingDataTW2_user(nullptr);
        
        Info::CNationSettingDataTWCreateWorker4_ptr CNationSettingDataTWCreateWorker4_next(nullptr);
        Info::CNationSettingDataTWCreateWorker4_clbk CNationSettingDataTWCreateWorker4_user(nullptr);
        
        Info::CNationSettingDataTWGetCashItemPrice6_ptr CNationSettingDataTWGetCashItemPrice6_next(nullptr);
        Info::CNationSettingDataTWGetCashItemPrice6_clbk CNationSettingDataTWGetCashItemPrice6_user(nullptr);
        
        Info::CNationSettingDataTWGetItemName8_ptr CNationSettingDataTWGetItemName8_next(nullptr);
        Info::CNationSettingDataTWGetItemName8_clbk CNationSettingDataTWGetItemName8_user(nullptr);
        
        Info::CNationSettingDataTWInit10_ptr CNationSettingDataTWInit10_next(nullptr);
        Info::CNationSettingDataTWInit10_clbk CNationSettingDataTWInit10_user(nullptr);
        
        Info::CNationSettingDataTWIsPersonalFreeFixedAmountBillingType12_ptr CNationSettingDataTWIsPersonalFreeFixedAmountBillingType12_next(nullptr);
        Info::CNationSettingDataTWIsPersonalFreeFixedAmountBillingType12_clbk CNationSettingDataTWIsPersonalFreeFixedAmountBillingType12_user(nullptr);
        
        Info::CNationSettingDataTWReadSystemPass14_ptr CNationSettingDataTWReadSystemPass14_next(nullptr);
        Info::CNationSettingDataTWReadSystemPass14_clbk CNationSettingDataTWReadSystemPass14_user(nullptr);
        
        Info::CNationSettingDataTWValidMacAddress16_ptr CNationSettingDataTWValidMacAddress16_next(nullptr);
        Info::CNationSettingDataTWValidMacAddress16_clbk CNationSettingDataTWValidMacAddress16_user(nullptr);
        
        
        void CNationSettingDataTWctor_CNationSettingDataTW2_wrapper(struct CNationSettingDataTW* _this)
        {
           CNationSettingDataTWctor_CNationSettingDataTW2_user(_this, CNationSettingDataTWctor_CNationSettingDataTW2_next);
        };
        struct CashDbWorker* CNationSettingDataTWCreateWorker4_wrapper(struct CNationSettingDataTW* _this)
        {
           return CNationSettingDataTWCreateWorker4_user(_this, CNationSettingDataTWCreateWorker4_next);
        };
        int CNationSettingDataTWGetCashItemPrice6_wrapper(struct CNationSettingDataTW* _this, struct _CashShop_str_fld* pFld)
        {
           return CNationSettingDataTWGetCashItemPrice6_user(_this, pFld, CNationSettingDataTWGetCashItemPrice6_next);
        };
        char* CNationSettingDataTWGetItemName8_wrapper(struct CNationSettingDataTW* _this, struct _NameTxt_fld* pFld)
        {
           return CNationSettingDataTWGetItemName8_user(_this, pFld, CNationSettingDataTWGetItemName8_next);
        };
        int CNationSettingDataTWInit10_wrapper(struct CNationSettingDataTW* _this)
        {
           return CNationSettingDataTWInit10_user(_this, CNationSettingDataTWInit10_next);
        };
        bool CNationSettingDataTWIsPersonalFreeFixedAmountBillingType12_wrapper(struct CNationSettingDataTW* _this, int16_t* pDest1, int16_t* pDest2)
        {
           return CNationSettingDataTWIsPersonalFreeFixedAmountBillingType12_user(_this, pDest1, pDest2, CNationSettingDataTWIsPersonalFreeFixedAmountBillingType12_next);
        };
        bool CNationSettingDataTWReadSystemPass14_wrapper(struct CNationSettingDataTW* _this)
        {
           return CNationSettingDataTWReadSystemPass14_user(_this, CNationSettingDataTWReadSystemPass14_next);
        };
        bool CNationSettingDataTWValidMacAddress16_wrapper(struct CNationSettingDataTW* _this)
        {
           return CNationSettingDataTWValidMacAddress16_user(_this, CNationSettingDataTWValidMacAddress16_next);
        };
        
        ::std::array<hook_record, 8> CNationSettingDataTW_functions = 
        {
            _hook_record {
                (LPVOID)0x14022f9b0L,
                (LPVOID *)&CNationSettingDataTWctor_CNationSettingDataTW2_user,
                (LPVOID *)&CNationSettingDataTWctor_CNationSettingDataTW2_next,
                (LPVOID)cast_pointer_function(CNationSettingDataTWctor_CNationSettingDataTW2_wrapper),
                (LPVOID)cast_pointer_function((void(CNationSettingDataTW::*)())&CNationSettingDataTW::ctor_CNationSettingDataTW)
            },
            _hook_record {
                (LPVOID)0x140230040L,
                (LPVOID *)&CNationSettingDataTWCreateWorker4_user,
                (LPVOID *)&CNationSettingDataTWCreateWorker4_next,
                (LPVOID)cast_pointer_function(CNationSettingDataTWCreateWorker4_wrapper),
                (LPVOID)cast_pointer_function((struct CashDbWorker*(CNationSettingDataTW::*)())&CNationSettingDataTW::CreateWorker)
            },
            _hook_record {
                (LPVOID)0x1402300f0L,
                (LPVOID *)&CNationSettingDataTWGetCashItemPrice6_user,
                (LPVOID *)&CNationSettingDataTWGetCashItemPrice6_next,
                (LPVOID)cast_pointer_function(CNationSettingDataTWGetCashItemPrice6_wrapper),
                (LPVOID)cast_pointer_function((int(CNationSettingDataTW::*)(struct _CashShop_str_fld*))&CNationSettingDataTW::GetCashItemPrice)
            },
            _hook_record {
                (LPVOID)0x14022fb10L,
                (LPVOID *)&CNationSettingDataTWGetItemName8_user,
                (LPVOID *)&CNationSettingDataTWGetItemName8_next,
                (LPVOID)cast_pointer_function(CNationSettingDataTWGetItemName8_wrapper),
                (LPVOID)cast_pointer_function((char*(CNationSettingDataTW::*)(struct _NameTxt_fld*))&CNationSettingDataTW::GetItemName)
            },
            _hook_record {
                (LPVOID)0x14022fa10L,
                (LPVOID *)&CNationSettingDataTWInit10_user,
                (LPVOID *)&CNationSettingDataTWInit10_next,
                (LPVOID)cast_pointer_function(CNationSettingDataTWInit10_wrapper),
                (LPVOID)cast_pointer_function((int(CNationSettingDataTW::*)())&CNationSettingDataTW::Init)
            },
            _hook_record {
                (LPVOID)0x14022fff0L,
                (LPVOID *)&CNationSettingDataTWIsPersonalFreeFixedAmountBillingType12_user,
                (LPVOID *)&CNationSettingDataTWIsPersonalFreeFixedAmountBillingType12_next,
                (LPVOID)cast_pointer_function(CNationSettingDataTWIsPersonalFreeFixedAmountBillingType12_wrapper),
                (LPVOID)cast_pointer_function((bool(CNationSettingDataTW::*)(int16_t*, int16_t*))&CNationSettingDataTW::IsPersonalFreeFixedAmountBillingType)
            },
            _hook_record {
                (LPVOID)0x140230110L,
                (LPVOID *)&CNationSettingDataTWReadSystemPass14_user,
                (LPVOID *)&CNationSettingDataTWReadSystemPass14_next,
                (LPVOID)cast_pointer_function(CNationSettingDataTWReadSystemPass14_wrapper),
                (LPVOID)cast_pointer_function((bool(CNationSettingDataTW::*)())&CNationSettingDataTW::ReadSystemPass)
            },
            _hook_record {
                (LPVOID)0x14022fb30L,
                (LPVOID *)&CNationSettingDataTWValidMacAddress16_user,
                (LPVOID *)&CNationSettingDataTWValidMacAddress16_next,
                (LPVOID)cast_pointer_function(CNationSettingDataTWValidMacAddress16_wrapper),
                (LPVOID)cast_pointer_function((bool(CNationSettingDataTW::*)())&CNationSettingDataTW::ValidMacAddress)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
