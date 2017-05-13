// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CMyTimer.hpp"
#include "CPlayer.hpp"
#include "RFEventBase.hpp"
#include "_FILETIME.hpp"
#include "_event_config_classrefine.hpp"
#include "_event_participant_classrefine.hpp"


START_ATF_NAMESPACE
    struct  RFEvent_ClassRefine : RFEventBase
    {
        _event_config_classrefine _kEvent;
        _event_participant_classrefine *_pkParticipant;
        bool m_bUserDataReset;
        bool m_bDateReset;
        _event_config_classrefine _kModifyEvent;
        CMyTimer m_tmDataFileCheckTime;
        _FILETIME m_ftWrite;
    public:
        int CanDoEvent(struct CPlayer* pOne)
        {
            using org_ptr = int (WINAPIV*)(struct RFEvent_ClassRefine*, struct CPlayer*);
            return (org_ptr(0x140328bc0L))(this, pOne);
        };
        bool CheckRefineEventData()
        {
            using org_ptr = bool (WINAPIV*)(struct RFEvent_ClassRefine*);
            return (org_ptr(0x140328e30L))(this);
        };
        int DoEvent(struct CPlayer* pOne)
        {
            using org_ptr = int (WINAPIV*)(struct RFEvent_ClassRefine*, struct CPlayer*);
            return (org_ptr(0x140328cd0L))(this, pOne);
        };
        char* GetPlayerState(unsigned int nIdx, unsigned int nAvator)
        {
            using org_ptr = char* (WINAPIV*)(struct RFEvent_ClassRefine*, unsigned int, unsigned int);
            return (org_ptr(0x1403296a0L))(this, nIdx, nAvator);
        };
        bool Initialzie()
        {
            using org_ptr = bool (WINAPIV*)(struct RFEvent_ClassRefine*);
            return (org_ptr(0x1403287e0L))(this);
        };
        bool IsDbUpdate(unsigned int nIdx)
        {
            using org_ptr = bool (WINAPIV*)(struct RFEvent_ClassRefine*, unsigned int);
            return (org_ptr(0x140329600L))(this, nIdx);
        };
        bool IsEnable()
        {
            using org_ptr = bool (WINAPIV*)(struct RFEvent_ClassRefine*);
            return (org_ptr(0x1403295e0L))(this);
        };
        void Loop()
        {
            using org_ptr = void (WINAPIV*)(struct RFEvent_ClassRefine*);
            (org_ptr(0x140328da0L))(this);
        };
        RFEvent_ClassRefine()
        {
            using org_ptr = void (WINAPIV*)(struct RFEvent_ClassRefine*);
            (org_ptr(0x1403286b0L))(this);
        };
        void ctor_RFEvent_ClassRefine()
        {
            using org_ptr = void (WINAPIV*)(struct RFEvent_ClassRefine*);
            (org_ptr(0x1403286b0L))(this);
        };
        void ReadClassRefineEventInfo()
        {
            using org_ptr = void (WINAPIV*)(struct RFEvent_ClassRefine*);
            (org_ptr(0x140329040L))(this);
        };
        void ResetRefineData()
        {
            using org_ptr = void (WINAPIV*)(struct RFEvent_ClassRefine*);
            (org_ptr(0x140328f70L))(this);
        };
        bool SetEvent(char* p, int size, bool bInit)
        {
            using org_ptr = bool (WINAPIV*)(struct RFEvent_ClassRefine*, char*, int, bool);
            return (org_ptr(0x140328950L))(this, p, size, bInit);
        };
        bool SetPlayerState(void* p, int size)
        {
            using org_ptr = bool (WINAPIV*)(struct RFEvent_ClassRefine*, void*, int);
            return (org_ptr(0x140328a60L))(this, p, size);
        };
        ~RFEvent_ClassRefine()
        {
            using org_ptr = void (WINAPIV*)(struct RFEvent_ClassRefine*);
            (org_ptr(0x140328750L))(this);
        };
        void dtor_RFEvent_ClassRefine()
        {
            using org_ptr = void (WINAPIV*)(struct RFEvent_ClassRefine*);
            (org_ptr(0x140328750L))(this);
        };
    };
END_ATF_NAMESPACE