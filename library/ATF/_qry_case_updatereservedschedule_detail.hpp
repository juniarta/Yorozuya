// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_qry_case_updatereservedschedule_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_qry_case_updatereservedschedulesize2_ptr _qry_case_updatereservedschedulesize2_next(nullptr);
        static info::_qry_case_updatereservedschedulesize2_clbk _qry_case_updatereservedschedulesize2_user(nullptr);
        
        static int _qry_case_updatereservedschedulesize2_wrapper(struct _qry_case_updatereservedschedule* _this)
        {
           return _qry_case_updatereservedschedulesize2_user(_this, _qry_case_updatereservedschedulesize2_next);
        };
        
        static hook_record _qry_case_updatereservedschedule_functions[] = {
        {   (LPVOID)0x1403d0b30L,
            (LPVOID *)&_qry_case_updatereservedschedulesize2_user,
            (LPVOID *)&_qry_case_updatereservedschedulesize2_next,
            (LPVOID)cast_pointer_function(_qry_case_updatereservedschedulesize2_wrapper),
            (LPVOID)cast_pointer_function((int(_qry_case_updatereservedschedule::*)())&_qry_case_updatereservedschedule::size) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE