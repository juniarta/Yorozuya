// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <HINSTANCE__.hpp>
#include <HRSRC__.hpp>
#include <HWND__.hpp>
#include <_GUID.hpp>



START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct tagOLEUICHANGEICONW
    {
        unsigned int cbStruct;
        unsigned int dwFlags;
        HWND__ *hWndOwner;
        const wchar_t *lpszCaption;
        unsigned int (WINAPIV *lpfnHook)(HWND__ *, unsigned int, unsigned __int64, __int64);
        __int64 lCustData;
        HINSTANCE__ *hInstance;
        const wchar_t *lpszTemplate;
        HRSRC__ *hResource;
        void *hMetaPict;
        _GUID clsid;
        wchar_t szIconExe[260];
        int cchIconExe;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
