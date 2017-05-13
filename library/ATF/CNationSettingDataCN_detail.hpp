// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CNationSettingDataCN_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::CNationSettingDataCNctor_CNationSettingDataCN2_ptr CNationSettingDataCNctor_CNationSettingDataCN2_next(nullptr);
        static info::CNationSettingDataCNctor_CNationSettingDataCN2_clbk CNationSettingDataCNctor_CNationSettingDataCN2_user(nullptr);
        static info::CNationSettingDataCNCreateBilling4_ptr CNationSettingDataCNCreateBilling4_next(nullptr);
        static info::CNationSettingDataCNCreateBilling4_clbk CNationSettingDataCNCreateBilling4_user(nullptr);
        static info::CNationSettingDataCNCreateComplete6_ptr CNationSettingDataCNCreateComplete6_next(nullptr);
        static info::CNationSettingDataCNCreateComplete6_clbk CNationSettingDataCNCreateComplete6_user(nullptr);
        static info::CNationSettingDataCNCreateWorker8_ptr CNationSettingDataCNCreateWorker8_next(nullptr);
        static info::CNationSettingDataCNCreateWorker8_clbk CNationSettingDataCNCreateWorker8_user(nullptr);
        static info::CNationSettingDataCNGetCashItemPrice10_ptr CNationSettingDataCNGetCashItemPrice10_next(nullptr);
        static info::CNationSettingDataCNGetCashItemPrice10_clbk CNationSettingDataCNGetCashItemPrice10_user(nullptr);
        static info::CNationSettingDataCNGetItemName12_ptr CNationSettingDataCNGetItemName12_next(nullptr);
        static info::CNationSettingDataCNGetItemName12_clbk CNationSettingDataCNGetItemName12_user(nullptr);
        static info::CNationSettingDataCNInit14_ptr CNationSettingDataCNInit14_next(nullptr);
        static info::CNationSettingDataCNInit14_clbk CNationSettingDataCNInit14_user(nullptr);
        static info::CNationSettingDataCNLoop16_ptr CNationSettingDataCNLoop16_next(nullptr);
        static info::CNationSettingDataCNLoop16_clbk CNationSettingDataCNLoop16_user(nullptr);
        static info::CNationSettingDataCNNetClose18_ptr CNationSettingDataCNNetClose18_next(nullptr);
        static info::CNationSettingDataCNNetClose18_clbk CNationSettingDataCNNetClose18_user(nullptr);
        static info::CNationSettingDataCNReadSystemPass20_ptr CNationSettingDataCNReadSystemPass20_next(nullptr);
        static info::CNationSettingDataCNReadSystemPass20_clbk CNationSettingDataCNReadSystemPass20_user(nullptr);
        
        static void CNationSettingDataCNctor_CNationSettingDataCN2_wrapper(struct CNationSettingDataCN* _this)
        {
           CNationSettingDataCNctor_CNationSettingDataCN2_user(_this, CNationSettingDataCNctor_CNationSettingDataCN2_next);
        };
        static struct CBilling* CNationSettingDataCNCreateBilling4_wrapper(struct CNationSettingDataCN* _this)
        {
           return CNationSettingDataCNCreateBilling4_user(_this, CNationSettingDataCNCreateBilling4_next);
        };
        static void CNationSettingDataCNCreateComplete6_wrapper(struct CNationSettingDataCN* _this, struct CPlayer* pOne)
        {
           CNationSettingDataCNCreateComplete6_user(_this, pOne, CNationSettingDataCNCreateComplete6_next);
        };
        static struct CashDbWorker* CNationSettingDataCNCreateWorker8_wrapper(struct CNationSettingDataCN* _this)
        {
           return CNationSettingDataCNCreateWorker8_user(_this, CNationSettingDataCNCreateWorker8_next);
        };
        static int CNationSettingDataCNGetCashItemPrice10_wrapper(struct CNationSettingDataCN* _this, struct _CashShop_str_fld* pFld)
        {
           return CNationSettingDataCNGetCashItemPrice10_user(_this, pFld, CNationSettingDataCNGetCashItemPrice10_next);
        };
        static char* CNationSettingDataCNGetItemName12_wrapper(struct CNationSettingDataCN* _this, struct _NameTxt_fld* pFld)
        {
           return CNationSettingDataCNGetItemName12_user(_this, pFld, CNationSettingDataCNGetItemName12_next);
        };
        static int CNationSettingDataCNInit14_wrapper(struct CNationSettingDataCN* _this)
        {
           return CNationSettingDataCNInit14_user(_this, CNationSettingDataCNInit14_next);
        };
        static void CNationSettingDataCNLoop16_wrapper(struct CNationSettingDataCN* _this)
        {
           CNationSettingDataCNLoop16_user(_this, CNationSettingDataCNLoop16_next);
        };
        static void CNationSettingDataCNNetClose18_wrapper(struct CNationSettingDataCN* _this, struct CPlayer* pOne)
        {
           CNationSettingDataCNNetClose18_user(_this, pOne, CNationSettingDataCNNetClose18_next);
        };
        static bool CNationSettingDataCNReadSystemPass20_wrapper(struct CNationSettingDataCN* _this)
        {
           return CNationSettingDataCNReadSystemPass20_user(_this, CNationSettingDataCNReadSystemPass20_next);
        };
        
        static hook_record CNationSettingDataCN_functions[] = {
        {   (LPVOID)0x140230fc0L,
            (LPVOID *)&CNationSettingDataCNctor_CNationSettingDataCN2_user,
            (LPVOID *)&CNationSettingDataCNctor_CNationSettingDataCN2_next,
            (LPVOID)cast_pointer_function(CNationSettingDataCNctor_CNationSettingDataCN2_wrapper),
            (LPVOID)cast_pointer_function((void(CNationSettingDataCN::*)())&CNationSettingDataCN::ctor_CNationSettingDataCN) },
        {   (LPVOID)0x1402307c0L,
            (LPVOID *)&CNationSettingDataCNCreateBilling4_user,
            (LPVOID *)&CNationSettingDataCNCreateBilling4_next,
            (LPVOID)cast_pointer_function(CNationSettingDataCNCreateBilling4_wrapper),
            (LPVOID)cast_pointer_function((struct CBilling*(CNationSettingDataCN::*)())&CNationSettingDataCN::CreateBilling) },
        {   (LPVOID)0x140230870L,
            (LPVOID *)&CNationSettingDataCNCreateComplete6_user,
            (LPVOID *)&CNationSettingDataCNCreateComplete6_next,
            (LPVOID)cast_pointer_function(CNationSettingDataCNCreateComplete6_wrapper),
            (LPVOID)cast_pointer_function((void(CNationSettingDataCN::*)(struct CPlayer*))&CNationSettingDataCN::CreateComplete) },
        {   (LPVOID)0x140230710L,
            (LPVOID *)&CNationSettingDataCNCreateWorker8_user,
            (LPVOID *)&CNationSettingDataCNCreateWorker8_next,
            (LPVOID)cast_pointer_function(CNationSettingDataCNCreateWorker8_wrapper),
            (LPVOID)cast_pointer_function((struct CashDbWorker*(CNationSettingDataCN::*)())&CNationSettingDataCN::CreateWorker) },
        {   (LPVOID)0x140230920L,
            (LPVOID *)&CNationSettingDataCNGetCashItemPrice10_user,
            (LPVOID *)&CNationSettingDataCNGetCashItemPrice10_next,
            (LPVOID)cast_pointer_function(CNationSettingDataCNGetCashItemPrice10_wrapper),
            (LPVOID)cast_pointer_function((int(CNationSettingDataCN::*)(struct _CashShop_str_fld*))&CNationSettingDataCN::GetCashItemPrice) },
        {   (LPVOID)0x1402306f0L,
            (LPVOID *)&CNationSettingDataCNGetItemName12_user,
            (LPVOID *)&CNationSettingDataCNGetItemName12_next,
            (LPVOID)cast_pointer_function(CNationSettingDataCNGetItemName12_wrapper),
            (LPVOID)cast_pointer_function((char*(CNationSettingDataCN::*)(struct _NameTxt_fld*))&CNationSettingDataCN::GetItemName) },
        {   (LPVOID)0x140230570L,
            (LPVOID *)&CNationSettingDataCNInit14_user,
            (LPVOID *)&CNationSettingDataCNInit14_next,
            (LPVOID)cast_pointer_function(CNationSettingDataCNInit14_wrapper),
            (LPVOID)cast_pointer_function((int(CNationSettingDataCN::*)())&CNationSettingDataCN::Init) },
        {   (LPVOID)0x1402306a0L,
            (LPVOID *)&CNationSettingDataCNLoop16_user,
            (LPVOID *)&CNationSettingDataCNLoop16_next,
            (LPVOID)cast_pointer_function(CNationSettingDataCNLoop16_wrapper),
            (LPVOID)cast_pointer_function((void(CNationSettingDataCN::*)())&CNationSettingDataCN::Loop) },
        {   (LPVOID)0x1402308d0L,
            (LPVOID *)&CNationSettingDataCNNetClose18_user,
            (LPVOID *)&CNationSettingDataCNNetClose18_next,
            (LPVOID)cast_pointer_function(CNationSettingDataCNNetClose18_wrapper),
            (LPVOID)cast_pointer_function((void(CNationSettingDataCN::*)(struct CPlayer*))&CNationSettingDataCN::NetClose) },
        {   (LPVOID)0x140230940L,
            (LPVOID *)&CNationSettingDataCNReadSystemPass20_user,
            (LPVOID *)&CNationSettingDataCNReadSystemPass20_next,
            (LPVOID)cast_pointer_function(CNationSettingDataCNReadSystemPass20_wrapper),
            (LPVOID)cast_pointer_function((bool(CNationSettingDataCN::*)())&CNationSettingDataCN::ReadSystemPass) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE