// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CBossMonsterScheduleSystem.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        using CBossMonsterScheduleSystemAnalysisMsg2_ptr = void (WINAPIV*)(struct CBossMonsterScheduleSystem*, struct ScheduleMSG*);
        using CBossMonsterScheduleSystemAnalysisMsg2_clbk = void (WINAPIV*)(struct CBossMonsterScheduleSystem*, struct ScheduleMSG*, CBossMonsterScheduleSystemAnalysisMsg2_ptr);
        
        using CBossMonsterScheduleSystemctor_CBossMonsterScheduleSystem4_ptr = void (WINAPIV*)(struct CBossMonsterScheduleSystem*);
        using CBossMonsterScheduleSystemctor_CBossMonsterScheduleSystem4_clbk = void (WINAPIV*)(struct CBossMonsterScheduleSystem*, CBossMonsterScheduleSystemctor_CBossMonsterScheduleSystem4_ptr);
        using CBossMonsterScheduleSystemCreateTaskPool6_ptr = bool (WINAPIV*)(struct CBossMonsterScheduleSystem*);
        using CBossMonsterScheduleSystemCreateTaskPool6_clbk = bool (WINAPIV*)(struct CBossMonsterScheduleSystem*, CBossMonsterScheduleSystemCreateTaskPool6_ptr);
        using CBossMonsterScheduleSystemCreateWorkerThread8_ptr = bool (WINAPIV*)(struct CBossMonsterScheduleSystem*);
        using CBossMonsterScheduleSystemCreateWorkerThread8_clbk = bool (WINAPIV*)(struct CBossMonsterScheduleSystem*, CBossMonsterScheduleSystemCreateWorkerThread8_ptr);
        using CBossMonsterScheduleSystemInit10_ptr = bool (WINAPIV*)(struct CBossMonsterScheduleSystem*, struct CMapOperation*);
        using CBossMonsterScheduleSystemInit10_clbk = bool (WINAPIV*)(struct CBossMonsterScheduleSystem*, struct CMapOperation*, CBossMonsterScheduleSystemInit10_ptr);
        using CBossMonsterScheduleSystemInstance12_ptr = struct CBossMonsterScheduleSystem* (WINAPIV*)();
        using CBossMonsterScheduleSystemInstance12_clbk = struct CBossMonsterScheduleSystem* (WINAPIV*)(CBossMonsterScheduleSystemInstance12_ptr);
        using CBossMonsterScheduleSystemLoadSchedule14_ptr = struct BossSchedule* (WINAPIV*)(struct CBossMonsterScheduleSystem*, struct BossSchedule_Map*, struct INI_Section*);
        using CBossMonsterScheduleSystemLoadSchedule14_clbk = struct BossSchedule* (WINAPIV*)(struct CBossMonsterScheduleSystem*, struct BossSchedule_Map*, struct INI_Section*, CBossMonsterScheduleSystemLoadSchedule14_ptr);
        using CBossMonsterScheduleSystemMakeMap16_ptr = struct BossSchedule_Map* (WINAPIV*)(struct CBossMonsterScheduleSystem*, int, struct CMapData*);
        using CBossMonsterScheduleSystemMakeMap16_clbk = struct BossSchedule_Map* (WINAPIV*)(struct CBossMonsterScheduleSystem*, int, struct CMapData*, CBossMonsterScheduleSystemMakeMap16_ptr);
        using CBossMonsterScheduleSystemMakeSchedule18_ptr = struct BossSchedule* (WINAPIV*)(struct CBossMonsterScheduleSystem*, struct BossSchedule_Map*, struct _mon_active*, struct _mon_block*, int, int);
        using CBossMonsterScheduleSystemMakeSchedule18_clbk = struct BossSchedule* (WINAPIV*)(struct CBossMonsterScheduleSystem*, struct BossSchedule_Map*, struct _mon_active*, struct _mon_block*, int, int, CBossMonsterScheduleSystemMakeSchedule18_ptr);
        using CBossMonsterScheduleSystemMakeTBL20_ptr = struct BossSchedule_TBL* (WINAPIV*)(struct CBossMonsterScheduleSystem*, struct CMapOperation*);
        using CBossMonsterScheduleSystemMakeTBL20_clbk = struct BossSchedule_TBL* (WINAPIV*)(struct CBossMonsterScheduleSystem*, struct CMapOperation*, CBossMonsterScheduleSystemMakeTBL20_ptr);
        using CBossMonsterScheduleSystemRespawnMonster22_ptr = void (WINAPIV*)(struct CBossMonsterScheduleSystem*);
        using CBossMonsterScheduleSystemRespawnMonster22_clbk = void (WINAPIV*)(struct CBossMonsterScheduleSystem*, CBossMonsterScheduleSystemRespawnMonster22_ptr);
        using CBossMonsterScheduleSystemSavechedule24_ptr = void (WINAPIV*)(struct CBossMonsterScheduleSystem*, struct BossSchedule_Map*, struct BossSchedule*);
        using CBossMonsterScheduleSystemSavechedule24_clbk = void (WINAPIV*)(struct CBossMonsterScheduleSystem*, struct BossSchedule_Map*, struct BossSchedule*, CBossMonsterScheduleSystemSavechedule24_ptr);
        using CBossMonsterScheduleSystemWorkProc26_ptr = int (WINAPIV*)(struct CBossMonsterScheduleSystem*);
        using CBossMonsterScheduleSystemWorkProc26_clbk = int (WINAPIV*)(struct CBossMonsterScheduleSystem*, CBossMonsterScheduleSystemWorkProc26_ptr);
        
        using CBossMonsterScheduleSystemdtor_CBossMonsterScheduleSystem31_ptr = void (WINAPIV*)(struct CBossMonsterScheduleSystem*);
        using CBossMonsterScheduleSystemdtor_CBossMonsterScheduleSystem31_clbk = void (WINAPIV*)(struct CBossMonsterScheduleSystem*, CBossMonsterScheduleSystemdtor_CBossMonsterScheduleSystem31_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
