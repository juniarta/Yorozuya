// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    namespace ATL
    {
        struct CTraceCategory
        {
            unsigned __int64 m_dwCategory;
        public:
            CTraceCategory(char* pszCategoryName, unsigned int nStartingLevel)
            {
                using org_ptr = void (WINAPIV*)(struct CTraceCategory*, char*, unsigned int);
                (org_ptr(0x14066da00L))(this, pszCategoryName, nStartingLevel);
            };
            void ctor_CTraceCategory(char* pszCategoryName, unsigned int nStartingLevel)
            {
                using org_ptr = void (WINAPIV*)(struct CTraceCategory*, char*, unsigned int);
                (org_ptr(0x14066da00L))(this, pszCategoryName, nStartingLevel);
            };
        };
    }; // end namespace ATL
END_ATF_NAMESPACE