// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CGdiObject_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::CGdiObjectDeleteObject1_ptr CGdiObjectDeleteObject1_next(nullptr);
        static info::CGdiObjectDeleteObject1_clbk CGdiObjectDeleteObject1_user(nullptr);
        
        static int64_t CGdiObjectDeleteObject1_wrapper(struct CGdiObject* _this)
        {
           return CGdiObjectDeleteObject1_user(_this, CGdiObjectDeleteObject1_next);
        };
        
        static hook_record CGdiObject_functions[] = {
        {   (LPVOID)0x1404dc3fcL,
            (LPVOID *)&CGdiObjectDeleteObject1_user,
            (LPVOID *)&CGdiObjectDeleteObject1_next,
            (LPVOID)cast_pointer_function(CGdiObjectDeleteObject1_wrapper),
            (LPVOID)cast_pointer_function((int64_t(CGdiObject::*)())&CGdiObject::DeleteObject) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE