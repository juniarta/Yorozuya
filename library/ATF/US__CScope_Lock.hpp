// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "US__CNoneCopyAble.hpp"
#include "US__CriticalSection.hpp"


START_ATF_NAMESPACE
    namespace US
    {
        #pragma pack(push, 8)
        template<>
        struct  CScope_Lock<CriticalSection> : CNoneCopyAble
        {
            CriticalSection *m_Mutex_;
            bool m_bLocked_;
        public:
            CScope_Lock(struct CriticalSection* mtx)
            {
                using org_ptr = void (WINAPIV*)(struct CScope_Lock<CriticalSection>*, struct CriticalSection*);
                (org_ptr(0x14041e470L))(this, mtx);
            };
            void ctor_CScope_Lock(struct CriticalSection* mtx)
            {
                using org_ptr = void (WINAPIV*)(struct CScope_Lock<CriticalSection>*, struct CriticalSection*);
                (org_ptr(0x14041e470L))(this, mtx);
            };
            ~CScope_Lock()
            {
                using org_ptr = void (WINAPIV*)(struct CScope_Lock<CriticalSection>*);
                (org_ptr(0x14041e580L))(this);
            };
            void dtor_CScope_Lock()
            {
                using org_ptr = void (WINAPIV*)(struct CScope_Lock<CriticalSection>*);
                (org_ptr(0x14041e580L))(this);
            };
        };
        #pragma pack(pop)
    }; // end namespace US
END_ATF_NAMESPACE