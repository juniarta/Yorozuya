// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CNationSettingFactoryCN_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::CNationSettingFactoryCNctor_CNationSettingFactoryCN2_ptr CNationSettingFactoryCNctor_CNationSettingFactoryCN2_next(nullptr);
        static info::CNationSettingFactoryCNctor_CNationSettingFactoryCN2_clbk CNationSettingFactoryCNctor_CNationSettingFactoryCN2_user(nullptr);
        static info::CNationSettingFactoryCNCreate4_ptr CNationSettingFactoryCNCreate4_next(nullptr);
        static info::CNationSettingFactoryCNCreate4_clbk CNationSettingFactoryCNCreate4_user(nullptr);
        
        static void CNationSettingFactoryCNctor_CNationSettingFactoryCN2_wrapper(struct CNationSettingFactoryCN* _this)
        {
           CNationSettingFactoryCNctor_CNationSettingFactoryCN2_user(_this, CNationSettingFactoryCNctor_CNationSettingFactoryCN2_next);
        };
        static struct CNationSettingData* CNationSettingFactoryCNCreate4_wrapper(struct CNationSettingFactoryCN* _this, int iNationCode, char* szNationCodeStr, bool bServiceMode)
        {
           return CNationSettingFactoryCNCreate4_user(_this, iNationCode, szNationCodeStr, bServiceMode, CNationSettingFactoryCNCreate4_next);
        };
        
        static hook_record CNationSettingFactoryCN_functions[] = {
        {   (LPVOID)0x1402197c0L,
            (LPVOID *)&CNationSettingFactoryCNctor_CNationSettingFactoryCN2_user,
            (LPVOID *)&CNationSettingFactoryCNctor_CNationSettingFactoryCN2_next,
            (LPVOID)cast_pointer_function(CNationSettingFactoryCNctor_CNationSettingFactoryCN2_wrapper),
            (LPVOID)cast_pointer_function((void(CNationSettingFactoryCN::*)())&CNationSettingFactoryCN::ctor_CNationSettingFactoryCN) },
        {   (LPVOID)0x140230e10L,
            (LPVOID *)&CNationSettingFactoryCNCreate4_user,
            (LPVOID *)&CNationSettingFactoryCNCreate4_next,
            (LPVOID)cast_pointer_function(CNationSettingFactoryCNCreate4_wrapper),
            (LPVOID)cast_pointer_function((struct CNationSettingData*(CNationSettingFactoryCN::*)(int, char*, bool))&CNationSettingFactoryCN::Create) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE