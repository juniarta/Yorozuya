// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <HRESULT.hpp>
#include <IStream.hpp>
#include <_GUID.hpp>


START_ATF_NAMESPACE
    namespace ATL
    {
        #pragma pack(push, 8)
        struct _AtlAptCreateObjData
        {
            HRESULT (WINAPIV *pfnCreateInstance)(void *, _GUID *, void **);
            _GUID *piid;
            void *hEvent;
            IStream *pStream;
            HRESULT hRes;
        };
        #pragma pack(pop)
    }; // end namespace ATL
END_ATF_NAMESPACE
