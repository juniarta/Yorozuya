// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CEntity.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        using CEntityAddFlag1_ptr = void (WINAPIV*)(struct CEntity*, uint32_t);
        using CEntityAddFlag1_clbk = void (WINAPIV*)(struct CEntity*, uint32_t, CEntityAddFlag1_ptr);
        using CEntityDrawEntity2_ptr = int64_t (WINAPIV*)(struct CEntity*, float**, uint32_t, float);
        using CEntityDrawEntity2_clbk = int64_t (WINAPIV*)(struct CEntity*, float**, uint32_t, float, CEntityDrawEntity2_ptr);
        using CEntityDrawEntityVS3_ptr = int64_t (WINAPIV*)(struct CEntity*, struct _ENTITY_LIST*, float**, uint32_t);
        using CEntityDrawEntityVS3_clbk = int64_t (WINAPIV*)(struct CEntity*, struct _ENTITY_LIST*, float**, uint32_t, CEntityDrawEntityVS3_ptr);
        using CEntityDrawOneMatGroup4_ptr = void (WINAPIV*)(struct CEntity*, struct _ENTITY_M_GROUP*);
        using CEntityDrawOneMatGroup4_clbk = void (WINAPIV*)(struct CEntity*, struct _ENTITY_M_GROUP*, CEntityDrawOneMatGroup4_ptr);
        using CEntityDrawOneMatGroupVS5_ptr = void (WINAPIV*)(struct CEntity*, struct _ENTITY_M_GROUP*);
        using CEntityDrawOneMatGroupVS5_clbk = void (WINAPIV*)(struct CEntity*, struct _ENTITY_M_GROUP*, CEntityDrawOneMatGroupVS5_ptr);
        using CEntityGetAnimationMatrix6_ptr = void (WINAPIV*)(struct CEntity*, float**, struct _ANI_OBJECT*, float);
        using CEntityGetAnimationMatrix6_clbk = void (WINAPIV*)(struct CEntity*, float**, struct _ANI_OBJECT*, float, CEntityGetAnimationMatrix6_ptr);
        using CEntityGetMatGroup7_ptr = struct _ENTITY_M_GROUP* (WINAPIV*)(struct CEntity*);
        using CEntityGetMatGroup7_clbk = struct _ENTITY_M_GROUP* (WINAPIV*)(struct CEntity*, CEntityGetMatGroup7_ptr);
        using CEntityGetMatGroupNum8_ptr = int64_t (WINAPIV*)(struct CEntity*);
        using CEntityGetMatGroupNum8_clbk = int64_t (WINAPIV*)(struct CEntity*, CEntityGetMatGroupNum8_ptr);
        using CEntityGetMatNum9_ptr = int64_t (WINAPIV*)(struct CEntity*);
        using CEntityGetMatNum9_clbk = int64_t (WINAPIV*)(struct CEntity*, CEntityGetMatNum9_ptr);
        using CEntityGetObjectA10_ptr = struct _ANI_OBJECT* (WINAPIV*)(struct CEntity*);
        using CEntityGetObjectA10_clbk = struct _ANI_OBJECT* (WINAPIV*)(struct CEntity*, CEntityGetObjectA10_ptr);
        using CEntityGetStaticIndexedBuffer11_ptr = struct CIndexBuffer* (WINAPIV*)(struct CEntity*);
        using CEntityGetStaticIndexedBuffer11_clbk = struct CIndexBuffer* (WINAPIV*)(struct CEntity*, CEntityGetStaticIndexedBuffer11_ptr);
        using CEntityGetStaticVertexBuffer12_ptr = struct CVertexBuffer* (WINAPIV*)(struct CEntity*);
        using CEntityGetStaticVertexBuffer12_clbk = struct CVertexBuffer* (WINAPIV*)(struct CEntity*, CEntityGetStaticVertexBuffer12_ptr);
        using CEntityGetUsedVertexBufferSize13_ptr = int64_t (WINAPIV*)(struct CEntity*);
        using CEntityGetUsedVertexBufferSize13_clbk = int64_t (WINAPIV*)(struct CEntity*, CEntityGetUsedVertexBufferSize13_ptr);
        using CEntityIsAlpha14_ptr = int64_t (WINAPIV*)(struct CEntity*);
        using CEntityIsAlpha14_clbk = int64_t (WINAPIV*)(struct CEntity*, CEntityIsAlpha14_ptr);
        using CEntityIsEnableShaderID15_ptr = int64_t (WINAPIV*)(struct CEntity*, uint32_t);
        using CEntityIsEnableShaderID15_clbk = int64_t (WINAPIV*)(struct CEntity*, uint32_t, CEntityIsEnableShaderID15_ptr);
        using CEntityIsFirstAlpha16_ptr = int64_t (WINAPIV*)(struct CEntity*);
        using CEntityIsFirstAlpha16_clbk = int64_t (WINAPIV*)(struct CEntity*, CEntityIsFirstAlpha16_ptr);
        using CEntityLoadEntity17_ptr = int64_t (WINAPIV*)(struct CEntity*, char*, uint32_t);
        using CEntityLoadEntity17_clbk = int64_t (WINAPIV*)(struct CEntity*, char*, uint32_t, CEntityLoadEntity17_ptr);
        using CEntityOnceDrawEntity18_ptr = int64_t (WINAPIV*)(struct CEntity*, float**, uint32_t);
        using CEntityOnceDrawEntity18_clbk = int64_t (WINAPIV*)(struct CEntity*, float**, uint32_t, CEntityOnceDrawEntity18_ptr);
        using CEntityPrepareAnimation19_ptr = void (WINAPIV*)(struct CEntity*);
        using CEntityPrepareAnimation19_clbk = void (WINAPIV*)(struct CEntity*, CEntityPrepareAnimation19_ptr);
        using CEntityReleaseEntity20_ptr = void (WINAPIV*)(struct CEntity*);
        using CEntityReleaseEntity20_clbk = void (WINAPIV*)(struct CEntity*, CEntityReleaseEntity20_ptr);
        using CEntityReleaseTexMem21_ptr = void (WINAPIV*)(struct CEntity*);
        using CEntityReleaseTexMem21_clbk = void (WINAPIV*)(struct CEntity*, CEntityReleaseTexMem21_ptr);
        using CEntityRestoreTexMem22_ptr = void (WINAPIV*)(struct CEntity*);
        using CEntityRestoreTexMem22_clbk = void (WINAPIV*)(struct CEntity*, CEntityRestoreTexMem22_ptr);
        using CEntitySetMapColor23_ptr = void (WINAPIV*)(struct CEntity*, uint32_t);
        using CEntitySetMapColor23_clbk = void (WINAPIV*)(struct CEntity*, uint32_t, CEntitySetMapColor23_ptr);
        using CEntitySetMaterialAndLight24_ptr = void (WINAPIV*)(struct CEntity*, uint32_t);
        using CEntitySetMaterialAndLight24_clbk = void (WINAPIV*)(struct CEntity*, uint32_t, CEntitySetMaterialAndLight24_ptr);
        using CEntitySetVertexShaderID25_ptr = void (WINAPIV*)(struct CEntity*, struct _ENTITY_LIST*, float**, uint32_t);
        using CEntitySetVertexShaderID25_clbk = void (WINAPIV*)(struct CEntity*, struct _ENTITY_LIST*, float**, uint32_t, CEntitySetVertexShaderID25_ptr);
        
        using CEntitydtor_CEntity27_ptr = int64_t (WINAPIV*)(struct CEntity*);
        using CEntitydtor_CEntity27_clbk = int64_t (WINAPIV*)(struct CEntity*, CEntitydtor_CEntity27_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
