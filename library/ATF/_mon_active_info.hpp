// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_mon_active.hpp"


START_ATF_NAMESPACE
    namespace info
    {
        using _mon_activeBossScheduleSave2_ptr = void (WINAPIV*)(struct _mon_active*);
        using _mon_activeBossScheduleSave2_clbk = void (WINAPIV*)(struct _mon_active*, _mon_activeBossScheduleSave2_ptr);
        using _mon_activeGetBossSchedule4_ptr = struct BossSchedule* (WINAPIV*)(struct _mon_active*);
        using _mon_activeGetBossSchedule4_clbk = struct BossSchedule* (WINAPIV*)(struct _mon_active*, _mon_activeGetBossSchedule4_ptr);
        using _mon_activeSetActive6_ptr = bool (WINAPIV*)(struct _mon_active*, struct _mon_active_fld*, struct _mon_block*, int);
        using _mon_activeSetActive6_clbk = bool (WINAPIV*)(struct _mon_active*, struct _mon_active_fld*, struct _mon_block*, int, _mon_activeSetActive6_ptr);
        using _mon_activeSetBossSchedule8_ptr = void (WINAPIV*)(struct _mon_active*, struct BossSchedule*);
        using _mon_activeSetBossSchedule8_clbk = void (WINAPIV*)(struct _mon_active*, struct BossSchedule*, _mon_activeSetBossSchedule8_ptr);
        using _mon_activeSetCurMonNum10_ptr = bool (WINAPIV*)(struct _mon_active*, int);
        using _mon_activeSetCurMonNum10_clbk = bool (WINAPIV*)(struct _mon_active*, int, _mon_activeSetCurMonNum10_ptr);
        using _mon_activeSetZeroMonNum12_ptr = void (WINAPIV*)(struct _mon_active*);
        using _mon_activeSetZeroMonNum12_clbk = void (WINAPIV*)(struct _mon_active*, _mon_activeSetZeroMonNum12_ptr);
        using _mon_activector__mon_active14_ptr = void (WINAPIV*)(struct _mon_active*);
        using _mon_activector__mon_active14_clbk = void (WINAPIV*)(struct _mon_active*, _mon_activector__mon_active14_ptr);
        
    }; // end namespace info
END_ATF_NAMESPACE