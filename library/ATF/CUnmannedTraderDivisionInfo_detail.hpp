// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CUnmannedTraderDivisionInfo_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::CUnmannedTraderDivisionInfoctor_CUnmannedTraderDivisionInfo2_ptr CUnmannedTraderDivisionInfoctor_CUnmannedTraderDivisionInfo2_next(nullptr);
        static info::CUnmannedTraderDivisionInfoctor_CUnmannedTraderDivisionInfo2_clbk CUnmannedTraderDivisionInfoctor_CUnmannedTraderDivisionInfo2_user(nullptr);
        static info::CUnmannedTraderDivisionInfoCleanUp4_ptr CUnmannedTraderDivisionInfoCleanUp4_next(nullptr);
        static info::CUnmannedTraderDivisionInfoCleanUp4_clbk CUnmannedTraderDivisionInfoCleanUp4_user(nullptr);
        static info::CUnmannedTraderDivisionInfoCopy6_ptr CUnmannedTraderDivisionInfoCopy6_next(nullptr);
        static info::CUnmannedTraderDivisionInfoCopy6_clbk CUnmannedTraderDivisionInfoCopy6_user(nullptr);
        static info::CUnmannedTraderDivisionInfoFindSortType8_ptr CUnmannedTraderDivisionInfoFindSortType8_next(nullptr);
        static info::CUnmannedTraderDivisionInfoFindSortType8_clbk CUnmannedTraderDivisionInfoFindSortType8_user(nullptr);
        static info::CUnmannedTraderDivisionInfoGetGroupID10_ptr CUnmannedTraderDivisionInfoGetGroupID10_next(nullptr);
        static info::CUnmannedTraderDivisionInfoGetGroupID10_clbk CUnmannedTraderDivisionInfoGetGroupID10_user(nullptr);
        static info::CUnmannedTraderDivisionInfoGetGroupID12_ptr CUnmannedTraderDivisionInfoGetGroupID12_next(nullptr);
        static info::CUnmannedTraderDivisionInfoGetGroupID12_clbk CUnmannedTraderDivisionInfoGetGroupID12_user(nullptr);
        static info::CUnmannedTraderDivisionInfoGetID14_ptr CUnmannedTraderDivisionInfoGetID14_next(nullptr);
        static info::CUnmannedTraderDivisionInfoGetID14_clbk CUnmannedTraderDivisionInfoGetID14_user(nullptr);
        static info::CUnmannedTraderDivisionInfoGetMaxClassCnt16_ptr CUnmannedTraderDivisionInfoGetMaxClassCnt16_next(nullptr);
        static info::CUnmannedTraderDivisionInfoGetMaxClassCnt16_clbk CUnmannedTraderDivisionInfoGetMaxClassCnt16_user(nullptr);
        static info::CUnmannedTraderDivisionInfoGetSize18_ptr CUnmannedTraderDivisionInfoGetSize18_next(nullptr);
        static info::CUnmannedTraderDivisionInfoGetSize18_clbk CUnmannedTraderDivisionInfoGetSize18_user(nullptr);
        static info::CUnmannedTraderDivisionInfoGetSortType20_ptr CUnmannedTraderDivisionInfoGetSortType20_next(nullptr);
        static info::CUnmannedTraderDivisionInfoGetSortType20_clbk CUnmannedTraderDivisionInfoGetSortType20_user(nullptr);
        static info::CUnmannedTraderDivisionInfoIsExistGroupID22_ptr CUnmannedTraderDivisionInfoIsExistGroupID22_next(nullptr);
        static info::CUnmannedTraderDivisionInfoIsExistGroupID22_clbk CUnmannedTraderDivisionInfoIsExistGroupID22_user(nullptr);
        static info::CUnmannedTraderDivisionInfoIsExistSortTypeID24_ptr CUnmannedTraderDivisionInfoIsExistSortTypeID24_next(nullptr);
        static info::CUnmannedTraderDivisionInfoIsExistSortTypeID24_clbk CUnmannedTraderDivisionInfoIsExistSortTypeID24_user(nullptr);
        static info::CUnmannedTraderDivisionInfoIsValidID26_ptr CUnmannedTraderDivisionInfoIsValidID26_next(nullptr);
        static info::CUnmannedTraderDivisionInfoIsValidID26_clbk CUnmannedTraderDivisionInfoIsValidID26_user(nullptr);
        static info::CUnmannedTraderDivisionInfoLoadXML28_ptr CUnmannedTraderDivisionInfoLoadXML28_next(nullptr);
        static info::CUnmannedTraderDivisionInfoLoadXML28_clbk CUnmannedTraderDivisionInfoLoadXML28_user(nullptr);
        static info::CUnmannedTraderDivisionInfodtor_CUnmannedTraderDivisionInfo32_ptr CUnmannedTraderDivisionInfodtor_CUnmannedTraderDivisionInfo32_next(nullptr);
        static info::CUnmannedTraderDivisionInfodtor_CUnmannedTraderDivisionInfo32_clbk CUnmannedTraderDivisionInfodtor_CUnmannedTraderDivisionInfo32_user(nullptr);
        
        static void CUnmannedTraderDivisionInfoctor_CUnmannedTraderDivisionInfo2_wrapper(struct CUnmannedTraderDivisionInfo* _this, unsigned int dwID, char* szName)
        {
           CUnmannedTraderDivisionInfoctor_CUnmannedTraderDivisionInfo2_user(_this, dwID, szName, CUnmannedTraderDivisionInfoctor_CUnmannedTraderDivisionInfo2_next);
        };
        static void CUnmannedTraderDivisionInfoCleanUp4_wrapper(struct CUnmannedTraderDivisionInfo* _this)
        {
           CUnmannedTraderDivisionInfoCleanUp4_user(_this, CUnmannedTraderDivisionInfoCleanUp4_next);
        };
        static struct CUnmannedTraderDivisionInfo* CUnmannedTraderDivisionInfoCopy6_wrapper(struct CUnmannedTraderDivisionInfo* _this, struct CUnmannedTraderDivisionInfo* lhs)
        {
           return CUnmannedTraderDivisionInfoCopy6_user(_this, lhs, CUnmannedTraderDivisionInfoCopy6_next);
        };
        static struct CUnmannedTraderSortType* CUnmannedTraderDivisionInfoFindSortType8_wrapper(struct CUnmannedTraderDivisionInfo* _this, unsigned int dwID)
        {
           return CUnmannedTraderDivisionInfoFindSortType8_user(_this, dwID, CUnmannedTraderDivisionInfoFindSortType8_next);
        };
        static bool CUnmannedTraderDivisionInfoGetGroupID10_wrapper(struct CUnmannedTraderDivisionInfo* _this, char byTableCode, uint16_t wItemTableIndex, char* byDivision, char* byClass)
        {
           return CUnmannedTraderDivisionInfoGetGroupID10_user(_this, byTableCode, wItemTableIndex, byDivision, byClass, CUnmannedTraderDivisionInfoGetGroupID10_next);
        };
        static bool CUnmannedTraderDivisionInfoGetGroupID12_wrapper(struct CUnmannedTraderDivisionInfo* _this, char byTableCode, uint16_t wItemTableIndex, char* byDivision, char* byClass, char* bySubClass, unsigned int* dwListIndex)
        {
           return CUnmannedTraderDivisionInfoGetGroupID12_user(_this, byTableCode, wItemTableIndex, byDivision, byClass, bySubClass, dwListIndex, CUnmannedTraderDivisionInfoGetGroupID12_next);
        };
        static unsigned int CUnmannedTraderDivisionInfoGetID14_wrapper(struct CUnmannedTraderDivisionInfo* _this)
        {
           return CUnmannedTraderDivisionInfoGetID14_user(_this, CUnmannedTraderDivisionInfoGetID14_next);
        };
        static unsigned int CUnmannedTraderDivisionInfoGetMaxClassCnt16_wrapper(struct CUnmannedTraderDivisionInfo* _this)
        {
           return CUnmannedTraderDivisionInfoGetMaxClassCnt16_user(_this, CUnmannedTraderDivisionInfoGetMaxClassCnt16_next);
        };
        static unsigned int CUnmannedTraderDivisionInfoGetSize18_wrapper(struct CUnmannedTraderDivisionInfo* _this)
        {
           return CUnmannedTraderDivisionInfoGetSize18_user(_this, CUnmannedTraderDivisionInfoGetSize18_next);
        };
        static struct CUnmannedTraderSortType* CUnmannedTraderDivisionInfoGetSortType20_wrapper(struct CUnmannedTraderDivisionInfo* _this, char bySortType)
        {
           return CUnmannedTraderDivisionInfoGetSortType20_user(_this, bySortType, CUnmannedTraderDivisionInfoGetSortType20_next);
        };
        static bool CUnmannedTraderDivisionInfoIsExistGroupID22_wrapper(struct CUnmannedTraderDivisionInfo* _this, char byDivision, char byClass, char bySubClass, char bySortType, unsigned int* dwListIndex)
        {
           return CUnmannedTraderDivisionInfoIsExistGroupID22_user(_this, byDivision, byClass, bySubClass, bySortType, dwListIndex, CUnmannedTraderDivisionInfoIsExistGroupID22_next);
        };
        static bool CUnmannedTraderDivisionInfoIsExistSortTypeID24_wrapper(struct CUnmannedTraderDivisionInfo* _this, unsigned int dwID)
        {
           return CUnmannedTraderDivisionInfoIsExistSortTypeID24_user(_this, dwID, CUnmannedTraderDivisionInfoIsExistSortTypeID24_next);
        };
        static bool CUnmannedTraderDivisionInfoIsValidID26_wrapper(struct CUnmannedTraderDivisionInfo* _this, unsigned int dwID)
        {
           return CUnmannedTraderDivisionInfoIsValidID26_user(_this, dwID, CUnmannedTraderDivisionInfoIsValidID26_next);
        };
        static bool CUnmannedTraderDivisionInfoLoadXML28_wrapper(struct CUnmannedTraderDivisionInfo* _this, struct TiXmlElement* pkElement, struct CLogFile* kLogger)
        {
           return CUnmannedTraderDivisionInfoLoadXML28_user(_this, pkElement, kLogger, CUnmannedTraderDivisionInfoLoadXML28_next);
        };
        static void CUnmannedTraderDivisionInfodtor_CUnmannedTraderDivisionInfo32_wrapper(struct CUnmannedTraderDivisionInfo* _this)
        {
           CUnmannedTraderDivisionInfodtor_CUnmannedTraderDivisionInfo32_user(_this, CUnmannedTraderDivisionInfodtor_CUnmannedTraderDivisionInfo32_next);
        };
        
        static hook_record CUnmannedTraderDivisionInfo_functions[] = {
        {   (LPVOID)0x14036d240L,
            (LPVOID *)&CUnmannedTraderDivisionInfoctor_CUnmannedTraderDivisionInfo2_user,
            (LPVOID *)&CUnmannedTraderDivisionInfoctor_CUnmannedTraderDivisionInfo2_next,
            (LPVOID)cast_pointer_function(CUnmannedTraderDivisionInfoctor_CUnmannedTraderDivisionInfo2_wrapper),
            (LPVOID)cast_pointer_function((void(CUnmannedTraderDivisionInfo::*)(unsigned int, char*))&CUnmannedTraderDivisionInfo::ctor_CUnmannedTraderDivisionInfo) },
        {   (LPVOID)0x14036e2a0L,
            (LPVOID *)&CUnmannedTraderDivisionInfoCleanUp4_user,
            (LPVOID *)&CUnmannedTraderDivisionInfoCleanUp4_next,
            (LPVOID)cast_pointer_function(CUnmannedTraderDivisionInfoCleanUp4_wrapper),
            (LPVOID)cast_pointer_function((void(CUnmannedTraderDivisionInfo::*)())&CUnmannedTraderDivisionInfo::CleanUp) },
        {   (LPVOID)0x14036e470L,
            (LPVOID *)&CUnmannedTraderDivisionInfoCopy6_user,
            (LPVOID *)&CUnmannedTraderDivisionInfoCopy6_next,
            (LPVOID)cast_pointer_function(CUnmannedTraderDivisionInfoCopy6_wrapper),
            (LPVOID)cast_pointer_function((struct CUnmannedTraderDivisionInfo*(CUnmannedTraderDivisionInfo::*)(struct CUnmannedTraderDivisionInfo*))&CUnmannedTraderDivisionInfo::Copy) },
        {   (LPVOID)0x14036e9c0L,
            (LPVOID *)&CUnmannedTraderDivisionInfoFindSortType8_user,
            (LPVOID *)&CUnmannedTraderDivisionInfoFindSortType8_next,
            (LPVOID)cast_pointer_function(CUnmannedTraderDivisionInfoFindSortType8_wrapper),
            (LPVOID)cast_pointer_function((struct CUnmannedTraderSortType*(CUnmannedTraderDivisionInfo::*)(unsigned int))&CUnmannedTraderDivisionInfo::FindSortType) },
        {   (LPVOID)0x14036da00L,
            (LPVOID *)&CUnmannedTraderDivisionInfoGetGroupID10_user,
            (LPVOID *)&CUnmannedTraderDivisionInfoGetGroupID10_next,
            (LPVOID)cast_pointer_function(CUnmannedTraderDivisionInfoGetGroupID10_wrapper),
            (LPVOID)cast_pointer_function((bool(CUnmannedTraderDivisionInfo::*)(char, uint16_t, char*, char*))&CUnmannedTraderDivisionInfo::GetGroupID) },
        {   (LPVOID)0x14036dc20L,
            (LPVOID *)&CUnmannedTraderDivisionInfoGetGroupID12_user,
            (LPVOID *)&CUnmannedTraderDivisionInfoGetGroupID12_next,
            (LPVOID)cast_pointer_function(CUnmannedTraderDivisionInfoGetGroupID12_wrapper),
            (LPVOID)cast_pointer_function((bool(CUnmannedTraderDivisionInfo::*)(char, uint16_t, char*, char*, char*, unsigned int*))&CUnmannedTraderDivisionInfo::GetGroupID) },
        {   (LPVOID)0x140387880L,
            (LPVOID *)&CUnmannedTraderDivisionInfoGetID14_user,
            (LPVOID *)&CUnmannedTraderDivisionInfoGetID14_next,
            (LPVOID)cast_pointer_function(CUnmannedTraderDivisionInfoGetID14_wrapper),
            (LPVOID)cast_pointer_function((unsigned int(CUnmannedTraderDivisionInfo::*)())&CUnmannedTraderDivisionInfo::GetID) },
        {   (LPVOID)0x1403879b0L,
            (LPVOID *)&CUnmannedTraderDivisionInfoGetMaxClassCnt16_user,
            (LPVOID *)&CUnmannedTraderDivisionInfoGetMaxClassCnt16_next,
            (LPVOID)cast_pointer_function(CUnmannedTraderDivisionInfoGetMaxClassCnt16_wrapper),
            (LPVOID)cast_pointer_function((unsigned int(CUnmannedTraderDivisionInfo::*)())&CUnmannedTraderDivisionInfo::GetMaxClassCnt) },
        {   (LPVOID)0x140387960L,
            (LPVOID *)&CUnmannedTraderDivisionInfoGetSize18_user,
            (LPVOID *)&CUnmannedTraderDivisionInfoGetSize18_next,
            (LPVOID)cast_pointer_function(CUnmannedTraderDivisionInfoGetSize18_wrapper),
            (LPVOID)cast_pointer_function((unsigned int(CUnmannedTraderDivisionInfo::*)())&CUnmannedTraderDivisionInfo::GetSize) },
        {   (LPVOID)0x14036e0d0L,
            (LPVOID *)&CUnmannedTraderDivisionInfoGetSortType20_user,
            (LPVOID *)&CUnmannedTraderDivisionInfoGetSortType20_next,
            (LPVOID)cast_pointer_function(CUnmannedTraderDivisionInfoGetSortType20_wrapper),
            (LPVOID)cast_pointer_function((struct CUnmannedTraderSortType*(CUnmannedTraderDivisionInfo::*)(char))&CUnmannedTraderDivisionInfo::GetSortType) },
        {   (LPVOID)0x14036de80L,
            (LPVOID *)&CUnmannedTraderDivisionInfoIsExistGroupID22_user,
            (LPVOID *)&CUnmannedTraderDivisionInfoIsExistGroupID22_next,
            (LPVOID)cast_pointer_function(CUnmannedTraderDivisionInfoIsExistGroupID22_wrapper),
            (LPVOID)cast_pointer_function((bool(CUnmannedTraderDivisionInfo::*)(char, char, char, char, unsigned int*))&CUnmannedTraderDivisionInfo::IsExistGroupID) },
        {   (LPVOID)0x14036e810L,
            (LPVOID *)&CUnmannedTraderDivisionInfoIsExistSortTypeID24_user,
            (LPVOID *)&CUnmannedTraderDivisionInfoIsExistSortTypeID24_next,
            (LPVOID)cast_pointer_function(CUnmannedTraderDivisionInfoIsExistSortTypeID24_wrapper),
            (LPVOID)cast_pointer_function((bool(CUnmannedTraderDivisionInfo::*)(unsigned int))&CUnmannedTraderDivisionInfo::IsExistSortTypeID) },
        {   (LPVOID)0x14036e660L,
            (LPVOID *)&CUnmannedTraderDivisionInfoIsValidID26_user,
            (LPVOID *)&CUnmannedTraderDivisionInfoIsValidID26_next,
            (LPVOID)cast_pointer_function(CUnmannedTraderDivisionInfoIsValidID26_wrapper),
            (LPVOID)cast_pointer_function((bool(CUnmannedTraderDivisionInfo::*)(unsigned int))&CUnmannedTraderDivisionInfo::IsValidID) },
        {   (LPVOID)0x14036d3f0L,
            (LPVOID *)&CUnmannedTraderDivisionInfoLoadXML28_user,
            (LPVOID *)&CUnmannedTraderDivisionInfoLoadXML28_next,
            (LPVOID)cast_pointer_function(CUnmannedTraderDivisionInfoLoadXML28_wrapper),
            (LPVOID)cast_pointer_function((bool(CUnmannedTraderDivisionInfo::*)(struct TiXmlElement*, struct CLogFile*))&CUnmannedTraderDivisionInfo::LoadXML) },
        {   (LPVOID)0x14036d320L,
            (LPVOID *)&CUnmannedTraderDivisionInfodtor_CUnmannedTraderDivisionInfo32_user,
            (LPVOID *)&CUnmannedTraderDivisionInfodtor_CUnmannedTraderDivisionInfo32_next,
            (LPVOID)cast_pointer_function(CUnmannedTraderDivisionInfodtor_CUnmannedTraderDivisionInfo32_wrapper),
            (LPVOID)cast_pointer_function((void(CUnmannedTraderDivisionInfo::*)())&CUnmannedTraderDivisionInfo::dtor_CUnmannedTraderDivisionInfo) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE