// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CCircleZone.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        
        using CCircleZonector_CCircleZone2_ptr = void (WINAPIV*)(struct CCircleZone*);
        using CCircleZonector_CCircleZone2_clbk = void (WINAPIV*)(struct CCircleZone*, CCircleZonector_CCircleZone2_ptr);
        using CCircleZoneCreate4_ptr = bool (WINAPIV*)(struct CCircleZone*, struct CMapData*, char);
        using CCircleZoneCreate4_clbk = bool (WINAPIV*)(struct CCircleZone*, struct CMapData*, char, CCircleZoneCreate4_ptr);
        using CCircleZoneDestroy6_ptr = void (WINAPIV*)(struct CCircleZone*);
        using CCircleZoneDestroy6_clbk = void (WINAPIV*)(struct CCircleZone*, CCircleZoneDestroy6_ptr);
        using CCircleZoneGetColor8_ptr = char (WINAPIV*)(struct CCircleZone*);
        using CCircleZoneGetColor8_clbk = char (WINAPIV*)(struct CCircleZone*, CCircleZoneGetColor8_ptr);
        using CCircleZoneGetPortalInx10_ptr = int (WINAPIV*)(struct CCircleZone*);
        using CCircleZoneGetPortalInx10_clbk = int (WINAPIV*)(struct CCircleZone*, CCircleZoneGetPortalInx10_ptr);
        using CCircleZoneGoal12_ptr = char (WINAPIV*)(struct CCircleZone*, struct CMapData*, float*);
        using CCircleZoneGoal12_clbk = char (WINAPIV*)(struct CCircleZone*, struct CMapData*, float*, CCircleZoneGoal12_ptr);
        using CCircleZoneInit14_ptr = bool (WINAPIV*)(struct CCircleZone*, unsigned int, int, int, uint16_t, struct CMapData*);
        using CCircleZoneInit14_clbk = bool (WINAPIV*)(struct CCircleZone*, unsigned int, int, int, uint16_t, struct CMapData*, CCircleZoneInit14_ptr);
        using CCircleZoneIsNearPosition16_ptr = bool (WINAPIV*)(struct CCircleZone*, float*);
        using CCircleZoneIsNearPosition16_clbk = bool (WINAPIV*)(struct CCircleZone*, float*, CCircleZoneIsNearPosition16_ptr);
        using CCircleZoneSendMsgCreate18_ptr = void (WINAPIV*)(struct CCircleZone*);
        using CCircleZoneSendMsgCreate18_clbk = void (WINAPIV*)(struct CCircleZone*, CCircleZoneSendMsgCreate18_ptr);
        using CCircleZoneSendMsgGoal20_ptr = void (WINAPIV*)(struct CCircleZone*);
        using CCircleZoneSendMsgGoal20_clbk = void (WINAPIV*)(struct CCircleZone*, CCircleZoneSendMsgGoal20_ptr);
        using CCircleZoneSendMsg_FixPosition22_ptr = void (WINAPIV*)(struct CCircleZone*, int);
        using CCircleZoneSendMsg_FixPosition22_clbk = void (WINAPIV*)(struct CCircleZone*, int, CCircleZoneSendMsg_FixPosition22_ptr);
        
        using CCircleZonedtor_CCircleZone28_ptr = void (WINAPIV*)(struct CCircleZone*);
        using CCircleZonedtor_CCircleZone28_clbk = void (WINAPIV*)(struct CCircleZone*, CCircleZonedtor_CCircleZone28_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE