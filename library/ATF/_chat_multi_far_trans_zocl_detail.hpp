// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_chat_multi_far_trans_zocl_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_chat_multi_far_trans_zoclctor__chat_multi_far_trans_zocl2_ptr _chat_multi_far_trans_zoclctor__chat_multi_far_trans_zocl2_next(nullptr);
        static info::_chat_multi_far_trans_zoclctor__chat_multi_far_trans_zocl2_clbk _chat_multi_far_trans_zoclctor__chat_multi_far_trans_zocl2_user(nullptr);
        static info::_chat_multi_far_trans_zoclsize4_ptr _chat_multi_far_trans_zoclsize4_next(nullptr);
        static info::_chat_multi_far_trans_zoclsize4_clbk _chat_multi_far_trans_zoclsize4_user(nullptr);
        
        static void _chat_multi_far_trans_zoclctor__chat_multi_far_trans_zocl2_wrapper(struct _chat_multi_far_trans_zocl* _this)
        {
           _chat_multi_far_trans_zoclctor__chat_multi_far_trans_zocl2_user(_this, _chat_multi_far_trans_zoclctor__chat_multi_far_trans_zocl2_next);
        };
        static int _chat_multi_far_trans_zoclsize4_wrapper(struct _chat_multi_far_trans_zocl* _this)
        {
           return _chat_multi_far_trans_zoclsize4_user(_this, _chat_multi_far_trans_zoclsize4_next);
        };
        
        static hook_record _chat_multi_far_trans_zocl_functions[] = {
        {   (LPVOID)0x140095150L,
            (LPVOID *)&_chat_multi_far_trans_zoclctor__chat_multi_far_trans_zocl2_user,
            (LPVOID *)&_chat_multi_far_trans_zoclctor__chat_multi_far_trans_zocl2_next,
            (LPVOID)cast_pointer_function(_chat_multi_far_trans_zoclctor__chat_multi_far_trans_zocl2_wrapper),
            (LPVOID)cast_pointer_function((void(_chat_multi_far_trans_zocl::*)())&_chat_multi_far_trans_zocl::ctor__chat_multi_far_trans_zocl) },
        {   (LPVOID)0x140095170L,
            (LPVOID *)&_chat_multi_far_trans_zoclsize4_user,
            (LPVOID *)&_chat_multi_far_trans_zoclsize4_next,
            (LPVOID)cast_pointer_function(_chat_multi_far_trans_zoclsize4_wrapper),
            (LPVOID)cast_pointer_function((int(_chat_multi_far_trans_zocl::*)())&_chat_multi_far_trans_zocl::size) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE