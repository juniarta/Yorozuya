// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    namespace ATL
    {
        #pragma pack(push, 8)
        struct CTraceFileAndLineInfo
        {
            char* m_pszFileName;
            int m_nLineNo;
        public:
            CTraceFileAndLineInfo(char* pszFileName, int nLineNo);
            void ctor_CTraceFileAndLineInfo(char* pszFileName, int nLineNo);
        };
        #pragma pack(pop)    
        static_assert(ATF::checkSize<ATL::CTraceFileAndLineInfo, 16>(), "ATL::CTraceFileAndLineInfo");
    }; // end namespace ATL
END_ATF_NAMESPACE
