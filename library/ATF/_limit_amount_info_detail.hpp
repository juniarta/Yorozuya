// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_limit_amount_info_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_limit_amount_infoctor__limit_amount_info2_ptr _limit_amount_infoctor__limit_amount_info2_next(nullptr);
        static info::_limit_amount_infoctor__limit_amount_info2_clbk _limit_amount_infoctor__limit_amount_info2_user(nullptr);
        
        static void _limit_amount_infoctor__limit_amount_info2_wrapper(struct _limit_amount_info* _this)
        {
           _limit_amount_infoctor__limit_amount_info2_user(_this, _limit_amount_infoctor__limit_amount_info2_next);
        };
        
        static hook_record _limit_amount_info_functions[] = {
        {   (LPVOID)0x1400f7780L,
            (LPVOID *)&_limit_amount_infoctor__limit_amount_info2_user,
            (LPVOID *)&_limit_amount_infoctor__limit_amount_info2_next,
            (LPVOID)cast_pointer_function(_limit_amount_infoctor__limit_amount_info2_wrapper),
            (LPVOID)cast_pointer_function((void(_limit_amount_info::*)())&_limit_amount_info::ctor__limit_amount_info) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE