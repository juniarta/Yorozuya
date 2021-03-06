// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <BASE_HACKSHEILD_PARAM.hpp>
#include <CMyTimer.hpp>
#include <INationGameGuardSystem.hpp>
#include <_MSG_HEADER.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct  CHackShieldExSystem : INationGameGuardSystem
    {
        BASE_HACKSHEILD_PARAM **m_ppNodeArray;
        bool m_bInit;
        bool m_bActive;
        CMyTimer m_tmLoopTime;
        unsigned int m_dwCurrentCheckIndex;
    public:
        CHackShieldExSystem();
        void ctor_CHackShieldExSystem();
        struct BASE_HACKSHEILD_PARAM* GetParam(unsigned int n);
        bool IsActive();
        bool IsInit();
        bool OnCheckSession_FirstVerify(int n);
        void OnConnectSession(int n);
        void OnDisConnectSession(int n);
        void OnLoop();
        void OnLoopSession(int n);
        bool RecvClientLine(int n, struct _MSG_HEADER* pHeader, char* pMsg);
        ~CHackShieldExSystem();
        void dtor_CHackShieldExSystem();
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
