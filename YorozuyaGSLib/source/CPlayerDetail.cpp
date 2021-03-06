#include <CPlayerDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CPlayerAddDalant2_ptr CPlayerAddDalant2_next(nullptr);
        Info::CPlayerAddDalant2_clbk CPlayerAddDalant2_user(nullptr);
        
        Info::CPlayerAddGold4_ptr CPlayerAddGold4_next(nullptr);
        Info::CPlayerAddGold4_clbk CPlayerAddGold4_user(nullptr);
        
        Info::CPlayerAlterDalant6_ptr CPlayerAlterDalant6_next(nullptr);
        Info::CPlayerAlterDalant6_clbk CPlayerAlterDalant6_user(nullptr);
        
        Info::CPlayerAlterExp8_ptr CPlayerAlterExp8_next(nullptr);
        Info::CPlayerAlterExp8_clbk CPlayerAlterExp8_user(nullptr);
        
        Info::CPlayerAlterExp_Animus10_ptr CPlayerAlterExp_Animus10_next(nullptr);
        Info::CPlayerAlterExp_Animus10_clbk CPlayerAlterExp_Animus10_user(nullptr);
        
        Info::CPlayerAlterExp_Potion12_ptr CPlayerAlterExp_Potion12_next(nullptr);
        Info::CPlayerAlterExp_Potion12_clbk CPlayerAlterExp_Potion12_user(nullptr);
        
        Info::CPlayerAlterFP_Animus14_ptr CPlayerAlterFP_Animus14_next(nullptr);
        Info::CPlayerAlterFP_Animus14_clbk CPlayerAlterFP_Animus14_user(nullptr);
        
        Info::CPlayerAlterGold16_ptr CPlayerAlterGold16_next(nullptr);
        Info::CPlayerAlterGold16_clbk CPlayerAlterGold16_user(nullptr);
        
        Info::CPlayerAlterHP_Animus18_ptr CPlayerAlterHP_Animus18_next(nullptr);
        Info::CPlayerAlterHP_Animus18_clbk CPlayerAlterHP_Animus18_user(nullptr);
        
        Info::CPlayerAlterMaxLevel20_ptr CPlayerAlterMaxLevel20_next(nullptr);
        Info::CPlayerAlterMaxLevel20_clbk CPlayerAlterMaxLevel20_user(nullptr);
        
        Info::CPlayerAlterMode_Animus22_ptr CPlayerAlterMode_Animus22_next(nullptr);
        Info::CPlayerAlterMode_Animus22_clbk CPlayerAlterMode_Animus22_user(nullptr);
        
        Info::CPlayerAlterPvPCashBag24_ptr CPlayerAlterPvPCashBag24_next(nullptr);
        Info::CPlayerAlterPvPCashBag24_clbk CPlayerAlterPvPCashBag24_user(nullptr);
        
        Info::CPlayerAlterPvPPoint26_ptr CPlayerAlterPvPPoint26_next(nullptr);
        Info::CPlayerAlterPvPPoint26_clbk CPlayerAlterPvPPoint26_user(nullptr);
        
        Info::CPlayerAlterPvpPointLeak28_ptr CPlayerAlterPvpPointLeak28_next(nullptr);
        Info::CPlayerAlterPvpPointLeak28_clbk CPlayerAlterPvpPointLeak28_user(nullptr);
        
        Info::CPlayerAlterSec30_ptr CPlayerAlterSec30_next(nullptr);
        Info::CPlayerAlterSec30_clbk CPlayerAlterSec30_user(nullptr);
        
        Info::CPlayerApplyEquipItemEffect32_ptr CPlayerApplyEquipItemEffect32_next(nullptr);
        Info::CPlayerApplyEquipItemEffect32_clbk CPlayerApplyEquipItemEffect32_user(nullptr);
        
        Info::CPlayerApplySetItemEffect34_ptr CPlayerApplySetItemEffect34_next(nullptr);
        Info::CPlayerApplySetItemEffect34_clbk CPlayerApplySetItemEffect34_user(nullptr);
        
        Info::CPlayerAttackableHeight36_ptr CPlayerAttackableHeight36_next(nullptr);
        Info::CPlayerAttackableHeight36_clbk CPlayerAttackableHeight36_user(nullptr);
        
        Info::CPlayerAutoCharge_Booster38_ptr CPlayerAutoCharge_Booster38_next(nullptr);
        Info::CPlayerAutoCharge_Booster38_clbk CPlayerAutoCharge_Booster38_user(nullptr);
        
        Info::CPlayerAutoRecover40_ptr CPlayerAutoRecover40_next(nullptr);
        Info::CPlayerAutoRecover40_clbk CPlayerAutoRecover40_user(nullptr);
        
        Info::CPlayerAutoRecover_Animus42_ptr CPlayerAutoRecover_Animus42_next(nullptr);
        Info::CPlayerAutoRecover_Animus42_clbk CPlayerAutoRecover_Animus42_user(nullptr);
        
        Info::CPlayerBilling_Logout44_ptr CPlayerBilling_Logout44_next(nullptr);
        Info::CPlayerBilling_Logout44_clbk CPlayerBilling_Logout44_user(nullptr);
        
        Info::CPlayerBreakCloakBooster46_ptr CPlayerBreakCloakBooster46_next(nullptr);
        Info::CPlayerBreakCloakBooster46_clbk CPlayerBreakCloakBooster46_user(nullptr);
        
        
        Info::CPlayerctor_CPlayer48_ptr CPlayerctor_CPlayer48_next(nullptr);
        Info::CPlayerctor_CPlayer48_clbk CPlayerctor_CPlayer48_user(nullptr);
        
        Info::CPlayerCalPvpCashPoint50_ptr CPlayerCalPvpCashPoint50_next(nullptr);
        Info::CPlayerCalPvpCashPoint50_clbk CPlayerCalPvpCashPoint50_user(nullptr);
        
        Info::CPlayerCalPvpTempCash52_ptr CPlayerCalPvpTempCash52_next(nullptr);
        Info::CPlayerCalPvpTempCash52_clbk CPlayerCalPvpTempCash52_user(nullptr);
        
        Info::CPlayerCalcAddPointByClass54_ptr CPlayerCalcAddPointByClass54_next(nullptr);
        Info::CPlayerCalcAddPointByClass54_clbk CPlayerCalcAddPointByClass54_user(nullptr);
        
        Info::CPlayerCalcCurFPRate56_ptr CPlayerCalcCurFPRate56_next(nullptr);
        Info::CPlayerCalcCurFPRate56_clbk CPlayerCalcCurFPRate56_user(nullptr);
        
        Info::CPlayerCalcCurHPRate58_ptr CPlayerCalcCurHPRate58_next(nullptr);
        Info::CPlayerCalcCurHPRate58_clbk CPlayerCalcCurHPRate58_user(nullptr);
        
        Info::CPlayerCalcCurSPRate60_ptr CPlayerCalcCurSPRate60_next(nullptr);
        Info::CPlayerCalcCurSPRate60_clbk CPlayerCalcCurSPRate60_user(nullptr);
        
        Info::CPlayerCalcDPRate62_ptr CPlayerCalcDPRate62_next(nullptr);
        Info::CPlayerCalcDPRate62_clbk CPlayerCalcDPRate62_user(nullptr);
        
        Info::CPlayerCalcDefTol64_ptr CPlayerCalcDefTol64_next(nullptr);
        Info::CPlayerCalcDefTol64_clbk CPlayerCalcDefTol64_user(nullptr);
        
        Info::CPlayerCalcEquipAttackDelay66_ptr CPlayerCalcEquipAttackDelay66_next(nullptr);
        Info::CPlayerCalcEquipAttackDelay66_clbk CPlayerCalcEquipAttackDelay66_user(nullptr);
        
        Info::CPlayerCalcEquipMaxDP68_ptr CPlayerCalcEquipMaxDP68_next(nullptr);
        Info::CPlayerCalcEquipMaxDP68_clbk CPlayerCalcEquipMaxDP68_user(nullptr);
        
        Info::CPlayerCalcEquipSpeed70_ptr CPlayerCalcEquipSpeed70_next(nullptr);
        Info::CPlayerCalcEquipSpeed70_clbk CPlayerCalcEquipSpeed70_user(nullptr);
        
        Info::CPlayerCalcExp72_ptr CPlayerCalcExp72_next(nullptr);
        Info::CPlayerCalcExp72_clbk CPlayerCalcExp72_user(nullptr);
        
        Info::CPlayerCalcPvP74_ptr CPlayerCalcPvP74_next(nullptr);
        Info::CPlayerCalcPvP74_clbk CPlayerCalcPvP74_user(nullptr);
        
        Info::CPlayerCheckAlterMaxPoint76_ptr CPlayerCheckAlterMaxPoint76_next(nullptr);
        Info::CPlayerCheckAlterMaxPoint76_clbk CPlayerCheckAlterMaxPoint76_user(nullptr);
        
        Info::CPlayerCheckBattleMode78_ptr CPlayerCheckBattleMode78_next(nullptr);
        Info::CPlayerCheckBattleMode78_clbk CPlayerCheckBattleMode78_user(nullptr);
        
        Info::CPlayerCheckGroupMapPoint80_ptr CPlayerCheckGroupMapPoint80_next(nullptr);
        Info::CPlayerCheckGroupMapPoint80_clbk CPlayerCheckGroupMapPoint80_user(nullptr);
        
        Info::CPlayerCheckGroupTargeting82_ptr CPlayerCheckGroupTargeting82_next(nullptr);
        Info::CPlayerCheckGroupTargeting82_clbk CPlayerCheckGroupTargeting82_user(nullptr);
        
        Info::CPlayerCheckMentalTakeAndUpdateLastMetalTicket84_ptr CPlayerCheckMentalTakeAndUpdateLastMetalTicket84_next(nullptr);
        Info::CPlayerCheckMentalTakeAndUpdateLastMetalTicket84_clbk CPlayerCheckMentalTakeAndUpdateLastMetalTicket84_user(nullptr);
        
        Info::CPlayerCheckNameChange86_ptr CPlayerCheckNameChange86_next(nullptr);
        Info::CPlayerCheckNameChange86_clbk CPlayerCheckNameChange86_user(nullptr);
        
        Info::CPlayerCheckPosInTown88_ptr CPlayerCheckPosInTown88_next(nullptr);
        Info::CPlayerCheckPosInTown88_clbk CPlayerCheckPosInTown88_user(nullptr);
        
        Info::CPlayerCheckPos_Region90_ptr CPlayerCheckPos_Region90_next(nullptr);
        Info::CPlayerCheckPos_Region90_clbk CPlayerCheckPos_Region90_user(nullptr);
        
        Info::CPlayerCheckUnitCutTime92_ptr CPlayerCheckUnitCutTime92_next(nullptr);
        Info::CPlayerCheckUnitCutTime92_clbk CPlayerCheckUnitCutTime92_user(nullptr);
        
        Info::CPlayerCheet_BufEffectEnd94_ptr CPlayerCheet_BufEffectEnd94_next(nullptr);
        Info::CPlayerCheet_BufEffectEnd94_clbk CPlayerCheet_BufEffectEnd94_user(nullptr);
        
        Info::CPlayerClearGravityStone96_ptr CPlayerClearGravityStone96_next(nullptr);
        Info::CPlayerClearGravityStone96_clbk CPlayerClearGravityStone96_user(nullptr);
        
        Info::CPlayerCorpse98_ptr CPlayerCorpse98_next(nullptr);
        Info::CPlayerCorpse98_clbk CPlayerCorpse98_user(nullptr);
        
        Info::CPlayerCreate100_ptr CPlayerCreate100_next(nullptr);
        Info::CPlayerCreate100_clbk CPlayerCreate100_user(nullptr);
        
        Info::CPlayerCreateComplete102_ptr CPlayerCreateComplete102_next(nullptr);
        Info::CPlayerCreateComplete102_clbk CPlayerCreateComplete102_user(nullptr);
        
        Info::CPlayerDTradeInit104_ptr CPlayerDTradeInit104_next(nullptr);
        Info::CPlayerDTradeInit104_clbk CPlayerDTradeInit104_user(nullptr);
        
        Info::CPlayerDecHalfSFContDam106_ptr CPlayerDecHalfSFContDam106_next(nullptr);
        Info::CPlayerDecHalfSFContDam106_clbk CPlayerDecHalfSFContDam106_user(nullptr);
        
        Info::CPlayerDelPostData108_ptr CPlayerDelPostData108_next(nullptr);
        Info::CPlayerDelPostData108_clbk CPlayerDelPostData108_user(nullptr);
        
        Info::CPlayerDeleteCouponItem110_ptr CPlayerDeleteCouponItem110_next(nullptr);
        Info::CPlayerDeleteCouponItem110_clbk CPlayerDeleteCouponItem110_user(nullptr);
        
        Info::CPlayerDeleteUseConsumeItem112_ptr CPlayerDeleteUseConsumeItem112_next(nullptr);
        Info::CPlayerDeleteUseConsumeItem112_clbk CPlayerDeleteUseConsumeItem112_user(nullptr);
        
        Info::CPlayerEmb_AddStorage114_ptr CPlayerEmb_AddStorage114_next(nullptr);
        Info::CPlayerEmb_AddStorage114_clbk CPlayerEmb_AddStorage114_user(nullptr);
        
        Info::CPlayerEmb_AlterDurPoint116_ptr CPlayerEmb_AlterDurPoint116_next(nullptr);
        Info::CPlayerEmb_AlterDurPoint116_clbk CPlayerEmb_AlterDurPoint116_user(nullptr);
        
        Info::CPlayerEmb_AlterStat118_ptr CPlayerEmb_AlterStat118_next(nullptr);
        Info::CPlayerEmb_AlterStat118_clbk CPlayerEmb_AlterStat118_user(nullptr);
        
        Info::CPlayerEmb_AlterStat_F120_ptr CPlayerEmb_AlterStat_F120_next(nullptr);
        Info::CPlayerEmb_AlterStat_F120_clbk CPlayerEmb_AlterStat_F120_user(nullptr);
        
        Info::CPlayerEmb_CheckActForQuest122_ptr CPlayerEmb_CheckActForQuest122_next(nullptr);
        Info::CPlayerEmb_CheckActForQuest122_clbk CPlayerEmb_CheckActForQuest122_user(nullptr);
        
        Info::CPlayerEmb_CheckActForQuestParty124_ptr CPlayerEmb_CheckActForQuestParty124_next(nullptr);
        Info::CPlayerEmb_CheckActForQuestParty124_clbk CPlayerEmb_CheckActForQuestParty124_user(nullptr);
        
        Info::CPlayerEmb_CompleteQuest126_ptr CPlayerEmb_CompleteQuest126_next(nullptr);
        Info::CPlayerEmb_CompleteQuest126_clbk CPlayerEmb_CompleteQuest126_user(nullptr);
        
        Info::CPlayerEmb_CreateNPCQuest128_ptr CPlayerEmb_CreateNPCQuest128_next(nullptr);
        Info::CPlayerEmb_CreateNPCQuest128_clbk CPlayerEmb_CreateNPCQuest128_user(nullptr);
        
        Info::CPlayerEmb_CreateQuestEvent130_ptr CPlayerEmb_CreateQuestEvent130_next(nullptr);
        Info::CPlayerEmb_CreateQuestEvent130_clbk CPlayerEmb_CreateQuestEvent130_user(nullptr);
        
        Info::CPlayerEmb_DelStorage132_ptr CPlayerEmb_DelStorage132_next(nullptr);
        Info::CPlayerEmb_DelStorage132_clbk CPlayerEmb_DelStorage132_user(nullptr);
        
        Info::CPlayerEmb_EquipLink134_ptr CPlayerEmb_EquipLink134_next(nullptr);
        Info::CPlayerEmb_EquipLink134_clbk CPlayerEmb_EquipLink134_user(nullptr);
        
        Info::CPlayerEmb_ItemUpgrade136_ptr CPlayerEmb_ItemUpgrade136_next(nullptr);
        Info::CPlayerEmb_ItemUpgrade136_clbk CPlayerEmb_ItemUpgrade136_user(nullptr);
        
        Info::CPlayerEmb_RidindUnit138_ptr CPlayerEmb_RidindUnit138_next(nullptr);
        Info::CPlayerEmb_RidindUnit138_clbk CPlayerEmb_RidindUnit138_user(nullptr);
        
        Info::CPlayerEmb_StartQuest140_ptr CPlayerEmb_StartQuest140_next(nullptr);
        Info::CPlayerEmb_StartQuest140_clbk CPlayerEmb_StartQuest140_user(nullptr);
        
        Info::CPlayerEmb_UpdateStat142_ptr CPlayerEmb_UpdateStat142_next(nullptr);
        Info::CPlayerEmb_UpdateStat142_clbk CPlayerEmb_UpdateStat142_user(nullptr);
        
        Info::CPlayerExitUpdateDataToWorld144_ptr CPlayerExitUpdateDataToWorld144_next(nullptr);
        Info::CPlayerExitUpdateDataToWorld144_clbk CPlayerExitUpdateDataToWorld144_user(nullptr);
        
        Info::CPlayerExtractStringToTime146_ptr CPlayerExtractStringToTime146_next(nullptr);
        Info::CPlayerExtractStringToTime146_clbk CPlayerExtractStringToTime146_user(nullptr);
        
        Info::CPlayerFindFarChatPlayerWithTemp148_ptr CPlayerFindFarChatPlayerWithTemp148_next(nullptr);
        Info::CPlayerFindFarChatPlayerWithTemp148_clbk CPlayerFindFarChatPlayerWithTemp148_user(nullptr);
        
        Info::CPlayerFixTargetWhile150_ptr CPlayerFixTargetWhile150_next(nullptr);
        Info::CPlayerFixTargetWhile150_clbk CPlayerFixTargetWhile150_user(nullptr);
        
        Info::CPlayerForcePullUnit152_ptr CPlayerForcePullUnit152_next(nullptr);
        Info::CPlayerForcePullUnit152_clbk CPlayerForcePullUnit152_user(nullptr);
        
        Info::CPlayerGetAddSpeed154_ptr CPlayerGetAddSpeed154_next(nullptr);
        Info::CPlayerGetAddSpeed154_clbk CPlayerGetAddSpeed154_user(nullptr);
        
        Info::CPlayerGetAfterEffect156_ptr CPlayerGetAfterEffect156_next(nullptr);
        Info::CPlayerGetAfterEffect156_clbk CPlayerGetAfterEffect156_user(nullptr);
        
        Info::CPlayerGetAttackDP158_ptr CPlayerGetAttackDP158_next(nullptr);
        Info::CPlayerGetAttackDP158_clbk CPlayerGetAttackDP158_user(nullptr);
        
        Info::CPlayerGetAttackLevel160_ptr CPlayerGetAttackLevel160_next(nullptr);
        Info::CPlayerGetAttackLevel160_clbk CPlayerGetAttackLevel160_user(nullptr);
        
        Info::CPlayerGetAttackRange162_ptr CPlayerGetAttackRange162_next(nullptr);
        Info::CPlayerGetAttackRange162_clbk CPlayerGetAttackRange162_user(nullptr);
        
        Info::CPlayerGetAvoidRate164_ptr CPlayerGetAvoidRate164_next(nullptr);
        Info::CPlayerGetAvoidRate164_clbk CPlayerGetAvoidRate164_user(nullptr);
        
        Info::CPlayerGetBillingType166_ptr CPlayerGetBillingType166_next(nullptr);
        Info::CPlayerGetBillingType166_clbk CPlayerGetBillingType166_user(nullptr);
        
        Info::CPlayerGetBindDummy168_ptr CPlayerGetBindDummy168_next(nullptr);
        Info::CPlayerGetBindDummy168_clbk CPlayerGetBindDummy168_user(nullptr);
        
        Info::CPlayerGetBindMap170_ptr CPlayerGetBindMap170_next(nullptr);
        Info::CPlayerGetBindMap170_clbk CPlayerGetBindMap170_user(nullptr);
        
        Info::CPlayerGetBindMapData172_ptr CPlayerGetBindMapData172_next(nullptr);
        Info::CPlayerGetBindMapData172_clbk CPlayerGetBindMapData172_user(nullptr);
        
        Info::CPlayerGetCashAmount174_ptr CPlayerGetCashAmount174_next(nullptr);
        Info::CPlayerGetCashAmount174_clbk CPlayerGetCashAmount174_user(nullptr);
        
        Info::CPlayerGetDP176_ptr CPlayerGetDP176_next(nullptr);
        Info::CPlayerGetDP176_clbk CPlayerGetDP176_user(nullptr);
        
        Info::CPlayerGetDamageDP178_ptr CPlayerGetDamageDP178_next(nullptr);
        Info::CPlayerGetDamageDP178_clbk CPlayerGetDamageDP178_user(nullptr);
        
        Info::CPlayerGetDamageLevel180_ptr CPlayerGetDamageLevel180_next(nullptr);
        Info::CPlayerGetDamageLevel180_clbk CPlayerGetDamageLevel180_user(nullptr);
        
        Info::CPlayerGetDefFC182_ptr CPlayerGetDefFC182_next(nullptr);
        Info::CPlayerGetDefFC182_clbk CPlayerGetDefFC182_user(nullptr);
        
        Info::CPlayerGetDefFacing184_ptr CPlayerGetDefFacing184_next(nullptr);
        Info::CPlayerGetDefFacing184_clbk CPlayerGetDefFacing184_user(nullptr);
        
        Info::CPlayerGetDefGap186_ptr CPlayerGetDefGap186_next(nullptr);
        Info::CPlayerGetDefGap186_clbk CPlayerGetDefGap186_user(nullptr);
        
        Info::CPlayerGetDefSkill188_ptr CPlayerGetDefSkill188_next(nullptr);
        Info::CPlayerGetDefSkill188_clbk CPlayerGetDefSkill188_user(nullptr);
        
        Info::CPlayerGetEffectEquipCode190_ptr CPlayerGetEffectEquipCode190_next(nullptr);
        Info::CPlayerGetEffectEquipCode190_clbk CPlayerGetEffectEquipCode190_user(nullptr);
        
        Info::CPlayerGetFP192_ptr CPlayerGetFP192_next(nullptr);
        Info::CPlayerGetFP192_clbk CPlayerGetFP192_user(nullptr);
        
        Info::CPlayerGetFireTol194_ptr CPlayerGetFireTol194_next(nullptr);
        Info::CPlayerGetFireTol194_clbk CPlayerGetFireTol194_user(nullptr);
        
        Info::CPlayerGetGauge196_ptr CPlayerGetGauge196_next(nullptr);
        Info::CPlayerGetGauge196_clbk CPlayerGetGauge196_user(nullptr);
        
        Info::CPlayerGetGenAttackProb198_ptr CPlayerGetGenAttackProb198_next(nullptr);
        Info::CPlayerGetGenAttackProb198_clbk CPlayerGetGenAttackProb198_user(nullptr);
        
        Info::CPlayerGetGroupTarget200_ptr CPlayerGetGroupTarget200_next(nullptr);
        Info::CPlayerGetGroupTarget200_clbk CPlayerGetGroupTarget200_user(nullptr);
        
        Info::CPlayerGetHP202_ptr CPlayerGetHP202_next(nullptr);
        Info::CPlayerGetHP202_clbk CPlayerGetHP202_user(nullptr);
        
        Info::CPlayerGetInitClassCost204_ptr CPlayerGetInitClassCost204_next(nullptr);
        Info::CPlayerGetInitClassCost204_clbk CPlayerGetInitClassCost204_user(nullptr);
        
        Info::CPlayerGetLevel206_ptr CPlayerGetLevel206_next(nullptr);
        Info::CPlayerGetLevel206_clbk CPlayerGetLevel206_user(nullptr);
        
        Info::CPlayerGetMasteryCumAfterAttack208_ptr CPlayerGetMasteryCumAfterAttack208_next(nullptr);
        Info::CPlayerGetMasteryCumAfterAttack208_clbk CPlayerGetMasteryCumAfterAttack208_user(nullptr);
        
        Info::CPlayerGetMaxDP210_ptr CPlayerGetMaxDP210_next(nullptr);
        Info::CPlayerGetMaxDP210_clbk CPlayerGetMaxDP210_user(nullptr);
        
        Info::CPlayerGetMaxFP212_ptr CPlayerGetMaxFP212_next(nullptr);
        Info::CPlayerGetMaxFP212_clbk CPlayerGetMaxFP212_user(nullptr);
        
        Info::CPlayerGetMaxHP214_ptr CPlayerGetMaxHP214_next(nullptr);
        Info::CPlayerGetMaxHP214_clbk CPlayerGetMaxHP214_user(nullptr);
        
        Info::CPlayerGetMaxSP216_ptr CPlayerGetMaxSP216_next(nullptr);
        Info::CPlayerGetMaxSP216_clbk CPlayerGetMaxSP216_user(nullptr);
        
        Info::CPlayerGetMoney218_ptr CPlayerGetMoney218_next(nullptr);
        Info::CPlayerGetMoney218_clbk CPlayerGetMoney218_user(nullptr);
        
        Info::CPlayerGetMoveSpeed220_ptr CPlayerGetMoveSpeed220_next(nullptr);
        Info::CPlayerGetMoveSpeed220_clbk CPlayerGetMoveSpeed220_user(nullptr);
        
        Info::CPlayerGetObjName222_ptr CPlayerGetObjName222_next(nullptr);
        Info::CPlayerGetObjName222_clbk CPlayerGetObjName222_user(nullptr);
        
        Info::CPlayerGetObjRace224_ptr CPlayerGetObjRace224_next(nullptr);
        Info::CPlayerGetObjRace224_clbk CPlayerGetObjRace224_user(nullptr);
        
        Info::CPlayerGetPartyExpDistributionRate226_ptr CPlayerGetPartyExpDistributionRate226_next(nullptr);
        Info::CPlayerGetPartyExpDistributionRate226_clbk CPlayerGetPartyExpDistributionRate226_user(nullptr);
        
        Info::CPlayerGetPvpOrderView228_ptr CPlayerGetPvpOrderView228_next(nullptr);
        Info::CPlayerGetPvpOrderView228_clbk CPlayerGetPvpOrderView228_user(nullptr);
        
        Info::CPlayerGetPvpPointLeak230_ptr CPlayerGetPvpPointLeak230_next(nullptr);
        Info::CPlayerGetPvpPointLeak230_clbk CPlayerGetPvpPointLeak230_user(nullptr);
        
        Info::CPlayerGetPvpPointLimiter232_ptr CPlayerGetPvpPointLimiter232_next(nullptr);
        Info::CPlayerGetPvpPointLimiter232_clbk CPlayerGetPvpPointLimiter232_user(nullptr);
        
        Info::CPlayerGetRecallAnimus234_ptr CPlayerGetRecallAnimus234_next(nullptr);
        Info::CPlayerGetRecallAnimus234_clbk CPlayerGetRecallAnimus234_user(nullptr);
        
        Info::CPlayerGetRewardItems_DarkDungeon236_ptr CPlayerGetRewardItems_DarkDungeon236_next(nullptr);
        Info::CPlayerGetRewardItems_DarkDungeon236_clbk CPlayerGetRewardItems_DarkDungeon236_user(nullptr);
        
        Info::CPlayerGetSP238_ptr CPlayerGetSP238_next(nullptr);
        Info::CPlayerGetSP238_clbk CPlayerGetSP238_user(nullptr);
        
        Info::CPlayerGetSoilTol240_ptr CPlayerGetSoilTol240_next(nullptr);
        Info::CPlayerGetSoilTol240_clbk CPlayerGetSoilTol240_user(nullptr);
        
        Info::CPlayerGetStateFlag242_ptr CPlayerGetStateFlag242_next(nullptr);
        Info::CPlayerGetStateFlag242_clbk CPlayerGetStateFlag242_user(nullptr);
        
        Info::CPlayerGetTargetObj244_ptr CPlayerGetTargetObj244_next(nullptr);
        Info::CPlayerGetTargetObj244_clbk CPlayerGetTargetObj244_user(nullptr);
        
        Info::CPlayerGetUseConsumeItem246_ptr CPlayerGetUseConsumeItem246_next(nullptr);
        Info::CPlayerGetUseConsumeItem246_clbk CPlayerGetUseConsumeItem246_user(nullptr);
        
        Info::CPlayerGetVisualVer248_ptr CPlayerGetVisualVer248_next(nullptr);
        Info::CPlayerGetVisualVer248_clbk CPlayerGetVisualVer248_user(nullptr);
        
        Info::CPlayerGetWaterTol250_ptr CPlayerGetWaterTol250_next(nullptr);
        Info::CPlayerGetWaterTol250_clbk CPlayerGetWaterTol250_user(nullptr);
        
        Info::CPlayerGetWeaponAdjust252_ptr CPlayerGetWeaponAdjust252_next(nullptr);
        Info::CPlayerGetWeaponAdjust252_clbk CPlayerGetWeaponAdjust252_user(nullptr);
        
        Info::CPlayerGetWeaponClass254_ptr CPlayerGetWeaponClass254_next(nullptr);
        Info::CPlayerGetWeaponClass254_clbk CPlayerGetWeaponClass254_user(nullptr);
        
        Info::CPlayerGetWeaponRange256_ptr CPlayerGetWeaponRange256_next(nullptr);
        Info::CPlayerGetWeaponRange256_clbk CPlayerGetWeaponRange256_user(nullptr);
        
        Info::CPlayerGetWidth258_ptr CPlayerGetWidth258_next(nullptr);
        Info::CPlayerGetWidth258_clbk CPlayerGetWidth258_user(nullptr);
        
        Info::CPlayerGetWindTol260_ptr CPlayerGetWindTol260_next(nullptr);
        Info::CPlayerGetWindTol260_clbk CPlayerGetWindTol260_user(nullptr);
        
        Info::CPlayerGuild_Buy_Emblem_Complete262_ptr CPlayerGuild_Buy_Emblem_Complete262_next(nullptr);
        Info::CPlayerGuild_Buy_Emblem_Complete262_clbk CPlayerGuild_Buy_Emblem_Complete262_user(nullptr);
        
        Info::CPlayerGuild_Disjoint_Complete264_ptr CPlayerGuild_Disjoint_Complete264_next(nullptr);
        Info::CPlayerGuild_Disjoint_Complete264_clbk CPlayerGuild_Disjoint_Complete264_user(nullptr);
        
        Info::CPlayerGuild_Force_Leave_Complete266_ptr CPlayerGuild_Force_Leave_Complete266_next(nullptr);
        Info::CPlayerGuild_Force_Leave_Complete266_clbk CPlayerGuild_Force_Leave_Complete266_user(nullptr);
        
        Info::CPlayerGuild_Insert_Complete268_ptr CPlayerGuild_Insert_Complete268_next(nullptr);
        Info::CPlayerGuild_Insert_Complete268_clbk CPlayerGuild_Insert_Complete268_user(nullptr);
        
        Info::CPlayerGuild_Join_Accept_Complete270_ptr CPlayerGuild_Join_Accept_Complete270_next(nullptr);
        Info::CPlayerGuild_Join_Accept_Complete270_clbk CPlayerGuild_Join_Accept_Complete270_user(nullptr);
        
        Info::CPlayerGuild_Pop_Money_Complete272_ptr CPlayerGuild_Pop_Money_Complete272_next(nullptr);
        Info::CPlayerGuild_Pop_Money_Complete272_clbk CPlayerGuild_Pop_Money_Complete272_user(nullptr);
        
        Info::CPlayerGuild_Push_Money_Complete274_ptr CPlayerGuild_Push_Money_Complete274_next(nullptr);
        Info::CPlayerGuild_Push_Money_Complete274_clbk CPlayerGuild_Push_Money_Complete274_user(nullptr);
        
        Info::CPlayerGuild_Self_Leave_Complete276_ptr CPlayerGuild_Self_Leave_Complete276_next(nullptr);
        Info::CPlayerGuild_Self_Leave_Complete276_clbk CPlayerGuild_Self_Leave_Complete276_user(nullptr);
        
        Info::CPlayerGuild_Update_GuildMater_Complete278_ptr CPlayerGuild_Update_GuildMater_Complete278_next(nullptr);
        Info::CPlayerGuild_Update_GuildMater_Complete278_clbk CPlayerGuild_Update_GuildMater_Complete278_user(nullptr);
        
        Info::CPlayerHSKQuestEnd_Att280_ptr CPlayerHSKQuestEnd_Att280_next(nullptr);
        Info::CPlayerHSKQuestEnd_Att280_clbk CPlayerHSKQuestEnd_Att280_user(nullptr);
        
        Info::CPlayerHideNameEffect282_ptr CPlayerHideNameEffect282_next(nullptr);
        Info::CPlayerHideNameEffect282_clbk CPlayerHideNameEffect282_user(nullptr);
        
        Info::CPlayerIncCriEffKillPoint284_ptr CPlayerIncCriEffKillPoint284_next(nullptr);
        Info::CPlayerIncCriEffKillPoint284_clbk CPlayerIncCriEffKillPoint284_user(nullptr);
        
        Info::CPlayerIncCriEffPvPCashBag286_ptr CPlayerIncCriEffPvPCashBag286_next(nullptr);
        Info::CPlayerIncCriEffPvPCashBag286_clbk CPlayerIncCriEffPvPCashBag286_user(nullptr);
        
        Info::CPlayerIncPvPPoint288_ptr CPlayerIncPvPPoint288_next(nullptr);
        Info::CPlayerIncPvPPoint288_clbk CPlayerIncPvPPoint288_user(nullptr);
        
        Info::CPlayerInit290_ptr CPlayerInit290_next(nullptr);
        Info::CPlayerInit290_clbk CPlayerInit290_user(nullptr);
        
        Info::CPlayerIntoMap292_ptr CPlayerIntoMap292_next(nullptr);
        Info::CPlayerIntoMap292_clbk CPlayerIntoMap292_user(nullptr);
        
        Info::CPlayerIsActingSiegeMode294_ptr CPlayerIsActingSiegeMode294_next(nullptr);
        Info::CPlayerIsActingSiegeMode294_clbk CPlayerIsActingSiegeMode294_user(nullptr);
        
        Info::CPlayerIsApplyPcbangPrimium296_ptr CPlayerIsApplyPcbangPrimium296_next(nullptr);
        Info::CPlayerIsApplyPcbangPrimium296_clbk CPlayerIsApplyPcbangPrimium296_user(nullptr);
        
        Info::CPlayerIsBeAttackedAble298_ptr CPlayerIsBeAttackedAble298_next(nullptr);
        Info::CPlayerIsBeAttackedAble298_clbk CPlayerIsBeAttackedAble298_user(nullptr);
        
        Info::CPlayerIsBeDamagedAble300_ptr CPlayerIsBeDamagedAble300_next(nullptr);
        Info::CPlayerIsBeDamagedAble300_clbk CPlayerIsBeDamagedAble300_user(nullptr);
        
        Info::CPlayerIsBulletValidity302_ptr CPlayerIsBulletValidity302_next(nullptr);
        Info::CPlayerIsBulletValidity302_clbk CPlayerIsBulletValidity302_user(nullptr);
        
        Info::CPlayerIsChaosMode304_ptr CPlayerIsChaosMode304_next(nullptr);
        Info::CPlayerIsChaosMode304_clbk CPlayerIsChaosMode304_user(nullptr);
        
        Info::CPlayerIsEffBulletValidity306_ptr CPlayerIsEffBulletValidity306_next(nullptr);
        Info::CPlayerIsEffBulletValidity306_clbk CPlayerIsEffBulletValidity306_user(nullptr);
        
        Info::CPlayerIsEffectableEquip308_ptr CPlayerIsEffectableEquip308_next(nullptr);
        Info::CPlayerIsEffectableEquip308_clbk CPlayerIsEffectableEquip308_user(nullptr);
        
        Info::CPlayerIsEquipAbleGrade310_ptr CPlayerIsEquipAbleGrade310_next(nullptr);
        Info::CPlayerIsEquipAbleGrade310_clbk CPlayerIsEquipAbleGrade310_user(nullptr);
        
        Info::CPlayerIsHaveMentalTicket312_ptr CPlayerIsHaveMentalTicket312_next(nullptr);
        Info::CPlayerIsHaveMentalTicket312_clbk CPlayerIsHaveMentalTicket312_user(nullptr);
        
        Info::CPlayerIsInTown314_ptr CPlayerIsInTown314_next(nullptr);
        Info::CPlayerIsInTown314_clbk CPlayerIsInTown314_user(nullptr);
        
        Info::CPlayerIsLastAttBuff316_ptr CPlayerIsLastAttBuff316_next(nullptr);
        Info::CPlayerIsLastAttBuff316_clbk CPlayerIsLastAttBuff316_user(nullptr);
        
        Info::CPlayerIsMapLoading318_ptr CPlayerIsMapLoading318_next(nullptr);
        Info::CPlayerIsMapLoading318_clbk CPlayerIsMapLoading318_user(nullptr);
        
        Info::CPlayerIsMineMode320_ptr CPlayerIsMineMode320_next(nullptr);
        Info::CPlayerIsMineMode320_clbk CPlayerIsMineMode320_user(nullptr);
        
        Info::CPlayerIsMiningByMinigTicket322_ptr CPlayerIsMiningByMinigTicket322_next(nullptr);
        Info::CPlayerIsMiningByMinigTicket322_clbk CPlayerIsMiningByMinigTicket322_user(nullptr);
        
        Info::CPlayerIsOutExtraStopPos324_ptr CPlayerIsOutExtraStopPos324_next(nullptr);
        Info::CPlayerIsOutExtraStopPos324_clbk CPlayerIsOutExtraStopPos324_user(nullptr);
        
        Info::CPlayerIsOverOneDay326_ptr CPlayerIsOverOneDay326_next(nullptr);
        Info::CPlayerIsOverOneDay326_clbk CPlayerIsOverOneDay326_user(nullptr);
        
        Info::CPlayerIsPassExpLimitLvDiff328_ptr CPlayerIsPassExpLimitLvDiff328_next(nullptr);
        Info::CPlayerIsPassExpLimitLvDiff328_clbk CPlayerIsPassExpLimitLvDiff328_user(nullptr);
        
        Info::CPlayerIsPassMasteryLimitLvDiff330_ptr CPlayerIsPassMasteryLimitLvDiff330_next(nullptr);
        Info::CPlayerIsPassMasteryLimitLvDiff330_clbk CPlayerIsPassMasteryLimitLvDiff330_user(nullptr);
        
        Info::CPlayerIsPunished332_ptr CPlayerIsPunished332_next(nullptr);
        Info::CPlayerIsPunished332_clbk CPlayerIsPunished332_user(nullptr);
        
        Info::CPlayerIsRecallAnimus334_ptr CPlayerIsRecallAnimus334_next(nullptr);
        Info::CPlayerIsRecallAnimus334_clbk CPlayerIsRecallAnimus334_user(nullptr);
        
        Info::CPlayerIsRecvableContEffect336_ptr CPlayerIsRecvableContEffect336_next(nullptr);
        Info::CPlayerIsRecvableContEffect336_clbk CPlayerIsRecvableContEffect336_user(nullptr);
        
        Info::CPlayerIsReturnPostUpdate338_ptr CPlayerIsReturnPostUpdate338_next(nullptr);
        Info::CPlayerIsReturnPostUpdate338_clbk CPlayerIsReturnPostUpdate338_user(nullptr);
        
        Info::CPlayerIsRidingShip340_ptr CPlayerIsRidingShip340_next(nullptr);
        Info::CPlayerIsRidingShip340_clbk CPlayerIsRidingShip340_user(nullptr);
        
        Info::CPlayerIsRidingUnit342_ptr CPlayerIsRidingUnit342_next(nullptr);
        Info::CPlayerIsRidingUnit342_clbk CPlayerIsRidingUnit342_user(nullptr);
        
        Info::CPlayerIsSFActableByClass344_ptr CPlayerIsSFActableByClass344_next(nullptr);
        Info::CPlayerIsSFActableByClass344_clbk CPlayerIsSFActableByClass344_user(nullptr);
        
        Info::CPlayerIsSFUsableGauge346_ptr CPlayerIsSFUsableGauge346_next(nullptr);
        Info::CPlayerIsSFUsableGauge346_clbk CPlayerIsSFUsableGauge346_user(nullptr);
        
        Info::CPlayerIsSFUsableSFMastery348_ptr CPlayerIsSFUsableSFMastery348_next(nullptr);
        Info::CPlayerIsSFUsableSFMastery348_clbk CPlayerIsSFUsableSFMastery348_user(nullptr);
        
        Info::CPlayerIsSFUseableRace350_ptr CPlayerIsSFUseableRace350_next(nullptr);
        Info::CPlayerIsSFUseableRace350_clbk CPlayerIsSFUseableRace350_user(nullptr);
        
        Info::CPlayerIsSiegeMode352_ptr CPlayerIsSiegeMode352_next(nullptr);
        Info::CPlayerIsSiegeMode352_clbk CPlayerIsSiegeMode352_user(nullptr);
        
        Info::CPlayerIsTargetObj354_ptr CPlayerIsTargetObj354_next(nullptr);
        Info::CPlayerIsTargetObj354_clbk CPlayerIsTargetObj354_user(nullptr);
        
        Info::CPlayerIsUsableAccountType356_ptr CPlayerIsUsableAccountType356_next(nullptr);
        Info::CPlayerIsUsableAccountType356_clbk CPlayerIsUsableAccountType356_user(nullptr);
        
        Info::CPlayerIsUseCloakBooster358_ptr CPlayerIsUseCloakBooster358_next(nullptr);
        Info::CPlayerIsUseCloakBooster358_clbk CPlayerIsUseCloakBooster358_user(nullptr);
        
        Info::CPlayerIsUseReleaseRaceBuffPotion360_ptr CPlayerIsUseReleaseRaceBuffPotion360_next(nullptr);
        Info::CPlayerIsUseReleaseRaceBuffPotion360_clbk CPlayerIsUseReleaseRaceBuffPotion360_user(nullptr);
        
        Info::CPlayerIs_Battle_Mode362_ptr CPlayerIs_Battle_Mode362_next(nullptr);
        Info::CPlayerIs_Battle_Mode362_clbk CPlayerIs_Battle_Mode362_user(nullptr);
        
        Info::CPlayerLimLvNpcQuestDelete364_ptr CPlayerLimLvNpcQuestDelete364_next(nullptr);
        Info::CPlayerLimLvNpcQuestDelete364_clbk CPlayerLimLvNpcQuestDelete364_user(nullptr);
        
        Info::CPlayerLoad366_ptr CPlayerLoad366_next(nullptr);
        Info::CPlayerLoad366_clbk CPlayerLoad366_user(nullptr);
        
        Info::CPlayerLoop368_ptr CPlayerLoop368_next(nullptr);
        Info::CPlayerLoop368_clbk CPlayerLoop368_user(nullptr);
        
        Info::CPlayerNetClose370_ptr CPlayerNetClose370_next(nullptr);
        Info::CPlayerNetClose370_clbk CPlayerNetClose370_user(nullptr);
        
        Info::CPlayerNewViewCircleObject372_ptr CPlayerNewViewCircleObject372_next(nullptr);
        Info::CPlayerNewViewCircleObject372_clbk CPlayerNewViewCircleObject372_user(nullptr);
        
        Info::CPlayerOnLoop_Static374_ptr CPlayerOnLoop_Static374_next(nullptr);
        Info::CPlayerOnLoop_Static374_clbk CPlayerOnLoop_Static374_user(nullptr);
        
        Info::CPlayerOutOfMap376_ptr CPlayerOutOfMap376_next(nullptr);
        Info::CPlayerOutOfMap376_clbk CPlayerOutOfMap376_user(nullptr);
        
        Info::CPlayerOutOfSec378_ptr CPlayerOutOfSec378_next(nullptr);
        Info::CPlayerOutOfSec378_clbk CPlayerOutOfSec378_user(nullptr);
        
        Info::CPlayerPastWhisperInit380_ptr CPlayerPastWhisperInit380_next(nullptr);
        Info::CPlayerPastWhisperInit380_clbk CPlayerPastWhisperInit380_user(nullptr);
        
        Info::CPlayerPotion_Buf_Extend382_ptr CPlayerPotion_Buf_Extend382_next(nullptr);
        Info::CPlayerPotion_Buf_Extend382_clbk CPlayerPotion_Buf_Extend382_user(nullptr);
        
        Info::CPlayerPushDQSCheatPlyerVoteInfo384_ptr CPlayerPushDQSCheatPlyerVoteInfo384_next(nullptr);
        Info::CPlayerPushDQSCheatPlyerVoteInfo384_clbk CPlayerPushDQSCheatPlyerVoteInfo384_user(nullptr);
        
        Info::CPlayerPushDQSUpdatePlyerVoteInfo386_ptr CPlayerPushDQSUpdatePlyerVoteInfo386_next(nullptr);
        Info::CPlayerPushDQSUpdatePlyerVoteInfo386_clbk CPlayerPushDQSUpdatePlyerVoteInfo386_user(nullptr);
        
        Info::CPlayerPushDQSUpdateVoteAvilable388_ptr CPlayerPushDQSUpdateVoteAvilable388_next(nullptr);
        Info::CPlayerPushDQSUpdateVoteAvilable388_clbk CPlayerPushDQSUpdateVoteAvilable388_user(nullptr);
        
        Info::CPlayerReCalcMaxHFSP390_ptr CPlayerReCalcMaxHFSP390_next(nullptr);
        Info::CPlayerReCalcMaxHFSP390_clbk CPlayerReCalcMaxHFSP390_user(nullptr);
        
        Info::CPlayerRecallRandomPositionInRange392_ptr CPlayerRecallRandomPositionInRange392_next(nullptr);
        Info::CPlayerRecallRandomPositionInRange392_clbk CPlayerRecallRandomPositionInRange392_user(nullptr);
        
        Info::CPlayerRecvHSKQuest394_ptr CPlayerRecvHSKQuest394_next(nullptr);
        Info::CPlayerRecvHSKQuest394_clbk CPlayerRecvHSKQuest394_user(nullptr);
        
        Info::CPlayerRecvKillMessage396_ptr CPlayerRecvKillMessage396_next(nullptr);
        Info::CPlayerRecvKillMessage396_clbk CPlayerRecvKillMessage396_user(nullptr);
        
        Info::CPlayerReservationForceClose398_ptr CPlayerReservationForceClose398_next(nullptr);
        Info::CPlayerReservationForceClose398_clbk CPlayerReservationForceClose398_user(nullptr);
        
        Info::CPlayerResurrect400_ptr CPlayerResurrect400_next(nullptr);
        Info::CPlayerResurrect400_clbk CPlayerResurrect400_user(nullptr);
        
        Info::CPlayerReturn_AnimusAsk402_ptr CPlayerReturn_AnimusAsk402_next(nullptr);
        Info::CPlayerReturn_AnimusAsk402_clbk CPlayerReturn_AnimusAsk402_user(nullptr);
        
        Info::CPlayerRewardChangeClass404_ptr CPlayerRewardChangeClass404_next(nullptr);
        Info::CPlayerRewardChangeClass404_clbk CPlayerRewardChangeClass404_user(nullptr);
        
        Info::CPlayerRewardChangeClassMastery406_ptr CPlayerRewardChangeClassMastery406_next(nullptr);
        Info::CPlayerRewardChangeClassMastery406_clbk CPlayerRewardChangeClassMastery406_user(nullptr);
        
        Info::CPlayerRewardChangeClassRewardItem408_ptr CPlayerRewardChangeClassRewardItem408_next(nullptr);
        Info::CPlayerRewardChangeClassRewardItem408_clbk CPlayerRewardChangeClassRewardItem408_user(nullptr);
        
        Info::CPlayerRewardRaceWarPvpCash410_ptr CPlayerRewardRaceWarPvpCash410_next(nullptr);
        Info::CPlayerRewardRaceWarPvpCash410_clbk CPlayerRewardRaceWarPvpCash410_user(nullptr);
        
        Info::CPlayerReward_DarkDungeon412_ptr CPlayerReward_DarkDungeon412_next(nullptr);
        Info::CPlayerReward_DarkDungeon412_clbk CPlayerReward_DarkDungeon412_user(nullptr);
        
        Info::CPlayerRobbedHP414_ptr CPlayerRobbedHP414_next(nullptr);
        Info::CPlayerRobbedHP414_clbk CPlayerRobbedHP414_user(nullptr);
        
        Info::CPlayerSFContDelMessage416_ptr CPlayerSFContDelMessage416_next(nullptr);
        Info::CPlayerSFContDelMessage416_clbk CPlayerSFContDelMessage416_user(nullptr);
        
        Info::CPlayerSFContInsertMessage418_ptr CPlayerSFContInsertMessage418_next(nullptr);
        Info::CPlayerSFContInsertMessage418_clbk CPlayerSFContInsertMessage418_user(nullptr);
        
        Info::CPlayerSFContUpdateTimeMessage420_ptr CPlayerSFContUpdateTimeMessage420_next(nullptr);
        Info::CPlayerSFContUpdateTimeMessage420_clbk CPlayerSFContUpdateTimeMessage420_user(nullptr);
        
        Info::CPlayerSF_AllContDamageForceRemove_Once422_ptr CPlayerSF_AllContDamageForceRemove_Once422_next(nullptr);
        Info::CPlayerSF_AllContDamageForceRemove_Once422_clbk CPlayerSF_AllContDamageForceRemove_Once422_user(nullptr);
        
        Info::CPlayerSF_AllContDamageRemove_Once424_ptr CPlayerSF_AllContDamageRemove_Once424_next(nullptr);
        Info::CPlayerSF_AllContDamageRemove_Once424_clbk CPlayerSF_AllContDamageRemove_Once424_user(nullptr);
        
        Info::CPlayerSF_AllContHelpForceRemove_Once426_ptr CPlayerSF_AllContHelpForceRemove_Once426_next(nullptr);
        Info::CPlayerSF_AllContHelpForceRemove_Once426_clbk CPlayerSF_AllContHelpForceRemove_Once426_user(nullptr);
        
        Info::CPlayerSF_AllContHelpSkillRemove_Once428_ptr CPlayerSF_AllContHelpSkillRemove_Once428_next(nullptr);
        Info::CPlayerSF_AllContHelpSkillRemove_Once428_clbk CPlayerSF_AllContHelpSkillRemove_Once428_user(nullptr);
        
        Info::CPlayerSF_AttHPtoDstFP_Once430_ptr CPlayerSF_AttHPtoDstFP_Once430_next(nullptr);
        Info::CPlayerSF_AttHPtoDstFP_Once430_clbk CPlayerSF_AttHPtoDstFP_Once430_user(nullptr);
        
        Info::CPlayerSF_ContDamageTimeInc_Once432_ptr CPlayerSF_ContDamageTimeInc_Once432_next(nullptr);
        Info::CPlayerSF_ContDamageTimeInc_Once432_clbk CPlayerSF_ContDamageTimeInc_Once432_user(nullptr);
        
        Info::CPlayerSF_ContHelpTimeInc_Once434_ptr CPlayerSF_ContHelpTimeInc_Once434_next(nullptr);
        Info::CPlayerSF_ContHelpTimeInc_Once434_clbk CPlayerSF_ContHelpTimeInc_Once434_user(nullptr);
        
        Info::CPlayerSF_ConvertMonsterTarget436_ptr CPlayerSF_ConvertMonsterTarget436_next(nullptr);
        Info::CPlayerSF_ConvertMonsterTarget436_clbk CPlayerSF_ConvertMonsterTarget436_user(nullptr);
        
        Info::CPlayerSF_ConvertTargetDest438_ptr CPlayerSF_ConvertTargetDest438_next(nullptr);
        Info::CPlayerSF_ConvertTargetDest438_clbk CPlayerSF_ConvertTargetDest438_user(nullptr);
        
        Info::CPlayerSF_DamageAndStun440_ptr CPlayerSF_DamageAndStun440_next(nullptr);
        Info::CPlayerSF_DamageAndStun440_clbk CPlayerSF_DamageAndStun440_user(nullptr);
        
        Info::CPlayerSF_FPDec442_ptr CPlayerSF_FPDec442_next(nullptr);
        Info::CPlayerSF_FPDec442_clbk CPlayerSF_FPDec442_user(nullptr);
        
        Info::CPlayerSF_HFSInc_Once444_ptr CPlayerSF_HFSInc_Once444_next(nullptr);
        Info::CPlayerSF_HFSInc_Once444_clbk CPlayerSF_HFSInc_Once444_user(nullptr);
        
        Info::CPlayerSF_HPInc_Once446_ptr CPlayerSF_HPInc_Once446_next(nullptr);
        Info::CPlayerSF_HPInc_Once446_clbk CPlayerSF_HPInc_Once446_user(nullptr);
        
        Info::CPlayerSF_IncHPCircleParty448_ptr CPlayerSF_IncHPCircleParty448_next(nullptr);
        Info::CPlayerSF_IncHPCircleParty448_clbk CPlayerSF_IncHPCircleParty448_user(nullptr);
        
        Info::CPlayerSF_IncreaseDP450_ptr CPlayerSF_IncreaseDP450_next(nullptr);
        Info::CPlayerSF_IncreaseDP450_clbk CPlayerSF_IncreaseDP450_user(nullptr);
        
        Info::CPlayerSF_LateContDamageRemove_Once452_ptr CPlayerSF_LateContDamageRemove_Once452_next(nullptr);
        Info::CPlayerSF_LateContDamageRemove_Once452_clbk CPlayerSF_LateContDamageRemove_Once452_user(nullptr);
        
        Info::CPlayerSF_LateContHelpForceRemove_Once454_ptr CPlayerSF_LateContHelpForceRemove_Once454_next(nullptr);
        Info::CPlayerSF_LateContHelpForceRemove_Once454_clbk CPlayerSF_LateContHelpForceRemove_Once454_user(nullptr);
        
        Info::CPlayerSF_LateContHelpSkillRemove_Once456_ptr CPlayerSF_LateContHelpSkillRemove_Once456_next(nullptr);
        Info::CPlayerSF_LateContHelpSkillRemove_Once456_clbk CPlayerSF_LateContHelpSkillRemove_Once456_user(nullptr);
        
        Info::CPlayerSF_MakePortalReturnBindPositionPartyMember458_ptr CPlayerSF_MakePortalReturnBindPositionPartyMember458_next(nullptr);
        Info::CPlayerSF_MakePortalReturnBindPositionPartyMember458_clbk CPlayerSF_MakePortalReturnBindPositionPartyMember458_user(nullptr);
        
        Info::CPlayerSF_MakeZeroAnimusRecallTimeOnce460_ptr CPlayerSF_MakeZeroAnimusRecallTimeOnce460_next(nullptr);
        Info::CPlayerSF_MakeZeroAnimusRecallTimeOnce460_clbk CPlayerSF_MakeZeroAnimusRecallTimeOnce460_user(nullptr);
        
        Info::CPlayerSF_OthersContHelpSFRemove_Once462_ptr CPlayerSF_OthersContHelpSFRemove_Once462_next(nullptr);
        Info::CPlayerSF_OthersContHelpSFRemove_Once462_clbk CPlayerSF_OthersContHelpSFRemove_Once462_user(nullptr);
        
        Info::CPlayerSF_OverHealing_Once464_ptr CPlayerSF_OverHealing_Once464_next(nullptr);
        Info::CPlayerSF_OverHealing_Once464_clbk CPlayerSF_OverHealing_Once464_user(nullptr);
        
        Info::CPlayerSF_RecoverAllReturnStateAnimusHPFull466_ptr CPlayerSF_RecoverAllReturnStateAnimusHPFull466_next(nullptr);
        Info::CPlayerSF_RecoverAllReturnStateAnimusHPFull466_clbk CPlayerSF_RecoverAllReturnStateAnimusHPFull466_user(nullptr);
        
        Info::CPlayerSF_ReleaseMonsterTarget468_ptr CPlayerSF_ReleaseMonsterTarget468_next(nullptr);
        Info::CPlayerSF_ReleaseMonsterTarget468_clbk CPlayerSF_ReleaseMonsterTarget468_user(nullptr);
        
        Info::CPlayerSF_RemoveAllContHelp_Once470_ptr CPlayerSF_RemoveAllContHelp_Once470_next(nullptr);
        Info::CPlayerSF_RemoveAllContHelp_Once470_clbk CPlayerSF_RemoveAllContHelp_Once470_user(nullptr);
        
        Info::CPlayerSF_Resurrect_Once472_ptr CPlayerSF_Resurrect_Once472_next(nullptr);
        Info::CPlayerSF_Resurrect_Once472_clbk CPlayerSF_Resurrect_Once472_user(nullptr);
        
        Info::CPlayerSF_ReturnBindPosition474_ptr CPlayerSF_ReturnBindPosition474_next(nullptr);
        Info::CPlayerSF_ReturnBindPosition474_clbk CPlayerSF_ReturnBindPosition474_user(nullptr);
        
        Info::CPlayerSF_SPDec476_ptr CPlayerSF_SPDec476_next(nullptr);
        Info::CPlayerSF_SPDec476_clbk CPlayerSF_SPDec476_user(nullptr);
        
        Info::CPlayerSF_STInc_Once478_ptr CPlayerSF_STInc_Once478_next(nullptr);
        Info::CPlayerSF_STInc_Once478_clbk CPlayerSF_STInc_Once478_user(nullptr);
        
        Info::CPlayerSF_SelfDestruction480_ptr CPlayerSF_SelfDestruction480_next(nullptr);
        Info::CPlayerSF_SelfDestruction480_clbk CPlayerSF_SelfDestruction480_user(nullptr);
        
        Info::CPlayerSF_SkillContHelpTimeInc_Once482_ptr CPlayerSF_SkillContHelpTimeInc_Once482_next(nullptr);
        Info::CPlayerSF_SkillContHelpTimeInc_Once482_clbk CPlayerSF_SkillContHelpTimeInc_Once482_user(nullptr);
        
        Info::CPlayerSF_Stun484_ptr CPlayerSF_Stun484_next(nullptr);
        Info::CPlayerSF_Stun484_clbk CPlayerSF_Stun484_user(nullptr);
        
        Info::CPlayerSF_TeleportToDestination486_ptr CPlayerSF_TeleportToDestination486_next(nullptr);
        Info::CPlayerSF_TeleportToDestination486_clbk CPlayerSF_TeleportToDestination486_user(nullptr);
        
        Info::CPlayerSF_TransDestHP488_ptr CPlayerSF_TransDestHP488_next(nullptr);
        Info::CPlayerSF_TransDestHP488_clbk CPlayerSF_TransDestHP488_user(nullptr);
        
        Info::CPlayerSF_TransMonsterHP490_ptr CPlayerSF_TransMonsterHP490_next(nullptr);
        Info::CPlayerSF_TransMonsterHP490_clbk CPlayerSF_TransMonsterHP490_user(nullptr);
        
        Info::CPlayerSendData_ChatTrans492_ptr CPlayerSendData_ChatTrans492_next(nullptr);
        Info::CPlayerSendData_ChatTrans492_clbk CPlayerSendData_ChatTrans492_user(nullptr);
        
        Info::CPlayerSendData_PartyMemberEffect494_ptr CPlayerSendData_PartyMemberEffect494_next(nullptr);
        Info::CPlayerSendData_PartyMemberEffect494_clbk CPlayerSendData_PartyMemberEffect494_user(nullptr);
        
        Info::CPlayerSendData_PartyMemberFP496_ptr CPlayerSendData_PartyMemberFP496_next(nullptr);
        Info::CPlayerSendData_PartyMemberFP496_clbk CPlayerSendData_PartyMemberFP496_user(nullptr);
        
        Info::CPlayerSendData_PartyMemberHP498_ptr CPlayerSendData_PartyMemberHP498_next(nullptr);
        Info::CPlayerSendData_PartyMemberHP498_clbk CPlayerSendData_PartyMemberHP498_user(nullptr);
        
        Info::CPlayerSendData_PartyMemberInfo500_ptr CPlayerSendData_PartyMemberInfo500_next(nullptr);
        Info::CPlayerSendData_PartyMemberInfo500_clbk CPlayerSendData_PartyMemberInfo500_user(nullptr);
        
        Info::CPlayerSendData_PartyMemberInfoToMembers502_ptr CPlayerSendData_PartyMemberInfoToMembers502_next(nullptr);
        Info::CPlayerSendData_PartyMemberInfoToMembers502_clbk CPlayerSendData_PartyMemberInfoToMembers502_user(nullptr);
        
        Info::CPlayerSendData_PartyMemberLv504_ptr CPlayerSendData_PartyMemberLv504_next(nullptr);
        Info::CPlayerSendData_PartyMemberLv504_clbk CPlayerSendData_PartyMemberLv504_user(nullptr);
        
        Info::CPlayerSendData_PartyMemberMaxHFSP506_ptr CPlayerSendData_PartyMemberMaxHFSP506_next(nullptr);
        Info::CPlayerSendData_PartyMemberMaxHFSP506_clbk CPlayerSendData_PartyMemberMaxHFSP506_user(nullptr);
        
        Info::CPlayerSendData_PartyMemberPos508_ptr CPlayerSendData_PartyMemberPos508_next(nullptr);
        Info::CPlayerSendData_PartyMemberPos508_clbk CPlayerSendData_PartyMemberPos508_user(nullptr);
        
        Info::CPlayerSendData_PartyMemberSP510_ptr CPlayerSendData_PartyMemberSP510_next(nullptr);
        Info::CPlayerSendData_PartyMemberSP510_clbk CPlayerSendData_PartyMemberSP510_user(nullptr);
        
        Info::CPlayerSendMsg_AMPInvenDownloadResult512_ptr CPlayerSendMsg_AMPInvenDownloadResult512_next(nullptr);
        Info::CPlayerSendMsg_AMPInvenDownloadResult512_clbk CPlayerSendMsg_AMPInvenDownloadResult512_user(nullptr);
        
        Info::CPlayerSendMsg_AddBagResult514_ptr CPlayerSendMsg_AddBagResult514_next(nullptr);
        Info::CPlayerSendMsg_AddBagResult514_clbk CPlayerSendMsg_AddBagResult514_user(nullptr);
        
        Info::CPlayerSendMsg_AddEffect516_ptr CPlayerSendMsg_AddEffect516_next(nullptr);
        Info::CPlayerSendMsg_AddEffect516_clbk CPlayerSendMsg_AddEffect516_user(nullptr);
        
        Info::CPlayerSendMsg_AdjustAmountInform518_ptr CPlayerSendMsg_AdjustAmountInform518_next(nullptr);
        Info::CPlayerSendMsg_AdjustAmountInform518_clbk CPlayerSendMsg_AdjustAmountInform518_user(nullptr);
        
        Info::CPlayerSendMsg_AlterBooster520_ptr CPlayerSendMsg_AlterBooster520_next(nullptr);
        Info::CPlayerSendMsg_AlterBooster520_clbk CPlayerSendMsg_AlterBooster520_user(nullptr);
        
        Info::CPlayerSendMsg_AlterContEffectTime522_ptr CPlayerSendMsg_AlterContEffectTime522_next(nullptr);
        Info::CPlayerSendMsg_AlterContEffectTime522_clbk CPlayerSendMsg_AlterContEffectTime522_user(nullptr);
        
        Info::CPlayerSendMsg_AlterEquipSPInform524_ptr CPlayerSendMsg_AlterEquipSPInform524_next(nullptr);
        Info::CPlayerSendMsg_AlterEquipSPInform524_clbk CPlayerSendMsg_AlterEquipSPInform524_user(nullptr);
        
        Info::CPlayerSendMsg_AlterExpInform526_ptr CPlayerSendMsg_AlterExpInform526_next(nullptr);
        Info::CPlayerSendMsg_AlterExpInform526_clbk CPlayerSendMsg_AlterExpInform526_user(nullptr);
        
        Info::CPlayerSendMsg_AlterGradeInform528_ptr CPlayerSendMsg_AlterGradeInform528_next(nullptr);
        Info::CPlayerSendMsg_AlterGradeInform528_clbk CPlayerSendMsg_AlterGradeInform528_user(nullptr);
        
        Info::CPlayerSendMsg_AlterHPInform530_ptr CPlayerSendMsg_AlterHPInform530_next(nullptr);
        Info::CPlayerSendMsg_AlterHPInform530_clbk CPlayerSendMsg_AlterHPInform530_user(nullptr);
        
        Info::CPlayerSendMsg_AlterItemDurInform532_ptr CPlayerSendMsg_AlterItemDurInform532_next(nullptr);
        Info::CPlayerSendMsg_AlterItemDurInform532_clbk CPlayerSendMsg_AlterItemDurInform532_user(nullptr);
        
        Info::CPlayerSendMsg_AlterMaxDP534_ptr CPlayerSendMsg_AlterMaxDP534_next(nullptr);
        Info::CPlayerSendMsg_AlterMaxDP534_clbk CPlayerSendMsg_AlterMaxDP534_user(nullptr);
        
        Info::CPlayerSendMsg_AlterMoneyInform536_ptr CPlayerSendMsg_AlterMoneyInform536_next(nullptr);
        Info::CPlayerSendMsg_AlterMoneyInform536_clbk CPlayerSendMsg_AlterMoneyInform536_user(nullptr);
        
        Info::CPlayerSendMsg_AlterPvPCash538_ptr CPlayerSendMsg_AlterPvPCash538_next(nullptr);
        Info::CPlayerSendMsg_AlterPvPCash538_clbk CPlayerSendMsg_AlterPvPCash538_user(nullptr);
        
        Info::CPlayerSendMsg_AlterPvPPoint540_ptr CPlayerSendMsg_AlterPvPPoint540_next(nullptr);
        Info::CPlayerSendMsg_AlterPvPPoint540_clbk CPlayerSendMsg_AlterPvPPoint540_user(nullptr);
        
        Info::CPlayerSendMsg_AlterPvPRank542_ptr CPlayerSendMsg_AlterPvPRank542_next(nullptr);
        Info::CPlayerSendMsg_AlterPvPRank542_clbk CPlayerSendMsg_AlterPvPRank542_user(nullptr);
        
        Info::CPlayerSendMsg_AlterRegionInform544_ptr CPlayerSendMsg_AlterRegionInform544_next(nullptr);
        Info::CPlayerSendMsg_AlterRegionInform544_clbk CPlayerSendMsg_AlterRegionInform544_user(nullptr);
        
        Info::CPlayerSendMsg_AlterSPInform546_ptr CPlayerSendMsg_AlterSPInform546_next(nullptr);
        Info::CPlayerSendMsg_AlterSPInform546_clbk CPlayerSendMsg_AlterSPInform546_user(nullptr);
        
        Info::CPlayerSendMsg_AlterTol548_ptr CPlayerSendMsg_AlterTol548_next(nullptr);
        Info::CPlayerSendMsg_AlterTol548_clbk CPlayerSendMsg_AlterTol548_user(nullptr);
        
        Info::CPlayerSendMsg_AlterTowerHP550_ptr CPlayerSendMsg_AlterTowerHP550_next(nullptr);
        Info::CPlayerSendMsg_AlterTowerHP550_clbk CPlayerSendMsg_AlterTowerHP550_user(nullptr);
        
        Info::CPlayerSendMsg_AlterTownOrField552_ptr CPlayerSendMsg_AlterTownOrField552_next(nullptr);
        Info::CPlayerSendMsg_AlterTownOrField552_clbk CPlayerSendMsg_AlterTownOrField552_user(nullptr);
        
        Info::CPlayerSendMsg_AlterUnitBulletInform554_ptr CPlayerSendMsg_AlterUnitBulletInform554_next(nullptr);
        Info::CPlayerSendMsg_AlterUnitBulletInform554_clbk CPlayerSendMsg_AlterUnitBulletInform554_user(nullptr);
        
        Info::CPlayerSendMsg_AlterUnitHPInform556_ptr CPlayerSendMsg_AlterUnitHPInform556_next(nullptr);
        Info::CPlayerSendMsg_AlterUnitHPInform556_clbk CPlayerSendMsg_AlterUnitHPInform556_user(nullptr);
        
        Info::CPlayerSendMsg_AlterWeaponBulletInform558_ptr CPlayerSendMsg_AlterWeaponBulletInform558_next(nullptr);
        Info::CPlayerSendMsg_AlterWeaponBulletInform558_clbk CPlayerSendMsg_AlterWeaponBulletInform558_user(nullptr);
        
        Info::CPlayerSendMsg_Alter_Action_Point560_ptr CPlayerSendMsg_Alter_Action_Point560_next(nullptr);
        Info::CPlayerSendMsg_Alter_Action_Point560_clbk CPlayerSendMsg_Alter_Action_Point560_user(nullptr);
        
        Info::CPlayerSendMsg_AnimusExpInform562_ptr CPlayerSendMsg_AnimusExpInform562_next(nullptr);
        Info::CPlayerSendMsg_AnimusExpInform562_clbk CPlayerSendMsg_AnimusExpInform562_user(nullptr);
        
        Info::CPlayerSendMsg_AnimusFPInform564_ptr CPlayerSendMsg_AnimusFPInform564_next(nullptr);
        Info::CPlayerSendMsg_AnimusFPInform564_clbk CPlayerSendMsg_AnimusFPInform564_user(nullptr);
        
        Info::CPlayerSendMsg_AnimusHPInform566_ptr CPlayerSendMsg_AnimusHPInform566_next(nullptr);
        Info::CPlayerSendMsg_AnimusHPInform566_clbk CPlayerSendMsg_AnimusHPInform566_user(nullptr);
        
        Info::CPlayerSendMsg_AnimusInvenChange568_ptr CPlayerSendMsg_AnimusInvenChange568_next(nullptr);
        Info::CPlayerSendMsg_AnimusInvenChange568_clbk CPlayerSendMsg_AnimusInvenChange568_user(nullptr);
        
        Info::CPlayerSendMsg_AnimusModeInform570_ptr CPlayerSendMsg_AnimusModeInform570_next(nullptr);
        Info::CPlayerSendMsg_AnimusModeInform570_clbk CPlayerSendMsg_AnimusModeInform570_user(nullptr);
        
        Info::CPlayerSendMsg_AnimusRecallResult572_ptr CPlayerSendMsg_AnimusRecallResult572_next(nullptr);
        Info::CPlayerSendMsg_AnimusRecallResult572_clbk CPlayerSendMsg_AnimusRecallResult572_user(nullptr);
        
        Info::CPlayerSendMsg_AnimusRecallWaitTimeFree574_ptr CPlayerSendMsg_AnimusRecallWaitTimeFree574_next(nullptr);
        Info::CPlayerSendMsg_AnimusRecallWaitTimeFree574_clbk CPlayerSendMsg_AnimusRecallWaitTimeFree574_user(nullptr);
        
        Info::CPlayerSendMsg_AnimusReturnResult576_ptr CPlayerSendMsg_AnimusReturnResult576_next(nullptr);
        Info::CPlayerSendMsg_AnimusReturnResult576_clbk CPlayerSendMsg_AnimusReturnResult576_user(nullptr);
        
        Info::CPlayerSendMsg_AnimusTargetResult578_ptr CPlayerSendMsg_AnimusTargetResult578_next(nullptr);
        Info::CPlayerSendMsg_AnimusTargetResult578_clbk CPlayerSendMsg_AnimusTargetResult578_user(nullptr);
        
        Info::CPlayerSendMsg_ApexInform580_ptr CPlayerSendMsg_ApexInform580_next(nullptr);
        Info::CPlayerSendMsg_ApexInform580_clbk CPlayerSendMsg_ApexInform580_user(nullptr);
        
        Info::CPlayerSendMsg_AttackResult_Count582_ptr CPlayerSendMsg_AttackResult_Count582_next(nullptr);
        Info::CPlayerSendMsg_AttackResult_Count582_clbk CPlayerSendMsg_AttackResult_Count582_user(nullptr);
        
        Info::CPlayerSendMsg_AttackResult_Error584_ptr CPlayerSendMsg_AttackResult_Error584_next(nullptr);
        Info::CPlayerSendMsg_AttackResult_Error584_clbk CPlayerSendMsg_AttackResult_Error584_user(nullptr);
        
        Info::CPlayerSendMsg_AttackResult_Force586_ptr CPlayerSendMsg_AttackResult_Force586_next(nullptr);
        Info::CPlayerSendMsg_AttackResult_Force586_clbk CPlayerSendMsg_AttackResult_Force586_user(nullptr);
        
        Info::CPlayerSendMsg_AttackResult_Gen588_ptr CPlayerSendMsg_AttackResult_Gen588_next(nullptr);
        Info::CPlayerSendMsg_AttackResult_Gen588_clbk CPlayerSendMsg_AttackResult_Gen588_user(nullptr);
        
        Info::CPlayerSendMsg_AttackResult_SelfDestruction590_ptr CPlayerSendMsg_AttackResult_SelfDestruction590_next(nullptr);
        Info::CPlayerSendMsg_AttackResult_SelfDestruction590_clbk CPlayerSendMsg_AttackResult_SelfDestruction590_user(nullptr);
        
        Info::CPlayerSendMsg_AttackResult_Siege592_ptr CPlayerSendMsg_AttackResult_Siege592_next(nullptr);
        Info::CPlayerSendMsg_AttackResult_Siege592_clbk CPlayerSendMsg_AttackResult_Siege592_user(nullptr);
        
        Info::CPlayerSendMsg_AttackResult_Skill594_ptr CPlayerSendMsg_AttackResult_Skill594_next(nullptr);
        Info::CPlayerSendMsg_AttackResult_Skill594_clbk CPlayerSendMsg_AttackResult_Skill594_user(nullptr);
        
        Info::CPlayerSendMsg_AttackResult_Unit596_ptr CPlayerSendMsg_AttackResult_Unit596_next(nullptr);
        Info::CPlayerSendMsg_AttackResult_Unit596_clbk CPlayerSendMsg_AttackResult_Unit596_user(nullptr);
        
        Info::CPlayerSendMsg_AwayPartyInvitationQuestion598_ptr CPlayerSendMsg_AwayPartyInvitationQuestion598_next(nullptr);
        Info::CPlayerSendMsg_AwayPartyInvitationQuestion598_clbk CPlayerSendMsg_AwayPartyInvitationQuestion598_user(nullptr);
        
        Info::CPlayerSendMsg_AwayPartyRequestResult600_ptr CPlayerSendMsg_AwayPartyRequestResult600_next(nullptr);
        Info::CPlayerSendMsg_AwayPartyRequestResult600_clbk CPlayerSendMsg_AwayPartyRequestResult600_user(nullptr);
        
        Info::CPlayerSendMsg_BackTowerResult602_ptr CPlayerSendMsg_BackTowerResult602_next(nullptr);
        Info::CPlayerSendMsg_BackTowerResult602_clbk CPlayerSendMsg_BackTowerResult602_user(nullptr);
        
        Info::CPlayerSendMsg_BackTrapResult604_ptr CPlayerSendMsg_BackTrapResult604_next(nullptr);
        Info::CPlayerSendMsg_BackTrapResult604_clbk CPlayerSendMsg_BackTrapResult604_user(nullptr);
        
        Info::CPlayerSendMsg_BaseDownloadResult606_ptr CPlayerSendMsg_BaseDownloadResult606_next(nullptr);
        Info::CPlayerSendMsg_BaseDownloadResult606_clbk CPlayerSendMsg_BaseDownloadResult606_user(nullptr);
        
        Info::CPlayerSendMsg_BillingExipreInform608_ptr CPlayerSendMsg_BillingExipreInform608_next(nullptr);
        Info::CPlayerSendMsg_BillingExipreInform608_clbk CPlayerSendMsg_BillingExipreInform608_user(nullptr);
        
        Info::CPlayerSendMsg_BillingTypeChangeInform610_ptr CPlayerSendMsg_BillingTypeChangeInform610_next(nullptr);
        Info::CPlayerSendMsg_BillingTypeChangeInform610_clbk CPlayerSendMsg_BillingTypeChangeInform610_user(nullptr);
        
        Info::CPlayerSendMsg_BreakdownEquipItem612_ptr CPlayerSendMsg_BreakdownEquipItem612_next(nullptr);
        Info::CPlayerSendMsg_BreakdownEquipItem612_clbk CPlayerSendMsg_BreakdownEquipItem612_user(nullptr);
        
        Info::CPlayerSendMsg_BuddhaEventMsg614_ptr CPlayerSendMsg_BuddhaEventMsg614_next(nullptr);
        Info::CPlayerSendMsg_BuddhaEventMsg614_clbk CPlayerSendMsg_BuddhaEventMsg614_user(nullptr);
        
        Info::CPlayerSendMsg_BuddyAddAnswerResult616_ptr CPlayerSendMsg_BuddyAddAnswerResult616_next(nullptr);
        Info::CPlayerSendMsg_BuddyAddAnswerResult616_clbk CPlayerSendMsg_BuddyAddAnswerResult616_user(nullptr);
        
        Info::CPlayerSendMsg_BuddyAddAsk618_ptr CPlayerSendMsg_BuddyAddAsk618_next(nullptr);
        Info::CPlayerSendMsg_BuddyAddAsk618_clbk CPlayerSendMsg_BuddyAddAsk618_user(nullptr);
        
        Info::CPlayerSendMsg_BuddyAddFail620_ptr CPlayerSendMsg_BuddyAddFail620_next(nullptr);
        Info::CPlayerSendMsg_BuddyAddFail620_clbk CPlayerSendMsg_BuddyAddFail620_user(nullptr);
        
        Info::CPlayerSendMsg_BuddyDelResult622_ptr CPlayerSendMsg_BuddyDelResult622_next(nullptr);
        Info::CPlayerSendMsg_BuddyDelResult622_clbk CPlayerSendMsg_BuddyDelResult622_user(nullptr);
        
        Info::CPlayerSendMsg_BuddyLoginInform624_ptr CPlayerSendMsg_BuddyLoginInform624_next(nullptr);
        Info::CPlayerSendMsg_BuddyLoginInform624_clbk CPlayerSendMsg_BuddyLoginInform624_user(nullptr);
        
        Info::CPlayerSendMsg_BuddyLogoffInform626_ptr CPlayerSendMsg_BuddyLogoffInform626_next(nullptr);
        Info::CPlayerSendMsg_BuddyLogoffInform626_clbk CPlayerSendMsg_BuddyLogoffInform626_user(nullptr);
        
        Info::CPlayerSendMsg_BuddyNameReNewal628_ptr CPlayerSendMsg_BuddyNameReNewal628_next(nullptr);
        Info::CPlayerSendMsg_BuddyNameReNewal628_clbk CPlayerSendMsg_BuddyNameReNewal628_user(nullptr);
        
        Info::CPlayerSendMsg_BuddyPosInform630_ptr CPlayerSendMsg_BuddyPosInform630_next(nullptr);
        Info::CPlayerSendMsg_BuddyPosInform630_clbk CPlayerSendMsg_BuddyPosInform630_user(nullptr);
        
        Info::CPlayerSendMsg_BuyCashItemMode632_ptr CPlayerSendMsg_BuyCashItemMode632_next(nullptr);
        Info::CPlayerSendMsg_BuyCashItemMode632_clbk CPlayerSendMsg_BuyCashItemMode632_user(nullptr);
        
        Info::CPlayerSendMsg_BuyItemStoreResult634_ptr CPlayerSendMsg_BuyItemStoreResult634_next(nullptr);
        Info::CPlayerSendMsg_BuyItemStoreResult634_clbk CPlayerSendMsg_BuyItemStoreResult634_user(nullptr);
        
        Info::CPlayerSendMsg_CancelSuggestResult636_ptr CPlayerSendMsg_CancelSuggestResult636_next(nullptr);
        Info::CPlayerSendMsg_CancelSuggestResult636_clbk CPlayerSendMsg_CancelSuggestResult636_user(nullptr);
        
        Info::CPlayerSendMsg_CastVoteResult638_ptr CPlayerSendMsg_CastVoteResult638_next(nullptr);
        Info::CPlayerSendMsg_CastVoteResult638_clbk CPlayerSendMsg_CastVoteResult638_user(nullptr);
        
        Info::CPlayerSendMsg_ChangeClassCommand640_ptr CPlayerSendMsg_ChangeClassCommand640_next(nullptr);
        Info::CPlayerSendMsg_ChangeClassCommand640_clbk CPlayerSendMsg_ChangeClassCommand640_user(nullptr);
        
        Info::CPlayerSendMsg_CharacterRenameCashResult642_ptr CPlayerSendMsg_CharacterRenameCashResult642_next(nullptr);
        Info::CPlayerSendMsg_CharacterRenameCashResult642_clbk CPlayerSendMsg_CharacterRenameCashResult642_user(nullptr);
        
        Info::CPlayerSendMsg_ChatFarFailure644_ptr CPlayerSendMsg_ChatFarFailure644_next(nullptr);
        Info::CPlayerSendMsg_ChatFarFailure644_clbk CPlayerSendMsg_ChatFarFailure644_user(nullptr);
        
        Info::CPlayerSendMsg_Circle_DelEffect646_ptr CPlayerSendMsg_Circle_DelEffect646_next(nullptr);
        Info::CPlayerSendMsg_Circle_DelEffect646_clbk CPlayerSendMsg_Circle_DelEffect646_user(nullptr);
        
        Info::CPlayerSendMsg_ClassSkillResult648_ptr CPlayerSendMsg_ClassSkillResult648_next(nullptr);
        Info::CPlayerSendMsg_ClassSkillResult648_clbk CPlayerSendMsg_ClassSkillResult648_user(nullptr);
        
        Info::CPlayerSendMsg_ClearDarkHole650_ptr CPlayerSendMsg_ClearDarkHole650_next(nullptr);
        Info::CPlayerSendMsg_ClearDarkHole650_clbk CPlayerSendMsg_ClearDarkHole650_user(nullptr);
        
        Info::CPlayerSendMsg_CombineItemExAcceptResult652_ptr CPlayerSendMsg_CombineItemExAcceptResult652_next(nullptr);
        Info::CPlayerSendMsg_CombineItemExAcceptResult652_clbk CPlayerSendMsg_CombineItemExAcceptResult652_user(nullptr);
        
        Info::CPlayerSendMsg_CombineItemExResult654_ptr CPlayerSendMsg_CombineItemExResult654_next(nullptr);
        Info::CPlayerSendMsg_CombineItemExResult654_clbk CPlayerSendMsg_CombineItemExResult654_user(nullptr);
        
        Info::CPlayerSendMsg_CombineItemResult656_ptr CPlayerSendMsg_CombineItemResult656_next(nullptr);
        Info::CPlayerSendMsg_CombineItemResult656_clbk CPlayerSendMsg_CombineItemResult656_user(nullptr);
        
        Info::CPlayerSendMsg_CombineLendItemResult658_ptr CPlayerSendMsg_CombineLendItemResult658_next(nullptr);
        Info::CPlayerSendMsg_CombineLendItemResult658_clbk CPlayerSendMsg_CombineLendItemResult658_user(nullptr);
        
        Info::CPlayerSendMsg_CreateTowerResult660_ptr CPlayerSendMsg_CreateTowerResult660_next(nullptr);
        Info::CPlayerSendMsg_CreateTowerResult660_clbk CPlayerSendMsg_CreateTowerResult660_user(nullptr);
        
        Info::CPlayerSendMsg_CreateTrapResult662_ptr CPlayerSendMsg_CreateTrapResult662_next(nullptr);
        Info::CPlayerSendMsg_CreateTrapResult662_clbk CPlayerSendMsg_CreateTrapResult662_user(nullptr);
        
        Info::CPlayerSendMsg_CumDownloadResult664_ptr CPlayerSendMsg_CumDownloadResult664_next(nullptr);
        Info::CPlayerSendMsg_CumDownloadResult664_clbk CPlayerSendMsg_CumDownloadResult664_user(nullptr);
        
        Info::CPlayerSendMsg_CuttingCompleteResult666_ptr CPlayerSendMsg_CuttingCompleteResult666_next(nullptr);
        Info::CPlayerSendMsg_CuttingCompleteResult666_clbk CPlayerSendMsg_CuttingCompleteResult666_user(nullptr);
        
        Info::CPlayerSendMsg_DTradeAccomplishInform668_ptr CPlayerSendMsg_DTradeAccomplishInform668_next(nullptr);
        Info::CPlayerSendMsg_DTradeAccomplishInform668_clbk CPlayerSendMsg_DTradeAccomplishInform668_user(nullptr);
        
        Info::CPlayerSendMsg_DTradeAddInform670_ptr CPlayerSendMsg_DTradeAddInform670_next(nullptr);
        Info::CPlayerSendMsg_DTradeAddInform670_clbk CPlayerSendMsg_DTradeAddInform670_user(nullptr);
        
        Info::CPlayerSendMsg_DTradeAddResult672_ptr CPlayerSendMsg_DTradeAddResult672_next(nullptr);
        Info::CPlayerSendMsg_DTradeAddResult672_clbk CPlayerSendMsg_DTradeAddResult672_user(nullptr);
        
        Info::CPlayerSendMsg_DTradeAnswerResult674_ptr CPlayerSendMsg_DTradeAnswerResult674_next(nullptr);
        Info::CPlayerSendMsg_DTradeAnswerResult674_clbk CPlayerSendMsg_DTradeAnswerResult674_user(nullptr);
        
        Info::CPlayerSendMsg_DTradeAskInform676_ptr CPlayerSendMsg_DTradeAskInform676_next(nullptr);
        Info::CPlayerSendMsg_DTradeAskInform676_clbk CPlayerSendMsg_DTradeAskInform676_user(nullptr);
        
        Info::CPlayerSendMsg_DTradeAskResult678_ptr CPlayerSendMsg_DTradeAskResult678_next(nullptr);
        Info::CPlayerSendMsg_DTradeAskResult678_clbk CPlayerSendMsg_DTradeAskResult678_user(nullptr);
        
        Info::CPlayerSendMsg_DTradeBetInform680_ptr CPlayerSendMsg_DTradeBetInform680_next(nullptr);
        Info::CPlayerSendMsg_DTradeBetInform680_clbk CPlayerSendMsg_DTradeBetInform680_user(nullptr);
        
        Info::CPlayerSendMsg_DTradeBetResult682_ptr CPlayerSendMsg_DTradeBetResult682_next(nullptr);
        Info::CPlayerSendMsg_DTradeBetResult682_clbk CPlayerSendMsg_DTradeBetResult682_user(nullptr);
        
        Info::CPlayerSendMsg_DTradeCancleInform684_ptr CPlayerSendMsg_DTradeCancleInform684_next(nullptr);
        Info::CPlayerSendMsg_DTradeCancleInform684_clbk CPlayerSendMsg_DTradeCancleInform684_user(nullptr);
        
        Info::CPlayerSendMsg_DTradeCancleResult686_ptr CPlayerSendMsg_DTradeCancleResult686_next(nullptr);
        Info::CPlayerSendMsg_DTradeCancleResult686_clbk CPlayerSendMsg_DTradeCancleResult686_user(nullptr);
        
        Info::CPlayerSendMsg_DTradeCloseInform688_ptr CPlayerSendMsg_DTradeCloseInform688_next(nullptr);
        Info::CPlayerSendMsg_DTradeCloseInform688_clbk CPlayerSendMsg_DTradeCloseInform688_user(nullptr);
        
        Info::CPlayerSendMsg_DTradeDelInform690_ptr CPlayerSendMsg_DTradeDelInform690_next(nullptr);
        Info::CPlayerSendMsg_DTradeDelInform690_clbk CPlayerSendMsg_DTradeDelInform690_user(nullptr);
        
        Info::CPlayerSendMsg_DTradeDelResult692_ptr CPlayerSendMsg_DTradeDelResult692_next(nullptr);
        Info::CPlayerSendMsg_DTradeDelResult692_clbk CPlayerSendMsg_DTradeDelResult692_user(nullptr);
        
        Info::CPlayerSendMsg_DTradeLockInform694_ptr CPlayerSendMsg_DTradeLockInform694_next(nullptr);
        Info::CPlayerSendMsg_DTradeLockInform694_clbk CPlayerSendMsg_DTradeLockInform694_user(nullptr);
        
        Info::CPlayerSendMsg_DTradeLockResult696_ptr CPlayerSendMsg_DTradeLockResult696_next(nullptr);
        Info::CPlayerSendMsg_DTradeLockResult696_clbk CPlayerSendMsg_DTradeLockResult696_user(nullptr);
        
        Info::CPlayerSendMsg_DTradeOKInform698_ptr CPlayerSendMsg_DTradeOKInform698_next(nullptr);
        Info::CPlayerSendMsg_DTradeOKInform698_clbk CPlayerSendMsg_DTradeOKInform698_user(nullptr);
        
        Info::CPlayerSendMsg_DTradeOKResult700_ptr CPlayerSendMsg_DTradeOKResult700_next(nullptr);
        Info::CPlayerSendMsg_DTradeOKResult700_clbk CPlayerSendMsg_DTradeOKResult700_user(nullptr);
        
        Info::CPlayerSendMsg_DTradeStartInform702_ptr CPlayerSendMsg_DTradeStartInform702_next(nullptr);
        Info::CPlayerSendMsg_DTradeStartInform702_clbk CPlayerSendMsg_DTradeStartInform702_user(nullptr);
        
        Info::CPlayerSendMsg_DTradeUnitAddInform704_ptr CPlayerSendMsg_DTradeUnitAddInform704_next(nullptr);
        Info::CPlayerSendMsg_DTradeUnitAddInform704_clbk CPlayerSendMsg_DTradeUnitAddInform704_user(nullptr);
        
        Info::CPlayerSendMsg_DTradeUnitInfoInform706_ptr CPlayerSendMsg_DTradeUnitInfoInform706_next(nullptr);
        Info::CPlayerSendMsg_DTradeUnitInfoInform706_clbk CPlayerSendMsg_DTradeUnitInfoInform706_user(nullptr);
        
        Info::CPlayerSendMsg_DamageResult708_ptr CPlayerSendMsg_DamageResult708_next(nullptr);
        Info::CPlayerSendMsg_DamageResult708_clbk CPlayerSendMsg_DamageResult708_user(nullptr);
        
        Info::CPlayerSendMsg_DarkHoleOpenFail710_ptr CPlayerSendMsg_DarkHoleOpenFail710_next(nullptr);
        Info::CPlayerSendMsg_DarkHoleOpenFail710_clbk CPlayerSendMsg_DarkHoleOpenFail710_user(nullptr);
        
        Info::CPlayerSendMsg_DarkHoleOpenResult712_ptr CPlayerSendMsg_DarkHoleOpenResult712_next(nullptr);
        Info::CPlayerSendMsg_DarkHoleOpenResult712_clbk CPlayerSendMsg_DarkHoleOpenResult712_user(nullptr);
        
        Info::CPlayerSendMsg_DarkHoleRewardMessage714_ptr CPlayerSendMsg_DarkHoleRewardMessage714_next(nullptr);
        Info::CPlayerSendMsg_DarkHoleRewardMessage714_clbk CPlayerSendMsg_DarkHoleRewardMessage714_user(nullptr);
        
        Info::CPlayerSendMsg_DelEffect716_ptr CPlayerSendMsg_DelEffect716_next(nullptr);
        Info::CPlayerSendMsg_DelEffect716_clbk CPlayerSendMsg_DelEffect716_user(nullptr);
        
        Info::CPlayerSendMsg_DeleteStorageInform718_ptr CPlayerSendMsg_DeleteStorageInform718_next(nullptr);
        Info::CPlayerSendMsg_DeleteStorageInform718_clbk CPlayerSendMsg_DeleteStorageInform718_user(nullptr);
        
        Info::CPlayerSendMsg_Destroy720_ptr CPlayerSendMsg_Destroy720_next(nullptr);
        Info::CPlayerSendMsg_Destroy720_clbk CPlayerSendMsg_Destroy720_user(nullptr);
        
        Info::CPlayerSendMsg_Die722_ptr CPlayerSendMsg_Die722_next(nullptr);
        Info::CPlayerSendMsg_Die722_clbk CPlayerSendMsg_Die722_user(nullptr);
        
        Info::CPlayerSendMsg_EconomyHistoryInform724_ptr CPlayerSendMsg_EconomyHistoryInform724_next(nullptr);
        Info::CPlayerSendMsg_EconomyHistoryInform724_clbk CPlayerSendMsg_EconomyHistoryInform724_user(nullptr);
        
        Info::CPlayerSendMsg_EconomyRateInform726_ptr CPlayerSendMsg_EconomyRateInform726_next(nullptr);
        Info::CPlayerSendMsg_EconomyRateInform726_clbk CPlayerSendMsg_EconomyRateInform726_user(nullptr);
        
        Info::CPlayerSendMsg_EmbellishResult728_ptr CPlayerSendMsg_EmbellishResult728_next(nullptr);
        Info::CPlayerSendMsg_EmbellishResult728_clbk CPlayerSendMsg_EmbellishResult728_user(nullptr);
        
        Info::CPlayerSendMsg_EnterDarkHole730_ptr CPlayerSendMsg_EnterDarkHole730_next(nullptr);
        Info::CPlayerSendMsg_EnterDarkHole730_clbk CPlayerSendMsg_EnterDarkHole730_user(nullptr);
        
        Info::CPlayerSendMsg_EquipItemLevelLimit732_ptr CPlayerSendMsg_EquipItemLevelLimit732_next(nullptr);
        Info::CPlayerSendMsg_EquipItemLevelLimit732_clbk CPlayerSendMsg_EquipItemLevelLimit732_user(nullptr);
        
        Info::CPlayerSendMsg_EquipPartChange734_ptr CPlayerSendMsg_EquipPartChange734_next(nullptr);
        Info::CPlayerSendMsg_EquipPartChange734_clbk CPlayerSendMsg_EquipPartChange734_user(nullptr);
        
        Info::CPlayerSendMsg_EquipPartResult736_ptr CPlayerSendMsg_EquipPartResult736_next(nullptr);
        Info::CPlayerSendMsg_EquipPartResult736_clbk CPlayerSendMsg_EquipPartResult736_user(nullptr);
        
        Info::CPlayerSendMsg_ExchangeItemResult738_ptr CPlayerSendMsg_ExchangeItemResult738_next(nullptr);
        Info::CPlayerSendMsg_ExchangeItemResult738_clbk CPlayerSendMsg_ExchangeItemResult738_user(nullptr);
        
        Info::CPlayerSendMsg_ExchangeLendItemResult740_ptr CPlayerSendMsg_ExchangeLendItemResult740_next(nullptr);
        Info::CPlayerSendMsg_ExchangeLendItemResult740_clbk CPlayerSendMsg_ExchangeLendItemResult740_user(nullptr);
        
        Info::CPlayerSendMsg_ExchangeMoneyResult742_ptr CPlayerSendMsg_ExchangeMoneyResult742_next(nullptr);
        Info::CPlayerSendMsg_ExchangeMoneyResult742_clbk CPlayerSendMsg_ExchangeMoneyResult742_user(nullptr);
        
        Info::CPlayerSendMsg_ExitWorldResult744_ptr CPlayerSendMsg_ExitWorldResult744_next(nullptr);
        Info::CPlayerSendMsg_ExitWorldResult744_clbk CPlayerSendMsg_ExitWorldResult744_user(nullptr);
        
        Info::CPlayerSendMsg_ExtTrunkExtendResult746_ptr CPlayerSendMsg_ExtTrunkExtendResult746_next(nullptr);
        Info::CPlayerSendMsg_ExtTrunkExtendResult746_clbk CPlayerSendMsg_ExtTrunkExtendResult746_user(nullptr);
        
        Info::CPlayerSendMsg_FanfareItem748_ptr CPlayerSendMsg_FanfareItem748_next(nullptr);
        Info::CPlayerSendMsg_FanfareItem748_clbk CPlayerSendMsg_FanfareItem748_user(nullptr);
        
        Info::CPlayerSendMsg_FcitemInform750_ptr CPlayerSendMsg_FcitemInform750_next(nullptr);
        Info::CPlayerSendMsg_FcitemInform750_clbk CPlayerSendMsg_FcitemInform750_user(nullptr);
        
        Info::CPlayerSendMsg_FixPosition752_ptr CPlayerSendMsg_FixPosition752_next(nullptr);
        Info::CPlayerSendMsg_FixPosition752_clbk CPlayerSendMsg_FixPosition752_user(nullptr);
        
        Info::CPlayerSendMsg_ForceDownloadResult754_ptr CPlayerSendMsg_ForceDownloadResult754_next(nullptr);
        Info::CPlayerSendMsg_ForceDownloadResult754_clbk CPlayerSendMsg_ForceDownloadResult754_user(nullptr);
        
        Info::CPlayerSendMsg_ForceInvenChange756_ptr CPlayerSendMsg_ForceInvenChange756_next(nullptr);
        Info::CPlayerSendMsg_ForceInvenChange756_clbk CPlayerSendMsg_ForceInvenChange756_user(nullptr);
        
        Info::CPlayerSendMsg_ForceResult758_ptr CPlayerSendMsg_ForceResult758_next(nullptr);
        Info::CPlayerSendMsg_ForceResult758_clbk CPlayerSendMsg_ForceResult758_user(nullptr);
        
        Info::CPlayerSendMsg_GM_Greeting760_ptr CPlayerSendMsg_GM_Greeting760_next(nullptr);
        Info::CPlayerSendMsg_GM_Greeting760_clbk CPlayerSendMsg_GM_Greeting760_user(nullptr);
        
        Info::CPlayerSendMsg_GUILD_Greeting762_ptr CPlayerSendMsg_GUILD_Greeting762_next(nullptr);
        Info::CPlayerSendMsg_GUILD_Greeting762_clbk CPlayerSendMsg_GUILD_Greeting762_user(nullptr);
        
        Info::CPlayerSendMsg_GestureInform764_ptr CPlayerSendMsg_GestureInform764_next(nullptr);
        Info::CPlayerSendMsg_GestureInform764_clbk CPlayerSendMsg_GestureInform764_user(nullptr);
        
        Info::CPlayerSendMsg_GiveupDarkHole766_ptr CPlayerSendMsg_GiveupDarkHole766_next(nullptr);
        Info::CPlayerSendMsg_GiveupDarkHole766_clbk CPlayerSendMsg_GiveupDarkHole766_user(nullptr);
        
        Info::CPlayerSendMsg_GotoBasePortalResult768_ptr CPlayerSendMsg_GotoBasePortalResult768_next(nullptr);
        Info::CPlayerSendMsg_GotoBasePortalResult768_clbk CPlayerSendMsg_GotoBasePortalResult768_user(nullptr);
        
        Info::CPlayerSendMsg_GotoRecallResult770_ptr CPlayerSendMsg_GotoRecallResult770_next(nullptr);
        Info::CPlayerSendMsg_GotoRecallResult770_clbk CPlayerSendMsg_GotoRecallResult770_user(nullptr);
        
        Info::CPlayerSendMsg_GroupTargetInform772_ptr CPlayerSendMsg_GroupTargetInform772_next(nullptr);
        Info::CPlayerSendMsg_GroupTargetInform772_clbk CPlayerSendMsg_GroupTargetInform772_user(nullptr);
        
        Info::CPlayerSendMsg_GuildEstablishFail774_ptr CPlayerSendMsg_GuildEstablishFail774_next(nullptr);
        Info::CPlayerSendMsg_GuildEstablishFail774_clbk CPlayerSendMsg_GuildEstablishFail774_user(nullptr);
        
        Info::CPlayerSendMsg_GuildForceLeaveBoradori776_ptr CPlayerSendMsg_GuildForceLeaveBoradori776_next(nullptr);
        Info::CPlayerSendMsg_GuildForceLeaveBoradori776_clbk CPlayerSendMsg_GuildForceLeaveBoradori776_user(nullptr);
        
        Info::CPlayerSendMsg_GuildJoinAcceptFail778_ptr CPlayerSendMsg_GuildJoinAcceptFail778_next(nullptr);
        Info::CPlayerSendMsg_GuildJoinAcceptFail778_clbk CPlayerSendMsg_GuildJoinAcceptFail778_user(nullptr);
        
        Info::CPlayerSendMsg_GuildJoinApplyCancelResult780_ptr CPlayerSendMsg_GuildJoinApplyCancelResult780_next(nullptr);
        Info::CPlayerSendMsg_GuildJoinApplyCancelResult780_clbk CPlayerSendMsg_GuildJoinApplyCancelResult780_user(nullptr);
        
        Info::CPlayerSendMsg_GuildJoinApplyRejectInform782_ptr CPlayerSendMsg_GuildJoinApplyRejectInform782_next(nullptr);
        Info::CPlayerSendMsg_GuildJoinApplyRejectInform782_clbk CPlayerSendMsg_GuildJoinApplyRejectInform782_user(nullptr);
        
        Info::CPlayerSendMsg_GuildJoinApplyResult784_ptr CPlayerSendMsg_GuildJoinApplyResult784_next(nullptr);
        Info::CPlayerSendMsg_GuildJoinApplyResult784_clbk CPlayerSendMsg_GuildJoinApplyResult784_user(nullptr);
        
        Info::CPlayerSendMsg_GuildJoinOtherInform786_ptr CPlayerSendMsg_GuildJoinOtherInform786_next(nullptr);
        Info::CPlayerSendMsg_GuildJoinOtherInform786_clbk CPlayerSendMsg_GuildJoinOtherInform786_user(nullptr);
        
        Info::CPlayerSendMsg_GuildManageResult788_ptr CPlayerSendMsg_GuildManageResult788_next(nullptr);
        Info::CPlayerSendMsg_GuildManageResult788_clbk CPlayerSendMsg_GuildManageResult788_user(nullptr);
        
        Info::CPlayerSendMsg_GuildMasterEffect790_ptr CPlayerSendMsg_GuildMasterEffect790_next(nullptr);
        Info::CPlayerSendMsg_GuildMasterEffect790_clbk CPlayerSendMsg_GuildMasterEffect790_user(nullptr);
        
        Info::CPlayerSendMsg_GuildPushMoneyResult792_ptr CPlayerSendMsg_GuildPushMoneyResult792_next(nullptr);
        Info::CPlayerSendMsg_GuildPushMoneyResult792_clbk CPlayerSendMsg_GuildPushMoneyResult792_user(nullptr);
        
        Info::CPlayerSendMsg_GuildRoomEnterResult794_ptr CPlayerSendMsg_GuildRoomEnterResult794_next(nullptr);
        Info::CPlayerSendMsg_GuildRoomEnterResult794_clbk CPlayerSendMsg_GuildRoomEnterResult794_user(nullptr);
        
        Info::CPlayerSendMsg_GuildRoomOutResult796_ptr CPlayerSendMsg_GuildRoomOutResult796_next(nullptr);
        Info::CPlayerSendMsg_GuildRoomOutResult796_clbk CPlayerSendMsg_GuildRoomOutResult796_user(nullptr);
        
        Info::CPlayerSendMsg_GuildRoomRentResult798_ptr CPlayerSendMsg_GuildRoomRentResult798_next(nullptr);
        Info::CPlayerSendMsg_GuildRoomRentResult798_clbk CPlayerSendMsg_GuildRoomRentResult798_user(nullptr);
        
        Info::CPlayerSendMsg_GuildRoomRestTimeResult800_ptr CPlayerSendMsg_GuildRoomRestTimeResult800_next(nullptr);
        Info::CPlayerSendMsg_GuildRoomRestTimeResult800_clbk CPlayerSendMsg_GuildRoomRestTimeResult800_user(nullptr);
        
        Info::CPlayerSendMsg_GuildSelfLeaveResult802_ptr CPlayerSendMsg_GuildSelfLeaveResult802_next(nullptr);
        Info::CPlayerSendMsg_GuildSelfLeaveResult802_clbk CPlayerSendMsg_GuildSelfLeaveResult802_user(nullptr);
        
        Info::CPlayerSendMsg_GuildSetHonorResult804_ptr CPlayerSendMsg_GuildSetHonorResult804_next(nullptr);
        Info::CPlayerSendMsg_GuildSetHonorResult804_clbk CPlayerSendMsg_GuildSetHonorResult804_user(nullptr);
        
        Info::CPlayerSendMsg_HSKQuestActCum806_ptr CPlayerSendMsg_HSKQuestActCum806_next(nullptr);
        Info::CPlayerSendMsg_HSKQuestActCum806_clbk CPlayerSendMsg_HSKQuestActCum806_user(nullptr);
        
        Info::CPlayerSendMsg_HSKQuestSucc808_ptr CPlayerSendMsg_HSKQuestSucc808_next(nullptr);
        Info::CPlayerSendMsg_HSKQuestSucc808_clbk CPlayerSendMsg_HSKQuestSucc808_user(nullptr);
        
        Info::CPlayerSendMsg_HonorGuildMark810_ptr CPlayerSendMsg_HonorGuildMark810_next(nullptr);
        Info::CPlayerSendMsg_HonorGuildMark810_clbk CPlayerSendMsg_HonorGuildMark810_user(nullptr);
        
        Info::CPlayerSendMsg_InformTaxIncome812_ptr CPlayerSendMsg_InformTaxIncome812_next(nullptr);
        Info::CPlayerSendMsg_InformTaxIncome812_clbk CPlayerSendMsg_InformTaxIncome812_user(nullptr);
        
        Info::CPlayerSendMsg_Init_Action_Point814_ptr CPlayerSendMsg_Init_Action_Point814_next(nullptr);
        Info::CPlayerSendMsg_Init_Action_Point814_clbk CPlayerSendMsg_Init_Action_Point814_user(nullptr);
        
        Info::CPlayerSendMsg_InsertItemInform816_ptr CPlayerSendMsg_InsertItemInform816_next(nullptr);
        Info::CPlayerSendMsg_InsertItemInform816_clbk CPlayerSendMsg_InsertItemInform816_user(nullptr);
        
        Info::CPlayerSendMsg_InsertNewQuest818_ptr CPlayerSendMsg_InsertNewQuest818_next(nullptr);
        Info::CPlayerSendMsg_InsertNewQuest818_clbk CPlayerSendMsg_InsertNewQuest818_user(nullptr);
        
        Info::CPlayerSendMsg_InsertNextQuest820_ptr CPlayerSendMsg_InsertNextQuest820_next(nullptr);
        Info::CPlayerSendMsg_InsertNextQuest820_clbk CPlayerSendMsg_InsertNextQuest820_user(nullptr);
        
        Info::CPlayerSendMsg_InsertQuestFailure822_ptr CPlayerSendMsg_InsertQuestFailure822_next(nullptr);
        Info::CPlayerSendMsg_InsertQuestFailure822_clbk CPlayerSendMsg_InsertQuestFailure822_user(nullptr);
        
        Info::CPlayerSendMsg_InsertQuestItemInform824_ptr CPlayerSendMsg_InsertQuestItemInform824_next(nullptr);
        Info::CPlayerSendMsg_InsertQuestItemInform824_clbk CPlayerSendMsg_InsertQuestItemInform824_user(nullptr);
        
        Info::CPlayerSendMsg_InvenDownloadResult826_ptr CPlayerSendMsg_InvenDownloadResult826_next(nullptr);
        Info::CPlayerSendMsg_InvenDownloadResult826_clbk CPlayerSendMsg_InvenDownloadResult826_user(nullptr);
        
        Info::CPlayerSendMsg_ItemDowngrade828_ptr CPlayerSendMsg_ItemDowngrade828_next(nullptr);
        Info::CPlayerSendMsg_ItemDowngrade828_clbk CPlayerSendMsg_ItemDowngrade828_user(nullptr);
        
        Info::CPlayerSendMsg_ItemStorageRefresh830_ptr CPlayerSendMsg_ItemStorageRefresh830_next(nullptr);
        Info::CPlayerSendMsg_ItemStorageRefresh830_clbk CPlayerSendMsg_ItemStorageRefresh830_user(nullptr);
        
        Info::CPlayerSendMsg_ItemUpgrade832_ptr CPlayerSendMsg_ItemUpgrade832_next(nullptr);
        Info::CPlayerSendMsg_ItemUpgrade832_clbk CPlayerSendMsg_ItemUpgrade832_user(nullptr);
        
        Info::CPlayerSendMsg_JadeEffectErr834_ptr CPlayerSendMsg_JadeEffectErr834_next(nullptr);
        Info::CPlayerSendMsg_JadeEffectErr834_clbk CPlayerSendMsg_JadeEffectErr834_user(nullptr);
        
        Info::CPlayerSendMsg_LendItemTimeExpired836_ptr CPlayerSendMsg_LendItemTimeExpired836_next(nullptr);
        Info::CPlayerSendMsg_LendItemTimeExpired836_clbk CPlayerSendMsg_LendItemTimeExpired836_user(nullptr);
        
        Info::CPlayerSendMsg_Level838_ptr CPlayerSendMsg_Level838_next(nullptr);
        Info::CPlayerSendMsg_Level838_clbk CPlayerSendMsg_Level838_user(nullptr);
        
        Info::CPlayerSendMsg_LinkBoardDownloadResult840_ptr CPlayerSendMsg_LinkBoardDownloadResult840_next(nullptr);
        Info::CPlayerSendMsg_LinkBoardDownloadResult840_clbk CPlayerSendMsg_LinkBoardDownloadResult840_user(nullptr);
        
        Info::CPlayerSendMsg_MacroRequest842_ptr CPlayerSendMsg_MacroRequest842_next(nullptr);
        Info::CPlayerSendMsg_MacroRequest842_clbk CPlayerSendMsg_MacroRequest842_user(nullptr);
        
        Info::CPlayerSendMsg_MadeTrapNumInform844_ptr CPlayerSendMsg_MadeTrapNumInform844_next(nullptr);
        Info::CPlayerSendMsg_MadeTrapNumInform844_clbk CPlayerSendMsg_MadeTrapNumInform844_user(nullptr);
        
        Info::CPlayerSendMsg_MakeItemCheatSendButtonEnable846_ptr CPlayerSendMsg_MakeItemCheatSendButtonEnable846_next(nullptr);
        Info::CPlayerSendMsg_MakeItemCheatSendButtonEnable846_clbk CPlayerSendMsg_MakeItemCheatSendButtonEnable846_user(nullptr);
        
        Info::CPlayerSendMsg_MakeItemResult848_ptr CPlayerSendMsg_MakeItemResult848_next(nullptr);
        Info::CPlayerSendMsg_MakeItemResult848_clbk CPlayerSendMsg_MakeItemResult848_user(nullptr);
        
        Info::CPlayerSendMsg_MapEnvInform850_ptr CPlayerSendMsg_MapEnvInform850_next(nullptr);
        Info::CPlayerSendMsg_MapEnvInform850_clbk CPlayerSendMsg_MapEnvInform850_user(nullptr);
        
        Info::CPlayerSendMsg_MapOut852_ptr CPlayerSendMsg_MapOut852_next(nullptr);
        Info::CPlayerSendMsg_MapOut852_clbk CPlayerSendMsg_MapOut852_user(nullptr);
        
        Info::CPlayerSendMsg_MaxHFSP854_ptr CPlayerSendMsg_MaxHFSP854_next(nullptr);
        Info::CPlayerSendMsg_MaxHFSP854_clbk CPlayerSendMsg_MaxHFSP854_user(nullptr);
        
        Info::CPlayerSendMsg_MaxPvpPointInform856_ptr CPlayerSendMsg_MaxPvpPointInform856_next(nullptr);
        Info::CPlayerSendMsg_MaxPvpPointInform856_clbk CPlayerSendMsg_MaxPvpPointInform856_user(nullptr);
        
        Info::CPlayerSendMsg_MineCancle858_ptr CPlayerSendMsg_MineCancle858_next(nullptr);
        Info::CPlayerSendMsg_MineCancle858_clbk CPlayerSendMsg_MineCancle858_user(nullptr);
        
        Info::CPlayerSendMsg_MineCompleteResult860_ptr CPlayerSendMsg_MineCompleteResult860_next(nullptr);
        Info::CPlayerSendMsg_MineCompleteResult860_clbk CPlayerSendMsg_MineCompleteResult860_user(nullptr);
        
        Info::CPlayerSendMsg_MineStartResult862_ptr CPlayerSendMsg_MineStartResult862_next(nullptr);
        Info::CPlayerSendMsg_MineStartResult862_clbk CPlayerSendMsg_MineStartResult862_user(nullptr);
        
        Info::CPlayerSendMsg_MonsterAggroData864_ptr CPlayerSendMsg_MonsterAggroData864_next(nullptr);
        Info::CPlayerSendMsg_MonsterAggroData864_clbk CPlayerSendMsg_MonsterAggroData864_user(nullptr);
        
        Info::CPlayerSendMsg_MoveError866_ptr CPlayerSendMsg_MoveError866_next(nullptr);
        Info::CPlayerSendMsg_MoveError866_clbk CPlayerSendMsg_MoveError866_user(nullptr);
        
        Info::CPlayerSendMsg_MoveNext868_ptr CPlayerSendMsg_MoveNext868_next(nullptr);
        Info::CPlayerSendMsg_MoveNext868_clbk CPlayerSendMsg_MoveNext868_user(nullptr);
        
        Info::CPlayerSendMsg_MovePortal870_ptr CPlayerSendMsg_MovePortal870_next(nullptr);
        Info::CPlayerSendMsg_MovePortal870_clbk CPlayerSendMsg_MovePortal870_user(nullptr);
        
        Info::CPlayerSendMsg_MovePortal872_ptr CPlayerSendMsg_MovePortal872_next(nullptr);
        Info::CPlayerSendMsg_MovePortal872_clbk CPlayerSendMsg_MovePortal872_user(nullptr);
        
        Info::CPlayerSendMsg_MoveToOwnStoneMapInform874_ptr CPlayerSendMsg_MoveToOwnStoneMapInform874_next(nullptr);
        Info::CPlayerSendMsg_MoveToOwnStoneMapInform874_clbk CPlayerSendMsg_MoveToOwnStoneMapInform874_user(nullptr);
        
        Info::CPlayerSendMsg_MoveToOwnStoneMapResult876_ptr CPlayerSendMsg_MoveToOwnStoneMapResult876_next(nullptr);
        Info::CPlayerSendMsg_MoveToOwnStoneMapResult876_clbk CPlayerSendMsg_MoveToOwnStoneMapResult876_user(nullptr);
        
        Info::CPlayerSendMsg_NPCLinkItemCheckResult878_ptr CPlayerSendMsg_NPCLinkItemCheckResult878_next(nullptr);
        Info::CPlayerSendMsg_NPCLinkItemCheckResult878_clbk CPlayerSendMsg_NPCLinkItemCheckResult878_user(nullptr);
        
        Info::CPlayerSendMsg_NewMovePotionResult880_ptr CPlayerSendMsg_NewMovePotionResult880_next(nullptr);
        Info::CPlayerSendMsg_NewMovePotionResult880_clbk CPlayerSendMsg_NewMovePotionResult880_user(nullptr);
        
        Info::CPlayerSendMsg_NewViewOther882_ptr CPlayerSendMsg_NewViewOther882_next(nullptr);
        Info::CPlayerSendMsg_NewViewOther882_clbk CPlayerSendMsg_NewViewOther882_user(nullptr);
        
        Info::CPlayerSendMsg_NotifyEffectForGetItem884_ptr CPlayerSendMsg_NotifyEffectForGetItem884_next(nullptr);
        Info::CPlayerSendMsg_NotifyEffectForGetItem884_clbk CPlayerSendMsg_NotifyEffectForGetItem884_user(nullptr);
        
        Info::CPlayerSendMsg_NotifyGetExpInfo886_ptr CPlayerSendMsg_NotifyGetExpInfo886_next(nullptr);
        Info::CPlayerSendMsg_NotifyGetExpInfo886_clbk CPlayerSendMsg_NotifyGetExpInfo886_user(nullptr);
        
        Info::CPlayerSendMsg_Notify_ExceptFromRaceRanking888_ptr CPlayerSendMsg_Notify_ExceptFromRaceRanking888_next(nullptr);
        Info::CPlayerSendMsg_Notify_ExceptFromRaceRanking888_clbk CPlayerSendMsg_Notify_ExceptFromRaceRanking888_user(nullptr);
        
        Info::CPlayerSendMsg_Notify_Get_Golden_Box890_ptr CPlayerSendMsg_Notify_Get_Golden_Box890_next(nullptr);
        Info::CPlayerSendMsg_Notify_Get_Golden_Box890_clbk CPlayerSendMsg_Notify_Get_Golden_Box890_user(nullptr);
        
        Info::CPlayerSendMsg_Notify_Gravity_Stone_Owner_Die892_ptr CPlayerSendMsg_Notify_Gravity_Stone_Owner_Die892_next(nullptr);
        Info::CPlayerSendMsg_Notify_Gravity_Stone_Owner_Die892_clbk CPlayerSendMsg_Notify_Gravity_Stone_Owner_Die892_user(nullptr);
        
        Info::CPlayerSendMsg_Notify_Me_Get_Golden_Box894_ptr CPlayerSendMsg_Notify_Me_Get_Golden_Box894_next(nullptr);
        Info::CPlayerSendMsg_Notify_Me_Get_Golden_Box894_clbk CPlayerSendMsg_Notify_Me_Get_Golden_Box894_user(nullptr);
        
        Info::CPlayerSendMsg_NpcQuestHistoryInform896_ptr CPlayerSendMsg_NpcQuestHistoryInform896_next(nullptr);
        Info::CPlayerSendMsg_NpcQuestHistoryInform896_clbk CPlayerSendMsg_NpcQuestHistoryInform896_user(nullptr);
        
        Info::CPlayerSendMsg_NpcQuestListResult898_ptr CPlayerSendMsg_NpcQuestListResult898_next(nullptr);
        Info::CPlayerSendMsg_NpcQuestListResult898_clbk CPlayerSendMsg_NpcQuestListResult898_user(nullptr);
        
        Info::CPlayerSendMsg_OffPartResult900_ptr CPlayerSendMsg_OffPartResult900_next(nullptr);
        Info::CPlayerSendMsg_OffPartResult900_clbk CPlayerSendMsg_OffPartResult900_user(nullptr);
        
        Info::CPlayerSendMsg_OfferSuggestResult902_ptr CPlayerSendMsg_OfferSuggestResult902_next(nullptr);
        Info::CPlayerSendMsg_OfferSuggestResult902_clbk CPlayerSendMsg_OfferSuggestResult902_user(nullptr);
        
        Info::CPlayerSendMsg_OreCuttingResult904_ptr CPlayerSendMsg_OreCuttingResult904_next(nullptr);
        Info::CPlayerSendMsg_OreCuttingResult904_clbk CPlayerSendMsg_OreCuttingResult904_user(nullptr);
        
        Info::CPlayerSendMsg_OreIntoBagResult906_ptr CPlayerSendMsg_OreIntoBagResult906_next(nullptr);
        Info::CPlayerSendMsg_OreIntoBagResult906_clbk CPlayerSendMsg_OreIntoBagResult906_user(nullptr);
        
        Info::CPlayerSendMsg_OreTransferCount908_ptr CPlayerSendMsg_OreTransferCount908_next(nullptr);
        Info::CPlayerSendMsg_OreTransferCount908_clbk CPlayerSendMsg_OreTransferCount908_user(nullptr);
        
        Info::CPlayerSendMsg_OtherShapeAll910_ptr CPlayerSendMsg_OtherShapeAll910_next(nullptr);
        Info::CPlayerSendMsg_OtherShapeAll910_clbk CPlayerSendMsg_OtherShapeAll910_user(nullptr);
        
        Info::CPlayerSendMsg_OtherShapeError912_ptr CPlayerSendMsg_OtherShapeError912_next(nullptr);
        Info::CPlayerSendMsg_OtherShapeError912_clbk CPlayerSendMsg_OtherShapeError912_user(nullptr);
        
        Info::CPlayerSendMsg_OtherShapePart914_ptr CPlayerSendMsg_OtherShapePart914_next(nullptr);
        Info::CPlayerSendMsg_OtherShapePart914_clbk CPlayerSendMsg_OtherShapePart914_user(nullptr);
        
        Info::CPlayerSendMsg_OtherShapePartEx_CashChange916_ptr CPlayerSendMsg_OtherShapePartEx_CashChange916_next(nullptr);
        Info::CPlayerSendMsg_OtherShapePartEx_CashChange916_clbk CPlayerSendMsg_OtherShapePartEx_CashChange916_user(nullptr);
        
        Info::CPlayerSendMsg_PartyAlterLootShareResult918_ptr CPlayerSendMsg_PartyAlterLootShareResult918_next(nullptr);
        Info::CPlayerSendMsg_PartyAlterLootShareResult918_clbk CPlayerSendMsg_PartyAlterLootShareResult918_user(nullptr);
        
        Info::CPlayerSendMsg_PartyDisjointResult920_ptr CPlayerSendMsg_PartyDisjointResult920_next(nullptr);
        Info::CPlayerSendMsg_PartyDisjointResult920_clbk CPlayerSendMsg_PartyDisjointResult920_user(nullptr);
        
        Info::CPlayerSendMsg_PartyJoinApplicationQuestion922_ptr CPlayerSendMsg_PartyJoinApplicationQuestion922_next(nullptr);
        Info::CPlayerSendMsg_PartyJoinApplicationQuestion922_clbk CPlayerSendMsg_PartyJoinApplicationQuestion922_user(nullptr);
        
        Info::CPlayerSendMsg_PartyJoinFailLevel924_ptr CPlayerSendMsg_PartyJoinFailLevel924_next(nullptr);
        Info::CPlayerSendMsg_PartyJoinFailLevel924_clbk CPlayerSendMsg_PartyJoinFailLevel924_user(nullptr);
        
        Info::CPlayerSendMsg_PartyJoinInvitationQuestion926_ptr CPlayerSendMsg_PartyJoinInvitationQuestion926_next(nullptr);
        Info::CPlayerSendMsg_PartyJoinInvitationQuestion926_clbk CPlayerSendMsg_PartyJoinInvitationQuestion926_user(nullptr);
        
        Info::CPlayerSendMsg_PartyJoinJoinerResult928_ptr CPlayerSendMsg_PartyJoinJoinerResult928_next(nullptr);
        Info::CPlayerSendMsg_PartyJoinJoinerResult928_clbk CPlayerSendMsg_PartyJoinJoinerResult928_user(nullptr);
        
        Info::CPlayerSendMsg_PartyJoinMemberResult930_ptr CPlayerSendMsg_PartyJoinMemberResult930_next(nullptr);
        Info::CPlayerSendMsg_PartyJoinMemberResult930_clbk CPlayerSendMsg_PartyJoinMemberResult930_user(nullptr);
        
        Info::CPlayerSendMsg_PartyLeaveCompulsionResult932_ptr CPlayerSendMsg_PartyLeaveCompulsionResult932_next(nullptr);
        Info::CPlayerSendMsg_PartyLeaveCompulsionResult932_clbk CPlayerSendMsg_PartyLeaveCompulsionResult932_user(nullptr);
        
        Info::CPlayerSendMsg_PartyLeaveSelfResult934_ptr CPlayerSendMsg_PartyLeaveSelfResult934_next(nullptr);
        Info::CPlayerSendMsg_PartyLeaveSelfResult934_clbk CPlayerSendMsg_PartyLeaveSelfResult934_user(nullptr);
        
        Info::CPlayerSendMsg_PartyLockResult936_ptr CPlayerSendMsg_PartyLockResult936_next(nullptr);
        Info::CPlayerSendMsg_PartyLockResult936_clbk CPlayerSendMsg_PartyLockResult936_user(nullptr);
        
        Info::CPlayerSendMsg_PartyLootItemInform938_ptr CPlayerSendMsg_PartyLootItemInform938_next(nullptr);
        Info::CPlayerSendMsg_PartyLootItemInform938_clbk CPlayerSendMsg_PartyLootItemInform938_user(nullptr);
        
        Info::CPlayerSendMsg_PartySuccessResult940_ptr CPlayerSendMsg_PartySuccessResult940_next(nullptr);
        Info::CPlayerSendMsg_PartySuccessResult940_clbk CPlayerSendMsg_PartySuccessResult940_user(nullptr);
        
        Info::CPlayerSendMsg_PcRoomCharClass942_ptr CPlayerSendMsg_PcRoomCharClass942_next(nullptr);
        Info::CPlayerSendMsg_PcRoomCharClass942_clbk CPlayerSendMsg_PcRoomCharClass942_user(nullptr);
        
        Info::CPlayerSendMsg_PcRoomError944_ptr CPlayerSendMsg_PcRoomError944_next(nullptr);
        Info::CPlayerSendMsg_PcRoomError944_clbk CPlayerSendMsg_PcRoomError944_user(nullptr);
        
        Info::CPlayerSendMsg_PostContent946_ptr CPlayerSendMsg_PostContent946_next(nullptr);
        Info::CPlayerSendMsg_PostContent946_clbk CPlayerSendMsg_PostContent946_user(nullptr);
        
        Info::CPlayerSendMsg_PostDelete948_ptr CPlayerSendMsg_PostDelete948_next(nullptr);
        Info::CPlayerSendMsg_PostDelete948_clbk CPlayerSendMsg_PostDelete948_user(nullptr);
        
        Info::CPlayerSendMsg_PostDelivery950_ptr CPlayerSendMsg_PostDelivery950_next(nullptr);
        Info::CPlayerSendMsg_PostDelivery950_clbk CPlayerSendMsg_PostDelivery950_user(nullptr);
        
        Info::CPlayerSendMsg_PostItemGold952_ptr CPlayerSendMsg_PostItemGold952_next(nullptr);
        Info::CPlayerSendMsg_PostItemGold952_clbk CPlayerSendMsg_PostItemGold952_user(nullptr);
        
        Info::CPlayerSendMsg_PostReturn954_ptr CPlayerSendMsg_PostReturn954_next(nullptr);
        Info::CPlayerSendMsg_PostReturn954_clbk CPlayerSendMsg_PostReturn954_user(nullptr);
        
        Info::CPlayerSendMsg_PostReturnConfirm956_ptr CPlayerSendMsg_PostReturnConfirm956_next(nullptr);
        Info::CPlayerSendMsg_PostReturnConfirm956_clbk CPlayerSendMsg_PostReturnConfirm956_user(nullptr);
        
        Info::CPlayerSendMsg_PostSendReply958_ptr CPlayerSendMsg_PostSendReply958_next(nullptr);
        Info::CPlayerSendMsg_PostSendReply958_clbk CPlayerSendMsg_PostSendReply958_user(nullptr);
        
        Info::CPlayerSendMsg_PotionDelayTime960_ptr CPlayerSendMsg_PotionDelayTime960_next(nullptr);
        Info::CPlayerSendMsg_PotionDelayTime960_clbk CPlayerSendMsg_PotionDelayTime960_user(nullptr);
        
        Info::CPlayerSendMsg_PotionDivision962_ptr CPlayerSendMsg_PotionDivision962_next(nullptr);
        Info::CPlayerSendMsg_PotionDivision962_clbk CPlayerSendMsg_PotionDivision962_user(nullptr);
        
        Info::CPlayerSendMsg_PotionSeparation964_ptr CPlayerSendMsg_PotionSeparation964_next(nullptr);
        Info::CPlayerSendMsg_PotionSeparation964_clbk CPlayerSendMsg_PotionSeparation964_user(nullptr);
        
        Info::CPlayerSendMsg_PremiumCashItemUse966_ptr CPlayerSendMsg_PremiumCashItemUse966_next(nullptr);
        Info::CPlayerSendMsg_PremiumCashItemUse966_clbk CPlayerSendMsg_PremiumCashItemUse966_user(nullptr);
        
        Info::CPlayerSendMsg_ProposeVoteResult968_ptr CPlayerSendMsg_ProposeVoteResult968_next(nullptr);
        Info::CPlayerSendMsg_ProposeVoteResult968_clbk CPlayerSendMsg_ProposeVoteResult968_user(nullptr);
        
        Info::CPlayerSendMsg_PvpRankListVersionUp970_ptr CPlayerSendMsg_PvpRankListVersionUp970_next(nullptr);
        Info::CPlayerSendMsg_PvpRankListVersionUp970_clbk CPlayerSendMsg_PvpRankListVersionUp970_user(nullptr);
        
        Info::CPlayerSendMsg_QuestComplete972_ptr CPlayerSendMsg_QuestComplete972_next(nullptr);
        Info::CPlayerSendMsg_QuestComplete972_clbk CPlayerSendMsg_QuestComplete972_user(nullptr);
        
        Info::CPlayerSendMsg_QuestDownloadResult974_ptr CPlayerSendMsg_QuestDownloadResult974_next(nullptr);
        Info::CPlayerSendMsg_QuestDownloadResult974_clbk CPlayerSendMsg_QuestDownloadResult974_user(nullptr);
        
        Info::CPlayerSendMsg_QuestFailure976_ptr CPlayerSendMsg_QuestFailure976_next(nullptr);
        Info::CPlayerSendMsg_QuestFailure976_clbk CPlayerSendMsg_QuestFailure976_user(nullptr);
        
        Info::CPlayerSendMsg_QuestGiveUpResult978_ptr CPlayerSendMsg_QuestGiveUpResult978_next(nullptr);
        Info::CPlayerSendMsg_QuestGiveUpResult978_clbk CPlayerSendMsg_QuestGiveUpResult978_user(nullptr);
        
        Info::CPlayerSendMsg_QuestHistoryDownloadResult980_ptr CPlayerSendMsg_QuestHistoryDownloadResult980_next(nullptr);
        Info::CPlayerSendMsg_QuestHistoryDownloadResult980_clbk CPlayerSendMsg_QuestHistoryDownloadResult980_user(nullptr);
        
        Info::CPlayerSendMsg_QuestProcess982_ptr CPlayerSendMsg_QuestProcess982_next(nullptr);
        Info::CPlayerSendMsg_QuestProcess982_clbk CPlayerSendMsg_QuestProcess982_user(nullptr);
        
        Info::CPlayerSendMsg_RACE_Greeting984_ptr CPlayerSendMsg_RACE_Greeting984_next(nullptr);
        Info::CPlayerSendMsg_RACE_Greeting984_clbk CPlayerSendMsg_RACE_Greeting984_user(nullptr);
        
        Info::CPlayerSendMsg_RaceBattlePenelty986_ptr CPlayerSendMsg_RaceBattlePenelty986_next(nullptr);
        Info::CPlayerSendMsg_RaceBattlePenelty986_clbk CPlayerSendMsg_RaceBattlePenelty986_user(nullptr);
        
        Info::CPlayerSendMsg_RaceBossCryMsg988_ptr CPlayerSendMsg_RaceBossCryMsg988_next(nullptr);
        Info::CPlayerSendMsg_RaceBossCryMsg988_clbk CPlayerSendMsg_RaceBossCryMsg988_user(nullptr);
        
        Info::CPlayerSendMsg_RaceTopInform990_ptr CPlayerSendMsg_RaceTopInform990_next(nullptr);
        Info::CPlayerSendMsg_RaceTopInform990_clbk CPlayerSendMsg_RaceTopInform990_user(nullptr);
        
        Info::CPlayerSendMsg_RadarCharSearchResult992_ptr CPlayerSendMsg_RadarCharSearchResult992_next(nullptr);
        Info::CPlayerSendMsg_RadarCharSearchResult992_clbk CPlayerSendMsg_RadarCharSearchResult992_user(nullptr);
        
        Info::CPlayerSendMsg_RadarDelayTime994_ptr CPlayerSendMsg_RadarDelayTime994_next(nullptr);
        Info::CPlayerSendMsg_RadarDelayTime994_clbk CPlayerSendMsg_RadarDelayTime994_user(nullptr);
        
        Info::CPlayerSendMsg_ReEnterAsk996_ptr CPlayerSendMsg_ReEnterAsk996_next(nullptr);
        Info::CPlayerSendMsg_ReEnterAsk996_clbk CPlayerSendMsg_ReEnterAsk996_user(nullptr);
        
        Info::CPlayerSendMsg_ReEnterDarkHoleResult998_ptr CPlayerSendMsg_ReEnterDarkHoleResult998_next(nullptr);
        Info::CPlayerSendMsg_ReEnterDarkHoleResult998_clbk CPlayerSendMsg_ReEnterDarkHoleResult998_user(nullptr);
        
        Info::CPlayerSendMsg_RealMovePoint1000_ptr CPlayerSendMsg_RealMovePoint1000_next(nullptr);
        Info::CPlayerSendMsg_RealMovePoint1000_clbk CPlayerSendMsg_RealMovePoint1000_user(nullptr);
        
        Info::CPlayerSendMsg_Recover1002_ptr CPlayerSendMsg_Recover1002_next(nullptr);
        Info::CPlayerSendMsg_Recover1002_clbk CPlayerSendMsg_Recover1002_user(nullptr);
        
        Info::CPlayerSendMsg_RecvHSKQuest1004_ptr CPlayerSendMsg_RecvHSKQuest1004_next(nullptr);
        Info::CPlayerSendMsg_RecvHSKQuest1004_clbk CPlayerSendMsg_RecvHSKQuest1004_user(nullptr);
        
        Info::CPlayerSendMsg_RefeshGroupTargetPosition1006_ptr CPlayerSendMsg_RefeshGroupTargetPosition1006_next(nullptr);
        Info::CPlayerSendMsg_RefeshGroupTargetPosition1006_clbk CPlayerSendMsg_RefeshGroupTargetPosition1006_user(nullptr);
        
        Info::CPlayerSendMsg_RegistBindResult1008_ptr CPlayerSendMsg_RegistBindResult1008_next(nullptr);
        Info::CPlayerSendMsg_RegistBindResult1008_clbk CPlayerSendMsg_RegistBindResult1008_user(nullptr);
        
        Info::CPlayerSendMsg_ReleaseGroupTargetObjectResult1010_ptr CPlayerSendMsg_ReleaseGroupTargetObjectResult1010_next(nullptr);
        Info::CPlayerSendMsg_ReleaseGroupTargetObjectResult1010_clbk CPlayerSendMsg_ReleaseGroupTargetObjectResult1010_user(nullptr);
        
        Info::CPlayerSendMsg_ReleaseSiegeModeResult1012_ptr CPlayerSendMsg_ReleaseSiegeModeResult1012_next(nullptr);
        Info::CPlayerSendMsg_ReleaseSiegeModeResult1012_clbk CPlayerSendMsg_ReleaseSiegeModeResult1012_user(nullptr);
        
        Info::CPlayerSendMsg_RemainOreRate1014_ptr CPlayerSendMsg_RemainOreRate1014_next(nullptr);
        Info::CPlayerSendMsg_RemainOreRate1014_clbk CPlayerSendMsg_RemainOreRate1014_user(nullptr);
        
        Info::CPlayerSendMsg_RemainTimeInform1016_ptr CPlayerSendMsg_RemainTimeInform1016_next(nullptr);
        Info::CPlayerSendMsg_RemainTimeInform1016_clbk CPlayerSendMsg_RemainTimeInform1016_user(nullptr);
        
        Info::CPlayerSendMsg_ResDivision1018_ptr CPlayerSendMsg_ResDivision1018_next(nullptr);
        Info::CPlayerSendMsg_ResDivision1018_clbk CPlayerSendMsg_ResDivision1018_user(nullptr);
        
        Info::CPlayerSendMsg_ResSeparation1020_ptr CPlayerSendMsg_ResSeparation1020_next(nullptr);
        Info::CPlayerSendMsg_ResSeparation1020_clbk CPlayerSendMsg_ResSeparation1020_user(nullptr);
        
        Info::CPlayerSendMsg_ResultChangeTaxRate1022_ptr CPlayerSendMsg_ResultChangeTaxRate1022_next(nullptr);
        Info::CPlayerSendMsg_ResultChangeTaxRate1022_clbk CPlayerSendMsg_ResultChangeTaxRate1022_user(nullptr);
        
        Info::CPlayerSendMsg_ResultNpcQuest1024_ptr CPlayerSendMsg_ResultNpcQuest1024_next(nullptr);
        Info::CPlayerSendMsg_ResultNpcQuest1024_clbk CPlayerSendMsg_ResultNpcQuest1024_user(nullptr);
        
        Info::CPlayerSendMsg_Resurrect1026_ptr CPlayerSendMsg_Resurrect1026_next(nullptr);
        Info::CPlayerSendMsg_Resurrect1026_clbk CPlayerSendMsg_Resurrect1026_user(nullptr);
        
        Info::CPlayerSendMsg_ResurrectInform1028_ptr CPlayerSendMsg_ResurrectInform1028_next(nullptr);
        Info::CPlayerSendMsg_ResurrectInform1028_clbk CPlayerSendMsg_ResurrectInform1028_user(nullptr);
        
        Info::CPlayerSendMsg_Revival1030_ptr CPlayerSendMsg_Revival1030_next(nullptr);
        Info::CPlayerSendMsg_Revival1030_clbk CPlayerSendMsg_Revival1030_user(nullptr);
        
        Info::CPlayerSendMsg_RevivalOfJade1032_ptr CPlayerSendMsg_RevivalOfJade1032_next(nullptr);
        Info::CPlayerSendMsg_RevivalOfJade1032_clbk CPlayerSendMsg_RevivalOfJade1032_user(nullptr);
        
        Info::CPlayerSendMsg_RewardAddItem1034_ptr CPlayerSendMsg_RewardAddItem1034_next(nullptr);
        Info::CPlayerSendMsg_RewardAddItem1034_clbk CPlayerSendMsg_RewardAddItem1034_user(nullptr);
        
        Info::CPlayerSendMsg_SFDelayRequest1036_ptr CPlayerSendMsg_SFDelayRequest1036_next(nullptr);
        Info::CPlayerSendMsg_SFDelayRequest1036_clbk CPlayerSendMsg_SFDelayRequest1036_user(nullptr);
        
        Info::CPlayerSendMsg_SelectClassResult1038_ptr CPlayerSendMsg_SelectClassResult1038_next(nullptr);
        Info::CPlayerSendMsg_SelectClassResult1038_clbk CPlayerSendMsg_SelectClassResult1038_user(nullptr);
        
        Info::CPlayerSendMsg_SelectQuestReward1040_ptr CPlayerSendMsg_SelectQuestReward1040_next(nullptr);
        Info::CPlayerSendMsg_SelectQuestReward1040_clbk CPlayerSendMsg_SelectQuestReward1040_user(nullptr);
        
        Info::CPlayerSendMsg_SelectWaitedQuest1042_ptr CPlayerSendMsg_SelectWaitedQuest1042_next(nullptr);
        Info::CPlayerSendMsg_SelectWaitedQuest1042_clbk CPlayerSendMsg_SelectWaitedQuest1042_user(nullptr);
        
        Info::CPlayerSendMsg_SellItemStoreResult1044_ptr CPlayerSendMsg_SellItemStoreResult1044_next(nullptr);
        Info::CPlayerSendMsg_SellItemStoreResult1044_clbk CPlayerSendMsg_SellItemStoreResult1044_user(nullptr);
        
        Info::CPlayerSendMsg_SetDPInform1046_ptr CPlayerSendMsg_SetDPInform1046_next(nullptr);
        Info::CPlayerSendMsg_SetDPInform1046_clbk CPlayerSendMsg_SetDPInform1046_user(nullptr);
        
        Info::CPlayerSendMsg_SetFPInform1048_ptr CPlayerSendMsg_SetFPInform1048_next(nullptr);
        Info::CPlayerSendMsg_SetFPInform1048_clbk CPlayerSendMsg_SetFPInform1048_user(nullptr);
        
        Info::CPlayerSendMsg_SetGroupMapPoint1050_ptr CPlayerSendMsg_SetGroupMapPoint1050_next(nullptr);
        Info::CPlayerSendMsg_SetGroupMapPoint1050_clbk CPlayerSendMsg_SetGroupMapPoint1050_user(nullptr);
        
        Info::CPlayerSendMsg_SetGroupTargetObjectResult1052_ptr CPlayerSendMsg_SetGroupTargetObjectResult1052_next(nullptr);
        Info::CPlayerSendMsg_SetGroupTargetObjectResult1052_clbk CPlayerSendMsg_SetGroupTargetObjectResult1052_user(nullptr);
        
        Info::CPlayerSendMsg_SetHPInform1054_ptr CPlayerSendMsg_SetHPInform1054_next(nullptr);
        Info::CPlayerSendMsg_SetHPInform1054_clbk CPlayerSendMsg_SetHPInform1054_user(nullptr);
        
        Info::CPlayerSendMsg_SetItemCheckResult1056_ptr CPlayerSendMsg_SetItemCheckResult1056_next(nullptr);
        Info::CPlayerSendMsg_SetItemCheckResult1056_clbk CPlayerSendMsg_SetItemCheckResult1056_user(nullptr);
        
        Info::CPlayerSendMsg_SetSPInform1058_ptr CPlayerSendMsg_SetSPInform1058_next(nullptr);
        Info::CPlayerSendMsg_SetSPInform1058_clbk CPlayerSendMsg_SetSPInform1058_user(nullptr);
        
        Info::CPlayerSendMsg_SetTargetObjectResult1060_ptr CPlayerSendMsg_SetTargetObjectResult1060_next(nullptr);
        Info::CPlayerSendMsg_SetTargetObjectResult1060_clbk CPlayerSendMsg_SetTargetObjectResult1060_user(nullptr);
        
        Info::CPlayerSendMsg_SkillResult1062_ptr CPlayerSendMsg_SkillResult1062_next(nullptr);
        Info::CPlayerSendMsg_SkillResult1062_clbk CPlayerSendMsg_SkillResult1062_user(nullptr);
        
        Info::CPlayerSendMsg_SpecialDownloadResult1064_ptr CPlayerSendMsg_SpecialDownloadResult1064_next(nullptr);
        Info::CPlayerSendMsg_SpecialDownloadResult1064_clbk CPlayerSendMsg_SpecialDownloadResult1064_user(nullptr);
        
        Info::CPlayerSendMsg_StartContSF1066_ptr CPlayerSendMsg_StartContSF1066_next(nullptr);
        Info::CPlayerSendMsg_StartContSF1066_clbk CPlayerSendMsg_StartContSF1066_user(nullptr);
        
        Info::CPlayerSendMsg_StartNewPos1068_ptr CPlayerSendMsg_StartNewPos1068_next(nullptr);
        Info::CPlayerSendMsg_StartNewPos1068_clbk CPlayerSendMsg_StartNewPos1068_user(nullptr);
        
        Info::CPlayerSendMsg_StartShopping1070_ptr CPlayerSendMsg_StartShopping1070_next(nullptr);
        Info::CPlayerSendMsg_StartShopping1070_clbk CPlayerSendMsg_StartShopping1070_user(nullptr);
        
        Info::CPlayerSendMsg_StatInform1072_ptr CPlayerSendMsg_StatInform1072_next(nullptr);
        Info::CPlayerSendMsg_StatInform1072_clbk CPlayerSendMsg_StatInform1072_user(nullptr);
        
        Info::CPlayerSendMsg_StateInform1074_ptr CPlayerSendMsg_StateInform1074_next(nullptr);
        Info::CPlayerSendMsg_StateInform1074_clbk CPlayerSendMsg_StateInform1074_user(nullptr);
        
        Info::CPlayerSendMsg_Stop1076_ptr CPlayerSendMsg_Stop1076_next(nullptr);
        Info::CPlayerSendMsg_Stop1076_clbk CPlayerSendMsg_Stop1076_user(nullptr);
        
        Info::CPlayerSendMsg_StoreLimitItemAmountInfo1078_ptr CPlayerSendMsg_StoreLimitItemAmountInfo1078_next(nullptr);
        Info::CPlayerSendMsg_StoreLimitItemAmountInfo1078_clbk CPlayerSendMsg_StoreLimitItemAmountInfo1078_user(nullptr);
        
        Info::CPlayerSendMsg_StoreListResult1080_ptr CPlayerSendMsg_StoreListResult1080_next(nullptr);
        Info::CPlayerSendMsg_StoreListResult1080_clbk CPlayerSendMsg_StoreListResult1080_user(nullptr);
        
        Info::CPlayerSendMsg_TLStatusInfo1082_ptr CPlayerSendMsg_TLStatusInfo1082_next(nullptr);
        Info::CPlayerSendMsg_TLStatusInfo1082_clbk CPlayerSendMsg_TLStatusInfo1082_user(nullptr);
        
        Info::CPlayerSendMsg_TLStatusPenalty1084_ptr CPlayerSendMsg_TLStatusPenalty1084_next(nullptr);
        Info::CPlayerSendMsg_TLStatusPenalty1084_clbk CPlayerSendMsg_TLStatusPenalty1084_user(nullptr);
        
        Info::CPlayerSendMsg_TakeAddResult1086_ptr CPlayerSendMsg_TakeAddResult1086_next(nullptr);
        Info::CPlayerSendMsg_TakeAddResult1086_clbk CPlayerSendMsg_TakeAddResult1086_user(nullptr);
        
        Info::CPlayerSendMsg_TakeNewResult1088_ptr CPlayerSendMsg_TakeNewResult1088_next(nullptr);
        Info::CPlayerSendMsg_TakeNewResult1088_clbk CPlayerSendMsg_TakeNewResult1088_user(nullptr);
        
        Info::CPlayerSendMsg_TalikCrystalExchangeResult1090_ptr CPlayerSendMsg_TalikCrystalExchangeResult1090_next(nullptr);
        Info::CPlayerSendMsg_TalikCrystalExchangeResult1090_clbk CPlayerSendMsg_TalikCrystalExchangeResult1090_user(nullptr);
        
        Info::CPlayerSendMsg_TargetObjectHPInform1092_ptr CPlayerSendMsg_TargetObjectHPInform1092_next(nullptr);
        Info::CPlayerSendMsg_TargetObjectHPInform1092_clbk CPlayerSendMsg_TargetObjectHPInform1092_user(nullptr);
        
        Info::CPlayerSendMsg_TeleportError1094_ptr CPlayerSendMsg_TeleportError1094_next(nullptr);
        Info::CPlayerSendMsg_TeleportError1094_clbk CPlayerSendMsg_TeleportError1094_user(nullptr);
        
        Info::CPlayerSendMsg_TestAttackResult1096_ptr CPlayerSendMsg_TestAttackResult1096_next(nullptr);
        Info::CPlayerSendMsg_TestAttackResult1096_clbk CPlayerSendMsg_TestAttackResult1096_user(nullptr);
        
        Info::CPlayerSendMsg_ThrowSkillResult1098_ptr CPlayerSendMsg_ThrowSkillResult1098_next(nullptr);
        Info::CPlayerSendMsg_ThrowSkillResult1098_clbk CPlayerSendMsg_ThrowSkillResult1098_user(nullptr);
        
        Info::CPlayerSendMsg_ThrowStorageResult1100_ptr CPlayerSendMsg_ThrowStorageResult1100_next(nullptr);
        Info::CPlayerSendMsg_ThrowStorageResult1100_clbk CPlayerSendMsg_ThrowStorageResult1100_user(nullptr);
        
        Info::CPlayerSendMsg_ThrowUnitResult1102_ptr CPlayerSendMsg_ThrowUnitResult1102_next(nullptr);
        Info::CPlayerSendMsg_ThrowUnitResult1102_clbk CPlayerSendMsg_ThrowUnitResult1102_user(nullptr);
        
        Info::CPlayerSendMsg_TowerContinue1104_ptr CPlayerSendMsg_TowerContinue1104_next(nullptr);
        Info::CPlayerSendMsg_TowerContinue1104_clbk CPlayerSendMsg_TowerContinue1104_user(nullptr);
        
        Info::CPlayerSendMsg_TransShipRenewTicketResult1106_ptr CPlayerSendMsg_TransShipRenewTicketResult1106_next(nullptr);
        Info::CPlayerSendMsg_TransShipRenewTicketResult1106_clbk CPlayerSendMsg_TransShipRenewTicketResult1106_user(nullptr);
        
        Info::CPlayerSendMsg_TransformSiegeModeResult1108_ptr CPlayerSendMsg_TransformSiegeModeResult1108_next(nullptr);
        Info::CPlayerSendMsg_TransformSiegeModeResult1108_clbk CPlayerSendMsg_TransformSiegeModeResult1108_user(nullptr);
        
        Info::CPlayerSendMsg_TrunkChangPasswdResult1110_ptr CPlayerSendMsg_TrunkChangPasswdResult1110_next(nullptr);
        Info::CPlayerSendMsg_TrunkChangPasswdResult1110_clbk CPlayerSendMsg_TrunkChangPasswdResult1110_user(nullptr);
        
        Info::CPlayerSendMsg_TrunkDownloadResult1112_ptr CPlayerSendMsg_TrunkDownloadResult1112_next(nullptr);
        Info::CPlayerSendMsg_TrunkDownloadResult1112_clbk CPlayerSendMsg_TrunkDownloadResult1112_user(nullptr);
        
        Info::CPlayerSendMsg_TrunkEstResult1114_ptr CPlayerSendMsg_TrunkEstResult1114_next(nullptr);
        Info::CPlayerSendMsg_TrunkEstResult1114_clbk CPlayerSendMsg_TrunkEstResult1114_user(nullptr);
        
        Info::CPlayerSendMsg_TrunkExtendResult1116_ptr CPlayerSendMsg_TrunkExtendResult1116_next(nullptr);
        Info::CPlayerSendMsg_TrunkExtendResult1116_clbk CPlayerSendMsg_TrunkExtendResult1116_user(nullptr);
        
        Info::CPlayerSendMsg_TrunkHintAnswerResult1118_ptr CPlayerSendMsg_TrunkHintAnswerResult1118_next(nullptr);
        Info::CPlayerSendMsg_TrunkHintAnswerResult1118_clbk CPlayerSendMsg_TrunkHintAnswerResult1118_user(nullptr);
        
        Info::CPlayerSendMsg_TrunkIoMoneyResult1120_ptr CPlayerSendMsg_TrunkIoMoneyResult1120_next(nullptr);
        Info::CPlayerSendMsg_TrunkIoMoneyResult1120_clbk CPlayerSendMsg_TrunkIoMoneyResult1120_user(nullptr);
        
        Info::CPlayerSendMsg_TrunkIoResult1122_ptr CPlayerSendMsg_TrunkIoResult1122_next(nullptr);
        Info::CPlayerSendMsg_TrunkIoResult1122_clbk CPlayerSendMsg_TrunkIoResult1122_user(nullptr);
        
        Info::CPlayerSendMsg_TrunkPotionDivision1124_ptr CPlayerSendMsg_TrunkPotionDivision1124_next(nullptr);
        Info::CPlayerSendMsg_TrunkPotionDivision1124_clbk CPlayerSendMsg_TrunkPotionDivision1124_user(nullptr);
        
        Info::CPlayerSendMsg_TrunkPwHintIndexResult1126_ptr CPlayerSendMsg_TrunkPwHintIndexResult1126_next(nullptr);
        Info::CPlayerSendMsg_TrunkPwHintIndexResult1126_clbk CPlayerSendMsg_TrunkPwHintIndexResult1126_user(nullptr);
        
        Info::CPlayerSendMsg_TrunkResDivision1128_ptr CPlayerSendMsg_TrunkResDivision1128_next(nullptr);
        Info::CPlayerSendMsg_TrunkResDivision1128_clbk CPlayerSendMsg_TrunkResDivision1128_user(nullptr);
        
        Info::CPlayerSendMsg_UILock_FindPW_Result1130_ptr CPlayerSendMsg_UILock_FindPW_Result1130_next(nullptr);
        Info::CPlayerSendMsg_UILock_FindPW_Result1130_clbk CPlayerSendMsg_UILock_FindPW_Result1130_user(nullptr);
        
        Info::CPlayerSendMsg_UILock_Init_Request_ToAccount1132_ptr CPlayerSendMsg_UILock_Init_Request_ToAccount1132_next(nullptr);
        Info::CPlayerSendMsg_UILock_Init_Request_ToAccount1132_clbk CPlayerSendMsg_UILock_Init_Request_ToAccount1132_user(nullptr);
        
        Info::CPlayerSendMsg_UILock_Init_Result1134_ptr CPlayerSendMsg_UILock_Init_Result1134_next(nullptr);
        Info::CPlayerSendMsg_UILock_Init_Result1134_clbk CPlayerSendMsg_UILock_Init_Result1134_user(nullptr);
        
        Info::CPlayerSendMsg_UILock_Login_Result1136_ptr CPlayerSendMsg_UILock_Login_Result1136_next(nullptr);
        Info::CPlayerSendMsg_UILock_Login_Result1136_clbk CPlayerSendMsg_UILock_Login_Result1136_user(nullptr);
        
        Info::CPlayerSendMsg_UILock_Update_Request_ToAccount1138_ptr CPlayerSendMsg_UILock_Update_Request_ToAccount1138_next(nullptr);
        Info::CPlayerSendMsg_UILock_Update_Request_ToAccount1138_clbk CPlayerSendMsg_UILock_Update_Request_ToAccount1138_user(nullptr);
        
        Info::CPlayerSendMsg_UILock_Update_Result1140_ptr CPlayerSendMsg_UILock_Update_Result1140_next(nullptr);
        Info::CPlayerSendMsg_UILock_Update_Result1140_clbk CPlayerSendMsg_UILock_Update_Result1140_user(nullptr);
        
        Info::CPlayerSendMsg_UnitAlterFeeInform1142_ptr CPlayerSendMsg_UnitAlterFeeInform1142_next(nullptr);
        Info::CPlayerSendMsg_UnitAlterFeeInform1142_clbk CPlayerSendMsg_UnitAlterFeeInform1142_user(nullptr);
        
        Info::CPlayerSendMsg_UnitBulletFillResult1144_ptr CPlayerSendMsg_UnitBulletFillResult1144_next(nullptr);
        Info::CPlayerSendMsg_UnitBulletFillResult1144_clbk CPlayerSendMsg_UnitBulletFillResult1144_user(nullptr);
        
        Info::CPlayerSendMsg_UnitBulletReplaceResult1146_ptr CPlayerSendMsg_UnitBulletReplaceResult1146_next(nullptr);
        Info::CPlayerSendMsg_UnitBulletReplaceResult1146_clbk CPlayerSendMsg_UnitBulletReplaceResult1146_user(nullptr);
        
        Info::CPlayerSendMsg_UnitDeliveryResult1148_ptr CPlayerSendMsg_UnitDeliveryResult1148_next(nullptr);
        Info::CPlayerSendMsg_UnitDeliveryResult1148_clbk CPlayerSendMsg_UnitDeliveryResult1148_user(nullptr);
        
        Info::CPlayerSendMsg_UnitDestroy1150_ptr CPlayerSendMsg_UnitDestroy1150_next(nullptr);
        Info::CPlayerSendMsg_UnitDestroy1150_clbk CPlayerSendMsg_UnitDestroy1150_user(nullptr);
        
        Info::CPlayerSendMsg_UnitForceReturnInform1152_ptr CPlayerSendMsg_UnitForceReturnInform1152_next(nullptr);
        Info::CPlayerSendMsg_UnitForceReturnInform1152_clbk CPlayerSendMsg_UnitForceReturnInform1152_user(nullptr);
        
        Info::CPlayerSendMsg_UnitFrameBuyResult1154_ptr CPlayerSendMsg_UnitFrameBuyResult1154_next(nullptr);
        Info::CPlayerSendMsg_UnitFrameBuyResult1154_clbk CPlayerSendMsg_UnitFrameBuyResult1154_user(nullptr);
        
        Info::CPlayerSendMsg_UnitFrameRepairResult1156_ptr CPlayerSendMsg_UnitFrameRepairResult1156_next(nullptr);
        Info::CPlayerSendMsg_UnitFrameRepairResult1156_clbk CPlayerSendMsg_UnitFrameRepairResult1156_user(nullptr);
        
        Info::CPlayerSendMsg_UnitLeaveResult1158_ptr CPlayerSendMsg_UnitLeaveResult1158_next(nullptr);
        Info::CPlayerSendMsg_UnitLeaveResult1158_clbk CPlayerSendMsg_UnitLeaveResult1158_user(nullptr);
        
        Info::CPlayerSendMsg_UnitPackFillResult1160_ptr CPlayerSendMsg_UnitPackFillResult1160_next(nullptr);
        Info::CPlayerSendMsg_UnitPackFillResult1160_clbk CPlayerSendMsg_UnitPackFillResult1160_user(nullptr);
        
        Info::CPlayerSendMsg_UnitPartTuningResult1162_ptr CPlayerSendMsg_UnitPartTuningResult1162_next(nullptr);
        Info::CPlayerSendMsg_UnitPartTuningResult1162_clbk CPlayerSendMsg_UnitPartTuningResult1162_user(nullptr);
        
        Info::CPlayerSendMsg_UnitReturnResult1164_ptr CPlayerSendMsg_UnitReturnResult1164_next(nullptr);
        Info::CPlayerSendMsg_UnitReturnResult1164_clbk CPlayerSendMsg_UnitReturnResult1164_user(nullptr);
        
        Info::CPlayerSendMsg_UnitRideChange1166_ptr CPlayerSendMsg_UnitRideChange1166_next(nullptr);
        Info::CPlayerSendMsg_UnitRideChange1166_clbk CPlayerSendMsg_UnitRideChange1166_user(nullptr);
        
        Info::CPlayerSendMsg_UnitSellResult1168_ptr CPlayerSendMsg_UnitSellResult1168_next(nullptr);
        Info::CPlayerSendMsg_UnitSellResult1168_clbk CPlayerSendMsg_UnitSellResult1168_user(nullptr);
        
        Info::CPlayerSendMsg_UnitTakeResult1170_ptr CPlayerSendMsg_UnitTakeResult1170_next(nullptr);
        Info::CPlayerSendMsg_UnitTakeResult1170_clbk CPlayerSendMsg_UnitTakeResult1170_user(nullptr);
        
        Info::CPlayerSendMsg_UpdateTLStatusInfo1172_ptr CPlayerSendMsg_UpdateTLStatusInfo1172_next(nullptr);
        Info::CPlayerSendMsg_UpdateTLStatusInfo1172_clbk CPlayerSendMsg_UpdateTLStatusInfo1172_user(nullptr);
        
        Info::CPlayerSendMsg_UsPotionResultOther1174_ptr CPlayerSendMsg_UsPotionResultOther1174_next(nullptr);
        Info::CPlayerSendMsg_UsPotionResultOther1174_clbk CPlayerSendMsg_UsPotionResultOther1174_user(nullptr);
        
        Info::CPlayerSendMsg_UseJadeResult1176_ptr CPlayerSendMsg_UseJadeResult1176_next(nullptr);
        Info::CPlayerSendMsg_UseJadeResult1176_clbk CPlayerSendMsg_UseJadeResult1176_user(nullptr);
        
        Info::CPlayerSendMsg_UsePotionResult1178_ptr CPlayerSendMsg_UsePotionResult1178_next(nullptr);
        Info::CPlayerSendMsg_UsePotionResult1178_clbk CPlayerSendMsg_UsePotionResult1178_user(nullptr);
        
        Info::CPlayerSendMsg_UseRadarResult1180_ptr CPlayerSendMsg_UseRadarResult1180_next(nullptr);
        Info::CPlayerSendMsg_UseRadarResult1180_clbk CPlayerSendMsg_UseRadarResult1180_user(nullptr);
        
        Info::CPlayerSendMsg_VoteResult1182_ptr CPlayerSendMsg_VoteResult1182_next(nullptr);
        Info::CPlayerSendMsg_VoteResult1182_clbk CPlayerSendMsg_VoteResult1182_user(nullptr);
        
        Info::CPlayerSendTargetMonsterSFContInfo1184_ptr CPlayerSendTargetMonsterSFContInfo1184_next(nullptr);
        Info::CPlayerSendTargetMonsterSFContInfo1184_clbk CPlayerSendTargetMonsterSFContInfo1184_user(nullptr);
        
        Info::CPlayerSendTargetPlayerDamageContInfo1186_ptr CPlayerSendTargetPlayerDamageContInfo1186_next(nullptr);
        Info::CPlayerSendTargetPlayerDamageContInfo1186_clbk CPlayerSendTargetPlayerDamageContInfo1186_user(nullptr);
        
        Info::CPlayerSenseState1188_ptr CPlayerSenseState1188_next(nullptr);
        Info::CPlayerSenseState1188_clbk CPlayerSenseState1188_user(nullptr);
        
        Info::CPlayerSetAttackPart1190_ptr CPlayerSetAttackPart1190_next(nullptr);
        Info::CPlayerSetAttackPart1190_clbk CPlayerSetAttackPart1190_user(nullptr);
        
        Info::CPlayerSetBattleMode1192_ptr CPlayerSetBattleMode1192_next(nullptr);
        Info::CPlayerSetBattleMode1192_clbk CPlayerSetBattleMode1192_user(nullptr);
        
        Info::CPlayerSetBindDummy1194_ptr CPlayerSetBindDummy1194_next(nullptr);
        Info::CPlayerSetBindDummy1194_clbk CPlayerSetBindDummy1194_user(nullptr);
        
        Info::CPlayerSetBindMapData1196_ptr CPlayerSetBindMapData1196_next(nullptr);
        Info::CPlayerSetBindMapData1196_clbk CPlayerSetBindMapData1196_user(nullptr);
        
        Info::CPlayerSetBindPosition1198_ptr CPlayerSetBindPosition1198_next(nullptr);
        Info::CPlayerSetBindPosition1198_clbk CPlayerSetBindPosition1198_user(nullptr);
        
        Info::CPlayerSetCashAmount1200_ptr CPlayerSetCashAmount1200_next(nullptr);
        Info::CPlayerSetCashAmount1200_clbk CPlayerSetCashAmount1200_user(nullptr);
        
        Info::CPlayerSetCntEnable1202_ptr CPlayerSetCntEnable1202_next(nullptr);
        Info::CPlayerSetCntEnable1202_clbk CPlayerSetCntEnable1202_user(nullptr);
        
        Info::CPlayerSetDP1204_ptr CPlayerSetDP1204_next(nullptr);
        Info::CPlayerSetDP1204_clbk CPlayerSetDP1204_user(nullptr);
        
        Info::CPlayerSetDamage1206_ptr CPlayerSetDamage1206_next(nullptr);
        Info::CPlayerSetDamage1206_clbk CPlayerSetDamage1206_user(nullptr);
        
        Info::CPlayerSetEffectEquipCode1208_ptr CPlayerSetEffectEquipCode1208_next(nullptr);
        Info::CPlayerSetEffectEquipCode1208_clbk CPlayerSetEffectEquipCode1208_user(nullptr);
        
        Info::CPlayerSetEquipEffect1210_ptr CPlayerSetEquipEffect1210_next(nullptr);
        Info::CPlayerSetEquipEffect1210_clbk CPlayerSetEquipEffect1210_user(nullptr);
        
        Info::CPlayerSetEquipJadeEffect1212_ptr CPlayerSetEquipJadeEffect1212_next(nullptr);
        Info::CPlayerSetEquipJadeEffect1212_clbk CPlayerSetEquipJadeEffect1212_user(nullptr);
        
        Info::CPlayerSetFP1214_ptr CPlayerSetFP1214_next(nullptr);
        Info::CPlayerSetFP1214_clbk CPlayerSetFP1214_user(nullptr);
        
        Info::CPlayerSetGauge1216_ptr CPlayerSetGauge1216_next(nullptr);
        Info::CPlayerSetGauge1216_clbk CPlayerSetGauge1216_user(nullptr);
        
        Info::CPlayerSetGrade1218_ptr CPlayerSetGrade1218_next(nullptr);
        Info::CPlayerSetGrade1218_clbk CPlayerSetGrade1218_user(nullptr);
        
        Info::CPlayerSetHP1220_ptr CPlayerSetHP1220_next(nullptr);
        Info::CPlayerSetHP1220_clbk CPlayerSetHP1220_user(nullptr);
        
        Info::CPlayerSetHaveEffect1222_ptr CPlayerSetHaveEffect1222_next(nullptr);
        Info::CPlayerSetHaveEffect1222_clbk CPlayerSetHaveEffect1222_user(nullptr);
        
        Info::CPlayerSetHaveEffectUseTime1224_ptr CPlayerSetHaveEffectUseTime1224_next(nullptr);
        Info::CPlayerSetHaveEffectUseTime1224_clbk CPlayerSetHaveEffectUseTime1224_user(nullptr);
        
        Info::CPlayerSetLastAttBuff1226_ptr CPlayerSetLastAttBuff1226_next(nullptr);
        Info::CPlayerSetLastAttBuff1226_clbk CPlayerSetLastAttBuff1226_user(nullptr);
        
        Info::CPlayerSetLevel1228_ptr CPlayerSetLevel1228_next(nullptr);
        Info::CPlayerSetLevel1228_clbk CPlayerSetLevel1228_user(nullptr);
        
        Info::CPlayerSetLevelD1230_ptr CPlayerSetLevelD1230_next(nullptr);
        Info::CPlayerSetLevelD1230_clbk CPlayerSetLevelD1230_user(nullptr);
        
        Info::CPlayerSetMstHaveEffect1232_ptr CPlayerSetMstHaveEffect1232_next(nullptr);
        Info::CPlayerSetMstHaveEffect1232_clbk CPlayerSetMstHaveEffect1232_user(nullptr);
        
        Info::CPlayerSetMstPt1234_ptr CPlayerSetMstPt1234_next(nullptr);
        Info::CPlayerSetMstPt1234_clbk CPlayerSetMstPt1234_user(nullptr);
        
        Info::CPlayerSetPotionActDelay1236_ptr CPlayerSetPotionActDelay1236_next(nullptr);
        Info::CPlayerSetPotionActDelay1236_clbk CPlayerSetPotionActDelay1236_user(nullptr);
        
        Info::CPlayerSetPvpPointLeak1238_ptr CPlayerSetPvpPointLeak1238_next(nullptr);
        Info::CPlayerSetPvpPointLeak1238_clbk CPlayerSetPvpPointLeak1238_user(nullptr);
        
        Info::CPlayerSetRankRate1240_ptr CPlayerSetRankRate1240_next(nullptr);
        Info::CPlayerSetRankRate1240_clbk CPlayerSetRankRate1240_user(nullptr);
        
        Info::CPlayerSetSP1242_ptr CPlayerSetSP1242_next(nullptr);
        Info::CPlayerSetSP1242_clbk CPlayerSetSP1242_user(nullptr);
        
        Info::CPlayerSetShapeAllBuffer1244_ptr CPlayerSetShapeAllBuffer1244_next(nullptr);
        Info::CPlayerSetShapeAllBuffer1244_clbk CPlayerSetShapeAllBuffer1244_user(nullptr);
        
        Info::CPlayerSetSiege1246_ptr CPlayerSetSiege1246_next(nullptr);
        Info::CPlayerSetSiege1246_clbk CPlayerSetSiege1246_user(nullptr);
        
        Info::CPlayerSetStateFlag1248_ptr CPlayerSetStateFlag1248_next(nullptr);
        Info::CPlayerSetStateFlag1248_clbk CPlayerSetStateFlag1248_user(nullptr);
        
        Info::CPlayerSetStaticMember1250_ptr CPlayerSetStaticMember1250_next(nullptr);
        Info::CPlayerSetStaticMember1250_clbk CPlayerSetStaticMember1250_user(nullptr);
        
        Info::CPlayerSetTarPos1252_ptr CPlayerSetTarPos1252_next(nullptr);
        Info::CPlayerSetTarPos1252_clbk CPlayerSetTarPos1252_user(nullptr);
        
        Info::CPlayerSetUseReleaseRaceBuffPotion1254_ptr CPlayerSetUseReleaseRaceBuffPotion1254_next(nullptr);
        Info::CPlayerSetUseReleaseRaceBuffPotion1254_clbk CPlayerSetUseReleaseRaceBuffPotion1254_user(nullptr);
        
        Info::CPlayerSetVote1256_ptr CPlayerSetVote1256_next(nullptr);
        Info::CPlayerSetVote1256_clbk CPlayerSetVote1256_user(nullptr);
        
        Info::CPlayerSortPost1258_ptr CPlayerSortPost1258_next(nullptr);
        Info::CPlayerSortPost1258_clbk CPlayerSortPost1258_user(nullptr);
        
        Info::CPlayerSubActPoint1260_ptr CPlayerSubActPoint1260_next(nullptr);
        Info::CPlayerSubActPoint1260_clbk CPlayerSubActPoint1260_user(nullptr);
        
        Info::CPlayerSubDalant1262_ptr CPlayerSubDalant1262_next(nullptr);
        Info::CPlayerSubDalant1262_clbk CPlayerSubDalant1262_user(nullptr);
        
        Info::CPlayerSubGold1264_ptr CPlayerSubGold1264_next(nullptr);
        Info::CPlayerSubGold1264_clbk CPlayerSubGold1264_user(nullptr);
        
        Info::CPlayerSubPoint1266_ptr CPlayerSubPoint1266_next(nullptr);
        Info::CPlayerSubPoint1266_clbk CPlayerSubPoint1266_user(nullptr);
        
        Info::CPlayerSumMinuteBetween1268_ptr CPlayerSumMinuteBetween1268_next(nullptr);
        Info::CPlayerSumMinuteBetween1268_clbk CPlayerSumMinuteBetween1268_user(nullptr);
        
        Info::CPlayerSumMinuteOne1270_ptr CPlayerSumMinuteOne1270_next(nullptr);
        Info::CPlayerSumMinuteOne1270_clbk CPlayerSumMinuteOne1270_user(nullptr);
        
        Info::CPlayerTakeGravityStone1272_ptr CPlayerTakeGravityStone1272_next(nullptr);
        Info::CPlayerTakeGravityStone1272_clbk CPlayerTakeGravityStone1272_user(nullptr);
        
        Info::CPlayerUpdateAuraSFCont1274_ptr CPlayerUpdateAuraSFCont1274_next(nullptr);
        Info::CPlayerUpdateAuraSFCont1274_clbk CPlayerUpdateAuraSFCont1274_user(nullptr);
        
        Info::CPlayerUpdateChaosModeState1276_ptr CPlayerUpdateChaosModeState1276_next(nullptr);
        Info::CPlayerUpdateChaosModeState1276_clbk CPlayerUpdateChaosModeState1276_user(nullptr);
        
        Info::CPlayerUpdateDelPost1278_ptr CPlayerUpdateDelPost1278_next(nullptr);
        Info::CPlayerUpdateDelPost1278_clbk CPlayerUpdateDelPost1278_user(nullptr);
        
        Info::CPlayerUpdateLastCriTicket1280_ptr CPlayerUpdateLastCriTicket1280_next(nullptr);
        Info::CPlayerUpdateLastCriTicket1280_clbk CPlayerUpdateLastCriTicket1280_user(nullptr);
        
        Info::CPlayerUpdateLastMetalTicket1282_ptr CPlayerUpdateLastMetalTicket1282_next(nullptr);
        Info::CPlayerUpdateLastMetalTicket1282_clbk CPlayerUpdateLastMetalTicket1282_user(nullptr);
        
        Info::CPlayerUpdatePost1284_ptr CPlayerUpdatePost1284_next(nullptr);
        Info::CPlayerUpdatePost1284_clbk CPlayerUpdatePost1284_user(nullptr);
        
        Info::CPlayerUpdatePostAddLog1286_ptr CPlayerUpdatePostAddLog1286_next(nullptr);
        Info::CPlayerUpdatePostAddLog1286_clbk CPlayerUpdatePostAddLog1286_user(nullptr);
        
        Info::CPlayerUpdatePvpOrderView1288_ptr CPlayerUpdatePvpOrderView1288_next(nullptr);
        Info::CPlayerUpdatePvpOrderView1288_clbk CPlayerUpdatePvpOrderView1288_user(nullptr);
        
        Info::CPlayerUpdatePvpPointLimiter1290_ptr CPlayerUpdatePvpPointLimiter1290_next(nullptr);
        Info::CPlayerUpdatePvpPointLimiter1290_clbk CPlayerUpdatePvpPointLimiter1290_user(nullptr);
        
        Info::CPlayerUpdateReturnPost1292_ptr CPlayerUpdateReturnPost1292_next(nullptr);
        Info::CPlayerUpdateReturnPost1292_clbk CPlayerUpdateReturnPost1292_user(nullptr);
        
        Info::CPlayerUpdateVisualVer1294_ptr CPlayerUpdateVisualVer1294_next(nullptr);
        Info::CPlayerUpdateVisualVer1294_clbk CPlayerUpdateVisualVer1294_user(nullptr);
        
        Info::CPlayerUpdate_GoldPoint1296_ptr CPlayerUpdate_GoldPoint1296_next(nullptr);
        Info::CPlayerUpdate_GoldPoint1296_clbk CPlayerUpdate_GoldPoint1296_user(nullptr);
        
        Info::CPlayerUpdatedMasteryWriteHistory1298_ptr CPlayerUpdatedMasteryWriteHistory1298_next(nullptr);
        Info::CPlayerUpdatedMasteryWriteHistory1298_clbk CPlayerUpdatedMasteryWriteHistory1298_user(nullptr);
        
        Info::CPlayerWPActiveForce1300_ptr CPlayerWPActiveForce1300_next(nullptr);
        Info::CPlayerWPActiveForce1300_clbk CPlayerWPActiveForce1300_user(nullptr);
        
        Info::CPlayerWPActiveSkill1302_ptr CPlayerWPActiveSkill1302_next(nullptr);
        Info::CPlayerWPActiveSkill1302_clbk CPlayerWPActiveSkill1302_user(nullptr);
        
        Info::CPlayerWeaponSFActive1304_ptr CPlayerWeaponSFActive1304_next(nullptr);
        Info::CPlayerWeaponSFActive1304_clbk CPlayerWeaponSFActive1304_user(nullptr);
        
        Info::CPlayer_AnimusReturn1306_ptr CPlayer_AnimusReturn1306_next(nullptr);
        Info::CPlayer_AnimusReturn1306_clbk CPlayer_AnimusReturn1306_user(nullptr);
        
        Info::CPlayer_CalcMaxFP1308_ptr CPlayer_CalcMaxFP1308_next(nullptr);
        Info::CPlayer_CalcMaxFP1308_clbk CPlayer_CalcMaxFP1308_user(nullptr);
        
        Info::CPlayer_CalcMaxHP1310_ptr CPlayer_CalcMaxHP1310_next(nullptr);
        Info::CPlayer_CalcMaxHP1310_clbk CPlayer_CalcMaxHP1310_user(nullptr);
        
        Info::CPlayer_CalcMaxSP1312_ptr CPlayer_CalcMaxSP1312_next(nullptr);
        Info::CPlayer_CalcMaxSP1312_clbk CPlayer_CalcMaxSP1312_user(nullptr);
        
        Info::CPlayer_CheckForcePullUnit1314_ptr CPlayer_CheckForcePullUnit1314_next(nullptr);
        Info::CPlayer_CheckForcePullUnit1314_clbk CPlayer_CheckForcePullUnit1314_user(nullptr);
        
        Info::CPlayer_DeleteUnitKey1316_ptr CPlayer_DeleteUnitKey1316_next(nullptr);
        Info::CPlayer_DeleteUnitKey1316_clbk CPlayer_DeleteUnitKey1316_user(nullptr);
        
        Info::CPlayer_GetItemEffect1318_ptr CPlayer_GetItemEffect1318_next(nullptr);
        Info::CPlayer_GetItemEffect1318_clbk CPlayer_GetItemEffect1318_user(nullptr);
        
        Info::CPlayer_GetPartyMemberInCircle1320_ptr CPlayer_GetPartyMemberInCircle1320_next(nullptr);
        Info::CPlayer_GetPartyMemberInCircle1320_clbk CPlayer_GetPartyMemberInCircle1320_user(nullptr);
        
        Info::CPlayer_LockUnitKey1322_ptr CPlayer_LockUnitKey1322_next(nullptr);
        Info::CPlayer_LockUnitKey1322_clbk CPlayer_LockUnitKey1322_user(nullptr);
        
        Info::CPlayer_Reward_Quest1324_ptr CPlayer_Reward_Quest1324_next(nullptr);
        Info::CPlayer_Reward_Quest1324_clbk CPlayer_Reward_Quest1324_user(nullptr);
        
        Info::CPlayer_TowerAllReturn1326_ptr CPlayer_TowerAllReturn1326_next(nullptr);
        Info::CPlayer_TowerAllReturn1326_clbk CPlayer_TowerAllReturn1326_user(nullptr);
        
        Info::CPlayer_TowerDestroy1328_ptr CPlayer_TowerDestroy1328_next(nullptr);
        Info::CPlayer_TowerDestroy1328_clbk CPlayer_TowerDestroy1328_user(nullptr);
        
        Info::CPlayer_TowerReturn1330_ptr CPlayer_TowerReturn1330_next(nullptr);
        Info::CPlayer_TowerReturn1330_clbk CPlayer_TowerReturn1330_user(nullptr);
        
        Info::CPlayer_TrapDestroy1332_ptr CPlayer_TrapDestroy1332_next(nullptr);
        Info::CPlayer_TrapDestroy1332_clbk CPlayer_TrapDestroy1332_user(nullptr);
        
        Info::CPlayer_TrapReturn1334_ptr CPlayer_TrapReturn1334_next(nullptr);
        Info::CPlayer_TrapReturn1334_clbk CPlayer_TrapReturn1334_user(nullptr);
        
        Info::CPlayer_UnitDestroy1336_ptr CPlayer_UnitDestroy1336_next(nullptr);
        Info::CPlayer_UnitDestroy1336_clbk CPlayer_UnitDestroy1336_user(nullptr);
        
        Info::CPlayer_UpdateUnitDebt1338_ptr CPlayer_UpdateUnitDebt1338_next(nullptr);
        Info::CPlayer_UpdateUnitDebt1338_clbk CPlayer_UpdateUnitDebt1338_user(nullptr);
        
        Info::CPlayer_check_dst_param_after_attack1340_ptr CPlayer_check_dst_param_after_attack1340_next(nullptr);
        Info::CPlayer_check_dst_param_after_attack1340_clbk CPlayer_check_dst_param_after_attack1340_user(nullptr);
        
        Info::CPlayer_check_embel_part1342_ptr CPlayer_check_embel_part1342_next(nullptr);
        Info::CPlayer_check_embel_part1342_clbk CPlayer_check_embel_part1342_user(nullptr);
        
        Info::CPlayer_check_equip_part1344_ptr CPlayer_check_equip_part1344_next(nullptr);
        Info::CPlayer_check_equip_part1344_clbk CPlayer_check_equip_part1344_user(nullptr);
        
        Info::CPlayer_check_equipmastery_lim1346_ptr CPlayer_check_equipmastery_lim1346_next(nullptr);
        Info::CPlayer_check_equipmastery_lim1346_clbk CPlayer_check_equipmastery_lim1346_user(nullptr);
        
        Info::CPlayer_check_exp_after_attack1348_ptr CPlayer_check_exp_after_attack1348_next(nullptr);
        Info::CPlayer_check_exp_after_attack1348_clbk CPlayer_check_exp_after_attack1348_user(nullptr);
        
        Info::CPlayer_check_guild_target_object1350_ptr CPlayer_check_guild_target_object1350_next(nullptr);
        Info::CPlayer_check_guild_target_object1350_clbk CPlayer_check_guild_target_object1350_user(nullptr);
        
        Info::CPlayer_check_hp_send_party1352_ptr CPlayer_check_hp_send_party1352_next(nullptr);
        Info::CPlayer_check_hp_send_party1352_clbk CPlayer_check_hp_send_party1352_user(nullptr);
        
        Info::CPlayer_check_mastery_cum_lim1354_ptr CPlayer_check_mastery_cum_lim1354_next(nullptr);
        Info::CPlayer_check_mastery_cum_lim1354_clbk CPlayer_check_mastery_cum_lim1354_user(nullptr);
        
        Info::CPlayer_check_mastery_lim1356_ptr CPlayer_check_mastery_lim1356_next(nullptr);
        Info::CPlayer_check_mastery_lim1356_clbk CPlayer_check_mastery_lim1356_user(nullptr);
        
        Info::CPlayer_check_party_target_object1358_ptr CPlayer_check_party_target_object1358_next(nullptr);
        Info::CPlayer_check_party_target_object1358_clbk CPlayer_check_party_target_object1358_user(nullptr);
        
        Info::CPlayer_check_race_target_object1360_ptr CPlayer_check_race_target_object1360_next(nullptr);
        Info::CPlayer_check_race_target_object1360_clbk CPlayer_check_race_target_object1360_user(nullptr);
        
        Info::CPlayer_check_target_object1362_ptr CPlayer_check_target_object1362_next(nullptr);
        Info::CPlayer_check_target_object1362_clbk CPlayer_check_target_object1362_user(nullptr);
        
        Info::CPlayer_pre_check_force_attack1364_ptr CPlayer_pre_check_force_attack1364_next(nullptr);
        Info::CPlayer_pre_check_force_attack1364_clbk CPlayer_pre_check_force_attack1364_user(nullptr);
        
        Info::CPlayer_pre_check_in_guild_battle1366_ptr CPlayer_pre_check_in_guild_battle1366_next(nullptr);
        Info::CPlayer_pre_check_in_guild_battle1366_clbk CPlayer_pre_check_in_guild_battle1366_user(nullptr);
        
        Info::CPlayer_pre_check_in_guild_battle_race1368_ptr CPlayer_pre_check_in_guild_battle_race1368_next(nullptr);
        Info::CPlayer_pre_check_in_guild_battle_race1368_clbk CPlayer_pre_check_in_guild_battle_race1368_user(nullptr);
        
        Info::CPlayer_pre_check_normal_attack1370_ptr CPlayer_pre_check_normal_attack1370_next(nullptr);
        Info::CPlayer_pre_check_normal_attack1370_clbk CPlayer_pre_check_normal_attack1370_user(nullptr);
        
        Info::CPlayer_pre_check_siege_attack1372_ptr CPlayer_pre_check_siege_attack1372_next(nullptr);
        Info::CPlayer_pre_check_siege_attack1372_clbk CPlayer_pre_check_siege_attack1372_user(nullptr);
        
        Info::CPlayer_pre_check_skill_attack1374_ptr CPlayer_pre_check_skill_attack1374_next(nullptr);
        Info::CPlayer_pre_check_skill_attack1374_clbk CPlayer_pre_check_skill_attack1374_user(nullptr);
        
        Info::CPlayer_pre_check_skill_enable1376_ptr CPlayer_pre_check_skill_enable1376_next(nullptr);
        Info::CPlayer_pre_check_skill_enable1376_clbk CPlayer_pre_check_skill_enable1376_user(nullptr);
        
        Info::CPlayer_pre_check_skill_gradelimit1378_ptr CPlayer_pre_check_skill_gradelimit1378_next(nullptr);
        Info::CPlayer_pre_check_skill_gradelimit1378_clbk CPlayer_pre_check_skill_gradelimit1378_user(nullptr);
        
        Info::CPlayer_pre_check_unit_attack1380_ptr CPlayer_pre_check_unit_attack1380_next(nullptr);
        Info::CPlayer_pre_check_unit_attack1380_clbk CPlayer_pre_check_unit_attack1380_user(nullptr);
        
        Info::CPlayer_pre_check_wpactive_force_attack1382_ptr CPlayer_pre_check_wpactive_force_attack1382_next(nullptr);
        Info::CPlayer_pre_check_wpactive_force_attack1382_clbk CPlayer_pre_check_wpactive_force_attack1382_user(nullptr);
        
        Info::CPlayer_pre_check_wpactive_skill_attack1384_ptr CPlayer_pre_check_wpactive_skill_attack1384_next(nullptr);
        Info::CPlayer_pre_check_wpactive_skill_attack1384_clbk CPlayer_pre_check_wpactive_skill_attack1384_user(nullptr);
        
        Info::CPlayer_set_db_sf_effect1386_ptr CPlayer_set_db_sf_effect1386_next(nullptr);
        Info::CPlayer_set_db_sf_effect1386_clbk CPlayer_set_db_sf_effect1386_user(nullptr);
        
        Info::CPlayerapply_case_equip_std_effect1391_ptr CPlayerapply_case_equip_std_effect1391_next(nullptr);
        Info::CPlayerapply_case_equip_std_effect1391_clbk CPlayerapply_case_equip_std_effect1391_user(nullptr);
        
        Info::CPlayerapply_case_equip_upgrade_effect1393_ptr CPlayerapply_case_equip_upgrade_effect1393_next(nullptr);
        Info::CPlayerapply_case_equip_upgrade_effect1393_clbk CPlayerapply_case_equip_upgrade_effect1393_user(nullptr);
        
        Info::CPlayerapply_have_item_std_effect1395_ptr CPlayerapply_have_item_std_effect1395_next(nullptr);
        Info::CPlayerapply_have_item_std_effect1395_clbk CPlayerapply_have_item_std_effect1395_user(nullptr);
        
        Info::CPlayerapply_normal_item_std_effect1397_ptr CPlayerapply_normal_item_std_effect1397_next(nullptr);
        Info::CPlayerapply_normal_item_std_effect1397_clbk CPlayerapply_normal_item_std_effect1397_user(nullptr);
        
        Info::CPlayerdev_SetGuildGrade1399_ptr CPlayerdev_SetGuildGrade1399_next(nullptr);
        Info::CPlayerdev_SetGuildGrade1399_clbk CPlayerdev_SetGuildGrade1399_user(nullptr);
        
        Info::CPlayerdev_SetGuildGradeByGuildSerial1401_ptr CPlayerdev_SetGuildGradeByGuildSerial1401_next(nullptr);
        Info::CPlayerdev_SetGuildGradeByGuildSerial1401_clbk CPlayerdev_SetGuildGradeByGuildSerial1401_user(nullptr);
        
        Info::CPlayerdev_SetGuildGradeByName1403_ptr CPlayerdev_SetGuildGradeByName1403_next(nullptr);
        Info::CPlayerdev_SetGuildGradeByName1403_clbk CPlayerdev_SetGuildGradeByName1403_user(nullptr);
        
        Info::CPlayerdev_after_effect1405_ptr CPlayerdev_after_effect1405_next(nullptr);
        Info::CPlayerdev_after_effect1405_clbk CPlayerdev_after_effect1405_user(nullptr);
        
        Info::CPlayerdev_all_kill1407_ptr CPlayerdev_all_kill1407_next(nullptr);
        Info::CPlayerdev_all_kill1407_clbk CPlayerdev_all_kill1407_user(nullptr);
        
        Info::CPlayerdev_animus_recall_time_free1409_ptr CPlayerdev_animus_recall_time_free1409_next(nullptr);
        Info::CPlayerdev_animus_recall_time_free1409_clbk CPlayerdev_animus_recall_time_free1409_user(nullptr);
        
        Info::CPlayerdev_avator_copy1411_ptr CPlayerdev_avator_copy1411_next(nullptr);
        Info::CPlayerdev_avator_copy1411_clbk CPlayerdev_avator_copy1411_user(nullptr);
        
        Info::CPlayerdev_change_class1413_ptr CPlayerdev_change_class1413_next(nullptr);
        Info::CPlayerdev_change_class1413_clbk CPlayerdev_change_class1413_user(nullptr);
        
        Info::CPlayerdev_cont_effect_del1415_ptr CPlayerdev_cont_effect_del1415_next(nullptr);
        Info::CPlayerdev_cont_effect_del1415_clbk CPlayerdev_cont_effect_del1415_user(nullptr);
        
        Info::CPlayerdev_cont_effect_time1417_ptr CPlayerdev_cont_effect_time1417_next(nullptr);
        Info::CPlayerdev_cont_effect_time1417_clbk CPlayerdev_cont_effect_time1417_user(nullptr);
        
        Info::CPlayerdev_dalant1419_ptr CPlayerdev_dalant1419_next(nullptr);
        Info::CPlayerdev_dalant1419_clbk CPlayerdev_dalant1419_user(nullptr);
        
        Info::CPlayerdev_die1421_ptr CPlayerdev_die1421_next(nullptr);
        Info::CPlayerdev_die1421_clbk CPlayerdev_die1421_user(nullptr);
        
        Info::CPlayerdev_drop_item1423_ptr CPlayerdev_drop_item1423_next(nullptr);
        Info::CPlayerdev_drop_item1423_clbk CPlayerdev_drop_item1423_user(nullptr);
        
        Info::CPlayerdev_free_sf_by_class1425_ptr CPlayerdev_free_sf_by_class1425_next(nullptr);
        Info::CPlayerdev_free_sf_by_class1425_clbk CPlayerdev_free_sf_by_class1425_user(nullptr);
        
        Info::CPlayerdev_full_animus_gauge1427_ptr CPlayerdev_full_animus_gauge1427_next(nullptr);
        Info::CPlayerdev_full_animus_gauge1427_clbk CPlayerdev_full_animus_gauge1427_user(nullptr);
        
        Info::CPlayerdev_full_force1429_ptr CPlayerdev_full_force1429_next(nullptr);
        Info::CPlayerdev_full_force1429_clbk CPlayerdev_full_force1429_user(nullptr);
        
        Info::CPlayerdev_full_point1431_ptr CPlayerdev_full_point1431_next(nullptr);
        Info::CPlayerdev_full_point1431_clbk CPlayerdev_full_point1431_user(nullptr);
        
        Info::CPlayerdev_gold1433_ptr CPlayerdev_gold1433_next(nullptr);
        Info::CPlayerdev_gold1433_clbk CPlayerdev_gold1433_user(nullptr);
        
        Info::CPlayerdev_goto_monster1435_ptr CPlayerdev_goto_monster1435_next(nullptr);
        Info::CPlayerdev_goto_monster1435_clbk CPlayerdev_goto_monster1435_user(nullptr);
        
        Info::CPlayerdev_goto_npc1437_ptr CPlayerdev_goto_npc1437_next(nullptr);
        Info::CPlayerdev_goto_npc1437_clbk CPlayerdev_goto_npc1437_user(nullptr);
        
        Info::CPlayerdev_half_inven_amount1439_ptr CPlayerdev_half_inven_amount1439_next(nullptr);
        Info::CPlayerdev_half_inven_amount1439_clbk CPlayerdev_half_inven_amount1439_user(nullptr);
        
        Info::CPlayerdev_half_point1441_ptr CPlayerdev_half_point1441_next(nullptr);
        Info::CPlayerdev_half_point1441_clbk CPlayerdev_half_point1441_user(nullptr);
        
        Info::CPlayerdev_init_monster1443_ptr CPlayerdev_init_monster1443_next(nullptr);
        Info::CPlayerdev_init_monster1443_clbk CPlayerdev_init_monster1443_user(nullptr);
        
        Info::CPlayerdev_inven_empty1445_ptr CPlayerdev_inven_empty1445_next(nullptr);
        Info::CPlayerdev_inven_empty1445_clbk CPlayerdev_inven_empty1445_user(nullptr);
        
        Info::CPlayerdev_item_make_no_use_matrial1447_ptr CPlayerdev_item_make_no_use_matrial1447_next(nullptr);
        Info::CPlayerdev_item_make_no_use_matrial1447_clbk CPlayerdev_item_make_no_use_matrial1447_user(nullptr);
        
        Info::CPlayerdev_loot_bag1449_ptr CPlayerdev_loot_bag1449_next(nullptr);
        Info::CPlayerdev_loot_bag1449_clbk CPlayerdev_loot_bag1449_user(nullptr);
        
        Info::CPlayerdev_loot_free1451_ptr CPlayerdev_loot_free1451_next(nullptr);
        Info::CPlayerdev_loot_free1451_clbk CPlayerdev_loot_free1451_user(nullptr);
        
        Info::CPlayerdev_loot_fullitem1453_ptr CPlayerdev_loot_fullitem1453_next(nullptr);
        Info::CPlayerdev_loot_fullitem1453_clbk CPlayerdev_loot_fullitem1453_user(nullptr);
        
        Info::CPlayerdev_loot_item1455_ptr CPlayerdev_loot_item1455_next(nullptr);
        Info::CPlayerdev_loot_item1455_clbk CPlayerdev_loot_item1455_user(nullptr);
        
        Info::CPlayerdev_loot_material1457_ptr CPlayerdev_loot_material1457_next(nullptr);
        Info::CPlayerdev_loot_material1457_clbk CPlayerdev_loot_material1457_user(nullptr);
        
        Info::CPlayerdev_loot_mine1459_ptr CPlayerdev_loot_mine1459_next(nullptr);
        Info::CPlayerdev_loot_mine1459_clbk CPlayerdev_loot_mine1459_user(nullptr);
        
        Info::CPlayerdev_loot_tower1461_ptr CPlayerdev_loot_tower1461_next(nullptr);
        Info::CPlayerdev_loot_tower1461_clbk CPlayerdev_loot_tower1461_user(nullptr);
        
        Info::CPlayerdev_lv1463_ptr CPlayerdev_lv1463_next(nullptr);
        Info::CPlayerdev_lv1463_clbk CPlayerdev_lv1463_user(nullptr);
        
        Info::CPlayerdev_make_succ1465_ptr CPlayerdev_make_succ1465_next(nullptr);
        Info::CPlayerdev_make_succ1465_clbk CPlayerdev_make_succ1465_user(nullptr);
        
        Info::CPlayerdev_max_level_ext1467_ptr CPlayerdev_max_level_ext1467_next(nullptr);
        Info::CPlayerdev_max_level_ext1467_clbk CPlayerdev_max_level_ext1467_user(nullptr);
        
        Info::CPlayerdev_never_die1469_ptr CPlayerdev_never_die1469_next(nullptr);
        Info::CPlayerdev_never_die1469_clbk CPlayerdev_never_die1469_user(nullptr);
        
        Info::CPlayerdev_quest_complete1471_ptr CPlayerdev_quest_complete1471_next(nullptr);
        Info::CPlayerdev_quest_complete1471_clbk CPlayerdev_quest_complete1471_user(nullptr);
        
        Info::CPlayerdev_quest_complete_other1473_ptr CPlayerdev_quest_complete_other1473_next(nullptr);
        Info::CPlayerdev_quest_complete_other1473_clbk CPlayerdev_quest_complete_other1473_user(nullptr);
        
        Info::CPlayerdev_set_animus_exp1475_ptr CPlayerdev_set_animus_exp1475_next(nullptr);
        Info::CPlayerdev_set_animus_exp1475_clbk CPlayerdev_set_animus_exp1475_user(nullptr);
        
        Info::CPlayerdev_set_animus_lv1477_ptr CPlayerdev_set_animus_lv1477_next(nullptr);
        Info::CPlayerdev_set_animus_lv1477_clbk CPlayerdev_set_animus_lv1477_user(nullptr);
        
        Info::CPlayerdev_set_hp1479_ptr CPlayerdev_set_hp1479_next(nullptr);
        Info::CPlayerdev_set_hp1479_clbk CPlayerdev_set_hp1479_user(nullptr);
        
        Info::CPlayerdev_trap_attack_grade1481_ptr CPlayerdev_trap_attack_grade1481_next(nullptr);
        Info::CPlayerdev_trap_attack_grade1481_clbk CPlayerdev_trap_attack_grade1481_user(nullptr);
        
        Info::CPlayerdev_up_all1483_ptr CPlayerdev_up_all1483_next(nullptr);
        Info::CPlayerdev_up_all1483_clbk CPlayerdev_up_all1483_user(nullptr);
        
        Info::CPlayerdev_up_all_pt1485_ptr CPlayerdev_up_all_pt1485_next(nullptr);
        Info::CPlayerdev_up_all_pt1485_clbk CPlayerdev_up_all_pt1485_user(nullptr);
        
        Info::CPlayerdev_up_cashbag1487_ptr CPlayerdev_up_cashbag1487_next(nullptr);
        Info::CPlayerdev_up_cashbag1487_clbk CPlayerdev_up_cashbag1487_user(nullptr);
        
        Info::CPlayerdev_up_forceitem1489_ptr CPlayerdev_up_forceitem1489_next(nullptr);
        Info::CPlayerdev_up_forceitem1489_clbk CPlayerdev_up_forceitem1489_user(nullptr);
        
        Info::CPlayerdev_up_forcemastery1491_ptr CPlayerdev_up_forcemastery1491_next(nullptr);
        Info::CPlayerdev_up_forcemastery1491_clbk CPlayerdev_up_forcemastery1491_user(nullptr);
        
        Info::CPlayerdev_up_mastery1493_ptr CPlayerdev_up_mastery1493_next(nullptr);
        Info::CPlayerdev_up_mastery1493_clbk CPlayerdev_up_mastery1493_user(nullptr);
        
        Info::CPlayerdev_up_pvp1495_ptr CPlayerdev_up_pvp1495_next(nullptr);
        Info::CPlayerdev_up_pvp1495_clbk CPlayerdev_up_pvp1495_user(nullptr);
        
        Info::CPlayerdev_up_skill1497_ptr CPlayerdev_up_skill1497_next(nullptr);
        Info::CPlayerdev_up_skill1497_clbk CPlayerdev_up_skill1497_user(nullptr);
        
        Info::CPlayerdev_view_boss1499_ptr CPlayerdev_view_boss1499_next(nullptr);
        Info::CPlayerdev_view_boss1499_clbk CPlayerdev_view_boss1499_user(nullptr);
        
        Info::CPlayerdev_view_method1501_ptr CPlayerdev_view_method1501_next(nullptr);
        Info::CPlayerdev_view_method1501_clbk CPlayerdev_view_method1501_user(nullptr);
        
        Info::CPlayermake_force_attack_param1503_ptr CPlayermake_force_attack_param1503_next(nullptr);
        Info::CPlayermake_force_attack_param1503_clbk CPlayermake_force_attack_param1503_user(nullptr);
        
        Info::CPlayermake_gen_attack_param1505_ptr CPlayermake_gen_attack_param1505_next(nullptr);
        Info::CPlayermake_gen_attack_param1505_clbk CPlayermake_gen_attack_param1505_user(nullptr);
        
        Info::CPlayermake_siege_attack_param1507_ptr CPlayermake_siege_attack_param1507_next(nullptr);
        Info::CPlayermake_siege_attack_param1507_clbk CPlayermake_siege_attack_param1507_user(nullptr);
        
        Info::CPlayermake_skill_attack_param1509_ptr CPlayermake_skill_attack_param1509_next(nullptr);
        Info::CPlayermake_skill_attack_param1509_clbk CPlayermake_skill_attack_param1509_user(nullptr);
        
        Info::CPlayermake_unit_attack_param1511_ptr CPlayermake_unit_attack_param1511_next(nullptr);
        Info::CPlayermake_unit_attack_param1511_clbk CPlayermake_unit_attack_param1511_user(nullptr);
        
        Info::CPlayermake_wpactive_force_attack_param1513_ptr CPlayermake_wpactive_force_attack_param1513_next(nullptr);
        Info::CPlayermake_wpactive_force_attack_param1513_clbk CPlayermake_wpactive_force_attack_param1513_user(nullptr);
        
        Info::CPlayermake_wpactive_skill_attack_param1515_ptr CPlayermake_wpactive_skill_attack_param1515_next(nullptr);
        Info::CPlayermake_wpactive_skill_attack_param1515_clbk CPlayermake_wpactive_skill_attack_param1515_user(nullptr);
        
        Info::CPlayermgr_MaxAttackPoint1517_ptr CPlayermgr_MaxAttackPoint1517_next(nullptr);
        Info::CPlayermgr_MaxAttackPoint1517_clbk CPlayermgr_MaxAttackPoint1517_user(nullptr);
        
        Info::CPlayermgr_TrunkInit1519_ptr CPlayermgr_TrunkInit1519_next(nullptr);
        Info::CPlayermgr_TrunkInit1519_clbk CPlayermgr_TrunkInit1519_user(nullptr);
        
        Info::CPlayermgr_all_item_muzi1521_ptr CPlayermgr_all_item_muzi1521_next(nullptr);
        Info::CPlayermgr_all_item_muzi1521_clbk CPlayermgr_all_item_muzi1521_user(nullptr);
        
        Info::CPlayermgr_change_degree1523_ptr CPlayermgr_change_degree1523_next(nullptr);
        Info::CPlayermgr_change_degree1523_clbk CPlayermgr_change_degree1523_user(nullptr);
        
        Info::CPlayermgr_defense_item_grace1525_ptr CPlayermgr_defense_item_grace1525_next(nullptr);
        Info::CPlayermgr_defense_item_grace1525_clbk CPlayermgr_defense_item_grace1525_user(nullptr);
        
        Info::CPlayermgr_destroy_system_tower1527_ptr CPlayermgr_destroy_system_tower1527_next(nullptr);
        Info::CPlayermgr_destroy_system_tower1527_clbk CPlayermgr_destroy_system_tower1527_user(nullptr);
        
        Info::CPlayermgr_dungeon_pass1529_ptr CPlayermgr_dungeon_pass1529_next(nullptr);
        Info::CPlayermgr_dungeon_pass1529_clbk CPlayermgr_dungeon_pass1529_user(nullptr);
        
        Info::CPlayermgr_exit_keeper1531_ptr CPlayermgr_exit_keeper1531_next(nullptr);
        Info::CPlayermgr_exit_keeper1531_clbk CPlayermgr_exit_keeper1531_user(nullptr);
        
        Info::CPlayermgr_exit_stone1533_ptr CPlayermgr_exit_stone1533_next(nullptr);
        Info::CPlayermgr_exit_stone1533_clbk CPlayermgr_exit_stone1533_user(nullptr);
        
        Info::CPlayermgr_free_ride_ship1535_ptr CPlayermgr_free_ride_ship1535_next(nullptr);
        Info::CPlayermgr_free_ride_ship1535_clbk CPlayermgr_free_ride_ship1535_user(nullptr);
        
        Info::CPlayermgr_gotoCoordinates1537_ptr CPlayermgr_gotoCoordinates1537_next(nullptr);
        Info::CPlayermgr_gotoCoordinates1537_clbk CPlayermgr_gotoCoordinates1537_user(nullptr);
        
        Info::CPlayermgr_gotoDstCoordinates1539_ptr CPlayermgr_gotoDstCoordinates1539_next(nullptr);
        Info::CPlayermgr_gotoDstCoordinates1539_clbk CPlayermgr_gotoDstCoordinates1539_user(nullptr);
        
        Info::CPlayermgr_goto_mine1541_ptr CPlayermgr_goto_mine1541_next(nullptr);
        Info::CPlayermgr_goto_mine1541_clbk CPlayermgr_goto_mine1541_user(nullptr);
        
        Info::CPlayermgr_goto_shipport1543_ptr CPlayermgr_goto_shipport1543_next(nullptr);
        Info::CPlayermgr_goto_shipport1543_clbk CPlayermgr_goto_shipport1543_user(nullptr);
        
        Info::CPlayermgr_goto_stone1545_ptr CPlayermgr_goto_stone1545_next(nullptr);
        Info::CPlayermgr_goto_stone1545_clbk CPlayermgr_goto_stone1545_user(nullptr);
        
        Info::CPlayermgr_goto_store1547_ptr CPlayermgr_goto_store1547_next(nullptr);
        Info::CPlayermgr_goto_store1547_clbk CPlayermgr_goto_store1547_user(nullptr);
        
        Info::CPlayermgr_holykeeper_start1549_ptr CPlayermgr_holykeeper_start1549_next(nullptr);
        Info::CPlayermgr_holykeeper_start1549_clbk CPlayermgr_holykeeper_start1549_user(nullptr);
        
        Info::CPlayermgr_holystone_start1551_ptr CPlayermgr_holystone_start1551_next(nullptr);
        Info::CPlayermgr_holystone_start1551_clbk CPlayermgr_holystone_start1551_user(nullptr);
        
        Info::CPlayermgr_item_telekinesis1553_ptr CPlayermgr_item_telekinesis1553_next(nullptr);
        Info::CPlayermgr_item_telekinesis1553_clbk CPlayermgr_item_telekinesis1553_user(nullptr);
        
        Info::CPlayermgr_kick1555_ptr CPlayermgr_kick1555_next(nullptr);
        Info::CPlayermgr_kick1555_clbk CPlayermgr_kick1555_user(nullptr);
        
        Info::CPlayermgr_make_system_tower1557_ptr CPlayermgr_make_system_tower1557_next(nullptr);
        Info::CPlayermgr_make_system_tower1557_clbk CPlayermgr_make_system_tower1557_user(nullptr);
        
        Info::CPlayermgr_matchless1559_ptr CPlayermgr_matchless1559_next(nullptr);
        Info::CPlayermgr_matchless1559_clbk CPlayermgr_matchless1559_user(nullptr);
        
        Info::CPlayermgr_pass_sch_one_step1561_ptr CPlayermgr_pass_sch_one_step1561_next(nullptr);
        Info::CPlayermgr_pass_sch_one_step1561_clbk CPlayermgr_pass_sch_one_step1561_user(nullptr);
        
        Info::CPlayermgr_recall_guild_player1563_ptr CPlayermgr_recall_guild_player1563_next(nullptr);
        Info::CPlayermgr_recall_guild_player1563_clbk CPlayermgr_recall_guild_player1563_user(nullptr);
        
        Info::CPlayermgr_recall_mon1565_ptr CPlayermgr_recall_mon1565_next(nullptr);
        Info::CPlayermgr_recall_mon1565_clbk CPlayermgr_recall_mon1565_user(nullptr);
        
        Info::CPlayermgr_recall_party_player1567_ptr CPlayermgr_recall_party_player1567_next(nullptr);
        Info::CPlayermgr_recall_party_player1567_clbk CPlayermgr_recall_party_player1567_user(nullptr);
        
        Info::CPlayermgr_recall_player1569_ptr CPlayermgr_recall_player1569_next(nullptr);
        Info::CPlayermgr_recall_player1569_clbk CPlayermgr_recall_player1569_user(nullptr);
        
        Info::CPlayermgr_resurrect_player1571_ptr CPlayermgr_resurrect_player1571_next(nullptr);
        Info::CPlayermgr_resurrect_player1571_clbk CPlayermgr_resurrect_player1571_user(nullptr);
        
        Info::CPlayermgr_set_animus_attack_point1573_ptr CPlayermgr_set_animus_attack_point1573_next(nullptr);
        Info::CPlayermgr_set_animus_attack_point1573_clbk CPlayermgr_set_animus_attack_point1573_user(nullptr);
        
        Info::CPlayermgr_tracing1575_ptr CPlayermgr_tracing1575_next(nullptr);
        Info::CPlayermgr_tracing1575_clbk CPlayermgr_tracing1575_user(nullptr);
        
        Info::CPlayermgr_user_ban1577_ptr CPlayermgr_user_ban1577_next(nullptr);
        Info::CPlayermgr_user_ban1577_clbk CPlayermgr_user_ban1577_user(nullptr);
        
        Info::CPlayermgr_whisper1579_ptr CPlayermgr_whisper1579_next(nullptr);
        Info::CPlayermgr_whisper1579_clbk CPlayermgr_whisper1579_user(nullptr);
        
        Info::CPlayerpc_AddBag1581_ptr CPlayerpc_AddBag1581_next(nullptr);
        Info::CPlayerpc_AddBag1581_clbk CPlayerpc_AddBag1581_user(nullptr);
        
        Info::CPlayerpc_AlterItemSlotRequest1583_ptr CPlayerpc_AlterItemSlotRequest1583_next(nullptr);
        Info::CPlayerpc_AlterItemSlotRequest1583_clbk CPlayerpc_AlterItemSlotRequest1583_user(nullptr);
        
        Info::CPlayerpc_AlterLinkBoardSlotRequest1585_ptr CPlayerpc_AlterLinkBoardSlotRequest1585_next(nullptr);
        Info::CPlayerpc_AlterLinkBoardSlotRequest1585_clbk CPlayerpc_AlterLinkBoardSlotRequest1585_user(nullptr);
        
        Info::CPlayerpc_AlterWindowInfoRequest1587_ptr CPlayerpc_AlterWindowInfoRequest1587_next(nullptr);
        Info::CPlayerpc_AlterWindowInfoRequest1587_clbk CPlayerpc_AlterWindowInfoRequest1587_user(nullptr);
        
        Info::CPlayerpc_AnimusCommandRequest1589_ptr CPlayerpc_AnimusCommandRequest1589_next(nullptr);
        Info::CPlayerpc_AnimusCommandRequest1589_clbk CPlayerpc_AnimusCommandRequest1589_user(nullptr);
        
        Info::CPlayerpc_AnimusInvenChange1591_ptr CPlayerpc_AnimusInvenChange1591_next(nullptr);
        Info::CPlayerpc_AnimusInvenChange1591_clbk CPlayerpc_AnimusInvenChange1591_user(nullptr);
        
        Info::CPlayerpc_AnimusRecallRequest1593_ptr CPlayerpc_AnimusRecallRequest1593_next(nullptr);
        Info::CPlayerpc_AnimusRecallRequest1593_clbk CPlayerpc_AnimusRecallRequest1593_user(nullptr);
        
        Info::CPlayerpc_AnimusReturnRequest1595_ptr CPlayerpc_AnimusReturnRequest1595_next(nullptr);
        Info::CPlayerpc_AnimusReturnRequest1595_clbk CPlayerpc_AnimusReturnRequest1595_user(nullptr);
        
        Info::CPlayerpc_AnimusTargetRequest1597_ptr CPlayerpc_AnimusTargetRequest1597_next(nullptr);
        Info::CPlayerpc_AnimusTargetRequest1597_clbk CPlayerpc_AnimusTargetRequest1597_user(nullptr);
        
        Info::CPlayerpc_AwayPartyJoinInvitationAnswer1599_ptr CPlayerpc_AwayPartyJoinInvitationAnswer1599_next(nullptr);
        Info::CPlayerpc_AwayPartyJoinInvitationAnswer1599_clbk CPlayerpc_AwayPartyJoinInvitationAnswer1599_user(nullptr);
        
        Info::CPlayerpc_AwaypartyInvitationRequest1601_ptr CPlayerpc_AwaypartyInvitationRequest1601_next(nullptr);
        Info::CPlayerpc_AwaypartyInvitationRequest1601_clbk CPlayerpc_AwaypartyInvitationRequest1601_user(nullptr);
        
        Info::CPlayerpc_BackTowerRequest1603_ptr CPlayerpc_BackTowerRequest1603_next(nullptr);
        Info::CPlayerpc_BackTowerRequest1603_clbk CPlayerpc_BackTowerRequest1603_user(nullptr);
        
        Info::CPlayerpc_BackTrapRequest1605_ptr CPlayerpc_BackTrapRequest1605_next(nullptr);
        Info::CPlayerpc_BackTrapRequest1605_clbk CPlayerpc_BackTrapRequest1605_user(nullptr);
        
        Info::CPlayerpc_BillingInfoRequest1607_ptr CPlayerpc_BillingInfoRequest1607_next(nullptr);
        Info::CPlayerpc_BillingInfoRequest1607_clbk CPlayerpc_BillingInfoRequest1607_user(nullptr);
        
        Info::CPlayerpc_BriefPass1609_ptr CPlayerpc_BriefPass1609_next(nullptr);
        Info::CPlayerpc_BriefPass1609_clbk CPlayerpc_BriefPass1609_user(nullptr);
        
        Info::CPlayerpc_BuddyAddAnswer1611_ptr CPlayerpc_BuddyAddAnswer1611_next(nullptr);
        Info::CPlayerpc_BuddyAddAnswer1611_clbk CPlayerpc_BuddyAddAnswer1611_user(nullptr);
        
        Info::CPlayerpc_BuddyAddRequest1613_ptr CPlayerpc_BuddyAddRequest1613_next(nullptr);
        Info::CPlayerpc_BuddyAddRequest1613_clbk CPlayerpc_BuddyAddRequest1613_user(nullptr);
        
        Info::CPlayerpc_BuddyDelRequest1615_ptr CPlayerpc_BuddyDelRequest1615_next(nullptr);
        Info::CPlayerpc_BuddyDelRequest1615_clbk CPlayerpc_BuddyDelRequest1615_user(nullptr);
        
        Info::CPlayerpc_BuddyDownloadRequest1617_ptr CPlayerpc_BuddyDownloadRequest1617_next(nullptr);
        Info::CPlayerpc_BuddyDownloadRequest1617_clbk CPlayerpc_BuddyDownloadRequest1617_user(nullptr);
        
        Info::CPlayerpc_BuyItemStore1619_ptr CPlayerpc_BuyItemStore1619_next(nullptr);
        Info::CPlayerpc_BuyItemStore1619_clbk CPlayerpc_BuyItemStore1619_user(nullptr);
        
        Info::CPlayerpc_CanSelectClassRequest1621_ptr CPlayerpc_CanSelectClassRequest1621_next(nullptr);
        Info::CPlayerpc_CanSelectClassRequest1621_clbk CPlayerpc_CanSelectClassRequest1621_user(nullptr);
        
        Info::CPlayerpc_CastVoteRequest1623_ptr CPlayerpc_CastVoteRequest1623_next(nullptr);
        Info::CPlayerpc_CastVoteRequest1623_clbk CPlayerpc_CastVoteRequest1623_user(nullptr);
        
        Info::CPlayerpc_ChangeModeType1625_ptr CPlayerpc_ChangeModeType1625_next(nullptr);
        Info::CPlayerpc_ChangeModeType1625_clbk CPlayerpc_ChangeModeType1625_user(nullptr);
        
        Info::CPlayerpc_CharacterRenameCash1627_ptr CPlayerpc_CharacterRenameCash1627_next(nullptr);
        Info::CPlayerpc_CharacterRenameCash1627_clbk CPlayerpc_CharacterRenameCash1627_user(nullptr);
        
        Info::CPlayerpc_CharacterRenameCheck1629_ptr CPlayerpc_CharacterRenameCheck1629_next(nullptr);
        Info::CPlayerpc_CharacterRenameCheck1629_clbk CPlayerpc_CharacterRenameCheck1629_user(nullptr);
        
        Info::CPlayerpc_ChatAllRequest1631_ptr CPlayerpc_ChatAllRequest1631_next(nullptr);
        Info::CPlayerpc_ChatAllRequest1631_clbk CPlayerpc_ChatAllRequest1631_user(nullptr);
        
        Info::CPlayerpc_ChatCircleRequest1633_ptr CPlayerpc_ChatCircleRequest1633_next(nullptr);
        Info::CPlayerpc_ChatCircleRequest1633_clbk CPlayerpc_ChatCircleRequest1633_user(nullptr);
        
        Info::CPlayerpc_ChatFarRequest1635_ptr CPlayerpc_ChatFarRequest1635_next(nullptr);
        Info::CPlayerpc_ChatFarRequest1635_clbk CPlayerpc_ChatFarRequest1635_user(nullptr);
        
        Info::CPlayerpc_ChatGmNoticeRequest1637_ptr CPlayerpc_ChatGmNoticeRequest1637_next(nullptr);
        Info::CPlayerpc_ChatGmNoticeRequest1637_clbk CPlayerpc_ChatGmNoticeRequest1637_user(nullptr);
        
        Info::CPlayerpc_ChatGuildEstSenRequest1639_ptr CPlayerpc_ChatGuildEstSenRequest1639_next(nullptr);
        Info::CPlayerpc_ChatGuildEstSenRequest1639_clbk CPlayerpc_ChatGuildEstSenRequest1639_user(nullptr);
        
        Info::CPlayerpc_ChatGuildRequest1641_ptr CPlayerpc_ChatGuildRequest1641_next(nullptr);
        Info::CPlayerpc_ChatGuildRequest1641_clbk CPlayerpc_ChatGuildRequest1641_user(nullptr);
        
        Info::CPlayerpc_ChatMapRequest1643_ptr CPlayerpc_ChatMapRequest1643_next(nullptr);
        Info::CPlayerpc_ChatMapRequest1643_clbk CPlayerpc_ChatMapRequest1643_user(nullptr);
        
        Info::CPlayerpc_ChatMgrWhisperRequest1645_ptr CPlayerpc_ChatMgrWhisperRequest1645_next(nullptr);
        Info::CPlayerpc_ChatMgrWhisperRequest1645_clbk CPlayerpc_ChatMgrWhisperRequest1645_user(nullptr);
        
        Info::CPlayerpc_ChatMultiFarRequest1647_ptr CPlayerpc_ChatMultiFarRequest1647_next(nullptr);
        Info::CPlayerpc_ChatMultiFarRequest1647_clbk CPlayerpc_ChatMultiFarRequest1647_user(nullptr);
        
        Info::CPlayerpc_ChatOperatorRequest1649_ptr CPlayerpc_ChatOperatorRequest1649_next(nullptr);
        Info::CPlayerpc_ChatOperatorRequest1649_clbk CPlayerpc_ChatOperatorRequest1649_user(nullptr);
        
        Info::CPlayerpc_ChatPartyRequest1651_ptr CPlayerpc_ChatPartyRequest1651_next(nullptr);
        Info::CPlayerpc_ChatPartyRequest1651_clbk CPlayerpc_ChatPartyRequest1651_user(nullptr);
        
        Info::CPlayerpc_ChatRaceBossCryRequest1653_ptr CPlayerpc_ChatRaceBossCryRequest1653_next(nullptr);
        Info::CPlayerpc_ChatRaceBossCryRequest1653_clbk CPlayerpc_ChatRaceBossCryRequest1653_user(nullptr);
        
        Info::CPlayerpc_ChatRaceBossRequest1655_ptr CPlayerpc_ChatRaceBossRequest1655_next(nullptr);
        Info::CPlayerpc_ChatRaceBossRequest1655_clbk CPlayerpc_ChatRaceBossRequest1655_user(nullptr);
        
        Info::CPlayerpc_ChatRaceRequest1657_ptr CPlayerpc_ChatRaceRequest1657_next(nullptr);
        Info::CPlayerpc_ChatRaceRequest1657_clbk CPlayerpc_ChatRaceRequest1657_user(nullptr);
        
        Info::CPlayerpc_ChatRePresentationRequest1659_ptr CPlayerpc_ChatRePresentationRequest1659_next(nullptr);
        Info::CPlayerpc_ChatRePresentationRequest1659_clbk CPlayerpc_ChatRePresentationRequest1659_user(nullptr);
        
        Info::CPlayerpc_ChatTradeRequestMsg1661_ptr CPlayerpc_ChatTradeRequestMsg1661_next(nullptr);
        Info::CPlayerpc_ChatTradeRequestMsg1661_clbk CPlayerpc_ChatTradeRequestMsg1661_user(nullptr);
        
        Info::CPlayerpc_ClassSkillRequest1663_ptr CPlayerpc_ClassSkillRequest1663_next(nullptr);
        Info::CPlayerpc_ClassSkillRequest1663_clbk CPlayerpc_ClassSkillRequest1663_user(nullptr);
        
        Info::CPlayerpc_CombineItem1665_ptr CPlayerpc_CombineItem1665_next(nullptr);
        Info::CPlayerpc_CombineItem1665_clbk CPlayerpc_CombineItem1665_user(nullptr);
        
        Info::CPlayerpc_CombineItemEx1667_ptr CPlayerpc_CombineItemEx1667_next(nullptr);
        Info::CPlayerpc_CombineItemEx1667_clbk CPlayerpc_CombineItemEx1667_user(nullptr);
        
        Info::CPlayerpc_CombineItemExAccept1669_ptr CPlayerpc_CombineItemExAccept1669_next(nullptr);
        Info::CPlayerpc_CombineItemExAccept1669_clbk CPlayerpc_CombineItemExAccept1669_user(nullptr);
        
        Info::CPlayerpc_CuttingComplete1671_ptr CPlayerpc_CuttingComplete1671_next(nullptr);
        Info::CPlayerpc_CuttingComplete1671_clbk CPlayerpc_CuttingComplete1671_user(nullptr);
        
        Info::CPlayerpc_DTradeAddRequest1673_ptr CPlayerpc_DTradeAddRequest1673_next(nullptr);
        Info::CPlayerpc_DTradeAddRequest1673_clbk CPlayerpc_DTradeAddRequest1673_user(nullptr);
        
        Info::CPlayerpc_DTradeAnswerRequest1675_ptr CPlayerpc_DTradeAnswerRequest1675_next(nullptr);
        Info::CPlayerpc_DTradeAnswerRequest1675_clbk CPlayerpc_DTradeAnswerRequest1675_user(nullptr);
        
        Info::CPlayerpc_DTradeAskRequest1677_ptr CPlayerpc_DTradeAskRequest1677_next(nullptr);
        Info::CPlayerpc_DTradeAskRequest1677_clbk CPlayerpc_DTradeAskRequest1677_user(nullptr);
        
        Info::CPlayerpc_DTradeBetRequest1679_ptr CPlayerpc_DTradeBetRequest1679_next(nullptr);
        Info::CPlayerpc_DTradeBetRequest1679_clbk CPlayerpc_DTradeBetRequest1679_user(nullptr);
        
        Info::CPlayerpc_DTradeCancleRequest1681_ptr CPlayerpc_DTradeCancleRequest1681_next(nullptr);
        Info::CPlayerpc_DTradeCancleRequest1681_clbk CPlayerpc_DTradeCancleRequest1681_user(nullptr);
        
        Info::CPlayerpc_DTradeDelRequest1683_ptr CPlayerpc_DTradeDelRequest1683_next(nullptr);
        Info::CPlayerpc_DTradeDelRequest1683_clbk CPlayerpc_DTradeDelRequest1683_user(nullptr);
        
        Info::CPlayerpc_DTradeLockRequest1685_ptr CPlayerpc_DTradeLockRequest1685_next(nullptr);
        Info::CPlayerpc_DTradeLockRequest1685_clbk CPlayerpc_DTradeLockRequest1685_user(nullptr);
        
        Info::CPlayerpc_DTradeOKRequest1687_ptr CPlayerpc_DTradeOKRequest1687_next(nullptr);
        Info::CPlayerpc_DTradeOKRequest1687_clbk CPlayerpc_DTradeOKRequest1687_user(nullptr);
        
        Info::CPlayerpc_DarkHoleAnswerReenterRequest1689_ptr CPlayerpc_DarkHoleAnswerReenterRequest1689_next(nullptr);
        Info::CPlayerpc_DarkHoleAnswerReenterRequest1689_clbk CPlayerpc_DarkHoleAnswerReenterRequest1689_user(nullptr);
        
        Info::CPlayerpc_DarkHoleClearOutRequest1691_ptr CPlayerpc_DarkHoleClearOutRequest1691_next(nullptr);
        Info::CPlayerpc_DarkHoleClearOutRequest1691_clbk CPlayerpc_DarkHoleClearOutRequest1691_user(nullptr);
        
        Info::CPlayerpc_DarkHoleEnterRequest1693_ptr CPlayerpc_DarkHoleEnterRequest1693_next(nullptr);
        Info::CPlayerpc_DarkHoleEnterRequest1693_clbk CPlayerpc_DarkHoleEnterRequest1693_user(nullptr);
        
        Info::CPlayerpc_DarkHoleGiveupOutRequest1695_ptr CPlayerpc_DarkHoleGiveupOutRequest1695_next(nullptr);
        Info::CPlayerpc_DarkHoleGiveupOutRequest1695_clbk CPlayerpc_DarkHoleGiveupOutRequest1695_user(nullptr);
        
        Info::CPlayerpc_DarkHoleOpenRequest1697_ptr CPlayerpc_DarkHoleOpenRequest1697_next(nullptr);
        Info::CPlayerpc_DarkHoleOpenRequest1697_clbk CPlayerpc_DarkHoleOpenRequest1697_user(nullptr);
        
        Info::CPlayerpc_DowngradeItem1699_ptr CPlayerpc_DowngradeItem1699_next(nullptr);
        Info::CPlayerpc_DowngradeItem1699_clbk CPlayerpc_DowngradeItem1699_user(nullptr);
        
        Info::CPlayerpc_EmbellishPart1701_ptr CPlayerpc_EmbellishPart1701_next(nullptr);
        Info::CPlayerpc_EmbellishPart1701_clbk CPlayerpc_EmbellishPart1701_user(nullptr);
        
        Info::CPlayerpc_EquipPart1703_ptr CPlayerpc_EquipPart1703_next(nullptr);
        Info::CPlayerpc_EquipPart1703_clbk CPlayerpc_EquipPart1703_user(nullptr);
        
        Info::CPlayerpc_ExchangeDalantForGold1705_ptr CPlayerpc_ExchangeDalantForGold1705_next(nullptr);
        Info::CPlayerpc_ExchangeDalantForGold1705_clbk CPlayerpc_ExchangeDalantForGold1705_user(nullptr);
        
        Info::CPlayerpc_ExchangeGoldForDalant1707_ptr CPlayerpc_ExchangeGoldForDalant1707_next(nullptr);
        Info::CPlayerpc_ExchangeGoldForDalant1707_clbk CPlayerpc_ExchangeGoldForDalant1707_user(nullptr);
        
        Info::CPlayerpc_ExchangeGoldForPvP1709_ptr CPlayerpc_ExchangeGoldForPvP1709_next(nullptr);
        Info::CPlayerpc_ExchangeGoldForPvP1709_clbk CPlayerpc_ExchangeGoldForPvP1709_user(nullptr);
        
        Info::CPlayerpc_ExchangeItem1711_ptr CPlayerpc_ExchangeItem1711_next(nullptr);
        Info::CPlayerpc_ExchangeItem1711_clbk CPlayerpc_ExchangeItem1711_user(nullptr);
        
        Info::CPlayerpc_ExitWorldRequest1713_ptr CPlayerpc_ExitWorldRequest1713_next(nullptr);
        Info::CPlayerpc_ExitWorldRequest1713_clbk CPlayerpc_ExitWorldRequest1713_user(nullptr);
        
        Info::CPlayerpc_ForceInvenChange1715_ptr CPlayerpc_ForceInvenChange1715_next(nullptr);
        Info::CPlayerpc_ForceInvenChange1715_clbk CPlayerpc_ForceInvenChange1715_user(nullptr);
        
        Info::CPlayerpc_ForceRequest1717_ptr CPlayerpc_ForceRequest1717_next(nullptr);
        Info::CPlayerpc_ForceRequest1717_clbk CPlayerpc_ForceRequest1717_user(nullptr);
        
        Info::CPlayerpc_GestureRequest1719_ptr CPlayerpc_GestureRequest1719_next(nullptr);
        Info::CPlayerpc_GestureRequest1719_clbk CPlayerpc_GestureRequest1719_user(nullptr);
        
        Info::CPlayerpc_GiveItem1721_ptr CPlayerpc_GiveItem1721_next(nullptr);
        Info::CPlayerpc_GiveItem1721_clbk CPlayerpc_GiveItem1721_user(nullptr);
        
        Info::CPlayerpc_GotoAvatorRequest1723_ptr CPlayerpc_GotoAvatorRequest1723_next(nullptr);
        Info::CPlayerpc_GotoAvatorRequest1723_clbk CPlayerpc_GotoAvatorRequest1723_user(nullptr);
        
        Info::CPlayerpc_GotoBasePortalRequest1725_ptr CPlayerpc_GotoBasePortalRequest1725_next(nullptr);
        Info::CPlayerpc_GotoBasePortalRequest1725_clbk CPlayerpc_GotoBasePortalRequest1725_user(nullptr);
        
        Info::CPlayerpc_GuildBattleBlock1727_ptr CPlayerpc_GuildBattleBlock1727_next(nullptr);
        Info::CPlayerpc_GuildBattleBlock1727_clbk CPlayerpc_GuildBattleBlock1727_user(nullptr);
        
        Info::CPlayerpc_GuildCancelSuggestRequest1729_ptr CPlayerpc_GuildCancelSuggestRequest1729_next(nullptr);
        Info::CPlayerpc_GuildCancelSuggestRequest1729_clbk CPlayerpc_GuildCancelSuggestRequest1729_user(nullptr);
        
        Info::CPlayerpc_GuildDownLoadRequest1731_ptr CPlayerpc_GuildDownLoadRequest1731_next(nullptr);
        Info::CPlayerpc_GuildDownLoadRequest1731_clbk CPlayerpc_GuildDownLoadRequest1731_user(nullptr);
        
        Info::CPlayerpc_GuildEstablishRequest1733_ptr CPlayerpc_GuildEstablishRequest1733_next(nullptr);
        Info::CPlayerpc_GuildEstablishRequest1733_clbk CPlayerpc_GuildEstablishRequest1733_user(nullptr);
        
        Info::CPlayerpc_GuildHonorListRequest1735_ptr CPlayerpc_GuildHonorListRequest1735_next(nullptr);
        Info::CPlayerpc_GuildHonorListRequest1735_clbk CPlayerpc_GuildHonorListRequest1735_user(nullptr);
        
        Info::CPlayerpc_GuildJoinAcceptRequest1737_ptr CPlayerpc_GuildJoinAcceptRequest1737_next(nullptr);
        Info::CPlayerpc_GuildJoinAcceptRequest1737_clbk CPlayerpc_GuildJoinAcceptRequest1737_user(nullptr);
        
        Info::CPlayerpc_GuildJoinApplyCancelRequest1739_ptr CPlayerpc_GuildJoinApplyCancelRequest1739_next(nullptr);
        Info::CPlayerpc_GuildJoinApplyCancelRequest1739_clbk CPlayerpc_GuildJoinApplyCancelRequest1739_user(nullptr);
        
        Info::CPlayerpc_GuildJoinApplyRequest1741_ptr CPlayerpc_GuildJoinApplyRequest1741_next(nullptr);
        Info::CPlayerpc_GuildJoinApplyRequest1741_clbk CPlayerpc_GuildJoinApplyRequest1741_user(nullptr);
        
        Info::CPlayerpc_GuildListRequest1743_ptr CPlayerpc_GuildListRequest1743_next(nullptr);
        Info::CPlayerpc_GuildListRequest1743_clbk CPlayerpc_GuildListRequest1743_user(nullptr);
        
        Info::CPlayerpc_GuildManageRequest1745_ptr CPlayerpc_GuildManageRequest1745_next(nullptr);
        Info::CPlayerpc_GuildManageRequest1745_clbk CPlayerpc_GuildManageRequest1745_user(nullptr);
        
        Info::CPlayerpc_GuildNextHonorListRequest1747_ptr CPlayerpc_GuildNextHonorListRequest1747_next(nullptr);
        Info::CPlayerpc_GuildNextHonorListRequest1747_clbk CPlayerpc_GuildNextHonorListRequest1747_user(nullptr);
        
        Info::CPlayerpc_GuildOfferSuggestRequest1749_ptr CPlayerpc_GuildOfferSuggestRequest1749_next(nullptr);
        Info::CPlayerpc_GuildOfferSuggestRequest1749_clbk CPlayerpc_GuildOfferSuggestRequest1749_user(nullptr);
        
        Info::CPlayerpc_GuildPushMoneyRequest1751_ptr CPlayerpc_GuildPushMoneyRequest1751_next(nullptr);
        Info::CPlayerpc_GuildPushMoneyRequest1751_clbk CPlayerpc_GuildPushMoneyRequest1751_user(nullptr);
        
        Info::CPlayerpc_GuildQueryInfoRequest1753_ptr CPlayerpc_GuildQueryInfoRequest1753_next(nullptr);
        Info::CPlayerpc_GuildQueryInfoRequest1753_clbk CPlayerpc_GuildQueryInfoRequest1753_user(nullptr);
        
        Info::CPlayerpc_GuildRoomEnterRequest1755_ptr CPlayerpc_GuildRoomEnterRequest1755_next(nullptr);
        Info::CPlayerpc_GuildRoomEnterRequest1755_clbk CPlayerpc_GuildRoomEnterRequest1755_user(nullptr);
        
        Info::CPlayerpc_GuildRoomOutRequest1757_ptr CPlayerpc_GuildRoomOutRequest1757_next(nullptr);
        Info::CPlayerpc_GuildRoomOutRequest1757_clbk CPlayerpc_GuildRoomOutRequest1757_user(nullptr);
        
        Info::CPlayerpc_GuildRoomRentRequest1759_ptr CPlayerpc_GuildRoomRentRequest1759_next(nullptr);
        Info::CPlayerpc_GuildRoomRentRequest1759_clbk CPlayerpc_GuildRoomRentRequest1759_user(nullptr);
        
        Info::CPlayerpc_GuildRoomRestTimeRequest1761_ptr CPlayerpc_GuildRoomRestTimeRequest1761_next(nullptr);
        Info::CPlayerpc_GuildRoomRestTimeRequest1761_clbk CPlayerpc_GuildRoomRestTimeRequest1761_user(nullptr);
        
        Info::CPlayerpc_GuildSelfLeaveRequest1763_ptr CPlayerpc_GuildSelfLeaveRequest1763_next(nullptr);
        Info::CPlayerpc_GuildSelfLeaveRequest1763_clbk CPlayerpc_GuildSelfLeaveRequest1763_user(nullptr);
        
        Info::CPlayerpc_GuildSetHonorRequest1765_ptr CPlayerpc_GuildSetHonorRequest1765_next(nullptr);
        Info::CPlayerpc_GuildSetHonorRequest1765_clbk CPlayerpc_GuildSetHonorRequest1765_user(nullptr);
        
        Info::CPlayerpc_GuildVoteRequest1767_ptr CPlayerpc_GuildVoteRequest1767_next(nullptr);
        Info::CPlayerpc_GuildVoteRequest1767_clbk CPlayerpc_GuildVoteRequest1767_user(nullptr);
        
        Info::CPlayerpc_InitClass1769_ptr CPlayerpc_InitClass1769_next(nullptr);
        Info::CPlayerpc_InitClass1769_clbk CPlayerpc_InitClass1769_user(nullptr);
        
        Info::CPlayerpc_InitClassRequest1771_ptr CPlayerpc_InitClassRequest1771_next(nullptr);
        Info::CPlayerpc_InitClassRequest1771_clbk CPlayerpc_InitClassRequest1771_user(nullptr);
        
        Info::CPlayerpc_LimitItemNumRequest1773_ptr CPlayerpc_LimitItemNumRequest1773_next(nullptr);
        Info::CPlayerpc_LimitItemNumRequest1773_clbk CPlayerpc_LimitItemNumRequest1773_user(nullptr);
        
        Info::CPlayerpc_LinkBoardRequest1775_ptr CPlayerpc_LinkBoardRequest1775_next(nullptr);
        Info::CPlayerpc_LinkBoardRequest1775_clbk CPlayerpc_LinkBoardRequest1775_user(nullptr);
        
        Info::CPlayerpc_MacroUpdate1777_ptr CPlayerpc_MacroUpdate1777_next(nullptr);
        Info::CPlayerpc_MacroUpdate1777_clbk CPlayerpc_MacroUpdate1777_user(nullptr);
        
        Info::CPlayerpc_MakeItem1779_ptr CPlayerpc_MakeItem1779_next(nullptr);
        Info::CPlayerpc_MakeItem1779_clbk CPlayerpc_MakeItem1779_user(nullptr);
        
        Info::CPlayerpc_MakeTowerRequest1781_ptr CPlayerpc_MakeTowerRequest1781_next(nullptr);
        Info::CPlayerpc_MakeTowerRequest1781_clbk CPlayerpc_MakeTowerRequest1781_user(nullptr);
        
        Info::CPlayerpc_MakeTrapRequest1783_ptr CPlayerpc_MakeTrapRequest1783_next(nullptr);
        Info::CPlayerpc_MakeTrapRequest1783_clbk CPlayerpc_MakeTrapRequest1783_user(nullptr);
        
        Info::CPlayerpc_MineCancle1785_ptr CPlayerpc_MineCancle1785_next(nullptr);
        Info::CPlayerpc_MineCancle1785_clbk CPlayerpc_MineCancle1785_user(nullptr);
        
        Info::CPlayerpc_MineComplete1787_ptr CPlayerpc_MineComplete1787_next(nullptr);
        Info::CPlayerpc_MineComplete1787_clbk CPlayerpc_MineComplete1787_user(nullptr);
        
        Info::CPlayerpc_MineStart1789_ptr CPlayerpc_MineStart1789_next(nullptr);
        Info::CPlayerpc_MineStart1789_clbk CPlayerpc_MineStart1789_user(nullptr);
        
        Info::CPlayerpc_MoveModeChangeRequest1791_ptr CPlayerpc_MoveModeChangeRequest1791_next(nullptr);
        Info::CPlayerpc_MoveModeChangeRequest1791_clbk CPlayerpc_MoveModeChangeRequest1791_user(nullptr);
        
        Info::CPlayerpc_MoveNext1793_ptr CPlayerpc_MoveNext1793_next(nullptr);
        Info::CPlayerpc_MoveNext1793_clbk CPlayerpc_MoveNext1793_user(nullptr);
        
        Info::CPlayerpc_MovePortal1795_ptr CPlayerpc_MovePortal1795_next(nullptr);
        Info::CPlayerpc_MovePortal1795_clbk CPlayerpc_MovePortal1795_user(nullptr);
        
        Info::CPlayerpc_MoveStop1797_ptr CPlayerpc_MoveStop1797_next(nullptr);
        Info::CPlayerpc_MoveStop1797_clbk CPlayerpc_MoveStop1797_user(nullptr);
        
        Info::CPlayerpc_MoveToOwnStoneMapRequest1799_ptr CPlayerpc_MoveToOwnStoneMapRequest1799_next(nullptr);
        Info::CPlayerpc_MoveToOwnStoneMapRequest1799_clbk CPlayerpc_MoveToOwnStoneMapRequest1799_user(nullptr);
        
        Info::CPlayerpc_NPCLinkCheckItemRequest1801_ptr CPlayerpc_NPCLinkCheckItemRequest1801_next(nullptr);
        Info::CPlayerpc_NPCLinkCheckItemRequest1801_clbk CPlayerpc_NPCLinkCheckItemRequest1801_user(nullptr);
        
        Info::CPlayerpc_NPCLinkCheckItemRequest_Check1803_ptr CPlayerpc_NPCLinkCheckItemRequest_Check1803_next(nullptr);
        Info::CPlayerpc_NPCLinkCheckItemRequest_Check1803_clbk CPlayerpc_NPCLinkCheckItemRequest_Check1803_user(nullptr);
        
        Info::CPlayerpc_NPCLinkCheckItemRequest_Use1805_ptr CPlayerpc_NPCLinkCheckItemRequest_Use1805_next(nullptr);
        Info::CPlayerpc_NPCLinkCheckItemRequest_Use1805_clbk CPlayerpc_NPCLinkCheckItemRequest_Use1805_user(nullptr);
        
        Info::CPlayerpc_NewPosStart1807_ptr CPlayerpc_NewPosStart1807_next(nullptr);
        Info::CPlayerpc_NewPosStart1807_clbk CPlayerpc_NewPosStart1807_user(nullptr);
        
        Info::CPlayerpc_NotifyRaceBossCryMsg1809_ptr CPlayerpc_NotifyRaceBossCryMsg1809_next(nullptr);
        Info::CPlayerpc_NotifyRaceBossCryMsg1809_clbk CPlayerpc_NotifyRaceBossCryMsg1809_user(nullptr);
        
        Info::CPlayerpc_NuclearAfterEffect1811_ptr CPlayerpc_NuclearAfterEffect1811_next(nullptr);
        Info::CPlayerpc_NuclearAfterEffect1811_clbk CPlayerpc_NuclearAfterEffect1811_user(nullptr);
        
        Info::CPlayerpc_OffPart1813_ptr CPlayerpc_OffPart1813_next(nullptr);
        Info::CPlayerpc_OffPart1813_clbk CPlayerpc_OffPart1813_user(nullptr);
        
        Info::CPlayerpc_OreCutting1815_ptr CPlayerpc_OreCutting1815_next(nullptr);
        Info::CPlayerpc_OreCutting1815_clbk CPlayerpc_OreCutting1815_user(nullptr);
        
        Info::CPlayerpc_OreIntoBag1817_ptr CPlayerpc_OreIntoBag1817_next(nullptr);
        Info::CPlayerpc_OreIntoBag1817_clbk CPlayerpc_OreIntoBag1817_user(nullptr);
        
        Info::CPlayerpc_PartyAlterLootShareReqeuest1819_ptr CPlayerpc_PartyAlterLootShareReqeuest1819_next(nullptr);
        Info::CPlayerpc_PartyAlterLootShareReqeuest1819_clbk CPlayerpc_PartyAlterLootShareReqeuest1819_user(nullptr);
        
        Info::CPlayerpc_PartyDisJointReqeuest1821_ptr CPlayerpc_PartyDisJointReqeuest1821_next(nullptr);
        Info::CPlayerpc_PartyDisJointReqeuest1821_clbk CPlayerpc_PartyDisJointReqeuest1821_user(nullptr);
        
        Info::CPlayerpc_PartyJoinApplication1823_ptr CPlayerpc_PartyJoinApplication1823_next(nullptr);
        Info::CPlayerpc_PartyJoinApplication1823_clbk CPlayerpc_PartyJoinApplication1823_user(nullptr);
        
        Info::CPlayerpc_PartyJoinApplicationAnswer1825_ptr CPlayerpc_PartyJoinApplicationAnswer1825_next(nullptr);
        Info::CPlayerpc_PartyJoinApplicationAnswer1825_clbk CPlayerpc_PartyJoinApplicationAnswer1825_user(nullptr);
        
        Info::CPlayerpc_PartyJoinInvitation1827_ptr CPlayerpc_PartyJoinInvitation1827_next(nullptr);
        Info::CPlayerpc_PartyJoinInvitation1827_clbk CPlayerpc_PartyJoinInvitation1827_user(nullptr);
        
        Info::CPlayerpc_PartyJoinInvitationAnswer1829_ptr CPlayerpc_PartyJoinInvitationAnswer1829_next(nullptr);
        Info::CPlayerpc_PartyJoinInvitationAnswer1829_clbk CPlayerpc_PartyJoinInvitationAnswer1829_user(nullptr);
        
        Info::CPlayerpc_PartyLeaveCompulsionReqeuest1831_ptr CPlayerpc_PartyLeaveCompulsionReqeuest1831_next(nullptr);
        Info::CPlayerpc_PartyLeaveCompulsionReqeuest1831_clbk CPlayerpc_PartyLeaveCompulsionReqeuest1831_user(nullptr);
        
        Info::CPlayerpc_PartyLeaveSelfReqeuest1833_ptr CPlayerpc_PartyLeaveSelfReqeuest1833_next(nullptr);
        Info::CPlayerpc_PartyLeaveSelfReqeuest1833_clbk CPlayerpc_PartyLeaveSelfReqeuest1833_user(nullptr);
        
        Info::CPlayerpc_PartyLockReqeuest1835_ptr CPlayerpc_PartyLockReqeuest1835_next(nullptr);
        Info::CPlayerpc_PartyLockReqeuest1835_clbk CPlayerpc_PartyLockReqeuest1835_user(nullptr);
        
        Info::CPlayerpc_PartyReqBlock1837_ptr CPlayerpc_PartyReqBlock1837_next(nullptr);
        Info::CPlayerpc_PartyReqBlock1837_clbk CPlayerpc_PartyReqBlock1837_user(nullptr);
        
        Info::CPlayerpc_PartySuccessionReqeuest1839_ptr CPlayerpc_PartySuccessionReqeuest1839_next(nullptr);
        Info::CPlayerpc_PartySuccessionReqeuest1839_clbk CPlayerpc_PartySuccessionReqeuest1839_user(nullptr);
        
        Info::CPlayerpc_PlayAttack_Force1841_ptr CPlayerpc_PlayAttack_Force1841_next(nullptr);
        Info::CPlayerpc_PlayAttack_Force1841_clbk CPlayerpc_PlayAttack_Force1841_user(nullptr);
        
        Info::CPlayerpc_PlayAttack_Gen1843_ptr CPlayerpc_PlayAttack_Gen1843_next(nullptr);
        Info::CPlayerpc_PlayAttack_Gen1843_clbk CPlayerpc_PlayAttack_Gen1843_user(nullptr);
        
        Info::CPlayerpc_PlayAttack_SelfDestruction1845_ptr CPlayerpc_PlayAttack_SelfDestruction1845_next(nullptr);
        Info::CPlayerpc_PlayAttack_SelfDestruction1845_clbk CPlayerpc_PlayAttack_SelfDestruction1845_user(nullptr);
        
        Info::CPlayerpc_PlayAttack_Siege1847_ptr CPlayerpc_PlayAttack_Siege1847_next(nullptr);
        Info::CPlayerpc_PlayAttack_Siege1847_clbk CPlayerpc_PlayAttack_Siege1847_user(nullptr);
        
        Info::CPlayerpc_PlayAttack_Skill1849_ptr CPlayerpc_PlayAttack_Skill1849_next(nullptr);
        Info::CPlayerpc_PlayAttack_Skill1849_clbk CPlayerpc_PlayAttack_Skill1849_user(nullptr);
        
        Info::CPlayerpc_PlayAttack_Test1851_ptr CPlayerpc_PlayAttack_Test1851_next(nullptr);
        Info::CPlayerpc_PlayAttack_Test1851_clbk CPlayerpc_PlayAttack_Test1851_user(nullptr);
        
        Info::CPlayerpc_PlayAttack_Unit1853_ptr CPlayerpc_PlayAttack_Unit1853_next(nullptr);
        Info::CPlayerpc_PlayAttack_Unit1853_clbk CPlayerpc_PlayAttack_Unit1853_user(nullptr);
        
        Info::CPlayerpc_PostContentRequest1855_ptr CPlayerpc_PostContentRequest1855_next(nullptr);
        Info::CPlayerpc_PostContentRequest1855_clbk CPlayerpc_PostContentRequest1855_user(nullptr);
        
        Info::CPlayerpc_PostDeleteRequest1857_ptr CPlayerpc_PostDeleteRequest1857_next(nullptr);
        Info::CPlayerpc_PostDeleteRequest1857_clbk CPlayerpc_PostDeleteRequest1857_user(nullptr);
        
        Info::CPlayerpc_PostItemGoldRequest1859_ptr CPlayerpc_PostItemGoldRequest1859_next(nullptr);
        Info::CPlayerpc_PostItemGoldRequest1859_clbk CPlayerpc_PostItemGoldRequest1859_user(nullptr);
        
        Info::CPlayerpc_PostListRequest1861_ptr CPlayerpc_PostListRequest1861_next(nullptr);
        Info::CPlayerpc_PostListRequest1861_clbk CPlayerpc_PostListRequest1861_user(nullptr);
        
        Info::CPlayerpc_PostReturnConfirmRequest1863_ptr CPlayerpc_PostReturnConfirmRequest1863_next(nullptr);
        Info::CPlayerpc_PostReturnConfirmRequest1863_clbk CPlayerpc_PostReturnConfirmRequest1863_user(nullptr);
        
        Info::CPlayerpc_PotionDivision1865_ptr CPlayerpc_PotionDivision1865_next(nullptr);
        Info::CPlayerpc_PotionDivision1865_clbk CPlayerpc_PotionDivision1865_user(nullptr);
        
        Info::CPlayerpc_PotionSeparation1867_ptr CPlayerpc_PotionSeparation1867_next(nullptr);
        Info::CPlayerpc_PotionSeparation1867_clbk CPlayerpc_PotionSeparation1867_user(nullptr);
        
        Info::CPlayerpc_PotionUseTrunkExtend1869_ptr CPlayerpc_PotionUseTrunkExtend1869_next(nullptr);
        Info::CPlayerpc_PotionUseTrunkExtend1869_clbk CPlayerpc_PotionUseTrunkExtend1869_user(nullptr);
        
        Info::CPlayerpc_ProposeVoteRequest1871_ptr CPlayerpc_ProposeVoteRequest1871_next(nullptr);
        Info::CPlayerpc_ProposeVoteRequest1871_clbk CPlayerpc_ProposeVoteRequest1871_user(nullptr);
        
        Info::CPlayerpc_PvpCashRecorver1873_ptr CPlayerpc_PvpCashRecorver1873_next(nullptr);
        Info::CPlayerpc_PvpCashRecorver1873_clbk CPlayerpc_PvpCashRecorver1873_user(nullptr);
        
        Info::CPlayerpc_QuestGiveupRequest1875_ptr CPlayerpc_QuestGiveupRequest1875_next(nullptr);
        Info::CPlayerpc_QuestGiveupRequest1875_clbk CPlayerpc_QuestGiveupRequest1875_user(nullptr);
        
        Info::CPlayerpc_RadarCharInfo1877_ptr CPlayerpc_RadarCharInfo1877_next(nullptr);
        Info::CPlayerpc_RadarCharInfo1877_clbk CPlayerpc_RadarCharInfo1877_user(nullptr);
        
        Info::CPlayerpc_RealMovPos1879_ptr CPlayerpc_RealMovPos1879_next(nullptr);
        Info::CPlayerpc_RealMovPos1879_clbk CPlayerpc_RealMovPos1879_user(nullptr);
        
        Info::CPlayerpc_RefreshGroupTargetPosition1881_ptr CPlayerpc_RefreshGroupTargetPosition1881_next(nullptr);
        Info::CPlayerpc_RefreshGroupTargetPosition1881_clbk CPlayerpc_RefreshGroupTargetPosition1881_user(nullptr);
        
        Info::CPlayerpc_RegistBind1883_ptr CPlayerpc_RegistBind1883_next(nullptr);
        Info::CPlayerpc_RegistBind1883_clbk CPlayerpc_RegistBind1883_user(nullptr);
        
        Info::CPlayerpc_ReleaseGroupTargetObjectRequest1885_ptr CPlayerpc_ReleaseGroupTargetObjectRequest1885_next(nullptr);
        Info::CPlayerpc_ReleaseGroupTargetObjectRequest1885_clbk CPlayerpc_ReleaseGroupTargetObjectRequest1885_user(nullptr);
        
        Info::CPlayerpc_ReleaseSiegeModeRequest1887_ptr CPlayerpc_ReleaseSiegeModeRequest1887_next(nullptr);
        Info::CPlayerpc_ReleaseSiegeModeRequest1887_clbk CPlayerpc_ReleaseSiegeModeRequest1887_user(nullptr);
        
        Info::CPlayerpc_ReleaseTargetObjectRequest1889_ptr CPlayerpc_ReleaseTargetObjectRequest1889_next(nullptr);
        Info::CPlayerpc_ReleaseTargetObjectRequest1889_clbk CPlayerpc_ReleaseTargetObjectRequest1889_user(nullptr);
        
        Info::CPlayerpc_RenameItemNConditionCheck1891_ptr CPlayerpc_RenameItemNConditionCheck1891_next(nullptr);
        Info::CPlayerpc_RenameItemNConditionCheck1891_clbk CPlayerpc_RenameItemNConditionCheck1891_user(nullptr);
        
        Info::CPlayerpc_RequestChangeTaxRate1893_ptr CPlayerpc_RequestChangeTaxRate1893_next(nullptr);
        Info::CPlayerpc_RequestChangeTaxRate1893_clbk CPlayerpc_RequestChangeTaxRate1893_user(nullptr);
        
        Info::CPlayerpc_RequestDialogWithNPC1895_ptr CPlayerpc_RequestDialogWithNPC1895_next(nullptr);
        Info::CPlayerpc_RequestDialogWithNPC1895_clbk CPlayerpc_RequestDialogWithNPC1895_user(nullptr);
        
        Info::CPlayerpc_RequestPatriarchPunishment1897_ptr CPlayerpc_RequestPatriarchPunishment1897_next(nullptr);
        Info::CPlayerpc_RequestPatriarchPunishment1897_clbk CPlayerpc_RequestPatriarchPunishment1897_user(nullptr);
        
        Info::CPlayerpc_RequestQuestFromNPC1899_ptr CPlayerpc_RequestQuestFromNPC1899_next(nullptr);
        Info::CPlayerpc_RequestQuestFromNPC1899_clbk CPlayerpc_RequestQuestFromNPC1899_user(nullptr);
        
        Info::CPlayerpc_RequestQuestListFromNPC1901_ptr CPlayerpc_RequestQuestListFromNPC1901_next(nullptr);
        Info::CPlayerpc_RequestQuestListFromNPC1901_clbk CPlayerpc_RequestQuestListFromNPC1901_user(nullptr);
        
        Info::CPlayerpc_RequestTaxRate1903_ptr CPlayerpc_RequestTaxRate1903_next(nullptr);
        Info::CPlayerpc_RequestTaxRate1903_clbk CPlayerpc_RequestTaxRate1903_user(nullptr);
        
        Info::CPlayerpc_RequestUILockCertify1905_ptr CPlayerpc_RequestUILockCertify1905_next(nullptr);
        Info::CPlayerpc_RequestUILockCertify1905_clbk CPlayerpc_RequestUILockCertify1905_user(nullptr);
        
        Info::CPlayerpc_RequestUILockFindPW1907_ptr CPlayerpc_RequestUILockFindPW1907_next(nullptr);
        Info::CPlayerpc_RequestUILockFindPW1907_clbk CPlayerpc_RequestUILockFindPW1907_user(nullptr);
        
        Info::CPlayerpc_RequestUILockInit1909_ptr CPlayerpc_RequestUILockInit1909_next(nullptr);
        Info::CPlayerpc_RequestUILockInit1909_clbk CPlayerpc_RequestUILockInit1909_user(nullptr);
        
        Info::CPlayerpc_RequestUILockUpdate1911_ptr CPlayerpc_RequestUILockUpdate1911_next(nullptr);
        Info::CPlayerpc_RequestUILockUpdate1911_clbk CPlayerpc_RequestUILockUpdate1911_user(nullptr);
        
        Info::CPlayerpc_RequestWatchingWithNPC1913_ptr CPlayerpc_RequestWatchingWithNPC1913_next(nullptr);
        Info::CPlayerpc_RequestWatchingWithNPC1913_clbk CPlayerpc_RequestWatchingWithNPC1913_user(nullptr);
        
        Info::CPlayerpc_ResDivision1915_ptr CPlayerpc_ResDivision1915_next(nullptr);
        Info::CPlayerpc_ResDivision1915_clbk CPlayerpc_ResDivision1915_user(nullptr);
        
        Info::CPlayerpc_ResSeparation1917_ptr CPlayerpc_ResSeparation1917_next(nullptr);
        Info::CPlayerpc_ResSeparation1917_clbk CPlayerpc_ResSeparation1917_user(nullptr);
        
        Info::CPlayerpc_Resurrect1919_ptr CPlayerpc_Resurrect1919_next(nullptr);
        Info::CPlayerpc_Resurrect1919_clbk CPlayerpc_Resurrect1919_user(nullptr);
        
        Info::CPlayerpc_Revival1921_ptr CPlayerpc_Revival1921_next(nullptr);
        Info::CPlayerpc_Revival1921_clbk CPlayerpc_Revival1921_user(nullptr);
        
        Info::CPlayerpc_SelectClassRequest1923_ptr CPlayerpc_SelectClassRequest1923_next(nullptr);
        Info::CPlayerpc_SelectClassRequest1923_clbk CPlayerpc_SelectClassRequest1923_user(nullptr);
        
        Info::CPlayerpc_SelectQuestAfterHappenEvent1925_ptr CPlayerpc_SelectQuestAfterHappenEvent1925_next(nullptr);
        Info::CPlayerpc_SelectQuestAfterHappenEvent1925_clbk CPlayerpc_SelectQuestAfterHappenEvent1925_user(nullptr);
        
        Info::CPlayerpc_SelectQuestReward1927_ptr CPlayerpc_SelectQuestReward1927_next(nullptr);
        Info::CPlayerpc_SelectQuestReward1927_clbk CPlayerpc_SelectQuestReward1927_user(nullptr);
        
        Info::CPlayerpc_SellItemStore1929_ptr CPlayerpc_SellItemStore1929_next(nullptr);
        Info::CPlayerpc_SellItemStore1929_clbk CPlayerpc_SellItemStore1929_user(nullptr);
        
        Info::CPlayerpc_SetGroupMapPointRequest1931_ptr CPlayerpc_SetGroupMapPointRequest1931_next(nullptr);
        Info::CPlayerpc_SetGroupMapPointRequest1931_clbk CPlayerpc_SetGroupMapPointRequest1931_user(nullptr);
        
        Info::CPlayerpc_SetGroupTargetObjectRequest1933_ptr CPlayerpc_SetGroupTargetObjectRequest1933_next(nullptr);
        Info::CPlayerpc_SetGroupTargetObjectRequest1933_clbk CPlayerpc_SetGroupTargetObjectRequest1933_user(nullptr);
        
        Info::CPlayerpc_SetInGuildBattle1935_ptr CPlayerpc_SetInGuildBattle1935_next(nullptr);
        Info::CPlayerpc_SetInGuildBattle1935_clbk CPlayerpc_SetInGuildBattle1935_user(nullptr);
        
        Info::CPlayerpc_SetItemCheckRequest1937_ptr CPlayerpc_SetItemCheckRequest1937_next(nullptr);
        Info::CPlayerpc_SetItemCheckRequest1937_clbk CPlayerpc_SetItemCheckRequest1937_user(nullptr);
        
        Info::CPlayerpc_SetRaceBossCryMsg1939_ptr CPlayerpc_SetRaceBossCryMsg1939_next(nullptr);
        Info::CPlayerpc_SetRaceBossCryMsg1939_clbk CPlayerpc_SetRaceBossCryMsg1939_user(nullptr);
        
        Info::CPlayerpc_SetTargetObjectRequest1941_ptr CPlayerpc_SetTargetObjectRequest1941_next(nullptr);
        Info::CPlayerpc_SetTargetObjectRequest1941_clbk CPlayerpc_SetTargetObjectRequest1941_user(nullptr);
        
        Info::CPlayerpc_SkillRequest1943_ptr CPlayerpc_SkillRequest1943_next(nullptr);
        Info::CPlayerpc_SkillRequest1943_clbk CPlayerpc_SkillRequest1943_user(nullptr);
        
        Info::CPlayerpc_Stop1945_ptr CPlayerpc_Stop1945_next(nullptr);
        Info::CPlayerpc_Stop1945_clbk CPlayerpc_Stop1945_user(nullptr);
        
        Info::CPlayerpc_TakeGroundingItem1947_ptr CPlayerpc_TakeGroundingItem1947_next(nullptr);
        Info::CPlayerpc_TakeGroundingItem1947_clbk CPlayerpc_TakeGroundingItem1947_user(nullptr);
        
        Info::CPlayerpc_TalikCrystalExchange1949_ptr CPlayerpc_TalikCrystalExchange1949_next(nullptr);
        Info::CPlayerpc_TalikCrystalExchange1949_clbk CPlayerpc_TalikCrystalExchange1949_user(nullptr);
        
        Info::CPlayerpc_ThrowSkillRequest1951_ptr CPlayerpc_ThrowSkillRequest1951_next(nullptr);
        Info::CPlayerpc_ThrowSkillRequest1951_clbk CPlayerpc_ThrowSkillRequest1951_user(nullptr);
        
        Info::CPlayerpc_ThrowStorageItem1953_ptr CPlayerpc_ThrowStorageItem1953_next(nullptr);
        Info::CPlayerpc_ThrowStorageItem1953_clbk CPlayerpc_ThrowStorageItem1953_user(nullptr);
        
        Info::CPlayerpc_ThrowUnitRequest1955_ptr CPlayerpc_ThrowUnitRequest1955_next(nullptr);
        Info::CPlayerpc_ThrowUnitRequest1955_clbk CPlayerpc_ThrowUnitRequest1955_user(nullptr);
        
        Info::CPlayerpc_TradeBlock1957_ptr CPlayerpc_TradeBlock1957_next(nullptr);
        Info::CPlayerpc_TradeBlock1957_clbk CPlayerpc_TradeBlock1957_user(nullptr);
        
        Info::CPlayerpc_TransShipRenewTicketRequest1959_ptr CPlayerpc_TransShipRenewTicketRequest1959_next(nullptr);
        Info::CPlayerpc_TransShipRenewTicketRequest1959_clbk CPlayerpc_TransShipRenewTicketRequest1959_user(nullptr);
        
        Info::CPlayerpc_TransformSiegeModeRequest1961_ptr CPlayerpc_TransformSiegeModeRequest1961_next(nullptr);
        Info::CPlayerpc_TransformSiegeModeRequest1961_clbk CPlayerpc_TransformSiegeModeRequest1961_user(nullptr);
        
        Info::CPlayerpc_TrunkAlterItemSlotRequest1963_ptr CPlayerpc_TrunkAlterItemSlotRequest1963_next(nullptr);
        Info::CPlayerpc_TrunkAlterItemSlotRequest1963_clbk CPlayerpc_TrunkAlterItemSlotRequest1963_user(nullptr);
        
        Info::CPlayerpc_TrunkChangePasswdRequest1965_ptr CPlayerpc_TrunkChangePasswdRequest1965_next(nullptr);
        Info::CPlayerpc_TrunkChangePasswdRequest1965_clbk CPlayerpc_TrunkChangePasswdRequest1965_user(nullptr);
        
        Info::CPlayerpc_TrunkCreateCostIsFreeRequest1967_ptr CPlayerpc_TrunkCreateCostIsFreeRequest1967_next(nullptr);
        Info::CPlayerpc_TrunkCreateCostIsFreeRequest1967_clbk CPlayerpc_TrunkCreateCostIsFreeRequest1967_user(nullptr);
        
        Info::CPlayerpc_TrunkDownloadRequest1969_ptr CPlayerpc_TrunkDownloadRequest1969_next(nullptr);
        Info::CPlayerpc_TrunkDownloadRequest1969_clbk CPlayerpc_TrunkDownloadRequest1969_user(nullptr);
        
        Info::CPlayerpc_TrunkEstRequest1971_ptr CPlayerpc_TrunkEstRequest1971_next(nullptr);
        Info::CPlayerpc_TrunkEstRequest1971_clbk CPlayerpc_TrunkEstRequest1971_user(nullptr);
        
        Info::CPlayerpc_TrunkExtendRequest1973_ptr CPlayerpc_TrunkExtendRequest1973_next(nullptr);
        Info::CPlayerpc_TrunkExtendRequest1973_clbk CPlayerpc_TrunkExtendRequest1973_user(nullptr);
        
        Info::CPlayerpc_TrunkHintAnswerRequest1975_ptr CPlayerpc_TrunkHintAnswerRequest1975_next(nullptr);
        Info::CPlayerpc_TrunkHintAnswerRequest1975_clbk CPlayerpc_TrunkHintAnswerRequest1975_user(nullptr);
        
        Info::CPlayerpc_TrunkIoMergeRequest1977_ptr CPlayerpc_TrunkIoMergeRequest1977_next(nullptr);
        Info::CPlayerpc_TrunkIoMergeRequest1977_clbk CPlayerpc_TrunkIoMergeRequest1977_user(nullptr);
        
        Info::CPlayerpc_TrunkIoMoneyRequest1979_ptr CPlayerpc_TrunkIoMoneyRequest1979_next(nullptr);
        Info::CPlayerpc_TrunkIoMoneyRequest1979_clbk CPlayerpc_TrunkIoMoneyRequest1979_user(nullptr);
        
        Info::CPlayerpc_TrunkIoMoveRequest1981_ptr CPlayerpc_TrunkIoMoveRequest1981_next(nullptr);
        Info::CPlayerpc_TrunkIoMoveRequest1981_clbk CPlayerpc_TrunkIoMoveRequest1981_user(nullptr);
        
        Info::CPlayerpc_TrunkIoSwapRequest1983_ptr CPlayerpc_TrunkIoSwapRequest1983_next(nullptr);
        Info::CPlayerpc_TrunkIoSwapRequest1983_clbk CPlayerpc_TrunkIoSwapRequest1983_user(nullptr);
        
        Info::CPlayerpc_TrunkPotionDivision1985_ptr CPlayerpc_TrunkPotionDivision1985_next(nullptr);
        Info::CPlayerpc_TrunkPotionDivision1985_clbk CPlayerpc_TrunkPotionDivision1985_user(nullptr);
        
        Info::CPlayerpc_TrunkPwHintIndexRequest1987_ptr CPlayerpc_TrunkPwHintIndexRequest1987_next(nullptr);
        Info::CPlayerpc_TrunkPwHintIndexRequest1987_clbk CPlayerpc_TrunkPwHintIndexRequest1987_user(nullptr);
        
        Info::CPlayerpc_TrunkResDivision1989_ptr CPlayerpc_TrunkResDivision1989_next(nullptr);
        Info::CPlayerpc_TrunkResDivision1989_clbk CPlayerpc_TrunkResDivision1989_user(nullptr);
        
        Info::CPlayerpc_UnitBulletFillRequest1991_ptr CPlayerpc_UnitBulletFillRequest1991_next(nullptr);
        Info::CPlayerpc_UnitBulletFillRequest1991_clbk CPlayerpc_UnitBulletFillRequest1991_user(nullptr);
        
        Info::CPlayerpc_UnitBulletReplaceRequest1993_ptr CPlayerpc_UnitBulletReplaceRequest1993_next(nullptr);
        Info::CPlayerpc_UnitBulletReplaceRequest1993_clbk CPlayerpc_UnitBulletReplaceRequest1993_user(nullptr);
        
        Info::CPlayerpc_UnitDeliveryRequest1995_ptr CPlayerpc_UnitDeliveryRequest1995_next(nullptr);
        Info::CPlayerpc_UnitDeliveryRequest1995_clbk CPlayerpc_UnitDeliveryRequest1995_user(nullptr);
        
        Info::CPlayerpc_UnitFrameBuyRequest1997_ptr CPlayerpc_UnitFrameBuyRequest1997_next(nullptr);
        Info::CPlayerpc_UnitFrameBuyRequest1997_clbk CPlayerpc_UnitFrameBuyRequest1997_user(nullptr);
        
        Info::CPlayerpc_UnitFrameRepairRequest1999_ptr CPlayerpc_UnitFrameRepairRequest1999_next(nullptr);
        Info::CPlayerpc_UnitFrameRepairRequest1999_clbk CPlayerpc_UnitFrameRepairRequest1999_user(nullptr);
        
        Info::CPlayerpc_UnitLeaveRequest2001_ptr CPlayerpc_UnitLeaveRequest2001_next(nullptr);
        Info::CPlayerpc_UnitLeaveRequest2001_clbk CPlayerpc_UnitLeaveRequest2001_user(nullptr);
        
        Info::CPlayerpc_UnitPackFillRequest2003_ptr CPlayerpc_UnitPackFillRequest2003_next(nullptr);
        Info::CPlayerpc_UnitPackFillRequest2003_clbk CPlayerpc_UnitPackFillRequest2003_user(nullptr);
        
        Info::CPlayerpc_UnitPartTuningRequest2005_ptr CPlayerpc_UnitPartTuningRequest2005_next(nullptr);
        Info::CPlayerpc_UnitPartTuningRequest2005_clbk CPlayerpc_UnitPartTuningRequest2005_user(nullptr);
        
        Info::CPlayerpc_UnitReturnRequest2007_ptr CPlayerpc_UnitReturnRequest2007_next(nullptr);
        Info::CPlayerpc_UnitReturnRequest2007_clbk CPlayerpc_UnitReturnRequest2007_user(nullptr);
        
        Info::CPlayerpc_UnitSellRequest2009_ptr CPlayerpc_UnitSellRequest2009_next(nullptr);
        Info::CPlayerpc_UnitSellRequest2009_clbk CPlayerpc_UnitSellRequest2009_user(nullptr);
        
        Info::CPlayerpc_UnitTakeRequest2011_ptr CPlayerpc_UnitTakeRequest2011_next(nullptr);
        Info::CPlayerpc_UnitTakeRequest2011_clbk CPlayerpc_UnitTakeRequest2011_user(nullptr);
        
        Info::CPlayerpc_UpdateDataForPostSend2013_ptr CPlayerpc_UpdateDataForPostSend2013_next(nullptr);
        Info::CPlayerpc_UpdateDataForPostSend2013_clbk CPlayerpc_UpdateDataForPostSend2013_user(nullptr);
        
        Info::CPlayerpc_UpdateDataForTrade2015_ptr CPlayerpc_UpdateDataForTrade2015_next(nullptr);
        Info::CPlayerpc_UpdateDataForTrade2015_clbk CPlayerpc_UpdateDataForTrade2015_user(nullptr);
        
        Info::CPlayerpc_UpgradeItem2017_ptr CPlayerpc_UpgradeItem2017_next(nullptr);
        Info::CPlayerpc_UpgradeItem2017_clbk CPlayerpc_UpgradeItem2017_user(nullptr);
        
        Info::CPlayerpc_UseFireCracker2019_ptr CPlayerpc_UseFireCracker2019_next(nullptr);
        Info::CPlayerpc_UseFireCracker2019_clbk CPlayerpc_UseFireCracker2019_user(nullptr);
        
        Info::CPlayerpc_UsePotionItem2021_ptr CPlayerpc_UsePotionItem2021_next(nullptr);
        Info::CPlayerpc_UsePotionItem2021_clbk CPlayerpc_UsePotionItem2021_user(nullptr);
        
        Info::CPlayerpc_UseRadarItem2023_ptr CPlayerpc_UseRadarItem2023_next(nullptr);
        Info::CPlayerpc_UseRadarItem2023_clbk CPlayerpc_UseRadarItem2023_user(nullptr);
        
        Info::CPlayerpc_UseRecoverLossExpItem2025_ptr CPlayerpc_UseRecoverLossExpItem2025_next(nullptr);
        Info::CPlayerpc_UseRecoverLossExpItem2025_clbk CPlayerpc_UseRecoverLossExpItem2025_user(nullptr);
        
        Info::CPlayerpc_UserSoccerBall2027_ptr CPlayerpc_UserSoccerBall2027_next(nullptr);
        Info::CPlayerpc_UserSoccerBall2027_clbk CPlayerpc_UserSoccerBall2027_user(nullptr);
        
        Info::CPlayerpc_WPActiveAttack_Force2029_ptr CPlayerpc_WPActiveAttack_Force2029_next(nullptr);
        Info::CPlayerpc_WPActiveAttack_Force2029_clbk CPlayerpc_WPActiveAttack_Force2029_user(nullptr);
        
        Info::CPlayerpc_WPActiveAttack_Skill2031_ptr CPlayerpc_WPActiveAttack_Skill2031_next(nullptr);
        Info::CPlayerpc_WPActiveAttack_Skill2031_clbk CPlayerpc_WPActiveAttack_Skill2031_user(nullptr);
        
        Info::CPlayerpc_WhisperBlock2033_ptr CPlayerpc_WhisperBlock2033_next(nullptr);
        Info::CPlayerpc_WhisperBlock2033_clbk CPlayerpc_WhisperBlock2033_user(nullptr);
        
        Info::CPlayerskill_process2035_ptr CPlayerskill_process2035_next(nullptr);
        Info::CPlayerskill_process2035_clbk CPlayerskill_process2035_user(nullptr);
        
        Info::CPlayerskill_process_for_aura2037_ptr CPlayerskill_process_for_aura2037_next(nullptr);
        Info::CPlayerskill_process_for_aura2037_clbk CPlayerskill_process_for_aura2037_user(nullptr);
        
        Info::CPlayerskill_process_for_item2039_ptr CPlayerskill_process_for_item2039_next(nullptr);
        Info::CPlayerskill_process_for_item2039_clbk CPlayerskill_process_for_item2039_user(nullptr);
        
        
        Info::CPlayerdtor_CPlayer2041_ptr CPlayerdtor_CPlayer2041_next(nullptr);
        Info::CPlayerdtor_CPlayer2041_clbk CPlayerdtor_CPlayer2041_user(nullptr);
        
        void CPlayerAddDalant2_wrapper(struct CPlayer* _this, unsigned int dwPush, bool bApply)
        {
           CPlayerAddDalant2_user(_this, dwPush, bApply, CPlayerAddDalant2_next);
        };
        void CPlayerAddGold4_wrapper(struct CPlayer* _this, unsigned int dwPush, bool bApply)
        {
           CPlayerAddGold4_user(_this, dwPush, bApply, CPlayerAddGold4_next);
        };
        void CPlayerAlterDalant6_wrapper(struct CPlayer* _this, long double dDalant)
        {
           CPlayerAlterDalant6_user(_this, dDalant, CPlayerAlterDalant6_next);
        };
        void CPlayerAlterExp8_wrapper(struct CPlayer* _this, long double dAlterExp, bool bReward, bool bUseExpRecoverItem, bool bUseExpAdditionItem)
        {
           CPlayerAlterExp8_user(_this, dAlterExp, bReward, bUseExpRecoverItem, bUseExpAdditionItem, CPlayerAlterExp8_next);
        };
        void CPlayerAlterExp_Animus10_wrapper(struct CPlayer* _this, int64_t nAlterExp)
        {
           CPlayerAlterExp_Animus10_user(_this, nAlterExp, CPlayerAlterExp_Animus10_next);
        };
        void CPlayerAlterExp_Potion12_wrapper(struct CPlayer* _this, long double dAlterExp)
        {
           CPlayerAlterExp_Potion12_user(_this, dAlterExp, CPlayerAlterExp_Potion12_next);
        };
        void CPlayerAlterFP_Animus14_wrapper(struct CPlayer* _this, int nNewFP)
        {
           CPlayerAlterFP_Animus14_user(_this, nNewFP, CPlayerAlterFP_Animus14_next);
        };
        void CPlayerAlterGold16_wrapper(struct CPlayer* _this, long double dGold)
        {
           CPlayerAlterGold16_user(_this, dGold, CPlayerAlterGold16_next);
        };
        void CPlayerAlterHP_Animus18_wrapper(struct CPlayer* _this, int nNewHP)
        {
           CPlayerAlterHP_Animus18_user(_this, nNewHP, CPlayerAlterHP_Animus18_next);
        };
        void CPlayerAlterMaxLevel20_wrapper(struct CPlayer* _this, char byMaxLevel)
        {
           CPlayerAlterMaxLevel20_user(_this, byMaxLevel, CPlayerAlterMaxLevel20_next);
        };
        void CPlayerAlterMode_Animus22_wrapper(struct CPlayer* _this, char byMode)
        {
           CPlayerAlterMode_Animus22_user(_this, byMode, CPlayerAlterMode_Animus22_next);
        };
        void CPlayerAlterPvPCashBag24_wrapper(struct CPlayer* _this, long double dAlter, PVP_MONEY_ALTER_TYPE IOCode)
        {
           CPlayerAlterPvPCashBag24_user(_this, dAlter, IOCode, CPlayerAlterPvPCashBag24_next);
        };
        void CPlayerAlterPvPPoint26_wrapper(struct CPlayer* _this, long double dAlter, PVP_ALTER_TYPE AlterType, unsigned int dwDstSerial)
        {
           CPlayerAlterPvPPoint26_user(_this, dAlter, AlterType, dwDstSerial, CPlayerAlterPvPPoint26_next);
        };
        void CPlayerAlterPvpPointLeak28_wrapper(struct CPlayer* _this, long double dAlter)
        {
           CPlayerAlterPvpPointLeak28_user(_this, dAlter, CPlayerAlterPvpPointLeak28_next);
        };
        void CPlayerAlterSec30_wrapper(struct CPlayer* _this)
        {
           CPlayerAlterSec30_user(_this, CPlayerAlterSec30_next);
        };
        bool CPlayerApplyEquipItemEffect32_wrapper(struct CPlayer* _this, int iItemEffectCode, bool bEquip)
        {
           return CPlayerApplyEquipItemEffect32_user(_this, iItemEffectCode, bEquip, CPlayerApplyEquipItemEffect32_next);
        };
        void CPlayerApplySetItemEffect34_wrapper(struct CPlayer* _this, struct si_interpret* pSI, unsigned int dwSetItem, char bySetItemNum, char bySetEffectNum, bool bSetEffect)
        {
           CPlayerApplySetItemEffect34_user(_this, pSI, dwSetItem, bySetItemNum, bySetEffectNum, bSetEffect, CPlayerApplySetItemEffect34_next);
        };
        int CPlayerAttackableHeight36_wrapper(struct CPlayer* _this)
        {
           return CPlayerAttackableHeight36_user(_this, CPlayerAttackableHeight36_next);
        };
        void CPlayerAutoCharge_Booster38_wrapper(struct CPlayer* _this)
        {
           CPlayerAutoCharge_Booster38_user(_this, CPlayerAutoCharge_Booster38_next);
        };
        void CPlayerAutoRecover40_wrapper(struct CPlayer* _this)
        {
           CPlayerAutoRecover40_user(_this, CPlayerAutoRecover40_next);
        };
        void CPlayerAutoRecover_Animus42_wrapper(struct CPlayer* _this)
        {
           CPlayerAutoRecover_Animus42_user(_this, CPlayerAutoRecover_Animus42_next);
        };
        void CPlayerBilling_Logout44_wrapper(struct CPlayer* _this)
        {
           CPlayerBilling_Logout44_user(_this, CPlayerBilling_Logout44_next);
        };
        void CPlayerBreakCloakBooster46_wrapper(struct CPlayer* _this)
        {
           CPlayerBreakCloakBooster46_user(_this, CPlayerBreakCloakBooster46_next);
        };
        
        void CPlayerctor_CPlayer48_wrapper(struct CPlayer* _this)
        {
           CPlayerctor_CPlayer48_user(_this, CPlayerctor_CPlayer48_next);
        };
        long double CPlayerCalPvpCashPoint50_wrapper(struct CPlayer* _this, int nDstLv, int nSrcLv, char* pSrcClass)
        {
           return CPlayerCalPvpCashPoint50_user(_this, nDstLv, nSrcLv, pSrcClass, CPlayerCalPvpCashPoint50_next);
        };
        void CPlayerCalPvpTempCash52_wrapper(struct CPlayer* _this, struct CPlayer* pDier, char byKillerObjID)
        {
           CPlayerCalPvpTempCash52_user(_this, pDier, byKillerObjID, CPlayerCalPvpTempCash52_next);
        };
        void CPlayerCalcAddPointByClass54_wrapper(struct CPlayer* _this)
        {
           CPlayerCalcAddPointByClass54_user(_this, CPlayerCalcAddPointByClass54_next);
        };
        uint16_t CPlayerCalcCurFPRate56_wrapper(struct CPlayer* _this)
        {
           return CPlayerCalcCurFPRate56_user(_this, CPlayerCalcCurFPRate56_next);
        };
        uint16_t CPlayerCalcCurHPRate58_wrapper(struct CPlayer* _this)
        {
           return CPlayerCalcCurHPRate58_user(_this, CPlayerCalcCurHPRate58_next);
        };
        uint16_t CPlayerCalcCurSPRate60_wrapper(struct CPlayer* _this)
        {
           return CPlayerCalcCurSPRate60_user(_this, CPlayerCalcCurSPRate60_next);
        };
        float CPlayerCalcDPRate62_wrapper(struct CPlayer* _this)
        {
           return CPlayerCalcDPRate62_user(_this, CPlayerCalcDPRate62_next);
        };
        void CPlayerCalcDefTol64_wrapper(struct CPlayer* _this)
        {
           CPlayerCalcDefTol64_user(_this, CPlayerCalcDefTol64_next);
        };
        int CPlayerCalcEquipAttackDelay66_wrapper(struct CPlayer* _this)
        {
           return CPlayerCalcEquipAttackDelay66_user(_this, CPlayerCalcEquipAttackDelay66_next);
        };
        void CPlayerCalcEquipMaxDP68_wrapper(struct CPlayer* _this, bool bInit)
        {
           CPlayerCalcEquipMaxDP68_user(_this, bInit, CPlayerCalcEquipMaxDP68_next);
        };
        void CPlayerCalcEquipSpeed70_wrapper(struct CPlayer* _this)
        {
           CPlayerCalcEquipSpeed70_user(_this, CPlayerCalcEquipSpeed70_next);
        };
        void CPlayerCalcExp72_wrapper(struct CPlayer* _this, struct CCharacter* pDst, int nDam, struct CPartyModeKillMonsterExpNotify* kPartyExpNotify)
        {
           CPlayerCalcExp72_user(_this, pDst, nDam, kPartyExpNotify, CPlayerCalcExp72_next);
        };
        void CPlayerCalcPvP74_wrapper(struct CPlayer* _this, struct CPlayer* pDier, char byKillerObjID)
        {
           CPlayerCalcPvP74_user(_this, pDier, byKillerObjID, CPlayerCalcPvP74_next);
        };
        void CPlayerCheckAlterMaxPoint76_wrapper(struct CPlayer* _this)
        {
           CPlayerCheckAlterMaxPoint76_user(_this, CPlayerCheckAlterMaxPoint76_next);
        };
        void CPlayerCheckBattleMode78_wrapper(struct CPlayer* _this)
        {
           CPlayerCheckBattleMode78_user(_this, CPlayerCheckBattleMode78_next);
        };
        void CPlayerCheckGroupMapPoint80_wrapper(struct CPlayer* _this)
        {
           CPlayerCheckGroupMapPoint80_user(_this, CPlayerCheckGroupMapPoint80_next);
        };
        void CPlayerCheckGroupTargeting82_wrapper(struct CPlayer* _this)
        {
           CPlayerCheckGroupTargeting82_user(_this, CPlayerCheckGroupTargeting82_next);
        };
        void CPlayerCheckMentalTakeAndUpdateLastMetalTicket84_wrapper(struct CPlayer* _this, char* strItemCode)
        {
           CPlayerCheckMentalTakeAndUpdateLastMetalTicket84_user(_this, strItemCode, CPlayerCheckMentalTakeAndUpdateLastMetalTicket84_next);
        };
        void CPlayerCheckNameChange86_wrapper(struct CPlayer* _this)
        {
           CPlayerCheckNameChange86_user(_this, CPlayerCheckNameChange86_next);
        };
        void CPlayerCheckPosInTown88_wrapper(struct CPlayer* _this)
        {
           CPlayerCheckPosInTown88_user(_this, CPlayerCheckPosInTown88_next);
        };
        void CPlayerCheckPos_Region90_wrapper(struct CPlayer* _this)
        {
           CPlayerCheckPos_Region90_user(_this, CPlayerCheckPos_Region90_next);
        };
        void CPlayerCheckUnitCutTime92_wrapper(struct CPlayer* _this)
        {
           CPlayerCheckUnitCutTime92_user(_this, CPlayerCheckUnitCutTime92_next);
        };
        void CPlayerCheet_BufEffectEnd94_wrapper(struct CPlayer* _this)
        {
           CPlayerCheet_BufEffectEnd94_user(_this, CPlayerCheet_BufEffectEnd94_next);
        };
        void CPlayerClearGravityStone96_wrapper(struct CPlayer* _this)
        {
           CPlayerClearGravityStone96_user(_this, CPlayerClearGravityStone96_next);
        };
        bool CPlayerCorpse98_wrapper(struct CPlayer* _this, struct CCharacter* pAtter)
        {
           return CPlayerCorpse98_user(_this, pAtter, CPlayerCorpse98_next);
        };
        bool CPlayerCreate100_wrapper(struct CPlayer* _this)
        {
           return CPlayerCreate100_user(_this, CPlayerCreate100_next);
        };
        void CPlayerCreateComplete102_wrapper(struct CPlayer* _this)
        {
           CPlayerCreateComplete102_user(_this, CPlayerCreateComplete102_next);
        };
        void CPlayerDTradeInit104_wrapper(struct CPlayer* _this)
        {
           CPlayerDTradeInit104_user(_this, CPlayerDTradeInit104_next);
        };
        bool CPlayerDecHalfSFContDam106_wrapper(struct CPlayer* _this, float fEffVal)
        {
           return CPlayerDecHalfSFContDam106_user(_this, fEffVal, CPlayerDecHalfSFContDam106_next);
        };
        void CPlayerDelPostData108_wrapper(struct CPlayer* _this, unsigned int dwIndex)
        {
           CPlayerDelPostData108_user(_this, dwIndex, CPlayerDelPostData108_next);
        };
        void CPlayerDeleteCouponItem110_wrapper(struct CPlayer* _this, struct _STORAGE_POS_INDIV* CouponItem, int n)
        {
           CPlayerDeleteCouponItem110_user(_this, CouponItem, n, CPlayerDeleteCouponItem110_next);
        };
        bool CPlayerDeleteUseConsumeItem112_wrapper(struct CPlayer* _this, struct _STORAGE_LIST::_db_con** ppConsumeItems, int* pnConsume, bool* pbOverLap)
        {
           return CPlayerDeleteUseConsumeItem112_user(_this, ppConsumeItems, pnConsume, pbOverLap, CPlayerDeleteUseConsumeItem112_next);
        };
        struct _STORAGE_LIST::_db_con* CPlayerEmb_AddStorage114_wrapper(struct CPlayer* _this, char byStorageCode, struct _STORAGE_LIST::_storage_con* pCon, bool bEquipChange, bool bAdd)
        {
           return CPlayerEmb_AddStorage114_user(_this, byStorageCode, pCon, bEquipChange, bAdd, CPlayerEmb_AddStorage114_next);
        };
        unsigned int CPlayerEmb_AlterDurPoint116_wrapper(struct CPlayer* _this, char byStorageCode, char byStorageIndex, int nAlter, bool bUpdate, bool bSend)
        {
           return CPlayerEmb_AlterDurPoint116_user(_this, byStorageCode, byStorageIndex, nAlter, bUpdate, bSend, CPlayerEmb_AlterDurPoint116_next);
        };
        void CPlayerEmb_AlterStat118_wrapper(struct CPlayer* _this, char byMasteryClass, char byIndex, unsigned int dwAlter, char byReason, char* strErrorCodePos, bool bPcbangPrimiumFavorReward)
        {
           CPlayerEmb_AlterStat118_user(_this, byMasteryClass, byIndex, dwAlter, byReason, strErrorCodePos, bPcbangPrimiumFavorReward, CPlayerEmb_AlterStat118_next);
        };
        void CPlayerEmb_AlterStat_F120_wrapper(struct CPlayer* _this, char byMasteryClass, char byIndex, float fAlter, char byReason)
        {
           CPlayerEmb_AlterStat_F120_user(_this, byMasteryClass, byIndex, fAlter, byReason, CPlayerEmb_AlterStat_F120_next);
        };
        bool CPlayerEmb_CheckActForQuest122_wrapper(struct CPlayer* _this, int nActCode, char* pszReqCode, uint16_t wAddCount, bool bParty)
        {
           return CPlayerEmb_CheckActForQuest122_user(_this, nActCode, pszReqCode, wAddCount, bParty, CPlayerEmb_CheckActForQuest122_next);
        };
        void CPlayerEmb_CheckActForQuestParty124_wrapper(struct CPlayer* _this, int nActCode, char* pszReqCode, uint16_t wAddCount)
        {
           CPlayerEmb_CheckActForQuestParty124_user(_this, nActCode, pszReqCode, wAddCount, CPlayerEmb_CheckActForQuestParty124_next);
        };
        void CPlayerEmb_CompleteQuest126_wrapper(struct CPlayer* _this, char byQuestDBSlot, char byRewardItemIndex, char byLinkQuestIndex)
        {
           CPlayerEmb_CompleteQuest126_user(_this, byQuestDBSlot, byRewardItemIndex, byLinkQuestIndex, CPlayerEmb_CompleteQuest126_next);
        };
        bool CPlayerEmb_CreateNPCQuest128_wrapper(struct CPlayer* _this, char* pszEventCode, unsigned int dwNPCQuestIndex)
        {
           return CPlayerEmb_CreateNPCQuest128_user(_this, pszEventCode, dwNPCQuestIndex, CPlayerEmb_CreateNPCQuest128_next);
        };
        bool CPlayerEmb_CreateQuestEvent130_wrapper(struct CPlayer* _this, QUEST_HAPPEN HappenType, char* pszEventCode)
        {
           return CPlayerEmb_CreateQuestEvent130_user(_this, HappenType, pszEventCode, CPlayerEmb_CreateQuestEvent130_next);
        };
        bool CPlayerEmb_DelStorage132_wrapper(struct CPlayer* _this, char byStorageCode, char byStorageIndex, bool bEquipChange, bool bDelete, char* strErrorCodePos)
        {
           return CPlayerEmb_DelStorage132_user(_this, byStorageCode, byStorageIndex, bEquipChange, bDelete, strErrorCodePos, CPlayerEmb_DelStorage132_next);
        };
        void CPlayerEmb_EquipLink134_wrapper(struct CPlayer* _this)
        {
           CPlayerEmb_EquipLink134_user(_this, CPlayerEmb_EquipLink134_next);
        };
        void CPlayerEmb_ItemUpgrade136_wrapper(struct CPlayer* _this, char byUpgradeType, char byStorageCode, char byStorageIndex, unsigned int dwGradeInfo)
        {
           CPlayerEmb_ItemUpgrade136_user(_this, byUpgradeType, byStorageCode, byStorageIndex, dwGradeInfo, CPlayerEmb_ItemUpgrade136_next);
        };
        void CPlayerEmb_RidindUnit138_wrapper(struct CPlayer* _this, bool bRiding, struct CParkingUnit* pCreateUnit)
        {
           CPlayerEmb_RidindUnit138_user(_this, bRiding, pCreateUnit, CPlayerEmb_RidindUnit138_next);
        };
        bool CPlayerEmb_StartQuest140_wrapper(struct CPlayer* _this, char bySelectQuest, struct _happen_event_cont* pHappenEvent)
        {
           return CPlayerEmb_StartQuest140_user(_this, bySelectQuest, pHappenEvent, CPlayerEmb_StartQuest140_next);
        };
        int CPlayerEmb_UpdateStat142_wrapper(struct CPlayer* _this, unsigned int dwStatIndex, unsigned int dwNewData, unsigned int dwOldData)
        {
           return CPlayerEmb_UpdateStat142_user(_this, dwStatIndex, dwNewData, dwOldData, CPlayerEmb_UpdateStat142_next);
        };
        void CPlayerExitUpdateDataToWorld144_wrapper(struct CPlayer* _this)
        {
           CPlayerExitUpdateDataToWorld144_user(_this, CPlayerExitUpdateDataToWorld144_next);
        };
        void CPlayerExtractStringToTime146_wrapper(struct CPlayer* _this, unsigned int dwTemp, struct _SYSTEMTIME* tm)
        {
           CPlayerExtractStringToTime146_user(_this, dwTemp, tm, CPlayerExtractStringToTime146_next);
        };
        struct CPlayer* CPlayerFindFarChatPlayerWithTemp148_wrapper(struct CPlayer* _this, char* pwszName)
        {
           return CPlayerFindFarChatPlayerWithTemp148_user(_this, pwszName, CPlayerFindFarChatPlayerWithTemp148_next);
        };
        bool CPlayerFixTargetWhile150_wrapper(struct CPlayer* _this, struct CCharacter* pkTarget, unsigned int dwMiliSecond)
        {
           return CPlayerFixTargetWhile150_user(_this, pkTarget, dwMiliSecond, CPlayerFixTargetWhile150_next);
        };
        void CPlayerForcePullUnit152_wrapper(struct CPlayer* _this, bool bLogout)
        {
           CPlayerForcePullUnit152_user(_this, bLogout, CPlayerForcePullUnit152_next);
        };
        float CPlayerGetAddSpeed154_wrapper(struct CPlayer* _this)
        {
           return CPlayerGetAddSpeed154_user(_this, CPlayerGetAddSpeed154_next);
        };
        struct _sf_continous* CPlayerGetAfterEffect156_wrapper(struct CPlayer* _this)
        {
           return CPlayerGetAfterEffect156_user(_this, CPlayerGetAfterEffect156_next);
        };
        int CPlayerGetAttackDP158_wrapper(struct CPlayer* _this)
        {
           return CPlayerGetAttackDP158_user(_this, CPlayerGetAttackDP158_next);
        };
        int CPlayerGetAttackLevel160_wrapper(struct CPlayer* _this)
        {
           return CPlayerGetAttackLevel160_user(_this, CPlayerGetAttackLevel160_next);
        };
        float CPlayerGetAttackRange162_wrapper(struct CPlayer* _this)
        {
           return CPlayerGetAttackRange162_user(_this, CPlayerGetAttackRange162_next);
        };
        int CPlayerGetAvoidRate164_wrapper(struct CPlayer* _this)
        {
           return CPlayerGetAvoidRate164_user(_this, CPlayerGetAvoidRate164_next);
        };
        int CPlayerGetBillingType166_wrapper(struct CPlayer* _this)
        {
           return CPlayerGetBillingType166_user(_this, CPlayerGetBillingType166_next);
        };
        struct _dummy_position* CPlayerGetBindDummy168_wrapper(struct CPlayer* _this)
        {
           return CPlayerGetBindDummy168_user(_this, CPlayerGetBindDummy168_next);
        };
        struct CMapData* CPlayerGetBindMap170_wrapper(struct CPlayer* _this, float* pfPos, bool bIgnoreMapClass)
        {
           return CPlayerGetBindMap170_user(_this, pfPos, bIgnoreMapClass, CPlayerGetBindMap170_next);
        };
        struct CMapData* CPlayerGetBindMapData172_wrapper(struct CPlayer* _this)
        {
           return CPlayerGetBindMapData172_user(_this, CPlayerGetBindMapData172_next);
        };
        int CPlayerGetCashAmount174_wrapper(struct CPlayer* _this)
        {
           return CPlayerGetCashAmount174_user(_this, CPlayerGetCashAmount174_next);
        };
        int CPlayerGetDP176_wrapper(struct CPlayer* _this)
        {
           return CPlayerGetDP176_user(_this, CPlayerGetDP176_next);
        };
        int CPlayerGetDamageDP178_wrapper(struct CPlayer* _this, int nAttackPart)
        {
           return CPlayerGetDamageDP178_user(_this, nAttackPart, CPlayerGetDamageDP178_next);
        };
        int CPlayerGetDamageLevel180_wrapper(struct CPlayer* _this, int nAttackPart)
        {
           return CPlayerGetDamageLevel180_user(_this, nAttackPart, CPlayerGetDamageLevel180_next);
        };
        int CPlayerGetDefFC182_wrapper(struct CPlayer* _this, int nAttactPart, struct CCharacter* pAttChar, int* pnConvertPart)
        {
           return CPlayerGetDefFC182_user(_this, nAttactPart, pAttChar, pnConvertPart, CPlayerGetDefFC182_next);
        };
        float CPlayerGetDefFacing184_wrapper(struct CPlayer* _this, int nPart)
        {
           return CPlayerGetDefFacing184_user(_this, nPart, CPlayerGetDefFacing184_next);
        };
        float CPlayerGetDefGap186_wrapper(struct CPlayer* _this, int nPart)
        {
           return CPlayerGetDefGap186_user(_this, nPart, CPlayerGetDefGap186_next);
        };
        int CPlayerGetDefSkill188_wrapper(struct CPlayer* _this, bool bBackAttackDamage)
        {
           return CPlayerGetDefSkill188_user(_this, bBackAttackDamage, CPlayerGetDefSkill188_next);
        };
        char CPlayerGetEffectEquipCode190_wrapper(struct CPlayer* _this, char byStorageCode, char bySlotIndex)
        {
           return CPlayerGetEffectEquipCode190_user(_this, byStorageCode, bySlotIndex, CPlayerGetEffectEquipCode190_next);
        };
        int CPlayerGetFP192_wrapper(struct CPlayer* _this)
        {
           return CPlayerGetFP192_user(_this, CPlayerGetFP192_next);
        };
        int CPlayerGetFireTol194_wrapper(struct CPlayer* _this)
        {
           return CPlayerGetFireTol194_user(_this, CPlayerGetFireTol194_next);
        };
        int CPlayerGetGauge196_wrapper(struct CPlayer* _this, int nParamCode)
        {
           return CPlayerGetGauge196_user(_this, nParamCode, CPlayerGetGauge196_next);
        };
        int CPlayerGetGenAttackProb198_wrapper(struct CPlayer* _this, struct CCharacter* pDst, int nPart, bool bBackAttack)
        {
           return CPlayerGetGenAttackProb198_user(_this, pDst, nPart, bBackAttack, CPlayerGetGenAttackProb198_next);
        };
        struct CPlayer::__target* CPlayerGetGroupTarget200_wrapper(struct CPlayer* _this, char byGroupType)
        {
           return CPlayerGetGroupTarget200_user(_this, byGroupType, CPlayerGetGroupTarget200_next);
        };
        int CPlayerGetHP202_wrapper(struct CPlayer* _this)
        {
           return CPlayerGetHP202_user(_this, CPlayerGetHP202_next);
        };
        unsigned int CPlayerGetInitClassCost204_wrapper(struct CPlayer* _this)
        {
           return CPlayerGetInitClassCost204_user(_this, CPlayerGetInitClassCost204_next);
        };
        int CPlayerGetLevel206_wrapper(struct CPlayer* _this)
        {
           return CPlayerGetLevel206_user(_this, CPlayerGetLevel206_next);
        };
        int CPlayerGetMasteryCumAfterAttack208_wrapper(struct CPlayer* _this, int nDstLv)
        {
           return CPlayerGetMasteryCumAfterAttack208_user(_this, nDstLv, CPlayerGetMasteryCumAfterAttack208_next);
        };
        int CPlayerGetMaxDP210_wrapper(struct CPlayer* _this)
        {
           return CPlayerGetMaxDP210_user(_this, CPlayerGetMaxDP210_next);
        };
        int CPlayerGetMaxFP212_wrapper(struct CPlayer* _this)
        {
           return CPlayerGetMaxFP212_user(_this, CPlayerGetMaxFP212_next);
        };
        int CPlayerGetMaxHP214_wrapper(struct CPlayer* _this)
        {
           return CPlayerGetMaxHP214_user(_this, CPlayerGetMaxHP214_next);
        };
        int CPlayerGetMaxSP216_wrapper(struct CPlayer* _this)
        {
           return CPlayerGetMaxSP216_user(_this, CPlayerGetMaxSP216_next);
        };
        unsigned int CPlayerGetMoney218_wrapper(struct CPlayer* _this, char byMoneyCode)
        {
           return CPlayerGetMoney218_user(_this, byMoneyCode, CPlayerGetMoney218_next);
        };
        float CPlayerGetMoveSpeed220_wrapper(struct CPlayer* _this)
        {
           return CPlayerGetMoveSpeed220_user(_this, CPlayerGetMoveSpeed220_next);
        };
        char* CPlayerGetObjName222_wrapper(struct CPlayer* _this)
        {
           return CPlayerGetObjName222_user(_this, CPlayerGetObjName222_next);
        };
        int CPlayerGetObjRace224_wrapper(struct CPlayer* _this)
        {
           return CPlayerGetObjRace224_user(_this, CPlayerGetObjRace224_next);
        };
        float CPlayerGetPartyExpDistributionRate226_wrapper(struct CPlayer* _this, int iPartyMemberLevel, int iMaxLevel, int i2ndLevel)
        {
           return CPlayerGetPartyExpDistributionRate226_user(_this, iPartyMemberLevel, iMaxLevel, i2ndLevel, CPlayerGetPartyExpDistributionRate226_next);
        };
        struct CPvpOrderView* CPlayerGetPvpOrderView228_wrapper(struct CPlayer* _this)
        {
           return CPlayerGetPvpOrderView228_user(_this, CPlayerGetPvpOrderView228_next);
        };
        long double CPlayerGetPvpPointLeak230_wrapper(struct CPlayer* _this)
        {
           return CPlayerGetPvpPointLeak230_user(_this, CPlayerGetPvpPointLeak230_next);
        };
        struct CPvpPointLimiter* CPlayerGetPvpPointLimiter232_wrapper(struct CPlayer* _this, struct CPvpPointLimiter* result)
        {
           return CPlayerGetPvpPointLimiter232_user(_this, result, CPlayerGetPvpPointLimiter232_next);
        };
        struct CAnimus* CPlayerGetRecallAnimus234_wrapper(struct CPlayer* _this)
        {
           return CPlayerGetRecallAnimus234_user(_this, CPlayerGetRecallAnimus234_next);
        };
        int CPlayerGetRewardItems_DarkDungeon236_wrapper(struct CPlayer* _this, struct _dh_reward_sub_setup* pSetup, struct _STORAGE_LIST::_db_con* pItems, int bRealBoss)
        {
           return CPlayerGetRewardItems_DarkDungeon236_user(_this, pSetup, pItems, bRealBoss, CPlayerGetRewardItems_DarkDungeon236_next);
        };
        int CPlayerGetSP238_wrapper(struct CPlayer* _this)
        {
           return CPlayerGetSP238_user(_this, CPlayerGetSP238_next);
        };
        int CPlayerGetSoilTol240_wrapper(struct CPlayer* _this)
        {
           return CPlayerGetSoilTol240_user(_this, CPlayerGetSoilTol240_next);
        };
        uint64_t CPlayerGetStateFlag242_wrapper(struct CPlayer* _this)
        {
           return CPlayerGetStateFlag242_user(_this, CPlayerGetStateFlag242_next);
        };
        struct CGameObject* CPlayerGetTargetObj244_wrapper(struct CPlayer* _this)
        {
           return CPlayerGetTargetObj244_user(_this, CPlayerGetTargetObj244_next);
        };
        bool CPlayerGetUseConsumeItem246_wrapper(struct CPlayer* _this, struct _consume_item_list* pConsumeList, uint16_t* pItemSerials, struct _STORAGE_LIST::_db_con** ppConsumeItems, int* pnConsume, bool* pbOverLap)
        {
           return CPlayerGetUseConsumeItem246_user(_this, pConsumeList, pItemSerials, ppConsumeItems, pnConsume, pbOverLap, CPlayerGetUseConsumeItem246_next);
        };
        int CPlayerGetVisualVer248_wrapper(struct CPlayer* _this)
        {
           return CPlayerGetVisualVer248_user(_this, CPlayerGetVisualVer248_next);
        };
        int CPlayerGetWaterTol250_wrapper(struct CPlayer* _this)
        {
           return CPlayerGetWaterTol250_user(_this, CPlayerGetWaterTol250_next);
        };
        float CPlayerGetWeaponAdjust252_wrapper(struct CPlayer* _this)
        {
           return CPlayerGetWeaponAdjust252_user(_this, CPlayerGetWeaponAdjust252_next);
        };
        int CPlayerGetWeaponClass254_wrapper(struct CPlayer* _this)
        {
           return CPlayerGetWeaponClass254_user(_this, CPlayerGetWeaponClass254_next);
        };
        int CPlayerGetWeaponRange256_wrapper(struct CPlayer* _this)
        {
           return CPlayerGetWeaponRange256_user(_this, CPlayerGetWeaponRange256_next);
        };
        float CPlayerGetWidth258_wrapper(struct CPlayer* _this)
        {
           return CPlayerGetWidth258_user(_this, CPlayerGetWidth258_next);
        };
        int CPlayerGetWindTol260_wrapper(struct CPlayer* _this)
        {
           return CPlayerGetWindTol260_user(_this, CPlayerGetWindTol260_next);
        };
        void CPlayerGuild_Buy_Emblem_Complete262_wrapper(struct _DB_QRY_SYN_DATA* pData)
        {
           CPlayerGuild_Buy_Emblem_Complete262_user(pData, CPlayerGuild_Buy_Emblem_Complete262_next);
        };
        void CPlayerGuild_Disjoint_Complete264_wrapper(struct _DB_QRY_SYN_DATA* pData)
        {
           CPlayerGuild_Disjoint_Complete264_user(pData, CPlayerGuild_Disjoint_Complete264_next);
        };
        void CPlayerGuild_Force_Leave_Complete266_wrapper(struct _DB_QRY_SYN_DATA* pData)
        {
           CPlayerGuild_Force_Leave_Complete266_user(pData, CPlayerGuild_Force_Leave_Complete266_next);
        };
        void CPlayerGuild_Insert_Complete268_wrapper(struct _DB_QRY_SYN_DATA* pData)
        {
           CPlayerGuild_Insert_Complete268_user(pData, CPlayerGuild_Insert_Complete268_next);
        };
        void CPlayerGuild_Join_Accept_Complete270_wrapper(struct _DB_QRY_SYN_DATA* pData)
        {
           CPlayerGuild_Join_Accept_Complete270_user(pData, CPlayerGuild_Join_Accept_Complete270_next);
        };
        void CPlayerGuild_Pop_Money_Complete272_wrapper(struct _DB_QRY_SYN_DATA* pData)
        {
           CPlayerGuild_Pop_Money_Complete272_user(pData, CPlayerGuild_Pop_Money_Complete272_next);
        };
        void CPlayerGuild_Push_Money_Complete274_wrapper(struct _DB_QRY_SYN_DATA* pData)
        {
           CPlayerGuild_Push_Money_Complete274_user(pData, CPlayerGuild_Push_Money_Complete274_next);
        };
        void CPlayerGuild_Self_Leave_Complete276_wrapper(struct _DB_QRY_SYN_DATA* pData)
        {
           CPlayerGuild_Self_Leave_Complete276_user(pData, CPlayerGuild_Self_Leave_Complete276_next);
        };
        void CPlayerGuild_Update_GuildMater_Complete278_wrapper(struct _DB_QRY_SYN_DATA* pData)
        {
           CPlayerGuild_Update_GuildMater_Complete278_user(pData, CPlayerGuild_Update_GuildMater_Complete278_next);
        };
        void CPlayerHSKQuestEnd_Att280_wrapper(struct CPlayer* _this, char byDestroyStoneRaceCode, struct CPlayer* pDestroyer)
        {
           CPlayerHSKQuestEnd_Att280_user(_this, byDestroyStoneRaceCode, pDestroyer, CPlayerHSKQuestEnd_Att280_next);
        };
        void CPlayerHideNameEffect282_wrapper(struct CPlayer* _this, bool bAdd)
        {
           CPlayerHideNameEffect282_user(_this, bAdd, CPlayerHideNameEffect282_next);
        };
        void CPlayerIncCriEffKillPoint284_wrapper(struct CPlayer* _this)
        {
           CPlayerIncCriEffKillPoint284_user(_this, CPlayerIncCriEffKillPoint284_next);
        };
        void CPlayerIncCriEffPvPCashBag286_wrapper(struct CPlayer* _this, long double dAlter)
        {
           CPlayerIncCriEffPvPCashBag286_user(_this, dAlter, CPlayerIncCriEffPvPCashBag286_next);
        };
        void CPlayerIncPvPPoint288_wrapper(struct CPlayer* _this, long double dAlter, PVP_ALTER_TYPE AlterType, unsigned int dwDstSerial)
        {
           CPlayerIncPvPPoint288_user(_this, dAlter, AlterType, dwDstSerial, CPlayerIncPvPPoint288_next);
        };
        bool CPlayerInit290_wrapper(struct CPlayer* _this, struct _object_id* pID)
        {
           return CPlayerInit290_user(_this, pID, CPlayerInit290_next);
        };
        bool CPlayerIntoMap292_wrapper(struct CPlayer* _this, char byMapInMode)
        {
           return CPlayerIntoMap292_user(_this, byMapInMode, CPlayerIntoMap292_next);
        };
        bool CPlayerIsActingSiegeMode294_wrapper(struct CPlayer* _this)
        {
           return CPlayerIsActingSiegeMode294_user(_this, CPlayerIsActingSiegeMode294_next);
        };
        bool CPlayerIsApplyPcbangPrimium296_wrapper(struct CPlayer* _this)
        {
           return CPlayerIsApplyPcbangPrimium296_user(_this, CPlayerIsApplyPcbangPrimium296_next);
        };
        bool CPlayerIsBeAttackedAble298_wrapper(struct CPlayer* _this, bool bFirst)
        {
           return CPlayerIsBeAttackedAble298_user(_this, bFirst, CPlayerIsBeAttackedAble298_next);
        };
        bool CPlayerIsBeDamagedAble300_wrapper(struct CPlayer* _this, struct CCharacter* pAtter)
        {
           return CPlayerIsBeDamagedAble300_user(_this, pAtter, CPlayerIsBeDamagedAble300_next);
        };
        struct _STORAGE_LIST::_db_con* CPlayerIsBulletValidity302_wrapper(struct CPlayer* _this, uint16_t wBulletSerial)
        {
           return CPlayerIsBulletValidity302_user(_this, wBulletSerial, CPlayerIsBulletValidity302_next);
        };
        bool CPlayerIsChaosMode304_wrapper(struct CPlayer* _this)
        {
           return CPlayerIsChaosMode304_user(_this, CPlayerIsChaosMode304_next);
        };
        struct _STORAGE_LIST::_db_con* CPlayerIsEffBulletValidity306_wrapper(struct CPlayer* _this, uint16_t wEffBulletSerial)
        {
           return CPlayerIsEffBulletValidity306_user(_this, wEffBulletSerial, CPlayerIsEffBulletValidity306_next);
        };
        bool CPlayerIsEffectableEquip308_wrapper(struct CPlayer* _this, struct _STORAGE_LIST::_storage_con* pCon)
        {
           return CPlayerIsEffectableEquip308_user(_this, pCon, CPlayerIsEffectableEquip308_next);
        };
        bool CPlayerIsEquipAbleGrade310_wrapper(struct CPlayer* _this, char byGradeLv)
        {
           return CPlayerIsEquipAbleGrade310_user(_this, byGradeLv, CPlayerIsEquipAbleGrade310_next);
        };
        bool CPlayerIsHaveMentalTicket312_wrapper(struct CPlayer* _this)
        {
           return CPlayerIsHaveMentalTicket312_user(_this, CPlayerIsHaveMentalTicket312_next);
        };
        bool CPlayerIsInTown314_wrapper(struct CPlayer* _this)
        {
           return CPlayerIsInTown314_user(_this, CPlayerIsInTown314_next);
        };
        bool CPlayerIsLastAttBuff316_wrapper(struct CPlayer* _this)
        {
           return CPlayerIsLastAttBuff316_user(_this, CPlayerIsLastAttBuff316_next);
        };
        bool CPlayerIsMapLoading318_wrapper(struct CPlayer* _this)
        {
           return CPlayerIsMapLoading318_user(_this, CPlayerIsMapLoading318_next);
        };
        bool CPlayerIsMineMode320_wrapper(struct CPlayer* _this)
        {
           return CPlayerIsMineMode320_user(_this, CPlayerIsMineMode320_next);
        };
        bool CPlayerIsMiningByMinigTicket322_wrapper(struct CPlayer* _this)
        {
           return CPlayerIsMiningByMinigTicket322_user(_this, CPlayerIsMiningByMinigTicket322_next);
        };
        bool CPlayerIsOutExtraStopPos324_wrapper(struct CPlayer* _this, float* pfStopPos)
        {
           return CPlayerIsOutExtraStopPos324_user(_this, pfStopPos, CPlayerIsOutExtraStopPos324_next);
        };
        bool CPlayerIsOverOneDay326_wrapper(struct CPlayer* _this)
        {
           return CPlayerIsOverOneDay326_user(_this, CPlayerIsOverOneDay326_next);
        };
        bool CPlayerIsPassExpLimitLvDiff328_wrapper(struct CPlayer* _this, int iDstLevel, bool* bGetAttackExp)
        {
           return CPlayerIsPassExpLimitLvDiff328_user(_this, iDstLevel, bGetAttackExp, CPlayerIsPassExpLimitLvDiff328_next);
        };
        bool CPlayerIsPassMasteryLimitLvDiff330_wrapper(struct CPlayer* _this, int iDstLevel)
        {
           return CPlayerIsPassMasteryLimitLvDiff330_user(_this, iDstLevel, CPlayerIsPassMasteryLimitLvDiff330_next);
        };
        bool CPlayerIsPunished332_wrapper(struct CPlayer* _this, char byType, bool bSend)
        {
           return CPlayerIsPunished332_user(_this, byType, bSend, CPlayerIsPunished332_next);
        };
        bool CPlayerIsRecallAnimus334_wrapper(struct CPlayer* _this)
        {
           return CPlayerIsRecallAnimus334_user(_this, CPlayerIsRecallAnimus334_next);
        };
        bool CPlayerIsRecvableContEffect336_wrapper(struct CPlayer* _this)
        {
           return CPlayerIsRecvableContEffect336_user(_this, CPlayerIsRecvableContEffect336_next);
        };
        bool CPlayerIsReturnPostUpdate338_wrapper(struct CPlayer* _this)
        {
           return CPlayerIsReturnPostUpdate338_user(_this, CPlayerIsReturnPostUpdate338_next);
        };
        bool CPlayerIsRidingShip340_wrapper(struct CPlayer* _this)
        {
           return CPlayerIsRidingShip340_user(_this, CPlayerIsRidingShip340_next);
        };
        bool CPlayerIsRidingUnit342_wrapper(struct CPlayer* _this)
        {
           return CPlayerIsRidingUnit342_user(_this, CPlayerIsRidingUnit342_next);
        };
        bool CPlayerIsSFActableByClass344_wrapper(struct CPlayer* _this, char byEffectCode, struct _base_fld* pSFFld)
        {
           return CPlayerIsSFActableByClass344_user(_this, byEffectCode, pSFFld, CPlayerIsSFActableByClass344_next);
        };
        bool CPlayerIsSFUsableGauge346_wrapper(struct CPlayer* _this, char byEffectCode, uint16_t wEffectIndex, uint16_t* pwDelPoint)
        {
           return CPlayerIsSFUsableGauge346_user(_this, byEffectCode, wEffectIndex, pwDelPoint, CPlayerIsSFUsableGauge346_next);
        };
        bool CPlayerIsSFUsableSFMastery348_wrapper(struct CPlayer* _this, char byMasteryCode, int nMasteryIndex)
        {
           return CPlayerIsSFUsableSFMastery348_user(_this, byMasteryCode, nMasteryIndex, CPlayerIsSFUsableSFMastery348_next);
        };
        bool CPlayerIsSFUseableRace350_wrapper(struct CPlayer* _this, char byEffectCode, uint16_t wEffectIndex)
        {
           return CPlayerIsSFUseableRace350_user(_this, byEffectCode, wEffectIndex, CPlayerIsSFUseableRace350_next);
        };
        bool CPlayerIsSiegeMode352_wrapper(struct CPlayer* _this)
        {
           return CPlayerIsSiegeMode352_user(_this, CPlayerIsSiegeMode352_next);
        };
        bool CPlayerIsTargetObj354_wrapper(struct CPlayer* _this, struct CGameObject* pkObj)
        {
           return CPlayerIsTargetObj354_user(_this, pkObj, CPlayerIsTargetObj354_next);
        };
        bool CPlayerIsUsableAccountType356_wrapper(struct CPlayer* _this, int nCashType)
        {
           return CPlayerIsUsableAccountType356_user(_this, nCashType, CPlayerIsUsableAccountType356_next);
        };
        bool CPlayerIsUseCloakBooster358_wrapper(struct CPlayer* _this)
        {
           return CPlayerIsUseCloakBooster358_user(_this, CPlayerIsUseCloakBooster358_next);
        };
        bool CPlayerIsUseReleaseRaceBuffPotion360_wrapper(struct CPlayer* _this)
        {
           return CPlayerIsUseReleaseRaceBuffPotion360_user(_this, CPlayerIsUseReleaseRaceBuffPotion360_next);
        };
        bool CPlayerIs_Battle_Mode362_wrapper(struct CPlayer* _this)
        {
           return CPlayerIs_Battle_Mode362_user(_this, CPlayerIs_Battle_Mode362_next);
        };
        void CPlayerLimLvNpcQuestDelete364_wrapper(struct CPlayer* _this, char byQuestDBSlot)
        {
           CPlayerLimLvNpcQuestDelete364_user(_this, byQuestDBSlot, CPlayerLimLvNpcQuestDelete364_next);
        };
        bool CPlayerLoad366_wrapper(struct CPlayer* _this, struct CUserDB* pUser, bool bFirstStart)
        {
           return CPlayerLoad366_user(_this, pUser, bFirstStart, CPlayerLoad366_next);
        };
        void CPlayerLoop368_wrapper(struct CPlayer* _this)
        {
           CPlayerLoop368_user(_this, CPlayerLoop368_next);
        };
        void CPlayerNetClose370_wrapper(struct CPlayer* _this, bool bMoveOutLobby)
        {
           CPlayerNetClose370_user(_this, bMoveOutLobby, CPlayerNetClose370_next);
        };
        void CPlayerNewViewCircleObject372_wrapper(struct CPlayer* _this)
        {
           CPlayerNewViewCircleObject372_user(_this, CPlayerNewViewCircleObject372_next);
        };
        void CPlayerOnLoop_Static374_wrapper()
        {
           CPlayerOnLoop_Static374_user(CPlayerOnLoop_Static374_next);
        };
        bool CPlayerOutOfMap376_wrapper(struct CPlayer* _this, struct CMapData* pIntoMap, uint16_t wLayerIndex, char byMapOutType, float* pfStartPos)
        {
           return CPlayerOutOfMap376_user(_this, pIntoMap, wLayerIndex, byMapOutType, pfStartPos, CPlayerOutOfMap376_next);
        };
        void CPlayerOutOfSec378_wrapper(struct CPlayer* _this)
        {
           CPlayerOutOfSec378_user(_this, CPlayerOutOfSec378_next);
        };
        void CPlayerPastWhisperInit380_wrapper(struct CPlayer* _this)
        {
           CPlayerPastWhisperInit380_user(_this, CPlayerPastWhisperInit380_next);
        };
        void CPlayerPotion_Buf_Extend382_wrapper(struct CPlayer* _this)
        {
           CPlayerPotion_Buf_Extend382_user(_this, CPlayerPotion_Buf_Extend382_next);
        };
        void CPlayerPushDQSCheatPlyerVoteInfo384_wrapper(struct CPlayer* _this)
        {
           CPlayerPushDQSCheatPlyerVoteInfo384_user(_this, CPlayerPushDQSCheatPlyerVoteInfo384_next);
        };
        void CPlayerPushDQSUpdatePlyerVoteInfo386_wrapper(struct CPlayer* _this)
        {
           CPlayerPushDQSUpdatePlyerVoteInfo386_user(_this, CPlayerPushDQSUpdatePlyerVoteInfo386_next);
        };
        void CPlayerPushDQSUpdateVoteAvilable388_wrapper(struct CPlayer* _this)
        {
           CPlayerPushDQSUpdateVoteAvilable388_user(_this, CPlayerPushDQSUpdateVoteAvilable388_next);
        };
        void CPlayerReCalcMaxHFSP390_wrapper(struct CPlayer* _this, bool bSend, bool bRatio)
        {
           CPlayerReCalcMaxHFSP390_user(_this, bSend, bRatio, CPlayerReCalcMaxHFSP390_next);
        };
        void CPlayerRecallRandomPositionInRange392_wrapper(struct CPlayer* _this, struct CMapData* pIntoMap, uint16_t wMapLayerIndex, float* pStartPos, int iRange)
        {
           CPlayerRecallRandomPositionInRange392_user(_this, pIntoMap, wMapLayerIndex, pStartPos, iRange, CPlayerRecallRandomPositionInRange392_next);
        };
        void CPlayerRecvHSKQuest394_wrapper(struct CPlayer* _this, char byHSKQuestCode, char byCristalBattleDBInfo, int nPvpPoint, uint16_t wKillPoint, uint16_t wDieCount, char byHSKTime)
        {
           CPlayerRecvHSKQuest394_user(_this, byHSKQuestCode, byCristalBattleDBInfo, nPvpPoint, wKillPoint, wDieCount, byHSKTime, CPlayerRecvHSKQuest394_next);
        };
        void CPlayerRecvKillMessage396_wrapper(struct CPlayer* _this, struct CCharacter* pDier)
        {
           CPlayerRecvKillMessage396_user(_this, pDier, CPlayerRecvKillMessage396_next);
        };
        void CPlayerReservationForceClose398_wrapper(struct CPlayer* _this)
        {
           CPlayerReservationForceClose398_user(_this, CPlayerReservationForceClose398_next);
        };
        void CPlayerResurrect400_wrapper(struct CPlayer* _this)
        {
           CPlayerResurrect400_user(_this, CPlayerResurrect400_next);
        };
        void CPlayerReturn_AnimusAsk402_wrapper(struct CPlayer* _this, char byReturnType)
        {
           CPlayerReturn_AnimusAsk402_user(_this, byReturnType, CPlayerReturn_AnimusAsk402_next);
        };
        void CPlayerRewardChangeClass404_wrapper(struct CPlayer* _this, struct _class_fld* pClassFld, char bySelectRewardItem)
        {
           CPlayerRewardChangeClass404_user(_this, pClassFld, bySelectRewardItem, CPlayerRewardChangeClass404_next);
        };
        void CPlayerRewardChangeClassMastery406_wrapper(struct CPlayer* _this, struct _class_fld* pClassFld)
        {
           CPlayerRewardChangeClassMastery406_user(_this, pClassFld, CPlayerRewardChangeClassMastery406_next);
        };
        void CPlayerRewardChangeClassRewardItem408_wrapper(struct CPlayer* _this, struct _class_fld* pClassFld, char bySelectRewardItem)
        {
           CPlayerRewardChangeClassRewardItem408_user(_this, pClassFld, bySelectRewardItem, CPlayerRewardChangeClassRewardItem408_next);
        };
        void CPlayerRewardRaceWarPvpCash410_wrapper(struct CPlayer* _this)
        {
           CPlayerRewardRaceWarPvpCash410_user(_this, CPlayerRewardRaceWarPvpCash410_next);
        };
        void CPlayerReward_DarkDungeon412_wrapper(struct CPlayer* _this, struct _dh_reward_sub_setup* pSetup, char* pszTitle, int bRealBoss, struct _STORAGE_LIST::_db_con* pItem, int* bIsRewarded)
        {
           CPlayerReward_DarkDungeon412_user(_this, pSetup, pszTitle, bRealBoss, pItem, bIsRewarded, CPlayerReward_DarkDungeon412_next);
        };
        bool CPlayerRobbedHP414_wrapper(struct CPlayer* _this, struct CCharacter* pDst, int nDecHP)
        {
           return CPlayerRobbedHP414_user(_this, pDst, nDecHP, CPlayerRobbedHP414_next);
        };
        void CPlayerSFContDelMessage416_wrapper(struct CPlayer* _this, char byContCode, char byListIndex, bool bSend, bool bAura)
        {
           CPlayerSFContDelMessage416_user(_this, byContCode, byListIndex, bSend, bAura, CPlayerSFContDelMessage416_next);
        };
        void CPlayerSFContInsertMessage418_wrapper(struct CPlayer* _this, char byContCode, char byListIndex, bool bAuraSkill, struct CPlayer* pPlayerAct)
        {
           CPlayerSFContInsertMessage418_user(_this, byContCode, byListIndex, bAuraSkill, pPlayerAct, CPlayerSFContInsertMessage418_next);
        };
        void CPlayerSFContUpdateTimeMessage420_wrapper(struct CPlayer* _this, char byContCode, char byListIndex, int nLeftTime)
        {
           CPlayerSFContUpdateTimeMessage420_user(_this, byContCode, byListIndex, nLeftTime, CPlayerSFContUpdateTimeMessage420_next);
        };
        bool CPlayerSF_AllContDamageForceRemove_Once422_wrapper(struct CPlayer* _this, struct CCharacter* pDstObj)
        {
           return CPlayerSF_AllContDamageForceRemove_Once422_user(_this, pDstObj, CPlayerSF_AllContDamageForceRemove_Once422_next);
        };
        bool CPlayerSF_AllContDamageRemove_Once424_wrapper(struct CPlayer* _this, struct CCharacter* pDstObj)
        {
           return CPlayerSF_AllContDamageRemove_Once424_user(_this, pDstObj, CPlayerSF_AllContDamageRemove_Once424_next);
        };
        bool CPlayerSF_AllContHelpForceRemove_Once426_wrapper(struct CPlayer* _this, struct CCharacter* pDstObj)
        {
           return CPlayerSF_AllContHelpForceRemove_Once426_user(_this, pDstObj, CPlayerSF_AllContHelpForceRemove_Once426_next);
        };
        bool CPlayerSF_AllContHelpSkillRemove_Once428_wrapper(struct CPlayer* _this, struct CCharacter* pDstObj)
        {
           return CPlayerSF_AllContHelpSkillRemove_Once428_user(_this, pDstObj, CPlayerSF_AllContHelpSkillRemove_Once428_next);
        };
        bool CPlayerSF_AttHPtoDstFP_Once430_wrapper(struct CPlayer* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CPlayerSF_AttHPtoDstFP_Once430_user(_this, pDstObj, fEffectValue, CPlayerSF_AttHPtoDstFP_Once430_next);
        };
        bool CPlayerSF_ContDamageTimeInc_Once432_wrapper(struct CPlayer* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CPlayerSF_ContDamageTimeInc_Once432_user(_this, pDstObj, fEffectValue, CPlayerSF_ContDamageTimeInc_Once432_next);
        };
        bool CPlayerSF_ContHelpTimeInc_Once434_wrapper(struct CPlayer* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CPlayerSF_ContHelpTimeInc_Once434_user(_this, pDstObj, fEffectValue, CPlayerSF_ContHelpTimeInc_Once434_next);
        };
        bool CPlayerSF_ConvertMonsterTarget436_wrapper(struct CPlayer* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CPlayerSF_ConvertMonsterTarget436_user(_this, pDstObj, fEffectValue, CPlayerSF_ConvertMonsterTarget436_next);
        };
        bool CPlayerSF_ConvertTargetDest438_wrapper(struct CPlayer* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CPlayerSF_ConvertTargetDest438_user(_this, pDstObj, fEffectValue, CPlayerSF_ConvertTargetDest438_next);
        };
        bool CPlayerSF_DamageAndStun440_wrapper(struct CPlayer* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CPlayerSF_DamageAndStun440_user(_this, pDstObj, fEffectValue, CPlayerSF_DamageAndStun440_next);
        };
        bool CPlayerSF_FPDec442_wrapper(struct CPlayer* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CPlayerSF_FPDec442_user(_this, pDstObj, fEffectValue, CPlayerSF_FPDec442_next);
        };
        bool CPlayerSF_HFSInc_Once444_wrapper(struct CPlayer* _this, struct CCharacter* pDstObj)
        {
           return CPlayerSF_HFSInc_Once444_user(_this, pDstObj, CPlayerSF_HFSInc_Once444_next);
        };
        bool CPlayerSF_HPInc_Once446_wrapper(struct CPlayer* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CPlayerSF_HPInc_Once446_user(_this, pDstObj, fEffectValue, CPlayerSF_HPInc_Once446_next);
        };
        bool CPlayerSF_IncHPCircleParty448_wrapper(struct CPlayer* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CPlayerSF_IncHPCircleParty448_user(_this, pDstObj, fEffectValue, CPlayerSF_IncHPCircleParty448_next);
        };
        bool CPlayerSF_IncreaseDP450_wrapper(struct CPlayer* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CPlayerSF_IncreaseDP450_user(_this, pDstObj, fEffectValue, CPlayerSF_IncreaseDP450_next);
        };
        bool CPlayerSF_LateContDamageRemove_Once452_wrapper(struct CPlayer* _this, struct CCharacter* pDstObj)
        {
           return CPlayerSF_LateContDamageRemove_Once452_user(_this, pDstObj, CPlayerSF_LateContDamageRemove_Once452_next);
        };
        bool CPlayerSF_LateContHelpForceRemove_Once454_wrapper(struct CPlayer* _this, struct CCharacter* pDstObj)
        {
           return CPlayerSF_LateContHelpForceRemove_Once454_user(_this, pDstObj, CPlayerSF_LateContHelpForceRemove_Once454_next);
        };
        bool CPlayerSF_LateContHelpSkillRemove_Once456_wrapper(struct CPlayer* _this, struct CCharacter* pDstObj)
        {
           return CPlayerSF_LateContHelpSkillRemove_Once456_user(_this, pDstObj, CPlayerSF_LateContHelpSkillRemove_Once456_next);
        };
        bool CPlayerSF_MakePortalReturnBindPositionPartyMember458_wrapper(struct CPlayer* _this, struct CCharacter* pDstObj, float fEffectValue, char* byRet)
        {
           return CPlayerSF_MakePortalReturnBindPositionPartyMember458_user(_this, pDstObj, fEffectValue, byRet, CPlayerSF_MakePortalReturnBindPositionPartyMember458_next);
        };
        bool CPlayerSF_MakeZeroAnimusRecallTimeOnce460_wrapper(struct CPlayer* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CPlayerSF_MakeZeroAnimusRecallTimeOnce460_user(_this, pDstObj, fEffectValue, CPlayerSF_MakeZeroAnimusRecallTimeOnce460_next);
        };
        bool CPlayerSF_OthersContHelpSFRemove_Once462_wrapper(struct CPlayer* _this, float fEffectValue)
        {
           return CPlayerSF_OthersContHelpSFRemove_Once462_user(_this, fEffectValue, CPlayerSF_OthersContHelpSFRemove_Once462_next);
        };
        bool CPlayerSF_OverHealing_Once464_wrapper(struct CPlayer* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CPlayerSF_OverHealing_Once464_user(_this, pDstObj, fEffectValue, CPlayerSF_OverHealing_Once464_next);
        };
        bool CPlayerSF_RecoverAllReturnStateAnimusHPFull466_wrapper(struct CPlayer* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CPlayerSF_RecoverAllReturnStateAnimusHPFull466_user(_this, pDstObj, fEffectValue, CPlayerSF_RecoverAllReturnStateAnimusHPFull466_next);
        };
        bool CPlayerSF_ReleaseMonsterTarget468_wrapper(struct CPlayer* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CPlayerSF_ReleaseMonsterTarget468_user(_this, pDstObj, fEffectValue, CPlayerSF_ReleaseMonsterTarget468_next);
        };
        bool CPlayerSF_RemoveAllContHelp_Once470_wrapper(struct CPlayer* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CPlayerSF_RemoveAllContHelp_Once470_user(_this, pDstObj, fEffectValue, CPlayerSF_RemoveAllContHelp_Once470_next);
        };
        bool CPlayerSF_Resurrect_Once472_wrapper(struct CPlayer* _this, struct CCharacter* pDstObj)
        {
           return CPlayerSF_Resurrect_Once472_user(_this, pDstObj, CPlayerSF_Resurrect_Once472_next);
        };
        bool CPlayerSF_ReturnBindPosition474_wrapper(struct CPlayer* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CPlayerSF_ReturnBindPosition474_user(_this, pDstObj, fEffectValue, CPlayerSF_ReturnBindPosition474_next);
        };
        bool CPlayerSF_SPDec476_wrapper(struct CPlayer* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CPlayerSF_SPDec476_user(_this, pDstObj, fEffectValue, CPlayerSF_SPDec476_next);
        };
        bool CPlayerSF_STInc_Once478_wrapper(struct CPlayer* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CPlayerSF_STInc_Once478_user(_this, pDstObj, fEffectValue, CPlayerSF_STInc_Once478_next);
        };
        bool CPlayerSF_SelfDestruction480_wrapper(struct CPlayer* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CPlayerSF_SelfDestruction480_user(_this, pDstObj, fEffectValue, CPlayerSF_SelfDestruction480_next);
        };
        bool CPlayerSF_SkillContHelpTimeInc_Once482_wrapper(struct CPlayer* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CPlayerSF_SkillContHelpTimeInc_Once482_user(_this, pDstObj, fEffectValue, CPlayerSF_SkillContHelpTimeInc_Once482_next);
        };
        bool CPlayerSF_Stun484_wrapper(struct CPlayer* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CPlayerSF_Stun484_user(_this, pDstObj, fEffectValue, CPlayerSF_Stun484_next);
        };
        bool CPlayerSF_TeleportToDestination486_wrapper(struct CPlayer* _this, struct CCharacter* pDstObj, bool bStone)
        {
           return CPlayerSF_TeleportToDestination486_user(_this, pDstObj, bStone, CPlayerSF_TeleportToDestination486_next);
        };
        bool CPlayerSF_TransDestHP488_wrapper(struct CPlayer* _this, struct CCharacter* pDstObj, float fEffectValue, char* byRet)
        {
           return CPlayerSF_TransDestHP488_user(_this, pDstObj, fEffectValue, byRet, CPlayerSF_TransDestHP488_next);
        };
        bool CPlayerSF_TransMonsterHP490_wrapper(struct CPlayer* _this, struct CCharacter* pDstObj, float fEffectValue)
        {
           return CPlayerSF_TransMonsterHP490_user(_this, pDstObj, fEffectValue, CPlayerSF_TransMonsterHP490_next);
        };
        void CPlayerSendData_ChatTrans492_wrapper(struct CPlayer* _this, char byChatType, unsigned int dwSenderSerial, char byRaceCode, bool bFilter, char* pwszMessage, char byPvpGrade, char* pwszSender)
        {
           CPlayerSendData_ChatTrans492_user(_this, byChatType, dwSenderSerial, byRaceCode, bFilter, pwszMessage, byPvpGrade, pwszSender, CPlayerSendData_ChatTrans492_next);
        };
        void CPlayerSendData_PartyMemberEffect494_wrapper(struct CPlayer* _this, char byAlterCode, uint16_t wEffectCode, char byLv)
        {
           CPlayerSendData_PartyMemberEffect494_user(_this, byAlterCode, wEffectCode, byLv, CPlayerSendData_PartyMemberEffect494_next);
        };
        void CPlayerSendData_PartyMemberFP496_wrapper(struct CPlayer* _this)
        {
           CPlayerSendData_PartyMemberFP496_user(_this, CPlayerSendData_PartyMemberFP496_next);
        };
        void CPlayerSendData_PartyMemberHP498_wrapper(struct CPlayer* _this)
        {
           CPlayerSendData_PartyMemberHP498_user(_this, CPlayerSendData_PartyMemberHP498_next);
        };
        void CPlayerSendData_PartyMemberInfo500_wrapper(struct CPlayer* _this, uint16_t wDstIndex)
        {
           CPlayerSendData_PartyMemberInfo500_user(_this, wDstIndex, CPlayerSendData_PartyMemberInfo500_next);
        };
        void CPlayerSendData_PartyMemberInfoToMembers502_wrapper(struct CPlayer* _this)
        {
           CPlayerSendData_PartyMemberInfoToMembers502_user(_this, CPlayerSendData_PartyMemberInfoToMembers502_next);
        };
        void CPlayerSendData_PartyMemberLv504_wrapper(struct CPlayer* _this)
        {
           CPlayerSendData_PartyMemberLv504_user(_this, CPlayerSendData_PartyMemberLv504_next);
        };
        void CPlayerSendData_PartyMemberMaxHFSP506_wrapper(struct CPlayer* _this)
        {
           CPlayerSendData_PartyMemberMaxHFSP506_user(_this, CPlayerSendData_PartyMemberMaxHFSP506_next);
        };
        void CPlayerSendData_PartyMemberPos508_wrapper(struct CPlayer* _this)
        {
           CPlayerSendData_PartyMemberPos508_user(_this, CPlayerSendData_PartyMemberPos508_next);
        };
        void CPlayerSendData_PartyMemberSP510_wrapper(struct CPlayer* _this)
        {
           CPlayerSendData_PartyMemberSP510_user(_this, CPlayerSendData_PartyMemberSP510_next);
        };
        void CPlayerSendMsg_AMPInvenDownloadResult512_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_AMPInvenDownloadResult512_user(_this, CPlayerSendMsg_AMPInvenDownloadResult512_next);
        };
        void CPlayerSendMsg_AddBagResult514_wrapper(struct CPlayer* _this, char byErrCode)
        {
           CPlayerSendMsg_AddBagResult514_user(_this, byErrCode, CPlayerSendMsg_AddBagResult514_next);
        };
        void CPlayerSendMsg_AddEffect516_wrapper(struct CPlayer* _this, uint16_t wEffectCode, char byLv, uint16_t wDurSec, unsigned int dwPlayerSerial, char* wszPlayerName)
        {
           CPlayerSendMsg_AddEffect516_user(_this, wEffectCode, byLv, wDurSec, dwPlayerSerial, wszPlayerName, CPlayerSendMsg_AddEffect516_next);
        };
        void CPlayerSendMsg_AdjustAmountInform518_wrapper(struct CPlayer* _this, char byStorageCode, uint16_t wSerial, unsigned int dwDur)
        {
           CPlayerSendMsg_AdjustAmountInform518_user(_this, byStorageCode, wSerial, dwDur, CPlayerSendMsg_AdjustAmountInform518_next);
        };
        void CPlayerSendMsg_AlterBooster520_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_AlterBooster520_user(_this, CPlayerSendMsg_AlterBooster520_next);
        };
        void CPlayerSendMsg_AlterContEffectTime522_wrapper(struct CPlayer* _this, char byContType)
        {
           CPlayerSendMsg_AlterContEffectTime522_user(_this, byContType, CPlayerSendMsg_AlterContEffectTime522_next);
        };
        void CPlayerSendMsg_AlterEquipSPInform524_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_AlterEquipSPInform524_user(_this, CPlayerSendMsg_AlterEquipSPInform524_next);
        };
        void CPlayerSendMsg_AlterExpInform526_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_AlterExpInform526_user(_this, CPlayerSendMsg_AlterExpInform526_next);
        };
        void CPlayerSendMsg_AlterGradeInform528_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_AlterGradeInform528_user(_this, CPlayerSendMsg_AlterGradeInform528_next);
        };
        void CPlayerSendMsg_AlterHPInform530_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_AlterHPInform530_user(_this, CPlayerSendMsg_AlterHPInform530_next);
        };
        void CPlayerSendMsg_AlterItemDurInform532_wrapper(struct CPlayer* _this, char byStorageCode, uint16_t wItemSerial, uint64_t dwDur)
        {
           CPlayerSendMsg_AlterItemDurInform532_user(_this, byStorageCode, wItemSerial, dwDur, CPlayerSendMsg_AlterItemDurInform532_next);
        };
        void CPlayerSendMsg_AlterMaxDP534_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_AlterMaxDP534_user(_this, CPlayerSendMsg_AlterMaxDP534_next);
        };
        void CPlayerSendMsg_AlterMoneyInform536_wrapper(struct CPlayer* _this, char byReasonCode)
        {
           CPlayerSendMsg_AlterMoneyInform536_user(_this, byReasonCode, CPlayerSendMsg_AlterMoneyInform536_next);
        };
        void CPlayerSendMsg_AlterPvPCash538_wrapper(struct CPlayer* _this, int nIOCode)
        {
           CPlayerSendMsg_AlterPvPCash538_user(_this, nIOCode, CPlayerSendMsg_AlterPvPCash538_next);
        };
        void CPlayerSendMsg_AlterPvPPoint540_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_AlterPvPPoint540_user(_this, CPlayerSendMsg_AlterPvPPoint540_next);
        };
        void CPlayerSendMsg_AlterPvPRank542_wrapper(struct CPlayer* _this, uint16_t wPvpRate, unsigned int dwPvpRank)
        {
           CPlayerSendMsg_AlterPvPRank542_user(_this, wPvpRate, dwPvpRank, CPlayerSendMsg_AlterPvPRank542_next);
        };
        void CPlayerSendMsg_AlterRegionInform544_wrapper(struct CPlayer* _this, int nRegionIndex)
        {
           CPlayerSendMsg_AlterRegionInform544_user(_this, nRegionIndex, CPlayerSendMsg_AlterRegionInform544_next);
        };
        void CPlayerSendMsg_AlterSPInform546_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_AlterSPInform546_user(_this, CPlayerSendMsg_AlterSPInform546_next);
        };
        void CPlayerSendMsg_AlterTol548_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_AlterTol548_user(_this, CPlayerSendMsg_AlterTol548_next);
        };
        void CPlayerSendMsg_AlterTowerHP550_wrapper(struct CPlayer* _this, uint16_t wItemSerial, uint16_t wLeftHP)
        {
           CPlayerSendMsg_AlterTowerHP550_user(_this, wItemSerial, wLeftHP, CPlayerSendMsg_AlterTowerHP550_next);
        };
        void CPlayerSendMsg_AlterTownOrField552_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_AlterTownOrField552_user(_this, CPlayerSendMsg_AlterTownOrField552_next);
        };
        void CPlayerSendMsg_AlterUnitBulletInform554_wrapper(struct CPlayer* _this, char byPart, uint16_t wLeftNum)
        {
           CPlayerSendMsg_AlterUnitBulletInform554_user(_this, byPart, wLeftNum, CPlayerSendMsg_AlterUnitBulletInform554_next);
        };
        void CPlayerSendMsg_AlterUnitHPInform556_wrapper(struct CPlayer* _this, char bySlotIndex, unsigned int dwGauge)
        {
           CPlayerSendMsg_AlterUnitHPInform556_user(_this, bySlotIndex, dwGauge, CPlayerSendMsg_AlterUnitHPInform556_next);
        };
        void CPlayerSendMsg_AlterWeaponBulletInform558_wrapper(struct CPlayer* _this, uint16_t wItemSerial, uint16_t wLeftNum)
        {
           CPlayerSendMsg_AlterWeaponBulletInform558_user(_this, wItemSerial, wLeftNum, CPlayerSendMsg_AlterWeaponBulletInform558_next);
        };
        void CPlayerSendMsg_Alter_Action_Point560_wrapper(struct CPlayer* _this, char byActCode, unsigned int dwActPoint)
        {
           CPlayerSendMsg_Alter_Action_Point560_user(_this, byActCode, dwActPoint, CPlayerSendMsg_Alter_Action_Point560_next);
        };
        void CPlayerSendMsg_AnimusExpInform562_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_AnimusExpInform562_user(_this, CPlayerSendMsg_AnimusExpInform562_next);
        };
        void CPlayerSendMsg_AnimusFPInform564_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_AnimusFPInform564_user(_this, CPlayerSendMsg_AnimusFPInform564_next);
        };
        void CPlayerSendMsg_AnimusHPInform566_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_AnimusHPInform566_user(_this, CPlayerSendMsg_AnimusHPInform566_next);
        };
        void CPlayerSendMsg_AnimusInvenChange568_wrapper(struct CPlayer* _this, char byErrCode)
        {
           CPlayerSendMsg_AnimusInvenChange568_user(_this, byErrCode, CPlayerSendMsg_AnimusInvenChange568_next);
        };
        void CPlayerSendMsg_AnimusModeInform570_wrapper(struct CPlayer* _this, char byMode)
        {
           CPlayerSendMsg_AnimusModeInform570_user(_this, byMode, CPlayerSendMsg_AnimusModeInform570_next);
        };
        void CPlayerSendMsg_AnimusRecallResult572_wrapper(struct CPlayer* _this, char byResultCode, uint16_t wLeftFP, struct CAnimus* pNewAnimus)
        {
           CPlayerSendMsg_AnimusRecallResult572_user(_this, byResultCode, wLeftFP, pNewAnimus, CPlayerSendMsg_AnimusRecallResult572_next);
        };
        void CPlayerSendMsg_AnimusRecallWaitTimeFree574_wrapper(struct CPlayer* _this, bool bFree)
        {
           CPlayerSendMsg_AnimusRecallWaitTimeFree574_user(_this, bFree, CPlayerSendMsg_AnimusRecallWaitTimeFree574_next);
        };
        void CPlayerSendMsg_AnimusReturnResult576_wrapper(struct CPlayer* _this, char byRetCode, uint16_t wAnimusItemSerial, char byReturnType)
        {
           CPlayerSendMsg_AnimusReturnResult576_user(_this, byRetCode, wAnimusItemSerial, byReturnType, CPlayerSendMsg_AnimusReturnResult576_next);
        };
        void CPlayerSendMsg_AnimusTargetResult578_wrapper(struct CPlayer* _this, char byRetCode)
        {
           CPlayerSendMsg_AnimusTargetResult578_user(_this, byRetCode, CPlayerSendMsg_AnimusTargetResult578_next);
        };
        void CPlayerSendMsg_ApexInform580_wrapper(struct CPlayer* _this, unsigned int dwRecvSize, char* pMsg)
        {
           CPlayerSendMsg_ApexInform580_user(_this, dwRecvSize, pMsg, CPlayerSendMsg_ApexInform580_next);
        };
        void CPlayerSendMsg_AttackResult_Count582_wrapper(struct CPlayer* _this, struct CAttack* pAt)
        {
           CPlayerSendMsg_AttackResult_Count582_user(_this, pAt, CPlayerSendMsg_AttackResult_Count582_next);
        };
        void CPlayerSendMsg_AttackResult_Error584_wrapper(struct CPlayer* _this, int nErrCode)
        {
           CPlayerSendMsg_AttackResult_Error584_user(_this, nErrCode, CPlayerSendMsg_AttackResult_Error584_next);
        };
        void CPlayerSendMsg_AttackResult_Force586_wrapper(struct CPlayer* _this, struct CAttack* pAt)
        {
           CPlayerSendMsg_AttackResult_Force586_user(_this, pAt, CPlayerSendMsg_AttackResult_Force586_next);
        };
        void CPlayerSendMsg_AttackResult_Gen588_wrapper(struct CPlayer* _this, struct CAttack* pAt, uint16_t wBulletIndex)
        {
           CPlayerSendMsg_AttackResult_Gen588_user(_this, pAt, wBulletIndex, CPlayerSendMsg_AttackResult_Gen588_next);
        };
        void CPlayerSendMsg_AttackResult_SelfDestruction590_wrapper(struct CPlayer* _this, struct CAttack* pAt)
        {
           CPlayerSendMsg_AttackResult_SelfDestruction590_user(_this, pAt, CPlayerSendMsg_AttackResult_SelfDestruction590_next);
        };
        void CPlayerSendMsg_AttackResult_Siege592_wrapper(struct CPlayer* _this, struct CAttack* pAt, uint16_t wBulletIndex)
        {
           CPlayerSendMsg_AttackResult_Siege592_user(_this, pAt, wBulletIndex, CPlayerSendMsg_AttackResult_Siege592_next);
        };
        void CPlayerSendMsg_AttackResult_Skill594_wrapper(struct CPlayer* _this, char byEffectCode, struct CPlayerAttack* pAt, uint16_t wBulletIndex)
        {
           CPlayerSendMsg_AttackResult_Skill594_user(_this, byEffectCode, pAt, wBulletIndex, CPlayerSendMsg_AttackResult_Skill594_next);
        };
        void CPlayerSendMsg_AttackResult_Unit596_wrapper(struct CPlayer* _this, struct CAttack* pAt, char byWeaponPart, uint16_t wBulletIndex)
        {
           CPlayerSendMsg_AttackResult_Unit596_user(_this, pAt, byWeaponPart, wBulletIndex, CPlayerSendMsg_AttackResult_Unit596_next);
        };
        void CPlayerSendMsg_AwayPartyInvitationQuestion598_wrapper(struct CPlayer* _this, uint16_t wJoinerIndex)
        {
           CPlayerSendMsg_AwayPartyInvitationQuestion598_user(_this, wJoinerIndex, CPlayerSendMsg_AwayPartyInvitationQuestion598_next);
        };
        void CPlayerSendMsg_AwayPartyRequestResult600_wrapper(struct CPlayer* _this, char byRetCode)
        {
           CPlayerSendMsg_AwayPartyRequestResult600_user(_this, byRetCode, CPlayerSendMsg_AwayPartyRequestResult600_next);
        };
        void CPlayerSendMsg_BackTowerResult602_wrapper(struct CPlayer* _this, char byErrCode, uint16_t wItemSerial, uint16_t wLeftHP)
        {
           CPlayerSendMsg_BackTowerResult602_user(_this, byErrCode, wItemSerial, wLeftHP, CPlayerSendMsg_BackTowerResult602_next);
        };
        void CPlayerSendMsg_BackTrapResult604_wrapper(struct CPlayer* _this, char byErrCode)
        {
           CPlayerSendMsg_BackTrapResult604_user(_this, byErrCode, CPlayerSendMsg_BackTrapResult604_next);
        };
        void CPlayerSendMsg_BaseDownloadResult606_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_BaseDownloadResult606_user(_this, CPlayerSendMsg_BaseDownloadResult606_next);
        };
        void CPlayerSendMsg_BillingExipreInform608_wrapper(struct CPlayer* _this, char byKind, uint16_t wWaitSec)
        {
           CPlayerSendMsg_BillingExipreInform608_user(_this, byKind, wWaitSec, CPlayerSendMsg_BillingExipreInform608_next);
        };
        void CPlayerSendMsg_BillingTypeChangeInform610_wrapper(struct CPlayer* _this, int16_t iType, int lRemainTime, struct _SYSTEMTIME* pstEndDate, char byReason)
        {
           CPlayerSendMsg_BillingTypeChangeInform610_user(_this, iType, lRemainTime, pstEndDate, byReason, CPlayerSendMsg_BillingTypeChangeInform610_next);
        };
        void CPlayerSendMsg_BreakdownEquipItem612_wrapper(struct CPlayer* _this, char byPartIndex, uint16_t wSerial)
        {
           CPlayerSendMsg_BreakdownEquipItem612_user(_this, byPartIndex, wSerial, CPlayerSendMsg_BreakdownEquipItem612_next);
        };
        void CPlayerSendMsg_BuddhaEventMsg614_wrapper(struct CPlayer* _this, char byErrorCode)
        {
           CPlayerSendMsg_BuddhaEventMsg614_user(_this, byErrorCode, CPlayerSendMsg_BuddhaEventMsg614_next);
        };
        void CPlayerSendMsg_BuddyAddAnswerResult616_wrapper(struct CPlayer* _this, char byRetCode, bool bAccept, unsigned int dwAskerSerial, uint16_t wIndex, unsigned int dwSerial, char* pwszCharName)
        {
           CPlayerSendMsg_BuddyAddAnswerResult616_user(_this, byRetCode, bAccept, dwAskerSerial, wIndex, dwSerial, pwszCharName, CPlayerSendMsg_BuddyAddAnswerResult616_next);
        };
        void CPlayerSendMsg_BuddyAddAsk618_wrapper(struct CPlayer* _this, uint16_t wAskerIndex, unsigned int dwAskerSerial, char* pwszAskerName)
        {
           CPlayerSendMsg_BuddyAddAsk618_user(_this, wAskerIndex, dwAskerSerial, pwszAskerName, CPlayerSendMsg_BuddyAddAsk618_next);
        };
        void CPlayerSendMsg_BuddyAddFail620_wrapper(struct CPlayer* _this, char byRetCode, char* pwszDstName)
        {
           CPlayerSendMsg_BuddyAddFail620_user(_this, byRetCode, pwszDstName, CPlayerSendMsg_BuddyAddFail620_next);
        };
        void CPlayerSendMsg_BuddyDelResult622_wrapper(struct CPlayer* _this, char byRetCode, unsigned int dwSerial)
        {
           CPlayerSendMsg_BuddyDelResult622_user(_this, byRetCode, dwSerial, CPlayerSendMsg_BuddyDelResult622_next);
        };
        void CPlayerSendMsg_BuddyLoginInform624_wrapper(struct CPlayer* _this, unsigned int dwObjSerial, char byMapIndex, char byPosCode)
        {
           CPlayerSendMsg_BuddyLoginInform624_user(_this, dwObjSerial, byMapIndex, byPosCode, CPlayerSendMsg_BuddyLoginInform624_next);
        };
        void CPlayerSendMsg_BuddyLogoffInform626_wrapper(struct CPlayer* _this, unsigned int dwObjSerial)
        {
           CPlayerSendMsg_BuddyLogoffInform626_user(_this, dwObjSerial, CPlayerSendMsg_BuddyLogoffInform626_next);
        };
        void CPlayerSendMsg_BuddyNameReNewal628_wrapper(struct CPlayer* _this, unsigned int dwSerial, char* wszName)
        {
           CPlayerSendMsg_BuddyNameReNewal628_user(_this, dwSerial, wszName, CPlayerSendMsg_BuddyNameReNewal628_next);
        };
        void CPlayerSendMsg_BuddyPosInform630_wrapper(struct CPlayer* _this, unsigned int dwDstSerial, char byMapIndex, char byPosCode)
        {
           CPlayerSendMsg_BuddyPosInform630_user(_this, dwDstSerial, byMapIndex, byPosCode, CPlayerSendMsg_BuddyPosInform630_next);
        };
        void CPlayerSendMsg_BuyCashItemMode632_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_BuyCashItemMode632_user(_this, CPlayerSendMsg_BuyCashItemMode632_next);
        };
        void CPlayerSendMsg_BuyItemStoreResult634_wrapper(struct CPlayer* _this, struct CItemStore* pStore, int nOfferNum, struct _buy_offer* pCard, char byErrCode)
        {
           CPlayerSendMsg_BuyItemStoreResult634_user(_this, pStore, nOfferNum, pCard, byErrCode, CPlayerSendMsg_BuyItemStoreResult634_next);
        };
        void CPlayerSendMsg_CancelSuggestResult636_wrapper(struct CPlayer* _this, char byRetCode)
        {
           CPlayerSendMsg_CancelSuggestResult636_user(_this, byRetCode, CPlayerSendMsg_CancelSuggestResult636_next);
        };
        void CPlayerSendMsg_CastVoteResult638_wrapper(struct CPlayer* _this, char byRetCode)
        {
           CPlayerSendMsg_CastVoteResult638_user(_this, byRetCode, CPlayerSendMsg_CastVoteResult638_next);
        };
        void CPlayerSendMsg_ChangeClassCommand640_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_ChangeClassCommand640_user(_this, CPlayerSendMsg_ChangeClassCommand640_next);
        };
        void CPlayerSendMsg_CharacterRenameCashResult642_wrapper(struct CPlayer* _this, bool bChange, char byErrCode)
        {
           CPlayerSendMsg_CharacterRenameCashResult642_user(_this, bChange, byErrCode, CPlayerSendMsg_CharacterRenameCashResult642_next);
        };
        void CPlayerSendMsg_ChatFarFailure644_wrapper(struct CPlayer* _this, bool bBlock)
        {
           CPlayerSendMsg_ChatFarFailure644_user(_this, bBlock, CPlayerSendMsg_ChatFarFailure644_next);
        };
        void CPlayerSendMsg_Circle_DelEffect646_wrapper(struct CPlayer* _this, char byEffectCode, uint16_t wEffectIndex, char byLv, bool bToOne)
        {
           CPlayerSendMsg_Circle_DelEffect646_user(_this, byEffectCode, wEffectIndex, byLv, bToOne, CPlayerSendMsg_Circle_DelEffect646_next);
        };
        void CPlayerSendMsg_ClassSkillResult648_wrapper(struct CPlayer* _this, char byErrCode, struct _CHRID* pidDst, uint16_t wSkillIndex)
        {
           CPlayerSendMsg_ClassSkillResult648_user(_this, byErrCode, pidDst, wSkillIndex, CPlayerSendMsg_ClassSkillResult648_next);
        };
        void CPlayerSendMsg_ClearDarkHole650_wrapper(struct CPlayer* _this, char byErrCode)
        {
           CPlayerSendMsg_ClearDarkHole650_user(_this, byErrCode, CPlayerSendMsg_ClearDarkHole650_next);
        };
        void CPlayerSendMsg_CombineItemExAcceptResult652_wrapper(struct CPlayer* _this, struct _combine_ex_item_accept_result_zocl* pSend)
        {
           CPlayerSendMsg_CombineItemExAcceptResult652_user(_this, pSend, CPlayerSendMsg_CombineItemExAcceptResult652_next);
        };
        void CPlayerSendMsg_CombineItemExResult654_wrapper(struct CPlayer* _this, struct _combine_ex_item_result_zocl* pSend)
        {
           CPlayerSendMsg_CombineItemExResult654_user(_this, pSend, CPlayerSendMsg_CombineItemExResult654_next);
        };
        void CPlayerSendMsg_CombineItemResult656_wrapper(struct CPlayer* _this, char byErrCode, unsigned int dwFee, struct _STORAGE_LIST::_db_con* pNewItem)
        {
           CPlayerSendMsg_CombineItemResult656_user(_this, byErrCode, dwFee, pNewItem, CPlayerSendMsg_CombineItemResult656_next);
        };
        void CPlayerSendMsg_CombineLendItemResult658_wrapper(struct CPlayer* _this, char byErrCode, unsigned int dwFee, struct _STORAGE_LIST::_db_con* pNewItem)
        {
           CPlayerSendMsg_CombineLendItemResult658_user(_this, byErrCode, dwFee, pNewItem, CPlayerSendMsg_CombineLendItemResult658_next);
        };
        void CPlayerSendMsg_CreateTowerResult660_wrapper(struct CPlayer* _this, char byErrCode, unsigned int dwTowerObjSerial)
        {
           CPlayerSendMsg_CreateTowerResult660_user(_this, byErrCode, dwTowerObjSerial, CPlayerSendMsg_CreateTowerResult660_next);
        };
        void CPlayerSendMsg_CreateTrapResult662_wrapper(struct CPlayer* _this, char byErrCode, unsigned int dwTrapObjSerial)
        {
           CPlayerSendMsg_CreateTrapResult662_user(_this, byErrCode, dwTrapObjSerial, CPlayerSendMsg_CreateTrapResult662_next);
        };
        void CPlayerSendMsg_CumDownloadResult664_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_CumDownloadResult664_user(_this, CPlayerSendMsg_CumDownloadResult664_next);
        };
        void CPlayerSendMsg_CuttingCompleteResult666_wrapper(struct CPlayer* _this, char byRet)
        {
           CPlayerSendMsg_CuttingCompleteResult666_user(_this, byRet, CPlayerSendMsg_CuttingCompleteResult666_next);
        };
        void CPlayerSendMsg_DTradeAccomplishInform668_wrapper(struct CPlayer* _this, bool bSucc, uint16_t wStartSerial)
        {
           CPlayerSendMsg_DTradeAccomplishInform668_user(_this, bSucc, wStartSerial, CPlayerSendMsg_DTradeAccomplishInform668_next);
        };
        void CPlayerSendMsg_DTradeAddInform670_wrapper(struct CPlayer* _this, char bySlotIndex, struct _STORAGE_LIST::_db_con* pItem, char byAmount)
        {
           CPlayerSendMsg_DTradeAddInform670_user(_this, bySlotIndex, pItem, byAmount, CPlayerSendMsg_DTradeAddInform670_next);
        };
        void CPlayerSendMsg_DTradeAddResult672_wrapper(struct CPlayer* _this, char byErrCode)
        {
           CPlayerSendMsg_DTradeAddResult672_user(_this, byErrCode, CPlayerSendMsg_DTradeAddResult672_next);
        };
        void CPlayerSendMsg_DTradeAnswerResult674_wrapper(struct CPlayer* _this, char byErrCode)
        {
           CPlayerSendMsg_DTradeAnswerResult674_user(_this, byErrCode, CPlayerSendMsg_DTradeAnswerResult674_next);
        };
        void CPlayerSendMsg_DTradeAskInform676_wrapper(struct CPlayer* _this, struct CPlayer* pAsker)
        {
           CPlayerSendMsg_DTradeAskInform676_user(_this, pAsker, CPlayerSendMsg_DTradeAskInform676_next);
        };
        void CPlayerSendMsg_DTradeAskResult678_wrapper(struct CPlayer* _this, char byErrCode)
        {
           CPlayerSendMsg_DTradeAskResult678_user(_this, byErrCode, CPlayerSendMsg_DTradeAskResult678_next);
        };
        void CPlayerSendMsg_DTradeBetInform680_wrapper(struct CPlayer* _this, char byUnitCode, unsigned int dwAmount)
        {
           CPlayerSendMsg_DTradeBetInform680_user(_this, byUnitCode, dwAmount, CPlayerSendMsg_DTradeBetInform680_next);
        };
        void CPlayerSendMsg_DTradeBetResult682_wrapper(struct CPlayer* _this, char byErrCode)
        {
           CPlayerSendMsg_DTradeBetResult682_user(_this, byErrCode, CPlayerSendMsg_DTradeBetResult682_next);
        };
        void CPlayerSendMsg_DTradeCancleInform684_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_DTradeCancleInform684_user(_this, CPlayerSendMsg_DTradeCancleInform684_next);
        };
        void CPlayerSendMsg_DTradeCancleResult686_wrapper(struct CPlayer* _this, char byErrCode)
        {
           CPlayerSendMsg_DTradeCancleResult686_user(_this, byErrCode, CPlayerSendMsg_DTradeCancleResult686_next);
        };
        void CPlayerSendMsg_DTradeCloseInform688_wrapper(struct CPlayer* _this, char byCloseCode)
        {
           CPlayerSendMsg_DTradeCloseInform688_user(_this, byCloseCode, CPlayerSendMsg_DTradeCloseInform688_next);
        };
        void CPlayerSendMsg_DTradeDelInform690_wrapper(struct CPlayer* _this, char bySlotIndex)
        {
           CPlayerSendMsg_DTradeDelInform690_user(_this, bySlotIndex, CPlayerSendMsg_DTradeDelInform690_next);
        };
        void CPlayerSendMsg_DTradeDelResult692_wrapper(struct CPlayer* _this, char byErrCode)
        {
           CPlayerSendMsg_DTradeDelResult692_user(_this, byErrCode, CPlayerSendMsg_DTradeDelResult692_next);
        };
        void CPlayerSendMsg_DTradeLockInform694_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_DTradeLockInform694_user(_this, CPlayerSendMsg_DTradeLockInform694_next);
        };
        void CPlayerSendMsg_DTradeLockResult696_wrapper(struct CPlayer* _this, char byErrCode)
        {
           CPlayerSendMsg_DTradeLockResult696_user(_this, byErrCode, CPlayerSendMsg_DTradeLockResult696_next);
        };
        void CPlayerSendMsg_DTradeOKInform698_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_DTradeOKInform698_user(_this, CPlayerSendMsg_DTradeOKInform698_next);
        };
        void CPlayerSendMsg_DTradeOKResult700_wrapper(struct CPlayer* _this, char byErrCode)
        {
           CPlayerSendMsg_DTradeOKResult700_user(_this, byErrCode, CPlayerSendMsg_DTradeOKResult700_next);
        };
        void CPlayerSendMsg_DTradeStartInform702_wrapper(struct CPlayer* _this, struct CPlayer* pAsker, struct CPlayer* pAnswer, unsigned int* pdwKey)
        {
           CPlayerSendMsg_DTradeStartInform702_user(_this, pAsker, pAnswer, pdwKey, CPlayerSendMsg_DTradeStartInform702_next);
        };
        void CPlayerSendMsg_DTradeUnitAddInform704_wrapper(struct CPlayer* _this, uint16_t wUnitKeySerial, struct _UNIT_DB_BASE::_LIST* pUnitData)
        {
           CPlayerSendMsg_DTradeUnitAddInform704_user(_this, wUnitKeySerial, pUnitData, CPlayerSendMsg_DTradeUnitAddInform704_next);
        };
        void CPlayerSendMsg_DTradeUnitInfoInform706_wrapper(struct CPlayer* _this, char byTradeSlotIndex, struct _UNIT_DB_BASE::_LIST* pUnitData)
        {
           CPlayerSendMsg_DTradeUnitInfoInform706_user(_this, byTradeSlotIndex, pUnitData, CPlayerSendMsg_DTradeUnitInfoInform706_next);
        };
        void CPlayerSendMsg_DamageResult708_wrapper(struct CPlayer* _this, struct _STORAGE_LIST::_db_con* pItem)
        {
           CPlayerSendMsg_DamageResult708_user(_this, pItem, CPlayerSendMsg_DamageResult708_next);
        };
        void CPlayerSendMsg_DarkHoleOpenFail710_wrapper(struct CPlayer* _this, int n, char byErrCode)
        {
           CPlayerSendMsg_DarkHoleOpenFail710_user(_this, n, byErrCode, CPlayerSendMsg_DarkHoleOpenFail710_next);
        };
        void CPlayerSendMsg_DarkHoleOpenResult712_wrapper(struct CPlayer* _this, int n, int bPartyOnly, char byErrCode, uint16_t wHoleIndex, unsigned int dwHoleSerial)
        {
           CPlayerSendMsg_DarkHoleOpenResult712_user(_this, n, bPartyOnly, byErrCode, wHoleIndex, dwHoleSerial, CPlayerSendMsg_DarkHoleOpenResult712_next);
        };
        void CPlayerSendMsg_DarkHoleRewardMessage714_wrapper(struct CPlayer* _this, struct _STORAGE_LIST::_db_con* pItem, unsigned int dwMemberIndex, int isRewarded)
        {
           CPlayerSendMsg_DarkHoleRewardMessage714_user(_this, pItem, dwMemberIndex, isRewarded, CPlayerSendMsg_DarkHoleRewardMessage714_next);
        };
        void CPlayerSendMsg_DelEffect716_wrapper(struct CPlayer* _this, char byEffectCode, uint16_t wEffectIndex, char byLv)
        {
           CPlayerSendMsg_DelEffect716_user(_this, byEffectCode, wEffectIndex, byLv, CPlayerSendMsg_DelEffect716_next);
        };
        void CPlayerSendMsg_DeleteStorageInform718_wrapper(struct CPlayer* _this, char byStorageCode, uint16_t wSerial)
        {
           CPlayerSendMsg_DeleteStorageInform718_user(_this, byStorageCode, wSerial, CPlayerSendMsg_DeleteStorageInform718_next);
        };
        void CPlayerSendMsg_Destroy720_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_Destroy720_user(_this, CPlayerSendMsg_Destroy720_next);
        };
        void CPlayerSendMsg_Die722_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_Die722_user(_this, CPlayerSendMsg_Die722_next);
        };
        void CPlayerSendMsg_EconomyHistoryInform724_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_EconomyHistoryInform724_user(_this, CPlayerSendMsg_EconomyHistoryInform724_next);
        };
        void CPlayerSendMsg_EconomyRateInform726_wrapper(struct CPlayer* _this, bool bStart)
        {
           CPlayerSendMsg_EconomyRateInform726_user(_this, bStart, CPlayerSendMsg_EconomyRateInform726_next);
        };
        void CPlayerSendMsg_EmbellishResult728_wrapper(struct CPlayer* _this, char byErrCode)
        {
           CPlayerSendMsg_EmbellishResult728_user(_this, byErrCode, CPlayerSendMsg_EmbellishResult728_next);
        };
        void CPlayerSendMsg_EnterDarkHole730_wrapper(struct CPlayer* _this, char byErrCode, unsigned int dwHoleSerial)
        {
           CPlayerSendMsg_EnterDarkHole730_user(_this, byErrCode, dwHoleSerial, CPlayerSendMsg_EnterDarkHole730_next);
        };
        void CPlayerSendMsg_EquipItemLevelLimit732_wrapper(struct CPlayer* _this, int nCurPlayerLv)
        {
           CPlayerSendMsg_EquipItemLevelLimit732_user(_this, nCurPlayerLv, CPlayerSendMsg_EquipItemLevelLimit732_next);
        };
        void CPlayerSendMsg_EquipPartChange734_wrapper(struct CPlayer* _this, char byPart)
        {
           CPlayerSendMsg_EquipPartChange734_user(_this, byPart, CPlayerSendMsg_EquipPartChange734_next);
        };
        void CPlayerSendMsg_EquipPartResult736_wrapper(struct CPlayer* _this, char byErrCode)
        {
           CPlayerSendMsg_EquipPartResult736_user(_this, byErrCode, CPlayerSendMsg_EquipPartResult736_next);
        };
        void CPlayerSendMsg_ExchangeItemResult738_wrapper(struct CPlayer* _this, char byErrCode, struct _STORAGE_LIST::_db_con* pNewItem)
        {
           CPlayerSendMsg_ExchangeItemResult738_user(_this, byErrCode, pNewItem, CPlayerSendMsg_ExchangeItemResult738_next);
        };
        void CPlayerSendMsg_ExchangeLendItemResult740_wrapper(struct CPlayer* _this, char byErrCode, struct _STORAGE_LIST::_db_con* pNewItem)
        {
           CPlayerSendMsg_ExchangeLendItemResult740_user(_this, byErrCode, pNewItem, CPlayerSendMsg_ExchangeLendItemResult740_next);
        };
        void CPlayerSendMsg_ExchangeMoneyResult742_wrapper(struct CPlayer* _this, char byErrCode)
        {
           CPlayerSendMsg_ExchangeMoneyResult742_user(_this, byErrCode, CPlayerSendMsg_ExchangeMoneyResult742_next);
        };
        void CPlayerSendMsg_ExitWorldResult744_wrapper(struct CPlayer* _this, char byRetCode)
        {
           CPlayerSendMsg_ExitWorldResult744_user(_this, byRetCode, CPlayerSendMsg_ExitWorldResult744_next);
        };
        void CPlayerSendMsg_ExtTrunkExtendResult746_wrapper(struct CPlayer* _this, char byRetCode, char bySlotNum, char byLackSlotNum)
        {
           CPlayerSendMsg_ExtTrunkExtendResult746_user(_this, byRetCode, bySlotNum, byLackSlotNum, CPlayerSendMsg_ExtTrunkExtendResult746_next);
        };
        void CPlayerSendMsg_FanfareItem748_wrapper(struct CPlayer* _this, char byGetType, struct _STORAGE_LIST::_db_con* pItem, struct CItemBox* pItemBox)
        {
           CPlayerSendMsg_FanfareItem748_user(_this, byGetType, pItem, pItemBox, CPlayerSendMsg_FanfareItem748_next);
        };
        void CPlayerSendMsg_FcitemInform750_wrapper(struct CPlayer* _this, uint16_t wItemSerial, unsigned int dwNewStat)
        {
           CPlayerSendMsg_FcitemInform750_user(_this, wItemSerial, dwNewStat, CPlayerSendMsg_FcitemInform750_next);
        };
        void CPlayerSendMsg_FixPosition752_wrapper(struct CPlayer* _this, int n)
        {
           CPlayerSendMsg_FixPosition752_user(_this, n, CPlayerSendMsg_FixPosition752_next);
        };
        void CPlayerSendMsg_ForceDownloadResult754_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_ForceDownloadResult754_user(_this, CPlayerSendMsg_ForceDownloadResult754_next);
        };
        void CPlayerSendMsg_ForceInvenChange756_wrapper(struct CPlayer* _this, char byErrCode)
        {
           CPlayerSendMsg_ForceInvenChange756_user(_this, byErrCode, CPlayerSendMsg_ForceInvenChange756_next);
        };
        void CPlayerSendMsg_ForceResult758_wrapper(struct CPlayer* _this, char byErrCode, struct _CHRID* pidDst, struct _STORAGE_LIST::_db_con* pForceItem, int nSFLv)
        {
           CPlayerSendMsg_ForceResult758_user(_this, byErrCode, pidDst, pForceItem, nSFLv, CPlayerSendMsg_ForceResult758_next);
        };
        void CPlayerSendMsg_GM_Greeting760_wrapper(struct CPlayer* _this, char* wszGMName, char* wszMsg)
        {
           CPlayerSendMsg_GM_Greeting760_user(_this, wszGMName, wszMsg, CPlayerSendMsg_GM_Greeting760_next);
        };
        void CPlayerSendMsg_GUILD_Greeting762_wrapper(struct CPlayer* _this, char* wszName, char* wszMsg)
        {
           CPlayerSendMsg_GUILD_Greeting762_user(_this, wszName, wszMsg, CPlayerSendMsg_GUILD_Greeting762_next);
        };
        void CPlayerSendMsg_GestureInform764_wrapper(struct CPlayer* _this, char byGestureType)
        {
           CPlayerSendMsg_GestureInform764_user(_this, byGestureType, CPlayerSendMsg_GestureInform764_next);
        };
        void CPlayerSendMsg_GiveupDarkHole766_wrapper(struct CPlayer* _this, char byErrCode)
        {
           CPlayerSendMsg_GiveupDarkHole766_user(_this, byErrCode, CPlayerSendMsg_GiveupDarkHole766_next);
        };
        void CPlayerSendMsg_GotoBasePortalResult768_wrapper(struct CPlayer* _this, char byErrCode)
        {
           CPlayerSendMsg_GotoBasePortalResult768_user(_this, byErrCode, CPlayerSendMsg_GotoBasePortalResult768_next);
        };
        void CPlayerSendMsg_GotoRecallResult770_wrapper(struct CPlayer* _this, char byErrCode, char byMapCode, float* pfStartPos, char byMapInType)
        {
           CPlayerSendMsg_GotoRecallResult770_user(_this, byErrCode, byMapCode, pfStartPos, byMapInType, CPlayerSendMsg_GotoRecallResult770_next);
        };
        void CPlayerSendMsg_GroupTargetInform772_wrapper(struct CPlayer* _this, char byGroupType, char* pwszName)
        {
           CPlayerSendMsg_GroupTargetInform772_user(_this, byGroupType, pwszName, CPlayerSendMsg_GroupTargetInform772_next);
        };
        void CPlayerSendMsg_GuildEstablishFail774_wrapper(struct CPlayer* _this, char byRetCode)
        {
           CPlayerSendMsg_GuildEstablishFail774_user(_this, byRetCode, CPlayerSendMsg_GuildEstablishFail774_next);
        };
        void CPlayerSendMsg_GuildForceLeaveBoradori776_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_GuildForceLeaveBoradori776_user(_this, CPlayerSendMsg_GuildForceLeaveBoradori776_next);
        };
        void CPlayerSendMsg_GuildJoinAcceptFail778_wrapper(struct CPlayer* _this, char byRetCode, unsigned int dwApplierSerial)
        {
           CPlayerSendMsg_GuildJoinAcceptFail778_user(_this, byRetCode, dwApplierSerial, CPlayerSendMsg_GuildJoinAcceptFail778_next);
        };
        void CPlayerSendMsg_GuildJoinApplyCancelResult780_wrapper(struct CPlayer* _this, char byRetCode)
        {
           CPlayerSendMsg_GuildJoinApplyCancelResult780_user(_this, byRetCode, CPlayerSendMsg_GuildJoinApplyCancelResult780_next);
        };
        void CPlayerSendMsg_GuildJoinApplyRejectInform782_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_GuildJoinApplyRejectInform782_user(_this, CPlayerSendMsg_GuildJoinApplyRejectInform782_next);
        };
        void CPlayerSendMsg_GuildJoinApplyResult784_wrapper(struct CPlayer* _this, char byRetCode, struct CGuild* pApplyGuild)
        {
           CPlayerSendMsg_GuildJoinApplyResult784_user(_this, byRetCode, pApplyGuild, CPlayerSendMsg_GuildJoinApplyResult784_next);
        };
        void CPlayerSendMsg_GuildJoinOtherInform786_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_GuildJoinOtherInform786_user(_this, CPlayerSendMsg_GuildJoinOtherInform786_next);
        };
        void CPlayerSendMsg_GuildManageResult788_wrapper(struct CPlayer* _this, char byRetCode)
        {
           CPlayerSendMsg_GuildManageResult788_user(_this, byRetCode, CPlayerSendMsg_GuildManageResult788_next);
        };
        void CPlayerSendMsg_GuildMasterEffect790_wrapper(struct CPlayer* _this, char byState, char byGrade, char byEffSubAttack, char byEffSubDefence, char byEffAddAttack, char byEffAddDefence)
        {
           CPlayerSendMsg_GuildMasterEffect790_user(_this, byState, byGrade, byEffSubAttack, byEffSubDefence, byEffAddAttack, byEffAddDefence, CPlayerSendMsg_GuildMasterEffect790_next);
        };
        void CPlayerSendMsg_GuildPushMoneyResult792_wrapper(struct CPlayer* _this, char byRetCode)
        {
           CPlayerSendMsg_GuildPushMoneyResult792_user(_this, byRetCode, CPlayerSendMsg_GuildPushMoneyResult792_next);
        };
        void CPlayerSendMsg_GuildRoomEnterResult794_wrapper(struct CPlayer* _this, char byRetCode, char bySubRetCode, char byMapIndex, uint16_t wMapLayer, float* pPos, int tt)
        {
           CPlayerSendMsg_GuildRoomEnterResult794_user(_this, byRetCode, bySubRetCode, byMapIndex, wMapLayer, pPos, tt, CPlayerSendMsg_GuildRoomEnterResult794_next);
        };
        void CPlayerSendMsg_GuildRoomOutResult796_wrapper(struct CPlayer* _this, char byRetCode, char byMapIndex, uint16_t wMapLayer, float* pPos)
        {
           CPlayerSendMsg_GuildRoomOutResult796_user(_this, byRetCode, byMapIndex, wMapLayer, pPos, CPlayerSendMsg_GuildRoomOutResult796_next);
        };
        void CPlayerSendMsg_GuildRoomRentResult798_wrapper(struct CPlayer* _this, char byRetCode, char bySubRetCode, char byRoomType)
        {
           CPlayerSendMsg_GuildRoomRentResult798_user(_this, byRetCode, bySubRetCode, byRoomType, CPlayerSendMsg_GuildRoomRentResult798_next);
        };
        void CPlayerSendMsg_GuildRoomRestTimeResult800_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_GuildRoomRestTimeResult800_user(_this, CPlayerSendMsg_GuildRoomRestTimeResult800_next);
        };
        void CPlayerSendMsg_GuildSelfLeaveResult802_wrapper(struct CPlayer* _this, char byRetCode)
        {
           CPlayerSendMsg_GuildSelfLeaveResult802_user(_this, byRetCode, CPlayerSendMsg_GuildSelfLeaveResult802_next);
        };
        void CPlayerSendMsg_GuildSetHonorResult804_wrapper(struct CPlayer* _this, char byRetCode)
        {
           CPlayerSendMsg_GuildSetHonorResult804_user(_this, byRetCode, CPlayerSendMsg_GuildSetHonorResult804_next);
        };
        void CPlayerSendMsg_HSKQuestActCum806_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_HSKQuestActCum806_user(_this, CPlayerSendMsg_HSKQuestActCum806_next);
        };
        void CPlayerSendMsg_HSKQuestSucc808_wrapper(struct CPlayer* _this, char byQuestCode, bool bSucc)
        {
           CPlayerSendMsg_HSKQuestSucc808_user(_this, byQuestCode, bSucc, CPlayerSendMsg_HSKQuestSucc808_next);
        };
        void CPlayerSendMsg_HonorGuildMark810_wrapper(struct CPlayer* _this, char byRank)
        {
           CPlayerSendMsg_HonorGuildMark810_user(_this, byRank, CPlayerSendMsg_HonorGuildMark810_next);
        };
        void CPlayerSendMsg_InformTaxIncome812_wrapper(struct CPlayer* _this, char byRet, unsigned int dwComm, char* pwszDate)
        {
           CPlayerSendMsg_InformTaxIncome812_user(_this, byRet, dwComm, pwszDate, CPlayerSendMsg_InformTaxIncome812_next);
        };
        void CPlayerSendMsg_Init_Action_Point814_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_Init_Action_Point814_user(_this, CPlayerSendMsg_Init_Action_Point814_next);
        };
        void CPlayerSendMsg_InsertItemInform816_wrapper(struct CPlayer* _this, char byStorageCode, struct _STORAGE_LIST::_db_con* pItem)
        {
           CPlayerSendMsg_InsertItemInform816_user(_this, byStorageCode, pItem, CPlayerSendMsg_InsertItemInform816_next);
        };
        void CPlayerSendMsg_InsertNewQuest818_wrapper(struct CPlayer* _this, char bySlotIndex, struct _QUEST_DB_BASE::_LIST* pQuestDB)
        {
           CPlayerSendMsg_InsertNewQuest818_user(_this, bySlotIndex, pQuestDB, CPlayerSendMsg_InsertNewQuest818_next);
        };
        void CPlayerSendMsg_InsertNextQuest820_wrapper(struct CPlayer* _this, char bySlotIndex, struct _QUEST_DB_BASE::_LIST* pQuestDB)
        {
           CPlayerSendMsg_InsertNextQuest820_user(_this, bySlotIndex, pQuestDB, CPlayerSendMsg_InsertNextQuest820_next);
        };
        void CPlayerSendMsg_InsertQuestFailure822_wrapper(struct CPlayer* _this, char byEventType, unsigned int dwEventIndex, char byEventNodeIndex)
        {
           CPlayerSendMsg_InsertQuestFailure822_user(_this, byEventType, dwEventIndex, byEventNodeIndex, CPlayerSendMsg_InsertQuestFailure822_next);
        };
        void CPlayerSendMsg_InsertQuestItemInform824_wrapper(struct CPlayer* _this, struct _STORAGE_LIST::_db_con* pItem)
        {
           CPlayerSendMsg_InsertQuestItemInform824_user(_this, pItem, CPlayerSendMsg_InsertQuestItemInform824_next);
        };
        void CPlayerSendMsg_InvenDownloadResult826_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_InvenDownloadResult826_user(_this, CPlayerSendMsg_InvenDownloadResult826_next);
        };
        void CPlayerSendMsg_ItemDowngrade828_wrapper(struct CPlayer* _this, char byErrCode)
        {
           CPlayerSendMsg_ItemDowngrade828_user(_this, byErrCode, CPlayerSendMsg_ItemDowngrade828_next);
        };
        void CPlayerSendMsg_ItemStorageRefresh830_wrapper(struct CPlayer* _this, char byStorageCode)
        {
           CPlayerSendMsg_ItemStorageRefresh830_user(_this, byStorageCode, CPlayerSendMsg_ItemStorageRefresh830_next);
        };
        void CPlayerSendMsg_ItemUpgrade832_wrapper(struct CPlayer* _this, char byErrCode)
        {
           CPlayerSendMsg_ItemUpgrade832_user(_this, byErrCode, CPlayerSendMsg_ItemUpgrade832_next);
        };
        void CPlayerSendMsg_JadeEffectErr834_wrapper(struct CPlayer* _this, char byErrorCode)
        {
           CPlayerSendMsg_JadeEffectErr834_user(_this, byErrorCode, CPlayerSendMsg_JadeEffectErr834_next);
        };
        void CPlayerSendMsg_LendItemTimeExpired836_wrapper(struct CPlayer* _this, char byStorageCode, uint16_t wSerial)
        {
           CPlayerSendMsg_LendItemTimeExpired836_user(_this, byStorageCode, wSerial, CPlayerSendMsg_LendItemTimeExpired836_next);
        };
        void CPlayerSendMsg_Level838_wrapper(struct CPlayer* _this, int nLevel)
        {
           CPlayerSendMsg_Level838_user(_this, nLevel, CPlayerSendMsg_Level838_next);
        };
        void CPlayerSendMsg_LinkBoardDownloadResult840_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_LinkBoardDownloadResult840_user(_this, CPlayerSendMsg_LinkBoardDownloadResult840_next);
        };
        void CPlayerSendMsg_MacroRequest842_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_MacroRequest842_user(_this, CPlayerSendMsg_MacroRequest842_next);
        };
        void CPlayerSendMsg_MadeTrapNumInform844_wrapper(struct CPlayer* _this, char byNum)
        {
           CPlayerSendMsg_MadeTrapNumInform844_user(_this, byNum, CPlayerSendMsg_MadeTrapNumInform844_next);
        };
        void CPlayerSendMsg_MakeItemCheatSendButtonEnable846_wrapper(struct CPlayer* _this, bool bEnableSendButton)
        {
           CPlayerSendMsg_MakeItemCheatSendButtonEnable846_user(_this, bEnableSendButton, CPlayerSendMsg_MakeItemCheatSendButtonEnable846_next);
        };
        void CPlayerSendMsg_MakeItemResult848_wrapper(struct CPlayer* _this, char byErrCode)
        {
           CPlayerSendMsg_MakeItemResult848_user(_this, byErrCode, CPlayerSendMsg_MakeItemResult848_next);
        };
        void CPlayerSendMsg_MapEnvInform850_wrapper(struct CPlayer* _this, char byMapCode, unsigned int dwMapEnvCode)
        {
           CPlayerSendMsg_MapEnvInform850_user(_this, byMapCode, dwMapEnvCode, CPlayerSendMsg_MapEnvInform850_next);
        };
        void CPlayerSendMsg_MapOut852_wrapper(struct CPlayer* _this, char byMapOutCode, char byNextMapCode)
        {
           CPlayerSendMsg_MapOut852_user(_this, byMapOutCode, byNextMapCode, CPlayerSendMsg_MapOut852_next);
        };
        void CPlayerSendMsg_MaxHFSP854_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_MaxHFSP854_user(_this, CPlayerSendMsg_MaxHFSP854_next);
        };
        void CPlayerSendMsg_MaxPvpPointInform856_wrapper(struct CPlayer* _this, int nMax)
        {
           CPlayerSendMsg_MaxPvpPointInform856_user(_this, nMax, CPlayerSendMsg_MaxPvpPointInform856_next);
        };
        void CPlayerSendMsg_MineCancle858_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_MineCancle858_user(_this, CPlayerSendMsg_MineCancle858_next);
        };
        void CPlayerSendMsg_MineCompleteResult860_wrapper(struct CPlayer* _this, char byErrCode, char byNewOreIndex, uint16_t dwOreSerial, char byOreDur, uint16_t dwBatteryLeftDurPoint)
        {
           CPlayerSendMsg_MineCompleteResult860_user(_this, byErrCode, byNewOreIndex, dwOreSerial, byOreDur, dwBatteryLeftDurPoint, CPlayerSendMsg_MineCompleteResult860_next);
        };
        void CPlayerSendMsg_MineStartResult862_wrapper(struct CPlayer* _this, char byErrCode)
        {
           CPlayerSendMsg_MineStartResult862_user(_this, byErrCode, CPlayerSendMsg_MineStartResult862_next);
        };
        void CPlayerSendMsg_MonsterAggroData864_wrapper(struct CPlayer* _this, struct CCharacter* pCharacter)
        {
           CPlayerSendMsg_MonsterAggroData864_user(_this, pCharacter, CPlayerSendMsg_MonsterAggroData864_next);
        };
        void CPlayerSendMsg_MoveError866_wrapper(struct CPlayer* _this, char byRetCode)
        {
           CPlayerSendMsg_MoveError866_user(_this, byRetCode, CPlayerSendMsg_MoveError866_next);
        };
        void CPlayerSendMsg_MoveNext868_wrapper(struct CPlayer* _this, bool bOtherSend)
        {
           CPlayerSendMsg_MoveNext868_user(_this, bOtherSend, CPlayerSendMsg_MoveNext868_next);
        };
        void CPlayerSendMsg_MovePortal870_wrapper(struct CPlayer* _this, char byMapIndex, float* pfStartPos, char byZoneCode)
        {
           CPlayerSendMsg_MovePortal870_user(_this, byMapIndex, pfStartPos, byZoneCode, CPlayerSendMsg_MovePortal870_next);
        };
        void CPlayerSendMsg_MovePortal872_wrapper(struct CPlayer* _this, char byRet, char byMapIndex, char byPotalIndex, float* pfStartPos, bool bEqualZone)
        {
           CPlayerSendMsg_MovePortal872_user(_this, byRet, byMapIndex, byPotalIndex, pfStartPos, bEqualZone, CPlayerSendMsg_MovePortal872_next);
        };
        void CPlayerSendMsg_MoveToOwnStoneMapInform874_wrapper(struct CPlayer* _this, char byStoneMapMoveInfo)
        {
           CPlayerSendMsg_MoveToOwnStoneMapInform874_user(_this, byStoneMapMoveInfo, CPlayerSendMsg_MoveToOwnStoneMapInform874_next);
        };
        void CPlayerSendMsg_MoveToOwnStoneMapResult876_wrapper(struct CPlayer* _this, char byRetCode, char byMapIndex, float* pos)
        {
           CPlayerSendMsg_MoveToOwnStoneMapResult876_user(_this, byRetCode, byMapIndex, pos, CPlayerSendMsg_MoveToOwnStoneMapResult876_next);
        };
        void CPlayerSendMsg_NPCLinkItemCheckResult878_wrapper(struct CPlayer* _this, char byResCode, struct _STORAGE_POS_INDIV* pStorage)
        {
           CPlayerSendMsg_NPCLinkItemCheckResult878_user(_this, byResCode, pStorage, CPlayerSendMsg_NPCLinkItemCheckResult878_next);
        };
        void CPlayerSendMsg_NewMovePotionResult880_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_NewMovePotionResult880_user(_this, CPlayerSendMsg_NewMovePotionResult880_next);
        };
        void CPlayerSendMsg_NewViewOther882_wrapper(struct CPlayer* _this, char byViewType)
        {
           CPlayerSendMsg_NewViewOther882_user(_this, byViewType, CPlayerSendMsg_NewViewOther882_next);
        };
        void CPlayerSendMsg_NotifyEffectForGetItem884_wrapper(struct CPlayer* _this, char byBoxType, unsigned int dwCharSerial, char* szCharName, struct _STORAGE_LIST::_db_con* pItem, bool bCircle)
        {
           CPlayerSendMsg_NotifyEffectForGetItem884_user(_this, byBoxType, dwCharSerial, szCharName, pItem, bCircle, CPlayerSendMsg_NotifyEffectForGetItem884_next);
        };
        void CPlayerSendMsg_NotifyGetExpInfo886_wrapper(struct CPlayer* _this, long double dOldExp, long double dAlterExp, long double dCurExp)
        {
           CPlayerSendMsg_NotifyGetExpInfo886_user(_this, dOldExp, dAlterExp, dCurExp, CPlayerSendMsg_NotifyGetExpInfo886_next);
        };
        void CPlayerSendMsg_Notify_ExceptFromRaceRanking888_wrapper(struct CPlayer* _this, int bExcepted)
        {
           CPlayerSendMsg_Notify_ExceptFromRaceRanking888_user(_this, bExcepted, CPlayerSendMsg_Notify_ExceptFromRaceRanking888_next);
        };
        void CPlayerSendMsg_Notify_Get_Golden_Box890_wrapper(struct CPlayer* _this, char byBoxType, unsigned int dwCharSerial, char* szCharName, struct _STORAGE_LIST::_db_con* pItem, bool bCircle)
        {
           CPlayerSendMsg_Notify_Get_Golden_Box890_user(_this, byBoxType, dwCharSerial, szCharName, pItem, bCircle, CPlayerSendMsg_Notify_Get_Golden_Box890_next);
        };
        void CPlayerSendMsg_Notify_Gravity_Stone_Owner_Die892_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_Notify_Gravity_Stone_Owner_Die892_user(_this, CPlayerSendMsg_Notify_Gravity_Stone_Owner_Die892_next);
        };
        void CPlayerSendMsg_Notify_Me_Get_Golden_Box894_wrapper(struct CPlayer* _this, char byBoxType, struct _STORAGE_LIST::_db_con* pItem)
        {
           CPlayerSendMsg_Notify_Me_Get_Golden_Box894_user(_this, byBoxType, pItem, CPlayerSendMsg_Notify_Me_Get_Golden_Box894_next);
        };
        void CPlayerSendMsg_NpcQuestHistoryInform896_wrapper(struct CPlayer* _this, char bySlotIndex)
        {
           CPlayerSendMsg_NpcQuestHistoryInform896_user(_this, bySlotIndex, CPlayerSendMsg_NpcQuestHistoryInform896_next);
        };
        void CPlayerSendMsg_NpcQuestListResult898_wrapper(struct CPlayer* _this, struct _NPCQuestIndexTempData* pQuestIndexData)
        {
           CPlayerSendMsg_NpcQuestListResult898_user(_this, pQuestIndexData, CPlayerSendMsg_NpcQuestListResult898_next);
        };
        void CPlayerSendMsg_OffPartResult900_wrapper(struct CPlayer* _this, char byErrCode)
        {
           CPlayerSendMsg_OffPartResult900_user(_this, byErrCode, CPlayerSendMsg_OffPartResult900_next);
        };
        void CPlayerSendMsg_OfferSuggestResult902_wrapper(struct CPlayer* _this, char byRetCode)
        {
           CPlayerSendMsg_OfferSuggestResult902_user(_this, byRetCode, CPlayerSendMsg_OfferSuggestResult902_next);
        };
        void CPlayerSendMsg_OreCuttingResult904_wrapper(struct CPlayer* _this, char byErrCode, char byLeftOreNum, unsigned int dwConsumDalant)
        {
           CPlayerSendMsg_OreCuttingResult904_user(_this, byErrCode, byLeftOreNum, dwConsumDalant, CPlayerSendMsg_OreCuttingResult904_next);
        };
        void CPlayerSendMsg_OreIntoBagResult906_wrapper(struct CPlayer* _this, char byErrCode, uint16_t wNewSerial, char byLendType, unsigned int dwLendTime)
        {
           CPlayerSendMsg_OreIntoBagResult906_user(_this, byErrCode, wNewSerial, byLendType, dwLendTime, CPlayerSendMsg_OreIntoBagResult906_next);
        };
        void CPlayerSendMsg_OreTransferCount908_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_OreTransferCount908_user(_this, CPlayerSendMsg_OreTransferCount908_next);
        };
        void CPlayerSendMsg_OtherShapeAll910_wrapper(struct CPlayer* _this, struct CPlayer* pDst)
        {
           CPlayerSendMsg_OtherShapeAll910_user(_this, pDst, CPlayerSendMsg_OtherShapeAll910_next);
        };
        void CPlayerSendMsg_OtherShapeError912_wrapper(struct CPlayer* _this, struct CPlayer* pDst, char byErrCode)
        {
           CPlayerSendMsg_OtherShapeError912_user(_this, pDst, byErrCode, CPlayerSendMsg_OtherShapeError912_next);
        };
        void CPlayerSendMsg_OtherShapePart914_wrapper(struct CPlayer* _this, struct CPlayer* pDst)
        {
           CPlayerSendMsg_OtherShapePart914_user(_this, pDst, CPlayerSendMsg_OtherShapePart914_next);
        };
        void CPlayerSendMsg_OtherShapePartEx_CashChange916_wrapper(struct CPlayer* _this, struct CPlayer* pDst, CPlayer::CashChangeStateFlag ServerData, CPlayer::CashChangeStateFlag ClinetData)
        {
           CPlayerSendMsg_OtherShapePartEx_CashChange916_user(_this, pDst, ServerData, ClinetData, CPlayerSendMsg_OtherShapePartEx_CashChange916_next);
        };
        void CPlayerSendMsg_PartyAlterLootShareResult918_wrapper(struct CPlayer* _this, char byLootShareMode)
        {
           CPlayerSendMsg_PartyAlterLootShareResult918_user(_this, byLootShareMode, CPlayerSendMsg_PartyAlterLootShareResult918_next);
        };
        void CPlayerSendMsg_PartyDisjointResult920_wrapper(struct CPlayer* _this, char bSuccess)
        {
           CPlayerSendMsg_PartyDisjointResult920_user(_this, bSuccess, CPlayerSendMsg_PartyDisjointResult920_next);
        };
        void CPlayerSendMsg_PartyJoinApplicationQuestion922_wrapper(struct CPlayer* _this, struct CPlayer* pJoiner)
        {
           CPlayerSendMsg_PartyJoinApplicationQuestion922_user(_this, pJoiner, CPlayerSendMsg_PartyJoinApplicationQuestion922_next);
        };
        void CPlayerSendMsg_PartyJoinFailLevel924_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_PartyJoinFailLevel924_user(_this, CPlayerSendMsg_PartyJoinFailLevel924_next);
        };
        void CPlayerSendMsg_PartyJoinInvitationQuestion926_wrapper(struct CPlayer* _this, uint16_t wJoinerIndex)
        {
           CPlayerSendMsg_PartyJoinInvitationQuestion926_user(_this, wJoinerIndex, CPlayerSendMsg_PartyJoinInvitationQuestion926_next);
        };
        void CPlayerSendMsg_PartyJoinJoinerResult928_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_PartyJoinJoinerResult928_user(_this, CPlayerSendMsg_PartyJoinJoinerResult928_next);
        };
        void CPlayerSendMsg_PartyJoinMemberResult930_wrapper(struct CPlayer* _this, struct CPartyPlayer* pJoiner, char byLootShareMode)
        {
           CPlayerSendMsg_PartyJoinMemberResult930_user(_this, pJoiner, byLootShareMode, CPlayerSendMsg_PartyJoinMemberResult930_next);
        };
        void CPlayerSendMsg_PartyLeaveCompulsionResult932_wrapper(struct CPlayer* _this, struct CPartyPlayer* pLeaver)
        {
           CPlayerSendMsg_PartyLeaveCompulsionResult932_user(_this, pLeaver, CPlayerSendMsg_PartyLeaveCompulsionResult932_next);
        };
        void CPlayerSendMsg_PartyLeaveSelfResult934_wrapper(struct CPlayer* _this, struct CPartyPlayer* pLeaver, bool bWorldExit)
        {
           CPlayerSendMsg_PartyLeaveSelfResult934_user(_this, pLeaver, bWorldExit, CPlayerSendMsg_PartyLeaveSelfResult934_next);
        };
        void CPlayerSendMsg_PartyLockResult936_wrapper(struct CPlayer* _this, char byRet)
        {
           CPlayerSendMsg_PartyLockResult936_user(_this, byRet, CPlayerSendMsg_PartyLockResult936_next);
        };
        void CPlayerSendMsg_PartyLootItemInform938_wrapper(struct CPlayer* _this, unsigned int dwTakerSerial, char byTableCode, uint16_t wItemIndex, char byNum)
        {
           CPlayerSendMsg_PartyLootItemInform938_user(_this, dwTakerSerial, byTableCode, wItemIndex, byNum, CPlayerSendMsg_PartyLootItemInform938_next);
        };
        void CPlayerSendMsg_PartySuccessResult940_wrapper(struct CPlayer* _this, struct CPartyPlayer* pSuccessor)
        {
           CPlayerSendMsg_PartySuccessResult940_user(_this, pSuccessor, CPlayerSendMsg_PartySuccessResult940_next);
        };
        void CPlayerSendMsg_PcRoomCharClass942_wrapper(struct CPlayer* _this, unsigned int dwPcRoomClassIndex)
        {
           CPlayerSendMsg_PcRoomCharClass942_user(_this, dwPcRoomClassIndex, CPlayerSendMsg_PcRoomCharClass942_next);
        };
        void CPlayerSendMsg_PcRoomError944_wrapper(struct CPlayer* _this, char byErrorCode)
        {
           CPlayerSendMsg_PcRoomError944_user(_this, byErrorCode, CPlayerSendMsg_PcRoomError944_next);
        };
        void CPlayerSendMsg_PostContent946_wrapper(struct CPlayer* _this, char byErrCode, unsigned int dwPostSerial, char* wszContent, char byTableCode, uint16_t wItemIndex, uint64_t dwDur, unsigned int dwLv, unsigned int dwGold)
        {
           CPlayerSendMsg_PostContent946_user(_this, byErrCode, dwPostSerial, wszContent, byTableCode, wItemIndex, dwDur, dwLv, dwGold, CPlayerSendMsg_PostContent946_next);
        };
        void CPlayerSendMsg_PostDelete948_wrapper(struct CPlayer* _this, char byErrCode, unsigned int dwPostSerial)
        {
           CPlayerSendMsg_PostDelete948_user(_this, byErrCode, dwPostSerial, CPlayerSendMsg_PostDelete948_next);
        };
        void CPlayerSendMsg_PostDelivery950_wrapper(struct CPlayer* _this, char byIndex, unsigned int dwPostSerial, char* wszSendName, char* wszTitle, bool bItem, bool bGold, char byState)
        {
           CPlayerSendMsg_PostDelivery950_user(_this, byIndex, dwPostSerial, wszSendName, wszTitle, bItem, bGold, byState, CPlayerSendMsg_PostDelivery950_next);
        };
        void CPlayerSendMsg_PostItemGold952_wrapper(struct CPlayer* _this, char byErrCode)
        {
           CPlayerSendMsg_PostItemGold952_user(_this, byErrCode, CPlayerSendMsg_PostItemGold952_next);
        };
        void CPlayerSendMsg_PostReturn954_wrapper(struct CPlayer* _this, char byErrCode, unsigned int dwPostSerial, char* wszRecvName, char* wszTitle, char* wszContent, char byTableCode, uint16_t wItemIndex, uint64_t dwDur, unsigned int dwLv, unsigned int dwGold)
        {
           CPlayerSendMsg_PostReturn954_user(_this, byErrCode, dwPostSerial, wszRecvName, wszTitle, wszContent, byTableCode, wItemIndex, dwDur, dwLv, dwGold, CPlayerSendMsg_PostReturn954_next);
        };
        void CPlayerSendMsg_PostReturnConfirm956_wrapper(struct CPlayer* _this, char byErrCode, unsigned int dwPostSerial)
        {
           CPlayerSendMsg_PostReturnConfirm956_user(_this, byErrCode, dwPostSerial, CPlayerSendMsg_PostReturnConfirm956_next);
        };
        void CPlayerSendMsg_PostSendReply958_wrapper(struct CPlayer* _this, char byErrCode)
        {
           CPlayerSendMsg_PostSendReply958_user(_this, byErrCode, CPlayerSendMsg_PostSendReply958_next);
        };
        void CPlayerSendMsg_PotionDelayTime960_wrapper(struct CPlayer* _this, unsigned int* pdwPotionNextUseTime, unsigned int dwCurTime)
        {
           CPlayerSendMsg_PotionDelayTime960_user(_this, pdwPotionNextUseTime, dwCurTime, CPlayerSendMsg_PotionDelayTime960_next);
        };
        void CPlayerSendMsg_PotionDivision962_wrapper(struct CPlayer* _this, uint16_t wSerial, char byParentAmount, uint16_t wChildSerial, char byChildAmount, int nRet)
        {
           CPlayerSendMsg_PotionDivision962_user(_this, wSerial, byParentAmount, wChildSerial, byChildAmount, nRet, CPlayerSendMsg_PotionDivision962_next);
        };
        void CPlayerSendMsg_PotionSeparation964_wrapper(struct CPlayer* _this, uint16_t wParentSerial, char byParentAmount, uint16_t wChildSerial, char byChildAmount, int nRet)
        {
           CPlayerSendMsg_PotionSeparation964_user(_this, wParentSerial, byParentAmount, wChildSerial, byChildAmount, nRet, CPlayerSendMsg_PotionSeparation964_next);
        };
        void CPlayerSendMsg_PremiumCashItemUse966_wrapper(struct CPlayer* _this, uint16_t wSerial)
        {
           CPlayerSendMsg_PremiumCashItemUse966_user(_this, wSerial, CPlayerSendMsg_PremiumCashItemUse966_next);
        };
        void CPlayerSendMsg_ProposeVoteResult968_wrapper(struct CPlayer* _this, char byRetCode)
        {
           CPlayerSendMsg_ProposeVoteResult968_user(_this, byRetCode, CPlayerSendMsg_ProposeVoteResult968_next);
        };
        void CPlayerSendMsg_PvpRankListVersionUp970_wrapper(struct CPlayer* _this, char byVersion)
        {
           CPlayerSendMsg_PvpRankListVersionUp970_user(_this, byVersion, CPlayerSendMsg_PvpRankListVersionUp970_next);
        };
        void CPlayerSendMsg_QuestComplete972_wrapper(struct CPlayer* _this, char byQuestDBSlot)
        {
           CPlayerSendMsg_QuestComplete972_user(_this, byQuestDBSlot, CPlayerSendMsg_QuestComplete972_next);
        };
        void CPlayerSendMsg_QuestDownloadResult974_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_QuestDownloadResult974_user(_this, CPlayerSendMsg_QuestDownloadResult974_next);
        };
        void CPlayerSendMsg_QuestFailure976_wrapper(struct CPlayer* _this, char byFailCode, char byQuestDBSlot)
        {
           CPlayerSendMsg_QuestFailure976_user(_this, byFailCode, byQuestDBSlot, CPlayerSendMsg_QuestFailure976_next);
        };
        void CPlayerSendMsg_QuestGiveUpResult978_wrapper(struct CPlayer* _this, char byReturnSlot)
        {
           CPlayerSendMsg_QuestGiveUpResult978_user(_this, byReturnSlot, CPlayerSendMsg_QuestGiveUpResult978_next);
        };
        void CPlayerSendMsg_QuestHistoryDownloadResult980_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_QuestHistoryDownloadResult980_user(_this, CPlayerSendMsg_QuestHistoryDownloadResult980_next);
        };
        void CPlayerSendMsg_QuestProcess982_wrapper(struct CPlayer* _this, char byQuestDBSlot, char byActIndex, uint16_t wCount)
        {
           CPlayerSendMsg_QuestProcess982_user(_this, byQuestDBSlot, byActIndex, wCount, CPlayerSendMsg_QuestProcess982_next);
        };
        void CPlayerSendMsg_RACE_Greeting984_wrapper(struct CPlayer* _this, char* wszBossName, char* wszMsg)
        {
           CPlayerSendMsg_RACE_Greeting984_user(_this, wszBossName, wszMsg, CPlayerSendMsg_RACE_Greeting984_next);
        };
        void CPlayerSendMsg_RaceBattlePenelty986_wrapper(struct CPlayer* _this, int nAlterPoint, char byAlterType)
        {
           CPlayerSendMsg_RaceBattlePenelty986_user(_this, nAlterPoint, byAlterType, CPlayerSendMsg_RaceBattlePenelty986_next);
        };
        void CPlayerSendMsg_RaceBossCryMsg988_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_RaceBossCryMsg988_user(_this, CPlayerSendMsg_RaceBossCryMsg988_next);
        };
        void CPlayerSendMsg_RaceTopInform990_wrapper(struct CPlayer* _this, bool bTop)
        {
           CPlayerSendMsg_RaceTopInform990_user(_this, bTop, CPlayerSendMsg_RaceTopInform990_next);
        };
        void CPlayerSendMsg_RadarCharSearchResult992_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_RadarCharSearchResult992_user(_this, CPlayerSendMsg_RadarCharSearchResult992_next);
        };
        void CPlayerSendMsg_RadarDelayTime994_wrapper(struct CPlayer* _this, unsigned int dwDelay)
        {
           CPlayerSendMsg_RadarDelayTime994_user(_this, dwDelay, CPlayerSendMsg_RadarDelayTime994_next);
        };
        void CPlayerSendMsg_ReEnterAsk996_wrapper(struct CPlayer* _this, uint16_t wChannelIndex, unsigned int dwChannelSerial)
        {
           CPlayerSendMsg_ReEnterAsk996_user(_this, wChannelIndex, dwChannelSerial, CPlayerSendMsg_ReEnterAsk996_next);
        };
        void CPlayerSendMsg_ReEnterDarkHoleResult998_wrapper(struct CPlayer* _this, char byRetCode)
        {
           CPlayerSendMsg_ReEnterDarkHoleResult998_user(_this, byRetCode, CPlayerSendMsg_ReEnterDarkHoleResult998_next);
        };
        void CPlayerSendMsg_RealMovePoint1000_wrapper(struct CPlayer* _this, int n)
        {
           CPlayerSendMsg_RealMovePoint1000_user(_this, n, CPlayerSendMsg_RealMovePoint1000_next);
        };
        void CPlayerSendMsg_Recover1002_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_Recover1002_user(_this, CPlayerSendMsg_Recover1002_next);
        };
        void CPlayerSendMsg_RecvHSKQuest1004_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_RecvHSKQuest1004_user(_this, CPlayerSendMsg_RecvHSKQuest1004_next);
        };
        void CPlayerSendMsg_RefeshGroupTargetPosition1006_wrapper(struct CPlayer* _this, char byGroupType)
        {
           CPlayerSendMsg_RefeshGroupTargetPosition1006_user(_this, byGroupType, CPlayerSendMsg_RefeshGroupTargetPosition1006_next);
        };
        void CPlayerSendMsg_RegistBindResult1008_wrapper(struct CPlayer* _this, char byRetCode)
        {
           CPlayerSendMsg_RegistBindResult1008_user(_this, byRetCode, CPlayerSendMsg_RegistBindResult1008_next);
        };
        void CPlayerSendMsg_ReleaseGroupTargetObjectResult1010_wrapper(struct CPlayer* _this, char byGroupType)
        {
           CPlayerSendMsg_ReleaseGroupTargetObjectResult1010_user(_this, byGroupType, CPlayerSendMsg_ReleaseGroupTargetObjectResult1010_next);
        };
        void CPlayerSendMsg_ReleaseSiegeModeResult1012_wrapper(struct CPlayer* _this, char byRetCode)
        {
           CPlayerSendMsg_ReleaseSiegeModeResult1012_user(_this, byRetCode, CPlayerSendMsg_ReleaseSiegeModeResult1012_next);
        };
        void CPlayerSendMsg_RemainOreRate1014_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_RemainOreRate1014_user(_this, CPlayerSendMsg_RemainOreRate1014_next);
        };
        void CPlayerSendMsg_RemainTimeInform1016_wrapper(struct CPlayer* _this, int16_t iType, int lRemainTime, struct _SYSTEMTIME* pstEndDate)
        {
           CPlayerSendMsg_RemainTimeInform1016_user(_this, iType, lRemainTime, pstEndDate, CPlayerSendMsg_RemainTimeInform1016_next);
        };
        void CPlayerSendMsg_ResDivision1018_wrapper(struct CPlayer* _this, char byErrCode, struct _STORAGE_LIST::_db_con* pStartOre, struct _STORAGE_LIST::_db_con* pTargetOre)
        {
           CPlayerSendMsg_ResDivision1018_user(_this, byErrCode, pStartOre, pTargetOre, CPlayerSendMsg_ResDivision1018_next);
        };
        void CPlayerSendMsg_ResSeparation1020_wrapper(struct CPlayer* _this, char byErrCode, struct _STORAGE_LIST::_db_con* pStartOre, struct _STORAGE_LIST::_db_con* pNewOre)
        {
           CPlayerSendMsg_ResSeparation1020_user(_this, byErrCode, pStartOre, pNewOre, CPlayerSendMsg_ResSeparation1020_next);
        };
        void CPlayerSendMsg_ResultChangeTaxRate1022_wrapper(struct CPlayer* _this, char byRetCode, char byNextTax)
        {
           CPlayerSendMsg_ResultChangeTaxRate1022_user(_this, byRetCode, byNextTax, CPlayerSendMsg_ResultChangeTaxRate1022_next);
        };
        void CPlayerSendMsg_ResultNpcQuest1024_wrapper(struct CPlayer* _this, bool bSucc)
        {
           CPlayerSendMsg_ResultNpcQuest1024_user(_this, bSucc, CPlayerSendMsg_ResultNpcQuest1024_next);
        };
        void CPlayerSendMsg_Resurrect1026_wrapper(struct CPlayer* _this, char byRet, bool bQuickPotion)
        {
           CPlayerSendMsg_Resurrect1026_user(_this, byRet, bQuickPotion, CPlayerSendMsg_Resurrect1026_next);
        };
        void CPlayerSendMsg_ResurrectInform1028_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_ResurrectInform1028_user(_this, CPlayerSendMsg_ResurrectInform1028_next);
        };
        void CPlayerSendMsg_Revival1030_wrapper(struct CPlayer* _this, char byRet, bool bEquialZone)
        {
           CPlayerSendMsg_Revival1030_user(_this, byRet, bEquialZone, CPlayerSendMsg_Revival1030_next);
        };
        void CPlayerSendMsg_RevivalOfJade1032_wrapper(struct CPlayer* _this, uint16_t wSuccRate)
        {
           CPlayerSendMsg_RevivalOfJade1032_user(_this, wSuccRate, CPlayerSendMsg_RevivalOfJade1032_next);
        };
        void CPlayerSendMsg_RewardAddItem1034_wrapper(struct CPlayer* _this, struct _STORAGE_LIST::_db_con* pItem, char byReason)
        {
           CPlayerSendMsg_RewardAddItem1034_user(_this, pItem, byReason, CPlayerSendMsg_RewardAddItem1034_next);
        };
        void CPlayerSendMsg_SFDelayRequest1036_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_SFDelayRequest1036_user(_this, CPlayerSendMsg_SFDelayRequest1036_next);
        };
        void CPlayerSendMsg_SelectClassResult1038_wrapper(struct CPlayer* _this, char byErrCode, uint16_t wSelClassIndex)
        {
           CPlayerSendMsg_SelectClassResult1038_user(_this, byErrCode, wSelClassIndex, CPlayerSendMsg_SelectClassResult1038_next);
        };
        void CPlayerSendMsg_SelectQuestReward1040_wrapper(struct CPlayer* _this, char byQuestDBSlot)
        {
           CPlayerSendMsg_SelectQuestReward1040_user(_this, byQuestDBSlot, CPlayerSendMsg_SelectQuestReward1040_next);
        };
        void CPlayerSendMsg_SelectWaitedQuest1042_wrapper(struct CPlayer* _this, char byEventType, unsigned int dwEventIndex, char byEventNodeIndex)
        {
           CPlayerSendMsg_SelectWaitedQuest1042_user(_this, byEventType, dwEventIndex, byEventNodeIndex, CPlayerSendMsg_SelectWaitedQuest1042_next);
        };
        void CPlayerSendMsg_SellItemStoreResult1044_wrapper(struct CPlayer* _this, struct CItemStore* pStore, char byErrCode)
        {
           CPlayerSendMsg_SellItemStoreResult1044_user(_this, pStore, byErrCode, CPlayerSendMsg_SellItemStoreResult1044_next);
        };
        void CPlayerSendMsg_SetDPInform1046_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_SetDPInform1046_user(_this, CPlayerSendMsg_SetDPInform1046_next);
        };
        void CPlayerSendMsg_SetFPInform1048_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_SetFPInform1048_user(_this, CPlayerSendMsg_SetFPInform1048_next);
        };
        void CPlayerSendMsg_SetGroupMapPoint1050_wrapper(struct CPlayer* _this, char byRetCode, char byGroupType, char byMapCode, float* pzTar, char byRemain)
        {
           CPlayerSendMsg_SetGroupMapPoint1050_user(_this, byRetCode, byGroupType, byMapCode, pzTar, byRemain, CPlayerSendMsg_SetGroupMapPoint1050_next);
        };
        void CPlayerSendMsg_SetGroupTargetObjectResult1052_wrapper(struct CPlayer* _this, char byRetCode, char byGroupType)
        {
           CPlayerSendMsg_SetGroupTargetObjectResult1052_user(_this, byRetCode, byGroupType, CPlayerSendMsg_SetGroupTargetObjectResult1052_next);
        };
        void CPlayerSendMsg_SetHPInform1054_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_SetHPInform1054_user(_this, CPlayerSendMsg_SetHPInform1054_next);
        };
        void CPlayerSendMsg_SetItemCheckResult1056_wrapper(struct CPlayer* _this, char byResult, unsigned int dwSetItem, char bySetEffectNum)
        {
           CPlayerSendMsg_SetItemCheckResult1056_user(_this, byResult, dwSetItem, bySetEffectNum, CPlayerSendMsg_SetItemCheckResult1056_next);
        };
        void CPlayerSendMsg_SetSPInform1058_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_SetSPInform1058_user(_this, CPlayerSendMsg_SetSPInform1058_next);
        };
        void CPlayerSendMsg_SetTargetObjectResult1060_wrapper(struct CPlayer* _this, char byRetCode, bool bForce)
        {
           CPlayerSendMsg_SetTargetObjectResult1060_user(_this, byRetCode, bForce, CPlayerSendMsg_SetTargetObjectResult1060_next);
        };
        void CPlayerSendMsg_SkillResult1062_wrapper(struct CPlayer* _this, char byErrCode, struct _CHRID* pidDst, char bySkillIndex, int nSFLv)
        {
           CPlayerSendMsg_SkillResult1062_user(_this, byErrCode, pidDst, bySkillIndex, nSFLv, CPlayerSendMsg_SkillResult1062_next);
        };
        void CPlayerSendMsg_SpecialDownloadResult1064_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_SpecialDownloadResult1064_user(_this, CPlayerSendMsg_SpecialDownloadResult1064_next);
        };
        void CPlayerSendMsg_StartContSF1066_wrapper(struct CPlayer* _this, struct _sf_continous* pCont)
        {
           CPlayerSendMsg_StartContSF1066_user(_this, pCont, CPlayerSendMsg_StartContSF1066_next);
        };
        void CPlayerSendMsg_StartNewPos1068_wrapper(struct CPlayer* _this, char byMapInMode)
        {
           CPlayerSendMsg_StartNewPos1068_user(_this, byMapInMode, CPlayerSendMsg_StartNewPos1068_next);
        };
        void CPlayerSendMsg_StartShopping1070_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_StartShopping1070_user(_this, CPlayerSendMsg_StartShopping1070_next);
        };
        void CPlayerSendMsg_StatInform1072_wrapper(struct CPlayer* _this, char byStatIndex, unsigned int dwNewStat, char byReason)
        {
           CPlayerSendMsg_StatInform1072_user(_this, byStatIndex, dwNewStat, byReason, CPlayerSendMsg_StatInform1072_next);
        };
        void CPlayerSendMsg_StateInform1074_wrapper(struct CPlayer* _this, uint64_t dwStateFlag)
        {
           CPlayerSendMsg_StateInform1074_user(_this, dwStateFlag, CPlayerSendMsg_StateInform1074_next);
        };
        void CPlayerSendMsg_Stop1076_wrapper(struct CPlayer* _this, bool bAll)
        {
           CPlayerSendMsg_Stop1076_user(_this, bAll, CPlayerSendMsg_Stop1076_next);
        };
        void CPlayerSendMsg_StoreLimitItemAmountInfo1078_wrapper(struct CPlayer* _this, unsigned int dwStoreIndex, struct _limit_amount_info* pAmountInfo)
        {
           CPlayerSendMsg_StoreLimitItemAmountInfo1078_user(_this, dwStoreIndex, pAmountInfo, CPlayerSendMsg_StoreLimitItemAmountInfo1078_next);
        };
        void CPlayerSendMsg_StoreListResult1080_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_StoreListResult1080_user(_this, CPlayerSendMsg_StoreListResult1080_next);
        };
        void CPlayerSendMsg_TLStatusInfo1082_wrapper(struct CPlayer* _this, unsigned int dwFatigue, char wStatus)
        {
           CPlayerSendMsg_TLStatusInfo1082_user(_this, dwFatigue, wStatus, CPlayerSendMsg_TLStatusInfo1082_next);
        };
        void CPlayerSendMsg_TLStatusPenalty1084_wrapper(struct CPlayer* _this, char byErrCode)
        {
           CPlayerSendMsg_TLStatusPenalty1084_user(_this, byErrCode, CPlayerSendMsg_TLStatusPenalty1084_next);
        };
        void CPlayerSendMsg_TakeAddResult1086_wrapper(struct CPlayer* _this, char byErrCode, struct _STORAGE_LIST::_db_con* pItem)
        {
           CPlayerSendMsg_TakeAddResult1086_user(_this, byErrCode, pItem, CPlayerSendMsg_TakeAddResult1086_next);
        };
        void CPlayerSendMsg_TakeNewResult1088_wrapper(struct CPlayer* _this, char byErrCode, struct _STORAGE_LIST::_db_con* pItem)
        {
           CPlayerSendMsg_TakeNewResult1088_user(_this, byErrCode, pItem, CPlayerSendMsg_TakeNewResult1088_next);
        };
        void CPlayerSendMsg_TalikCrystalExchangeResult1090_wrapper(struct CPlayer* _this, char byRet, char byExchangeNum, struct _STORAGE_LIST::_db_con* pNewItem)
        {
           CPlayerSendMsg_TalikCrystalExchangeResult1090_user(_this, byRet, byExchangeNum, pNewItem, CPlayerSendMsg_TalikCrystalExchangeResult1090_next);
        };
        void CPlayerSendMsg_TargetObjectHPInform1092_wrapper(struct CPlayer* _this)
        {
           CPlayerSendMsg_TargetObjectHPInform1092_user(_this, CPlayerSendMsg_TargetObjectHPInform1092_next);
        };
        void CPlayerSendMsg_TeleportError1094_wrapper(struct CPlayer* _this, char byErrorCode, unsigned int dwMapIndex)
        {
           CPlayerSendMsg_TeleportError1094_user(_this, byErrorCode, dwMapIndex, CPlayerSendMsg_TeleportError1094_next);
        };
        void CPlayerSendMsg_TestAttackResult1096_wrapper(struct CPlayer* _this, char byEffectCode, char byEffectIndex, uint16_t wBulletItemIndex, char byEffectLv, char byWeaponPart, int16_t* pzTar)
        {
           CPlayerSendMsg_TestAttackResult1096_user(_this, byEffectCode, byEffectIndex, wBulletItemIndex, byEffectLv, byWeaponPart, pzTar, CPlayerSendMsg_TestAttackResult1096_next);
        };
        void CPlayerSendMsg_ThrowSkillResult1098_wrapper(struct CPlayer* _this, char byErrCode, struct _CHRID* pidDst, char bySkillIndex)
        {
           CPlayerSendMsg_ThrowSkillResult1098_user(_this, byErrCode, pidDst, bySkillIndex, CPlayerSendMsg_ThrowSkillResult1098_next);
        };
        void CPlayerSendMsg_ThrowStorageResult1100_wrapper(struct CPlayer* _this, char byErrCode)
        {
           CPlayerSendMsg_ThrowStorageResult1100_user(_this, byErrCode, CPlayerSendMsg_ThrowStorageResult1100_next);
        };
        void CPlayerSendMsg_ThrowUnitResult1102_wrapper(struct CPlayer* _this, char byErrCode, struct _CHRID* pidDst, uint16_t wBulletIndex)
        {
           CPlayerSendMsg_ThrowUnitResult1102_user(_this, byErrCode, pidDst, wBulletIndex, CPlayerSendMsg_ThrowUnitResult1102_next);
        };
        void CPlayerSendMsg_TowerContinue1104_wrapper(struct CPlayer* _this, uint16_t wItemSerial, struct CGuardTower* pTwr)
        {
           CPlayerSendMsg_TowerContinue1104_user(_this, wItemSerial, pTwr, CPlayerSendMsg_TowerContinue1104_next);
        };
        void CPlayerSendMsg_TransShipRenewTicketResult1106_wrapper(struct CPlayer* _this, char byErrCode)
        {
           CPlayerSendMsg_TransShipRenewTicketResult1106_user(_this, byErrCode, CPlayerSendMsg_TransShipRenewTicketResult1106_next);
        };
        void CPlayerSendMsg_TransformSiegeModeResult1108_wrapper(struct CPlayer* _this, char byRetCode)
        {
           CPlayerSendMsg_TransformSiegeModeResult1108_user(_this, byRetCode, CPlayerSendMsg_TransformSiegeModeResult1108_next);
        };
        void CPlayerSendMsg_TrunkChangPasswdResult1110_wrapper(struct CPlayer* _this, char byRetCode)
        {
           CPlayerSendMsg_TrunkChangPasswdResult1110_user(_this, byRetCode, CPlayerSendMsg_TrunkChangPasswdResult1110_next);
        };
        void CPlayerSendMsg_TrunkDownloadResult1112_wrapper(struct CPlayer* _this, char byRetCode)
        {
           CPlayerSendMsg_TrunkDownloadResult1112_user(_this, byRetCode, CPlayerSendMsg_TrunkDownloadResult1112_next);
        };
        void CPlayerSendMsg_TrunkEstResult1114_wrapper(struct CPlayer* _this, char byRetCode, unsigned int dwLeftDalant)
        {
           CPlayerSendMsg_TrunkEstResult1114_user(_this, byRetCode, dwLeftDalant, CPlayerSendMsg_TrunkEstResult1114_next);
        };
        void CPlayerSendMsg_TrunkExtendResult1116_wrapper(struct CPlayer* _this, char byRetCode, char bySlotNum, unsigned int dwLeftDalant, unsigned int dwConsumDalant)
        {
           CPlayerSendMsg_TrunkExtendResult1116_user(_this, byRetCode, bySlotNum, dwLeftDalant, dwConsumDalant, CPlayerSendMsg_TrunkExtendResult1116_next);
        };
        void CPlayerSendMsg_TrunkHintAnswerResult1118_wrapper(struct CPlayer* _this, char byRetCode, char* pwszPassword)
        {
           CPlayerSendMsg_TrunkHintAnswerResult1118_user(_this, byRetCode, pwszPassword, CPlayerSendMsg_TrunkHintAnswerResult1118_next);
        };
        void CPlayerSendMsg_TrunkIoMoneyResult1120_wrapper(struct CPlayer* _this, char byRetCode, long double dTrunkDalant, long double dTrunkGold, unsigned int dwDalant, unsigned int dwGold, unsigned int dwFeeDalant)
        {
           CPlayerSendMsg_TrunkIoMoneyResult1120_user(_this, byRetCode, dTrunkDalant, dTrunkGold, dwDalant, dwGold, dwFeeDalant, CPlayerSendMsg_TrunkIoMoneyResult1120_next);
        };
        void CPlayerSendMsg_TrunkIoResult1122_wrapper(struct CPlayer* _this, char byCase, char byRetCode, unsigned int dwLeftDalant, unsigned int dwConsumDanlant)
        {
           CPlayerSendMsg_TrunkIoResult1122_user(_this, byCase, byRetCode, dwLeftDalant, dwConsumDanlant, CPlayerSendMsg_TrunkIoResult1122_next);
        };
        void CPlayerSendMsg_TrunkPotionDivision1124_wrapper(struct CPlayer* _this, uint16_t wSerial, uint16_t wParentAmount, uint16_t wChildSerial, uint16_t wChildAmount, int nRet)
        {
           CPlayerSendMsg_TrunkPotionDivision1124_user(_this, wSerial, wParentAmount, wChildSerial, wChildAmount, nRet, CPlayerSendMsg_TrunkPotionDivision1124_next);
        };
        void CPlayerSendMsg_TrunkPwHintIndexResult1126_wrapper(struct CPlayer* _this, char byRetCode, char byHintIndex)
        {
           CPlayerSendMsg_TrunkPwHintIndexResult1126_user(_this, byRetCode, byHintIndex, CPlayerSendMsg_TrunkPwHintIndexResult1126_next);
        };
        void CPlayerSendMsg_TrunkResDivision1128_wrapper(struct CPlayer* _this, char byErrCode, struct _STORAGE_LIST::_db_con* pStartOre, struct _STORAGE_LIST::_db_con* pTargetOre)
        {
           CPlayerSendMsg_TrunkResDivision1128_user(_this, byErrCode, pStartOre, pTargetOre, CPlayerSendMsg_TrunkResDivision1128_next);
        };
        void CPlayerSendMsg_UILock_FindPW_Result1130_wrapper(struct CPlayer* _this, char byRet, char* uszUILockPW, char byFindPassFailCount)
        {
           CPlayerSendMsg_UILock_FindPW_Result1130_user(_this, byRet, uszUILockPW, byFindPassFailCount, CPlayerSendMsg_UILock_FindPW_Result1130_next);
        };
        void CPlayerSendMsg_UILock_Init_Request_ToAccount1132_wrapper(struct CPlayer* _this, unsigned int dwSerial, char* uszUILockPW, uint16_t wUserIndex, char byHintIndex, char* uszHintAnswer)
        {
           CPlayerSendMsg_UILock_Init_Request_ToAccount1132_user(_this, dwSerial, uszUILockPW, wUserIndex, byHintIndex, uszHintAnswer, CPlayerSendMsg_UILock_Init_Request_ToAccount1132_next);
        };
        void CPlayerSendMsg_UILock_Init_Result1134_wrapper(struct CPlayer* _this, char byRet)
        {
           CPlayerSendMsg_UILock_Init_Result1134_user(_this, byRet, CPlayerSendMsg_UILock_Init_Result1134_next);
        };
        void CPlayerSendMsg_UILock_Login_Result1136_wrapper(struct CPlayer* _this, char byRet, char byFailCount)
        {
           CPlayerSendMsg_UILock_Login_Result1136_user(_this, byRet, byFailCount, CPlayerSendMsg_UILock_Login_Result1136_next);
        };
        void CPlayerSendMsg_UILock_Update_Request_ToAccount1138_wrapper(struct CPlayer* _this, unsigned int dwSerial, char* uszUILockPW, uint16_t wUserIndex, char byHintIndex, char* uszHintAnswer)
        {
           CPlayerSendMsg_UILock_Update_Request_ToAccount1138_user(_this, dwSerial, uszUILockPW, wUserIndex, byHintIndex, uszHintAnswer, CPlayerSendMsg_UILock_Update_Request_ToAccount1138_next);
        };
        void CPlayerSendMsg_UILock_Update_Result1140_wrapper(struct CPlayer* _this, char byRet)
        {
           CPlayerSendMsg_UILock_Update_Result1140_user(_this, byRet, CPlayerSendMsg_UILock_Update_Result1140_next);
        };
        void CPlayerSendMsg_UnitAlterFeeInform1142_wrapper(struct CPlayer* _this, char bySlotIndex, unsigned int dwPullingFee)
        {
           CPlayerSendMsg_UnitAlterFeeInform1142_user(_this, bySlotIndex, dwPullingFee, CPlayerSendMsg_UnitAlterFeeInform1142_next);
        };
        void CPlayerSendMsg_UnitBulletFillResult1144_wrapper(struct CPlayer* _this, char byRetCode, char bySlotIndex, uint16_t* pwBulletIndex, unsigned int* pdwConsumMoney)
        {
           CPlayerSendMsg_UnitBulletFillResult1144_user(_this, byRetCode, bySlotIndex, pwBulletIndex, pdwConsumMoney, CPlayerSendMsg_UnitBulletFillResult1144_next);
        };
        void CPlayerSendMsg_UnitBulletReplaceResult1146_wrapper(struct CPlayer* _this, char byRetCode)
        {
           CPlayerSendMsg_UnitBulletReplaceResult1146_user(_this, byRetCode, CPlayerSendMsg_UnitBulletReplaceResult1146_next);
        };
        void CPlayerSendMsg_UnitDeliveryResult1148_wrapper(struct CPlayer* _this, char byRetCode, char bySlotIndex, unsigned int dwParkingUnitSerial, unsigned int dwPayDalant)
        {
           CPlayerSendMsg_UnitDeliveryResult1148_user(_this, byRetCode, bySlotIndex, dwParkingUnitSerial, dwPayDalant, CPlayerSendMsg_UnitDeliveryResult1148_next);
        };
        void CPlayerSendMsg_UnitDestroy1150_wrapper(struct CPlayer* _this, char bySlotIndex)
        {
           CPlayerSendMsg_UnitDestroy1150_user(_this, bySlotIndex, CPlayerSendMsg_UnitDestroy1150_next);
        };
        void CPlayerSendMsg_UnitForceReturnInform1152_wrapper(struct CPlayer* _this, char bySlotIndex, unsigned int dwDebt)
        {
           CPlayerSendMsg_UnitForceReturnInform1152_user(_this, bySlotIndex, dwDebt, CPlayerSendMsg_UnitForceReturnInform1152_next);
        };
        void CPlayerSendMsg_UnitFrameBuyResult1154_wrapper(struct CPlayer* _this, char byRetCode, char byFrameCode, char byUnitSlotIndex, uint16_t wKeyIndex, uint16_t wKeySerial, unsigned int* pdwConsumMoney)
        {
           CPlayerSendMsg_UnitFrameBuyResult1154_user(_this, byRetCode, byFrameCode, byUnitSlotIndex, wKeyIndex, wKeySerial, pdwConsumMoney, CPlayerSendMsg_UnitFrameBuyResult1154_next);
        };
        void CPlayerSendMsg_UnitFrameRepairResult1156_wrapper(struct CPlayer* _this, char byRetCode, char bySlotIndex, unsigned int dwNewGauge, unsigned int dwConsumDalant)
        {
           CPlayerSendMsg_UnitFrameRepairResult1156_user(_this, byRetCode, bySlotIndex, dwNewGauge, dwConsumDalant, CPlayerSendMsg_UnitFrameRepairResult1156_next);
        };
        void CPlayerSendMsg_UnitLeaveResult1158_wrapper(struct CPlayer* _this, char byRetCode)
        {
           CPlayerSendMsg_UnitLeaveResult1158_user(_this, byRetCode, CPlayerSendMsg_UnitLeaveResult1158_next);
        };
        void CPlayerSendMsg_UnitPackFillResult1160_wrapper(struct CPlayer* _this, char byRetCode, char bySlotIndex, char byFillNum, struct _unit_pack_fill_request_clzo::__list* pList, unsigned int* pdwConsumMoney)
        {
           CPlayerSendMsg_UnitPackFillResult1160_user(_this, byRetCode, bySlotIndex, byFillNum, pList, pdwConsumMoney, CPlayerSendMsg_UnitPackFillResult1160_next);
        };
        void CPlayerSendMsg_UnitPartTuningResult1162_wrapper(struct CPlayer* _this, char byRetCode, char bySlotIndex, int* pnCost)
        {
           CPlayerSendMsg_UnitPartTuningResult1162_user(_this, byRetCode, bySlotIndex, pnCost, CPlayerSendMsg_UnitPartTuningResult1162_next);
        };
        void CPlayerSendMsg_UnitReturnResult1164_wrapper(struct CPlayer* _this, char byRetCode, unsigned int dwPayDalant)
        {
           CPlayerSendMsg_UnitReturnResult1164_user(_this, byRetCode, dwPayDalant, CPlayerSendMsg_UnitReturnResult1164_next);
        };
        void CPlayerSendMsg_UnitRideChange1166_wrapper(struct CPlayer* _this, bool bTake, struct CParkingUnit* pUnit)
        {
           CPlayerSendMsg_UnitRideChange1166_user(_this, bTake, pUnit, CPlayerSendMsg_UnitRideChange1166_next);
        };
        void CPlayerSendMsg_UnitSellResult1168_wrapper(struct CPlayer* _this, char byRetCode, char bySlotIndex, uint16_t wKeySerial, int nAddMoney, unsigned int dwTotalNonpay, unsigned int dwSumDalant, unsigned int dwSumGold)
        {
           CPlayerSendMsg_UnitSellResult1168_user(_this, byRetCode, bySlotIndex, wKeySerial, nAddMoney, dwTotalNonpay, dwSumDalant, dwSumGold, CPlayerSendMsg_UnitSellResult1168_next);
        };
        void CPlayerSendMsg_UnitTakeResult1170_wrapper(struct CPlayer* _this, char byRetCode)
        {
           CPlayerSendMsg_UnitTakeResult1170_user(_this, byRetCode, CPlayerSendMsg_UnitTakeResult1170_next);
        };
        void CPlayerSendMsg_UpdateTLStatusInfo1172_wrapper(struct CPlayer* _this, unsigned int dwFatigue, char wStatus)
        {
           CPlayerSendMsg_UpdateTLStatusInfo1172_user(_this, dwFatigue, wStatus, CPlayerSendMsg_UpdateTLStatusInfo1172_next);
        };
        void CPlayerSendMsg_UsPotionResultOther1174_wrapper(struct CPlayer* _this, char byRetcode, uint16_t wPotionIndex, struct CPlayer* pUsePlayer, bool bCircle)
        {
           CPlayerSendMsg_UsPotionResultOther1174_user(_this, byRetcode, wPotionIndex, pUsePlayer, bCircle, CPlayerSendMsg_UsPotionResultOther1174_next);
        };
        void CPlayerSendMsg_UseJadeResult1176_wrapper(struct CPlayer* _this, char byErrCode, uint16_t wItemSerial)
        {
           CPlayerSendMsg_UseJadeResult1176_user(_this, byErrCode, wItemSerial, CPlayerSendMsg_UseJadeResult1176_next);
        };
        void CPlayerSendMsg_UsePotionResult1178_wrapper(struct CPlayer* _this, char byErrCode, uint16_t wSerial, char byLeftNum)
        {
           CPlayerSendMsg_UsePotionResult1178_user(_this, byErrCode, wSerial, byLeftNum, CPlayerSendMsg_UsePotionResult1178_next);
        };
        void CPlayerSendMsg_UseRadarResult1180_wrapper(struct CPlayer* _this, char byErrCode, uint16_t wSerial, unsigned int dwDelay)
        {
           CPlayerSendMsg_UseRadarResult1180_user(_this, byErrCode, wSerial, dwDelay, CPlayerSendMsg_UseRadarResult1180_next);
        };
        void CPlayerSendMsg_VoteResult1182_wrapper(struct CPlayer* _this, unsigned int dwMatterVoteSynKey, char byRetCode)
        {
           CPlayerSendMsg_VoteResult1182_user(_this, dwMatterVoteSynKey, byRetCode, CPlayerSendMsg_VoteResult1182_next);
        };
        void CPlayerSendTargetMonsterSFContInfo1184_wrapper(struct CPlayer* _this)
        {
           CPlayerSendTargetMonsterSFContInfo1184_user(_this, CPlayerSendTargetMonsterSFContInfo1184_next);
        };
        void CPlayerSendTargetPlayerDamageContInfo1186_wrapper(struct CPlayer* _this)
        {
           CPlayerSendTargetPlayerDamageContInfo1186_user(_this, CPlayerSendTargetPlayerDamageContInfo1186_next);
        };
        void CPlayerSenseState1188_wrapper(struct CPlayer* _this)
        {
           CPlayerSenseState1188_user(_this, CPlayerSenseState1188_next);
        };
        void CPlayerSetAttackPart1190_wrapper(struct CPlayer* _this, int nAttactPart)
        {
           CPlayerSetAttackPart1190_user(_this, nAttactPart, CPlayerSetAttackPart1190_next);
        };
        void CPlayerSetBattleMode1192_wrapper(struct CPlayer* _this, bool bAttack)
        {
           CPlayerSetBattleMode1192_user(_this, bAttack, CPlayerSetBattleMode1192_next);
        };
        void CPlayerSetBindDummy1194_wrapper(struct CPlayer* _this, struct _dummy_position* pDummy)
        {
           CPlayerSetBindDummy1194_user(_this, pDummy, CPlayerSetBindDummy1194_next);
        };
        void CPlayerSetBindMapData1196_wrapper(struct CPlayer* _this, struct CMapData* pMapData)
        {
           CPlayerSetBindMapData1196_user(_this, pMapData, CPlayerSetBindMapData1196_next);
        };
        bool CPlayerSetBindPosition1198_wrapper(struct CPlayer* _this, struct CMapData* pMap, struct _dummy_position* pDummy)
        {
           return CPlayerSetBindPosition1198_user(_this, pMap, pDummy, CPlayerSetBindPosition1198_next);
        };
        void CPlayerSetCashAmount1200_wrapper(struct CPlayer* _this, int nAmount)
        {
           CPlayerSetCashAmount1200_user(_this, nAmount, CPlayerSetCashAmount1200_next);
        };
        void CPlayerSetCntEnable1202_wrapper(struct CPlayer* _this, bool bSet)
        {
           CPlayerSetCntEnable1202_user(_this, bSet, CPlayerSetCntEnable1202_next);
        };
        bool CPlayerSetDP1204_wrapper(struct CPlayer* _this, int nDP, bool bOver)
        {
           return CPlayerSetDP1204_user(_this, nDP, bOver, CPlayerSetDP1204_next);
        };
        int CPlayerSetDamage1206_wrapper(struct CPlayer* _this, int nDamage, struct CCharacter* pDst, int nDstLv, bool bCrt, int nAttackType, unsigned int dwAttackSerial, bool bJadeReturn)
        {
           return CPlayerSetDamage1206_user(_this, nDamage, pDst, nDstLv, bCrt, nAttackType, dwAttackSerial, bJadeReturn, CPlayerSetDamage1206_next);
        };
        void CPlayerSetEffectEquipCode1208_wrapper(struct CPlayer* _this, char byStorageCode, char bySlotIndex, char byCode)
        {
           CPlayerSetEffectEquipCode1208_user(_this, byStorageCode, bySlotIndex, byCode, CPlayerSetEffectEquipCode1208_next);
        };
        void CPlayerSetEquipEffect1210_wrapper(struct CPlayer* _this, struct _STORAGE_LIST::_storage_con* pItem, bool bEquip)
        {
           CPlayerSetEquipEffect1210_user(_this, pItem, bEquip, CPlayerSetEquipEffect1210_next);
        };
        void CPlayerSetEquipJadeEffect1212_wrapper(struct CPlayer* _this, int nParam, float fCurVal, bool bAdd)
        {
           CPlayerSetEquipJadeEffect1212_user(_this, nParam, fCurVal, bAdd, CPlayerSetEquipJadeEffect1212_next);
        };
        bool CPlayerSetFP1214_wrapper(struct CPlayer* _this, int nFP, bool bOver)
        {
           return CPlayerSetFP1214_user(_this, nFP, bOver, CPlayerSetFP1214_next);
        };
        void CPlayerSetGauge1216_wrapper(struct CPlayer* _this, int nParamCode, int nValue, bool bOver)
        {
           CPlayerSetGauge1216_user(_this, nParamCode, nValue, bOver, CPlayerSetGauge1216_next);
        };
        void CPlayerSetGrade1218_wrapper(struct CPlayer* _this, char byGrade)
        {
           CPlayerSetGrade1218_user(_this, byGrade, CPlayerSetGrade1218_next);
        };
        bool CPlayerSetHP1220_wrapper(struct CPlayer* _this, int nHP, bool bOver)
        {
           return CPlayerSetHP1220_user(_this, nHP, bOver, CPlayerSetHP1220_next);
        };
        void CPlayerSetHaveEffect1222_wrapper(struct CPlayer* _this, bool bLogin)
        {
           CPlayerSetHaveEffect1222_user(_this, bLogin, CPlayerSetHaveEffect1222_next);
        };
        void CPlayerSetHaveEffectUseTime1224_wrapper(struct CPlayer* _this, struct _STORAGE_LIST::_db_con* pItem, bool bAdd)
        {
           CPlayerSetHaveEffectUseTime1224_user(_this, pItem, bAdd, CPlayerSetHaveEffectUseTime1224_next);
        };
        void CPlayerSetLastAttBuff1226_wrapper(struct CPlayer* _this, bool bSet)
        {
           CPlayerSetLastAttBuff1226_user(_this, bSet, CPlayerSetLastAttBuff1226_next);
        };
        void CPlayerSetLevel1228_wrapper(struct CPlayer* _this, char byNewLevel)
        {
           CPlayerSetLevel1228_user(_this, byNewLevel, CPlayerSetLevel1228_next);
        };
        void CPlayerSetLevelD1230_wrapper(struct CPlayer* _this, char byDownLevel)
        {
           CPlayerSetLevelD1230_user(_this, byDownLevel, CPlayerSetLevelD1230_next);
        };
        void CPlayerSetMstHaveEffect1232_wrapper(struct CPlayer* _this, struct _ResourceItem_fld* pFld, struct _STORAGE_LIST::_db_con* pItem, bool bAdd, int nAlter)
        {
           CPlayerSetMstHaveEffect1232_user(_this, pFld, pItem, bAdd, nAlter, CPlayerSetMstHaveEffect1232_next);
        };
        void CPlayerSetMstPt1234_wrapper(struct CPlayer* _this, int nMstCode, float fVal, bool bAdd, int nWpType)
        {
           CPlayerSetMstPt1234_user(_this, nMstCode, fVal, bAdd, nWpType, CPlayerSetMstPt1234_next);
        };
        void CPlayerSetPotionActDelay1236_wrapper(struct CPlayer* _this, char byPotionClass, unsigned int dwCurrTime, unsigned int dwActDelay)
        {
           CPlayerSetPotionActDelay1236_user(_this, byPotionClass, dwCurrTime, dwActDelay, CPlayerSetPotionActDelay1236_next);
        };
        void CPlayerSetPvpPointLeak1238_wrapper(struct CPlayer* _this, long double dValue)
        {
           CPlayerSetPvpPointLeak1238_user(_this, dValue, CPlayerSetPvpPointLeak1238_next);
        };
        void CPlayerSetRankRate1240_wrapper(struct CPlayer* _this, uint16_t wRankRate, unsigned int dwRank)
        {
           CPlayerSetRankRate1240_user(_this, wRankRate, dwRank, CPlayerSetRankRate1240_next);
        };
        bool CPlayerSetSP1242_wrapper(struct CPlayer* _this, int nSP, bool bOver)
        {
           return CPlayerSetSP1242_user(_this, nSP, bOver, CPlayerSetSP1242_next);
        };
        void CPlayerSetShapeAllBuffer1244_wrapper(struct CPlayer* _this)
        {
           CPlayerSetShapeAllBuffer1244_user(_this, CPlayerSetShapeAllBuffer1244_next);
        };
        void CPlayerSetSiege1246_wrapper(struct CPlayer* _this, struct _STORAGE_LIST::_db_con* pSiegeItem)
        {
           CPlayerSetSiege1246_user(_this, pSiegeItem, CPlayerSetSiege1246_next);
        };
        void CPlayerSetStateFlag1248_wrapper(struct CPlayer* _this)
        {
           CPlayerSetStateFlag1248_user(_this, CPlayerSetStateFlag1248_next);
        };
        void CPlayerSetStaticMember1250_wrapper()
        {
           CPlayerSetStaticMember1250_user(CPlayerSetStaticMember1250_next);
        };
        bool CPlayerSetTarPos1252_wrapper(struct CPlayer* _this, float* fTarPos, bool bColl)
        {
           return CPlayerSetTarPos1252_user(_this, fTarPos, bColl, CPlayerSetTarPos1252_next);
        };
        void CPlayerSetUseReleaseRaceBuffPotion1254_wrapper(struct CPlayer* _this)
        {
           CPlayerSetUseReleaseRaceBuffPotion1254_user(_this, CPlayerSetUseReleaseRaceBuffPotion1254_next);
        };
        void CPlayerSetVote1256_wrapper(struct CPlayer* _this, int nSerial)
        {
           CPlayerSetVote1256_user(_this, nSerial, CPlayerSetVote1256_next);
        };
        void CPlayerSortPost1258_wrapper(struct CPlayer* _this, int nNumber)
        {
           CPlayerSortPost1258_user(_this, nNumber, CPlayerSortPost1258_next);
        };
        void CPlayerSubActPoint1260_wrapper(struct CPlayer* _this, char byCode, unsigned int dwSub)
        {
           CPlayerSubActPoint1260_user(_this, byCode, dwSub, CPlayerSubActPoint1260_next);
        };
        void CPlayerSubDalant1262_wrapper(struct CPlayer* _this, unsigned int dwSub)
        {
           CPlayerSubDalant1262_user(_this, dwSub, CPlayerSubDalant1262_next);
        };
        void CPlayerSubGold1264_wrapper(struct CPlayer* _this, unsigned int dwSub)
        {
           CPlayerSubGold1264_user(_this, dwSub, CPlayerSubGold1264_next);
        };
        void CPlayerSubPoint1266_wrapper(struct CPlayer* _this, unsigned int dwSub)
        {
           CPlayerSubPoint1266_user(_this, dwSub, CPlayerSubPoint1266_next);
        };
        unsigned int CPlayerSumMinuteBetween1268_wrapper(struct CPlayer* _this, struct _SYSTEMTIME* tmLast, struct _SYSTEMTIME* tmLocal)
        {
           return CPlayerSumMinuteBetween1268_user(_this, tmLast, tmLocal, CPlayerSumMinuteBetween1268_next);
        };
        unsigned int CPlayerSumMinuteOne1270_wrapper(struct CPlayer* _this, struct _SYSTEMTIME* tm)
        {
           return CPlayerSumMinuteOne1270_user(_this, tm, CPlayerSumMinuteOne1270_next);
        };
        void CPlayerTakeGravityStone1272_wrapper(struct CPlayer* _this)
        {
           CPlayerTakeGravityStone1272_user(_this, CPlayerTakeGravityStone1272_next);
        };
        void CPlayerUpdateAuraSFCont1274_wrapper(struct CPlayer* _this)
        {
           CPlayerUpdateAuraSFCont1274_user(_this, CPlayerUpdateAuraSFCont1274_next);
        };
        void CPlayerUpdateChaosModeState1276_wrapper(struct CPlayer* _this, unsigned int dwCurTime)
        {
           CPlayerUpdateChaosModeState1276_user(_this, dwCurTime, CPlayerUpdateChaosModeState1276_next);
        };
        bool CPlayerUpdateDelPost1278_wrapper(struct CPlayer* _this, unsigned int dwPostSerial, int nIndex)
        {
           return CPlayerUpdateDelPost1278_user(_this, dwPostSerial, nIndex, CPlayerUpdateDelPost1278_next);
        };
        void CPlayerUpdateLastCriTicket1280_wrapper(struct CPlayer* _this, uint16_t byCurrentYear, char byCurrentMonth, char byCurrentDay, char byCurrentHour, char byNumOfTime)
        {
           CPlayerUpdateLastCriTicket1280_user(_this, byCurrentYear, byCurrentMonth, byCurrentDay, byCurrentHour, byNumOfTime, CPlayerUpdateLastCriTicket1280_next);
        };
        void CPlayerUpdateLastMetalTicket1282_wrapper(struct CPlayer* _this, uint16_t byCurrentYear, char byCurrentMonth, char byCurrentDay, char byCurrentHour, char byNumOfTime)
        {
           CPlayerUpdateLastMetalTicket1282_user(_this, byCurrentYear, byCurrentMonth, byCurrentDay, byCurrentHour, byNumOfTime, CPlayerUpdateLastMetalTicket1282_next);
        };
        void CPlayerUpdatePost1284_wrapper(struct CPlayer* _this, unsigned int dwIndex)
        {
           CPlayerUpdatePost1284_user(_this, dwIndex, CPlayerUpdatePost1284_next);
        };
        void CPlayerUpdatePostAddLog1286_wrapper(struct CPlayer* _this, unsigned int dwIndex, bool bLog, int nItemKey)
        {
           CPlayerUpdatePostAddLog1286_user(_this, dwIndex, bLog, nItemKey, CPlayerUpdatePostAddLog1286_next);
        };
        void CPlayerUpdatePvpOrderView1288_wrapper(struct CPlayer* _this, int64_t tCurTime)
        {
           CPlayerUpdatePvpOrderView1288_user(_this, tCurTime, CPlayerUpdatePvpOrderView1288_next);
        };
        void CPlayerUpdatePvpPointLimiter1290_wrapper(struct CPlayer* _this, int64_t tCurTime)
        {
           CPlayerUpdatePvpPointLimiter1290_user(_this, tCurTime, CPlayerUpdatePvpPointLimiter1290_next);
        };
        void CPlayerUpdateReturnPost1292_wrapper(struct CPlayer* _this, unsigned int dwSerial)
        {
           CPlayerUpdateReturnPost1292_user(_this, dwSerial, CPlayerUpdateReturnPost1292_next);
        };
        void CPlayerUpdateVisualVer1294_wrapper(struct CPlayer* _this, CPlayer::CashChangeStateFlag byChangeFlagMask)
        {
           CPlayerUpdateVisualVer1294_user(_this, byChangeFlagMask, CPlayerUpdateVisualVer1294_next);
        };
        bool CPlayerUpdate_GoldPoint1296_wrapper(struct CPlayer* _this, unsigned int dwPoint)
        {
           return CPlayerUpdate_GoldPoint1296_user(_this, dwPoint, CPlayerUpdate_GoldPoint1296_next);
        };
        void CPlayerUpdatedMasteryWriteHistory1298_wrapper(struct CPlayer* _this)
        {
           CPlayerUpdatedMasteryWriteHistory1298_user(_this, CPlayerUpdatedMasteryWriteHistory1298_next);
        };
        bool CPlayerWPActiveForce1300_wrapper(struct CPlayer* _this, struct _be_damaged_char* pDamList, int nDamagedObjNum, struct _force_fld* pForceFld)
        {
           return CPlayerWPActiveForce1300_user(_this, pDamList, nDamagedObjNum, pForceFld, CPlayerWPActiveForce1300_next);
        };
        bool CPlayerWPActiveSkill1302_wrapper(struct CPlayer* _this, struct _be_damaged_char* pDamList, int nDamagedObjNum, struct _skill_fld* pSkillFld, int nEffectCode)
        {
           return CPlayerWPActiveSkill1302_user(_this, pDamList, nDamagedObjNum, pSkillFld, nEffectCode, CPlayerWPActiveSkill1302_next);
        };
        bool CPlayerWeaponSFActive1304_wrapper(struct CPlayer* _this, struct _be_damaged_char* pDamList, int* nDamagedObjNum, int* nShotNum, uint16_t wBulletSerial)
        {
           return CPlayerWeaponSFActive1304_user(_this, pDamList, nDamagedObjNum, nShotNum, wBulletSerial, CPlayerWeaponSFActive1304_next);
        };
        void CPlayer_AnimusReturn1306_wrapper(struct CPlayer* _this, char byReturnType)
        {
           CPlayer_AnimusReturn1306_user(_this, byReturnType, CPlayer_AnimusReturn1306_next);
        };
        int CPlayer_CalcMaxFP1308_wrapper(struct CPlayer* _this)
        {
           return CPlayer_CalcMaxFP1308_user(_this, CPlayer_CalcMaxFP1308_next);
        };
        int CPlayer_CalcMaxHP1310_wrapper(struct CPlayer* _this)
        {
           return CPlayer_CalcMaxHP1310_user(_this, CPlayer_CalcMaxHP1310_next);
        };
        int CPlayer_CalcMaxSP1312_wrapper(struct CPlayer* _this)
        {
           return CPlayer_CalcMaxSP1312_user(_this, CPlayer_CalcMaxSP1312_next);
        };
        void CPlayer_CheckForcePullUnit1314_wrapper(struct CPlayer* _this)
        {
           CPlayer_CheckForcePullUnit1314_user(_this, CPlayer_CheckForcePullUnit1314_next);
        };
        uint16_t CPlayer_DeleteUnitKey1316_wrapper(struct CPlayer* _this, char bySlotIndex)
        {
           return CPlayer_DeleteUnitKey1316_user(_this, bySlotIndex, CPlayer_DeleteUnitKey1316_next);
        };
        struct _ITEM_EFFECT* CPlayer_GetItemEffect1318_wrapper(struct CPlayer* _this, struct _STORAGE_LIST::_db_con* pItem)
        {
           return CPlayer_GetItemEffect1318_user(_this, pItem, CPlayer_GetItemEffect1318_next);
        };
        char CPlayer_GetPartyMemberInCircle1320_wrapper(struct CPlayer* _this, struct CPlayer** out_ppMember, int nMax, bool bOne)
        {
           return CPlayer_GetPartyMemberInCircle1320_user(_this, out_ppMember, nMax, bOne, CPlayer_GetPartyMemberInCircle1320_next);
        };
        bool CPlayer_LockUnitKey1322_wrapper(struct CPlayer* _this, char bySlotIndex, bool bLock)
        {
           return CPlayer_LockUnitKey1322_user(_this, bySlotIndex, bLock, CPlayer_LockUnitKey1322_next);
        };
        struct _Quest_fld* CPlayer_Reward_Quest1324_wrapper(struct CPlayer* _this, struct _Quest_fld* pQuestFld, char byRewardItemIndex)
        {
           return CPlayer_Reward_Quest1324_user(_this, pQuestFld, byRewardItemIndex, CPlayer_Reward_Quest1324_next);
        };
        void CPlayer_TowerAllReturn1326_wrapper(struct CPlayer* _this, char byDestroyType, bool bForceReturn)
        {
           CPlayer_TowerAllReturn1326_user(_this, byDestroyType, bForceReturn, CPlayer_TowerAllReturn1326_next);
        };
        void CPlayer_TowerDestroy1328_wrapper(struct CPlayer* _this, struct CGuardTower* pTowerObj)
        {
           CPlayer_TowerDestroy1328_user(_this, pTowerObj, CPlayer_TowerDestroy1328_next);
        };
        uint16_t CPlayer_TowerReturn1330_wrapper(struct CPlayer* _this, struct _STORAGE_LIST::_db_con* pTowerItem)
        {
           return CPlayer_TowerReturn1330_user(_this, pTowerItem, CPlayer_TowerReturn1330_next);
        };
        void CPlayer_TrapDestroy1332_wrapper(struct CPlayer* _this, struct CTrap* pTrap, char byDestroyCode)
        {
           CPlayer_TrapDestroy1332_user(_this, pTrap, byDestroyCode, CPlayer_TrapDestroy1332_next);
        };
        void CPlayer_TrapReturn1334_wrapper(struct CPlayer* _this, struct CTrap* pTrap, uint16_t wAddSerial)
        {
           CPlayer_TrapReturn1334_user(_this, pTrap, wAddSerial, CPlayer_TrapReturn1334_next);
        };
        void CPlayer_UnitDestroy1336_wrapper(struct CPlayer* _this, char byUnitSlot)
        {
           CPlayer_UnitDestroy1336_user(_this, byUnitSlot, CPlayer_UnitDestroy1336_next);
        };
        void CPlayer_UpdateUnitDebt1338_wrapper(struct CPlayer* _this, char bySlotIndex, unsigned int dwPull)
        {
           CPlayer_UpdateUnitDebt1338_user(_this, bySlotIndex, dwPull, CPlayer_UpdateUnitDebt1338_next);
        };
        void CPlayer_check_dst_param_after_attack1340_wrapper(struct CPlayer* _this, int nTotalDam, struct CCharacter* pTarget)
        {
           CPlayer_check_dst_param_after_attack1340_user(_this, nTotalDam, pTarget, CPlayer_check_dst_param_after_attack1340_next);
        };
        bool CPlayer_check_embel_part1342_wrapper(struct CPlayer* _this, struct _STORAGE_LIST::_db_con* pFixingItem)
        {
           return CPlayer_check_embel_part1342_user(_this, pFixingItem, CPlayer_check_embel_part1342_next);
        };
        bool CPlayer_check_equip_part1344_wrapper(struct CPlayer* _this, struct _STORAGE_LIST::_db_con* pFixingItem)
        {
           return CPlayer_check_equip_part1344_user(_this, pFixingItem, CPlayer_check_equip_part1344_next);
        };
        int CPlayer_check_equipmastery_lim1346_wrapper(struct CPlayer* _this, int EquipMasteryCode)
        {
           return CPlayer_check_equipmastery_lim1346_user(_this, EquipMasteryCode, CPlayer_check_equipmastery_lim1346_next);
        };
        int CPlayer_check_exp_after_attack1348_wrapper(struct CPlayer* _this, int nDamagedObjNum, struct _be_damaged_char* pList, struct CPartyModeKillMonsterExpNotify* kPartyExpNotify)
        {
           return CPlayer_check_exp_after_attack1348_user(_this, nDamagedObjNum, pList, kPartyExpNotify, CPlayer_check_exp_after_attack1348_next);
        };
        void CPlayer_check_guild_target_object1350_wrapper(struct CPlayer* _this)
        {
           CPlayer_check_guild_target_object1350_user(_this, CPlayer_check_guild_target_object1350_next);
        };
        void CPlayer_check_hp_send_party1352_wrapper(struct CPlayer* _this)
        {
           CPlayer_check_hp_send_party1352_user(_this, CPlayer_check_hp_send_party1352_next);
        };
        unsigned int CPlayer_check_mastery_cum_lim1354_wrapper(struct CPlayer* _this, char byMasteryClass, char byIndex)
        {
           return CPlayer_check_mastery_cum_lim1354_user(_this, byMasteryClass, byIndex, CPlayer_check_mastery_cum_lim1354_next);
        };
        unsigned int CPlayer_check_mastery_lim1356_wrapper(struct CPlayer* _this, char byMasteryClass, char byIndex)
        {
           return CPlayer_check_mastery_lim1356_user(_this, byMasteryClass, byIndex, CPlayer_check_mastery_lim1356_next);
        };
        void CPlayer_check_party_target_object1358_wrapper(struct CPlayer* _this)
        {
           CPlayer_check_party_target_object1358_user(_this, CPlayer_check_party_target_object1358_next);
        };
        void CPlayer_check_race_target_object1360_wrapper(struct CPlayer* _this)
        {
           CPlayer_check_race_target_object1360_user(_this, CPlayer_check_race_target_object1360_next);
        };
        void CPlayer_check_target_object1362_wrapper(struct CPlayer* _this)
        {
           CPlayer_check_target_object1362_user(_this, CPlayer_check_target_object1362_next);
        };
        int CPlayer_pre_check_force_attack1364_wrapper(struct CPlayer* _this, struct CCharacter* pDst, float* pfTarPos, uint16_t wForceItemSerial, struct _force_fld** ppForceFld, struct _STORAGE_LIST::_db_con** ppForceItem, uint16_t* pdwDecPoint, uint16_t wEffBtSerial, struct _STORAGE_LIST::_db_con** ppEffBtProp, struct _BulletItem_fld** ppfldEffBt)
        {
           return CPlayer_pre_check_force_attack1364_user(_this, pDst, pfTarPos, wForceItemSerial, ppForceFld, ppForceItem, pdwDecPoint, wEffBtSerial, ppEffBtProp, ppfldEffBt, CPlayer_pre_check_force_attack1364_next);
        };
        int CPlayer_pre_check_in_guild_battle1366_wrapper(struct CPlayer* _this, struct CCharacter* pDst)
        {
           return CPlayer_pre_check_in_guild_battle1366_user(_this, pDst, CPlayer_pre_check_in_guild_battle1366_next);
        };
        bool CPlayer_pre_check_in_guild_battle_race1368_wrapper(struct CPlayer* _this, struct CCharacter* pDst, bool bEqueal)
        {
           return CPlayer_pre_check_in_guild_battle_race1368_user(_this, pDst, bEqueal, CPlayer_pre_check_in_guild_battle_race1368_next);
        };
        int CPlayer_pre_check_normal_attack1370_wrapper(struct CPlayer* _this, struct CCharacter* pDst, uint16_t wBulletSerial, bool bCount, struct _STORAGE_LIST::_db_con** ppBulletProp, struct _BulletItem_fld** ppfldBullet, uint16_t wEffBtSerial, struct _STORAGE_LIST::_db_con** ppEffBtProp, struct _BulletItem_fld** ppfldEffBt)
        {
           return CPlayer_pre_check_normal_attack1370_user(_this, pDst, wBulletSerial, bCount, ppBulletProp, ppfldBullet, wEffBtSerial, ppEffBtProp, ppfldEffBt, CPlayer_pre_check_normal_attack1370_next);
        };
        int CPlayer_pre_check_siege_attack1372_wrapper(struct CPlayer* _this, struct CCharacter* pDst, float* pfAttackPos, uint16_t wBulletSerial, struct _STORAGE_LIST::_db_con** ppBulletProp, struct _BulletItem_fld** ppfldBullet, uint16_t wEffBtSerial, struct _STORAGE_LIST::_db_con** ppEffBulletProp, struct _BulletItem_fld** ppfldEffBullet)
        {
           return CPlayer_pre_check_siege_attack1372_user(_this, pDst, pfAttackPos, wBulletSerial, ppBulletProp, ppfldBullet, wEffBtSerial, ppEffBulletProp, ppfldEffBullet, CPlayer_pre_check_siege_attack1372_next);
        };
        int CPlayer_pre_check_skill_attack1374_wrapper(struct CPlayer* _this, struct CCharacter* pDst, float* pfAttackPos, char byEffectCode, struct _skill_fld* pSkillFld, uint16_t wBulletSerial, struct _STORAGE_LIST::_db_con** ppBulletProp, struct _BulletItem_fld** ppfldBullet, int nEffectGroup, uint16_t* pdwDecPoint, uint16_t wEffBtSerial, struct _STORAGE_LIST::_db_con** ppEffBtProp, struct _BulletItem_fld** ppfldEffBt)
        {
           return CPlayer_pre_check_skill_attack1374_user(_this, pDst, pfAttackPos, byEffectCode, pSkillFld, wBulletSerial, ppBulletProp, ppfldBullet, nEffectGroup, pdwDecPoint, wEffBtSerial, ppEffBtProp, ppfldEffBt, CPlayer_pre_check_skill_attack1374_next);
        };
        bool CPlayer_pre_check_skill_enable1376_wrapper(struct CPlayer* _this, struct _skill_fld* pSkillFld)
        {
           return CPlayer_pre_check_skill_enable1376_user(_this, pSkillFld, CPlayer_pre_check_skill_enable1376_next);
        };
        bool CPlayer_pre_check_skill_gradelimit1378_wrapper(struct CPlayer* _this, struct _skill_fld* pSkillFld)
        {
           return CPlayer_pre_check_skill_gradelimit1378_user(_this, pSkillFld, CPlayer_pre_check_skill_gradelimit1378_next);
        };
        int CPlayer_pre_check_unit_attack1380_wrapper(struct CPlayer* _this, struct CCharacter* pDst, char byWeaponPart, struct _UnitPart_fld** ppWeaponFld, struct _UnitBullet_fld** ppBulletFld, struct _unit_bullet_param** ppBulletParam)
        {
           return CPlayer_pre_check_unit_attack1380_user(_this, pDst, byWeaponPart, ppWeaponFld, ppBulletFld, ppBulletParam, CPlayer_pre_check_unit_attack1380_next);
        };
        bool CPlayer_pre_check_wpactive_force_attack1382_wrapper(struct CPlayer* _this)
        {
           return CPlayer_pre_check_wpactive_force_attack1382_user(_this, CPlayer_pre_check_wpactive_force_attack1382_next);
        };
        bool CPlayer_pre_check_wpactive_skill_attack1384_wrapper(struct CPlayer* _this, char byEffectCode, struct _skill_fld* pSkillFld, uint16_t wBulletSerial, struct _STORAGE_LIST::_db_con** ppBulletProp, struct _BulletItem_fld** ppfldBullet)
        {
           return CPlayer_pre_check_wpactive_skill_attack1384_user(_this, byEffectCode, pSkillFld, wBulletSerial, ppBulletProp, ppfldBullet, CPlayer_pre_check_wpactive_skill_attack1384_next);
        };
        void CPlayer_set_db_sf_effect1386_wrapper(struct CPlayer* _this, struct _SFCONT_DB_BASE* pDBBase)
        {
           CPlayer_set_db_sf_effect1386_user(_this, pDBBase, CPlayer_set_db_sf_effect1386_next);
        };
        void CPlayerapply_case_equip_std_effect1391_wrapper(struct CPlayer* _this, struct _STORAGE_LIST::_db_con* pItem, bool bEquip)
        {
           CPlayerapply_case_equip_std_effect1391_user(_this, pItem, bEquip, CPlayerapply_case_equip_std_effect1391_next);
        };
        void CPlayerapply_case_equip_upgrade_effect1393_wrapper(struct CPlayer* _this, struct _STORAGE_LIST::_db_con* pItem, bool bEquip)
        {
           CPlayerapply_case_equip_upgrade_effect1393_user(_this, pItem, bEquip, CPlayerapply_case_equip_upgrade_effect1393_next);
        };
        void CPlayerapply_have_item_std_effect1395_wrapper(struct CPlayer* _this, int nEffCode, float fVal, bool bAdd, int nDiffCnt)
        {
           CPlayerapply_have_item_std_effect1395_user(_this, nEffCode, fVal, bAdd, nDiffCnt, CPlayerapply_have_item_std_effect1395_next);
        };
        void CPlayerapply_normal_item_std_effect1397_wrapper(struct CPlayer* _this, int nEffCode, float fVal, bool bEquip)
        {
           CPlayerapply_normal_item_std_effect1397_user(_this, nEffCode, fVal, bEquip, CPlayerapply_normal_item_std_effect1397_next);
        };
        bool CPlayerdev_SetGuildGrade1399_wrapper(struct CPlayer* _this, char byGrade)
        {
           return CPlayerdev_SetGuildGrade1399_user(_this, byGrade, CPlayerdev_SetGuildGrade1399_next);
        };
        bool CPlayerdev_SetGuildGradeByGuildSerial1401_wrapper(struct CPlayer* _this, unsigned int dwGuildSerial, char byGrade)
        {
           return CPlayerdev_SetGuildGradeByGuildSerial1401_user(_this, dwGuildSerial, byGrade, CPlayerdev_SetGuildGradeByGuildSerial1401_next);
        };
        bool CPlayerdev_SetGuildGradeByName1403_wrapper(struct CPlayer* _this, char* uszGuildName, char byGrade)
        {
           return CPlayerdev_SetGuildGradeByName1403_user(_this, uszGuildName, byGrade, CPlayerdev_SetGuildGradeByName1403_next);
        };
        bool CPlayerdev_after_effect1405_wrapper(struct CPlayer* _this)
        {
           return CPlayerdev_after_effect1405_user(_this, CPlayerdev_after_effect1405_next);
        };
        bool CPlayerdev_all_kill1407_wrapper(struct CPlayer* _this)
        {
           return CPlayerdev_all_kill1407_user(_this, CPlayerdev_all_kill1407_next);
        };
        bool CPlayerdev_animus_recall_time_free1409_wrapper(struct CPlayer* _this, bool bFree)
        {
           return CPlayerdev_animus_recall_time_free1409_user(_this, bFree, CPlayerdev_animus_recall_time_free1409_next);
        };
        bool CPlayerdev_avator_copy1411_wrapper(struct CPlayer* _this, char* pwszDstName)
        {
           return CPlayerdev_avator_copy1411_user(_this, pwszDstName, CPlayerdev_avator_copy1411_next);
        };
        bool CPlayerdev_change_class1413_wrapper(struct CPlayer* _this, char* pszClassCode)
        {
           return CPlayerdev_change_class1413_user(_this, pszClassCode, CPlayerdev_change_class1413_next);
        };
        bool CPlayerdev_cont_effect_del1415_wrapper(struct CPlayer* _this)
        {
           return CPlayerdev_cont_effect_del1415_user(_this, CPlayerdev_cont_effect_del1415_next);
        };
        bool CPlayerdev_cont_effect_time1417_wrapper(struct CPlayer* _this, unsigned int dwSec)
        {
           return CPlayerdev_cont_effect_time1417_user(_this, dwSec, CPlayerdev_cont_effect_time1417_next);
        };
        bool CPlayerdev_dalant1419_wrapper(struct CPlayer* _this, unsigned int dwDalant)
        {
           return CPlayerdev_dalant1419_user(_this, dwDalant, CPlayerdev_dalant1419_next);
        };
        bool CPlayerdev_die1421_wrapper(struct CPlayer* _this)
        {
           return CPlayerdev_die1421_user(_this, CPlayerdev_die1421_next);
        };
        bool CPlayerdev_drop_item1423_wrapper(struct CPlayer* _this, char* pszItemCode, int nNum, char* pszUpTalCode, int nUpNum)
        {
           return CPlayerdev_drop_item1423_user(_this, pszItemCode, nNum, pszUpTalCode, nUpNum, CPlayerdev_drop_item1423_next);
        };
        bool CPlayerdev_free_sf_by_class1425_wrapper(struct CPlayer* _this)
        {
           return CPlayerdev_free_sf_by_class1425_user(_this, CPlayerdev_free_sf_by_class1425_next);
        };
        bool CPlayerdev_full_animus_gauge1427_wrapper(struct CPlayer* _this)
        {
           return CPlayerdev_full_animus_gauge1427_user(_this, CPlayerdev_full_animus_gauge1427_next);
        };
        bool CPlayerdev_full_force1429_wrapper(struct CPlayer* _this)
        {
           return CPlayerdev_full_force1429_user(_this, CPlayerdev_full_force1429_next);
        };
        bool CPlayerdev_full_point1431_wrapper(struct CPlayer* _this)
        {
           return CPlayerdev_full_point1431_user(_this, CPlayerdev_full_point1431_next);
        };
        bool CPlayerdev_gold1433_wrapper(struct CPlayer* _this, unsigned int dwGold)
        {
           return CPlayerdev_gold1433_user(_this, dwGold, CPlayerdev_gold1433_next);
        };
        bool CPlayerdev_goto_monster1435_wrapper(struct CPlayer* _this, struct CMonster* pMon)
        {
           return CPlayerdev_goto_monster1435_user(_this, pMon, CPlayerdev_goto_monster1435_next);
        };
        bool CPlayerdev_goto_npc1437_wrapper(struct CPlayer* _this, struct CMerchant* pNpc)
        {
           return CPlayerdev_goto_npc1437_user(_this, pNpc, CPlayerdev_goto_npc1437_next);
        };
        bool CPlayerdev_half_inven_amount1439_wrapper(struct CPlayer* _this, uint64_t dwAmount)
        {
           return CPlayerdev_half_inven_amount1439_user(_this, dwAmount, CPlayerdev_half_inven_amount1439_next);
        };
        bool CPlayerdev_half_point1441_wrapper(struct CPlayer* _this)
        {
           return CPlayerdev_half_point1441_user(_this, CPlayerdev_half_point1441_next);
        };
        bool CPlayerdev_init_monster1443_wrapper(struct CPlayer* _this)
        {
           return CPlayerdev_init_monster1443_user(_this, CPlayerdev_init_monster1443_next);
        };
        bool CPlayerdev_inven_empty1445_wrapper(struct CPlayer* _this)
        {
           return CPlayerdev_inven_empty1445_user(_this, CPlayerdev_inven_empty1445_next);
        };
        bool CPlayerdev_item_make_no_use_matrial1447_wrapper(struct CPlayer* _this, bool noUsingMatrial)
        {
           return CPlayerdev_item_make_no_use_matrial1447_user(_this, noUsingMatrial, CPlayerdev_item_make_no_use_matrial1447_next);
        };
        bool CPlayerdev_loot_bag1449_wrapper(struct CPlayer* _this)
        {
           return CPlayerdev_loot_bag1449_user(_this, CPlayerdev_loot_bag1449_next);
        };
        bool CPlayerdev_loot_free1451_wrapper(struct CPlayer* _this, bool bFree)
        {
           return CPlayerdev_loot_free1451_user(_this, bFree, CPlayerdev_loot_free1451_next);
        };
        bool CPlayerdev_loot_fullitem1453_wrapper(struct CPlayer* _this, char byLv)
        {
           return CPlayerdev_loot_fullitem1453_user(_this, byLv, CPlayerdev_loot_fullitem1453_next);
        };
        bool CPlayerdev_loot_item1455_wrapper(struct CPlayer* _this, char* pszItemCode, int nNum, char* pszUpTalCode, int nUpNum)
        {
           return CPlayerdev_loot_item1455_user(_this, pszItemCode, nNum, pszUpTalCode, nUpNum, CPlayerdev_loot_item1455_next);
        };
        bool CPlayerdev_loot_material1457_wrapper(struct CPlayer* _this)
        {
           return CPlayerdev_loot_material1457_user(_this, CPlayerdev_loot_material1457_next);
        };
        bool CPlayerdev_loot_mine1459_wrapper(struct CPlayer* _this)
        {
           return CPlayerdev_loot_mine1459_user(_this, CPlayerdev_loot_mine1459_next);
        };
        bool CPlayerdev_loot_tower1461_wrapper(struct CPlayer* _this)
        {
           return CPlayerdev_loot_tower1461_user(_this, CPlayerdev_loot_tower1461_next);
        };
        bool CPlayerdev_lv1463_wrapper(struct CPlayer* _this, int nLv)
        {
           return CPlayerdev_lv1463_user(_this, nLv, CPlayerdev_lv1463_next);
        };
        bool CPlayerdev_make_succ1465_wrapper(struct CPlayer* _this, bool bSucc)
        {
           return CPlayerdev_make_succ1465_user(_this, bSucc, CPlayerdev_make_succ1465_next);
        };
        bool CPlayerdev_max_level_ext1467_wrapper(struct CPlayer* _this, char byMaxLevel)
        {
           return CPlayerdev_max_level_ext1467_user(_this, byMaxLevel, CPlayerdev_max_level_ext1467_next);
        };
        bool CPlayerdev_never_die1469_wrapper(struct CPlayer* _this, bool bSet)
        {
           return CPlayerdev_never_die1469_user(_this, bSet, CPlayerdev_never_die1469_next);
        };
        bool CPlayerdev_quest_complete1471_wrapper(struct CPlayer* _this)
        {
           return CPlayerdev_quest_complete1471_user(_this, CPlayerdev_quest_complete1471_next);
        };
        bool CPlayerdev_quest_complete_other1473_wrapper(struct CPlayer* _this, char* pwszCharName)
        {
           return CPlayerdev_quest_complete_other1473_user(_this, pwszCharName, CPlayerdev_quest_complete_other1473_next);
        };
        bool CPlayerdev_set_animus_exp1475_wrapper(struct CPlayer* _this, uint64_t dwExpPoint)
        {
           return CPlayerdev_set_animus_exp1475_user(_this, dwExpPoint, CPlayerdev_set_animus_exp1475_next);
        };
        bool CPlayerdev_set_animus_lv1477_wrapper(struct CPlayer* _this, int nAnimusLv)
        {
           return CPlayerdev_set_animus_lv1477_user(_this, nAnimusLv, CPlayerdev_set_animus_lv1477_next);
        };
        bool CPlayerdev_set_hp1479_wrapper(struct CPlayer* _this, float prob)
        {
           return CPlayerdev_set_hp1479_user(_this, prob, CPlayerdev_set_hp1479_next);
        };
        bool CPlayerdev_trap_attack_grade1481_wrapper(struct CPlayer* _this, int nPoint)
        {
           return CPlayerdev_trap_attack_grade1481_user(_this, nPoint, CPlayerdev_trap_attack_grade1481_next);
        };
        bool CPlayerdev_up_all1483_wrapper(struct CPlayer* _this, int nCum)
        {
           return CPlayerdev_up_all1483_user(_this, nCum, CPlayerdev_up_all1483_next);
        };
        bool CPlayerdev_up_all_pt1485_wrapper(struct CPlayer* _this, int nLv)
        {
           return CPlayerdev_up_all_pt1485_user(_this, nLv, CPlayerdev_up_all_pt1485_next);
        };
        bool CPlayerdev_up_cashbag1487_wrapper(struct CPlayer* _this, long double dPoint)
        {
           return CPlayerdev_up_cashbag1487_user(_this, dPoint, CPlayerdev_up_cashbag1487_next);
        };
        bool CPlayerdev_up_forceitem1489_wrapper(struct CPlayer* _this, int nCum)
        {
           return CPlayerdev_up_forceitem1489_user(_this, nCum, CPlayerdev_up_forceitem1489_next);
        };
        bool CPlayerdev_up_forcemastery1491_wrapper(struct CPlayer* _this, int nCum)
        {
           return CPlayerdev_up_forcemastery1491_user(_this, nCum, CPlayerdev_up_forcemastery1491_next);
        };
        bool CPlayerdev_up_mastery1493_wrapper(struct CPlayer* _this, int nMasteryCode, int nMasteryIndex, int nLv)
        {
           return CPlayerdev_up_mastery1493_user(_this, nMasteryCode, nMasteryIndex, nLv, CPlayerdev_up_mastery1493_next);
        };
        bool CPlayerdev_up_pvp1495_wrapper(struct CPlayer* _this, long double dPoint)
        {
           return CPlayerdev_up_pvp1495_user(_this, dPoint, CPlayerdev_up_pvp1495_next);
        };
        bool CPlayerdev_up_skill1497_wrapper(struct CPlayer* _this, char* pszSkillCode, int nCum)
        {
           return CPlayerdev_up_skill1497_user(_this, pszSkillCode, nCum, CPlayerdev_up_skill1497_next);
        };
        bool CPlayerdev_view_boss1499_wrapper(struct CPlayer* _this)
        {
           return CPlayerdev_view_boss1499_user(_this, CPlayerdev_view_boss1499_next);
        };
        bool CPlayerdev_view_method1501_wrapper(struct CPlayer* _this, char* pwszDstName)
        {
           return CPlayerdev_view_method1501_user(_this, pwszDstName, CPlayerdev_view_method1501_next);
        };
        void CPlayermake_force_attack_param1503_wrapper(struct CPlayer* _this, struct CCharacter* pDst, struct _force_fld* pForceFld, struct _STORAGE_LIST::_db_con* pForceItem, float* pTar, struct _attack_param* pAP, struct _STORAGE_LIST::_db_con* pEffBulletItem, float fAddEffBtFc)
        {
           CPlayermake_force_attack_param1503_user(_this, pDst, pForceFld, pForceItem, pTar, pAP, pEffBulletItem, fAddEffBtFc, CPlayermake_force_attack_param1503_next);
        };
        void CPlayermake_gen_attack_param1505_wrapper(struct CPlayer* _this, struct CCharacter* pDst, char byPart, struct _BulletItem_fld* pBulletFld, float fAddBulletFc, struct _attack_param* pAP, struct _BulletItem_fld* pEffBtFld, float fAddEffBtFc)
        {
           CPlayermake_gen_attack_param1505_user(_this, pDst, byPart, pBulletFld, fAddBulletFc, pAP, pEffBtFld, fAddEffBtFc, CPlayermake_gen_attack_param1505_next);
        };
        void CPlayermake_siege_attack_param1507_wrapper(struct CPlayer* _this, struct CCharacter* pDst, float* pfAttackPos, char byPart, struct _BulletItem_fld* pBulletFld, float fAddBulletFc, struct _attack_param* pAP, struct _BulletItem_fld* pEffBulletFld, float fAddEffBtFc)
        {
           CPlayermake_siege_attack_param1507_user(_this, pDst, pfAttackPos, byPart, pBulletFld, fAddBulletFc, pAP, pEffBulletFld, fAddEffBtFc, CPlayermake_siege_attack_param1507_next);
        };
        void CPlayermake_skill_attack_param1509_wrapper(struct CPlayer* _this, struct CCharacter* pDst, float* pfAttackPos, char byEffectCode, struct _skill_fld* pSkillFld, int nAttType, struct _STORAGE_LIST::_db_con* pBulletItem, float fAddBulletFc, struct _attack_param* pAP, struct _STORAGE_LIST::_db_con* pEffBulletItem, float fAddEffBulletFc)
        {
           CPlayermake_skill_attack_param1509_user(_this, pDst, pfAttackPos, byEffectCode, pSkillFld, nAttType, pBulletItem, fAddBulletFc, pAP, pEffBulletItem, fAddEffBulletFc, CPlayermake_skill_attack_param1509_next);
        };
        void CPlayermake_unit_attack_param1511_wrapper(struct CPlayer* _this, struct CCharacter* pDst, struct _UnitPart_fld* pWeaponFld, float fAddBulletFc, struct _attack_param* pAP)
        {
           CPlayermake_unit_attack_param1511_user(_this, pDst, pWeaponFld, fAddBulletFc, pAP, CPlayermake_unit_attack_param1511_next);
        };
        void CPlayermake_wpactive_force_attack_param1513_wrapper(struct CPlayer* _this, struct CCharacter* pDst, struct _force_fld* pForceFld, float* pfAttackPos, struct _attack_param* pAP)
        {
           CPlayermake_wpactive_force_attack_param1513_user(_this, pDst, pForceFld, pfAttackPos, pAP, CPlayermake_wpactive_force_attack_param1513_next);
        };
        void CPlayermake_wpactive_skill_attack_param1515_wrapper(struct CPlayer* _this, struct CCharacter* pDst, struct _skill_fld* pSkillFld, float* pfAttackPos, char byEffectCode, int nAttType, struct _STORAGE_LIST::_db_con* pBulletItem, float fAddBulletFc, struct _attack_param* pAP, int* nShotNum)
        {
           CPlayermake_wpactive_skill_attack_param1515_user(_this, pDst, pSkillFld, pfAttackPos, byEffectCode, nAttType, pBulletItem, fAddBulletFc, pAP, nShotNum, CPlayermake_wpactive_skill_attack_param1515_next);
        };
        bool CPlayermgr_MaxAttackPoint1517_wrapper(struct CPlayer* _this, int nMax)
        {
           return CPlayermgr_MaxAttackPoint1517_user(_this, nMax, CPlayermgr_MaxAttackPoint1517_next);
        };
        bool CPlayermgr_TrunkInit1519_wrapper(struct CPlayer* _this)
        {
           return CPlayermgr_TrunkInit1519_user(_this, CPlayermgr_TrunkInit1519_next);
        };
        bool CPlayermgr_all_item_muzi1521_wrapper(struct CPlayer* _this, int nLv)
        {
           return CPlayermgr_all_item_muzi1521_user(_this, nLv, CPlayermgr_all_item_muzi1521_next);
        };
        bool CPlayermgr_change_degree1523_wrapper(struct CPlayer* _this, int nDegree)
        {
           return CPlayermgr_change_degree1523_user(_this, nDegree, CPlayermgr_change_degree1523_next);
        };
        bool CPlayermgr_defense_item_grace1525_wrapper(struct CPlayer* _this, char byItemCode, int nLv)
        {
           return CPlayermgr_defense_item_grace1525_user(_this, byItemCode, nLv, CPlayermgr_defense_item_grace1525_next);
        };
        bool CPlayermgr_destroy_system_tower1527_wrapper(struct CPlayer* _this)
        {
           return CPlayermgr_destroy_system_tower1527_user(_this, CPlayermgr_destroy_system_tower1527_next);
        };
        bool CPlayermgr_dungeon_pass1529_wrapper(struct CPlayer* _this)
        {
           return CPlayermgr_dungeon_pass1529_user(_this, CPlayermgr_dungeon_pass1529_next);
        };
        bool CPlayermgr_exit_keeper1531_wrapper(struct CPlayer* _this)
        {
           return CPlayermgr_exit_keeper1531_user(_this, CPlayermgr_exit_keeper1531_next);
        };
        bool CPlayermgr_exit_stone1533_wrapper(struct CPlayer* _this)
        {
           return CPlayermgr_exit_stone1533_user(_this, CPlayermgr_exit_stone1533_next);
        };
        bool CPlayermgr_free_ride_ship1535_wrapper(struct CPlayer* _this)
        {
           return CPlayermgr_free_ride_ship1535_user(_this, CPlayermgr_free_ride_ship1535_next);
        };
        bool CPlayermgr_gotoCoordinates1537_wrapper(struct CPlayer* _this, char* pszMapCode, float fX, float fY, float fZ)
        {
           return CPlayermgr_gotoCoordinates1537_user(_this, pszMapCode, fX, fY, fZ, CPlayermgr_gotoCoordinates1537_next);
        };
        bool CPlayermgr_gotoDstCoordinates1539_wrapper(struct CPlayer* _this, char* pwszDstName, char* pszMapCode, float fX, float fY, float fZ)
        {
           return CPlayermgr_gotoDstCoordinates1539_user(_this, pwszDstName, pszMapCode, fX, fY, fZ, CPlayermgr_gotoDstCoordinates1539_next);
        };
        bool CPlayermgr_goto_mine1541_wrapper(struct CPlayer* _this)
        {
           return CPlayermgr_goto_mine1541_user(_this, CPlayermgr_goto_mine1541_next);
        };
        bool CPlayermgr_goto_shipport1543_wrapper(struct CPlayer* _this, int nRaceCode, int nPort)
        {
           return CPlayermgr_goto_shipport1543_user(_this, nRaceCode, nPort, CPlayermgr_goto_shipport1543_next);
        };
        bool CPlayermgr_goto_stone1545_wrapper(struct CPlayer* _this, char byRaceCode)
        {
           return CPlayermgr_goto_stone1545_user(_this, byRaceCode, CPlayermgr_goto_stone1545_next);
        };
        bool CPlayermgr_goto_store1547_wrapper(struct CPlayer* _this, int nRaceCode, char* pszNPCName)
        {
           return CPlayermgr_goto_store1547_user(_this, nRaceCode, pszNPCName, CPlayermgr_goto_store1547_next);
        };
        bool CPlayermgr_holykeeper_start1549_wrapper(struct CPlayer* _this, int nRace)
        {
           return CPlayermgr_holykeeper_start1549_user(_this, nRace, CPlayermgr_holykeeper_start1549_next);
        };
        bool CPlayermgr_holystone_start1551_wrapper(struct CPlayer* _this, int nNumOfTime)
        {
           return CPlayermgr_holystone_start1551_user(_this, nNumOfTime, CPlayermgr_holystone_start1551_next);
        };
        bool CPlayermgr_item_telekinesis1553_wrapper(struct CPlayer* _this)
        {
           return CPlayermgr_item_telekinesis1553_user(_this, CPlayermgr_item_telekinesis1553_next);
        };
        bool CPlayermgr_kick1555_wrapper(struct CPlayer* _this, char* pwszCharName)
        {
           return CPlayermgr_kick1555_user(_this, pwszCharName, CPlayermgr_kick1555_next);
        };
        bool CPlayermgr_make_system_tower1557_wrapper(struct CPlayer* _this, char* pszTowerCode)
        {
           return CPlayermgr_make_system_tower1557_user(_this, pszTowerCode, CPlayermgr_make_system_tower1557_next);
        };
        bool CPlayermgr_matchless1559_wrapper(struct CPlayer* _this, bool bMatchless)
        {
           return CPlayermgr_matchless1559_user(_this, bMatchless, CPlayermgr_matchless1559_next);
        };
        bool CPlayermgr_pass_sch_one_step1561_wrapper(struct CPlayer* _this)
        {
           return CPlayermgr_pass_sch_one_step1561_user(_this, CPlayermgr_pass_sch_one_step1561_next);
        };
        bool CPlayermgr_recall_guild_player1563_wrapper(struct CPlayer* _this, char* wszDestCharName)
        {
           return CPlayermgr_recall_guild_player1563_user(_this, wszDestCharName, CPlayermgr_recall_guild_player1563_next);
        };
        bool CPlayermgr_recall_mon1565_wrapper(struct CPlayer* _this, char* pszMonCode, int nCreateNum)
        {
           return CPlayermgr_recall_mon1565_user(_this, pszMonCode, nCreateNum, CPlayermgr_recall_mon1565_next);
        };
        bool CPlayermgr_recall_party_player1567_wrapper(struct CPlayer* _this, char* wszDestCharName)
        {
           return CPlayermgr_recall_party_player1567_user(_this, wszDestCharName, CPlayermgr_recall_party_player1567_next);
        };
        bool CPlayermgr_recall_player1569_wrapper(struct CPlayer* _this, char* pwszCharName)
        {
           return CPlayermgr_recall_player1569_user(_this, pwszCharName, CPlayermgr_recall_player1569_next);
        };
        bool CPlayermgr_resurrect_player1571_wrapper(struct CPlayer* _this, char* pwszCharName)
        {
           return CPlayermgr_resurrect_player1571_user(_this, pwszCharName, CPlayermgr_resurrect_player1571_next);
        };
        bool CPlayermgr_set_animus_attack_point1573_wrapper(struct CPlayer* _this, int nPoint)
        {
           return CPlayermgr_set_animus_attack_point1573_user(_this, nPoint, CPlayermgr_set_animus_attack_point1573_next);
        };
        bool CPlayermgr_tracing1575_wrapper(struct CPlayer* _this, bool bOn)
        {
           return CPlayermgr_tracing1575_user(_this, bOn, CPlayermgr_tracing1575_next);
        };
        bool CPlayermgr_user_ban1577_wrapper(struct CPlayer* _this, char* uszCharName, int iPeriod, char* uszReason, char byBlockType)
        {
           return CPlayermgr_user_ban1577_user(_this, uszCharName, iPeriod, uszReason, byBlockType, CPlayermgr_user_ban1577_next);
        };
        bool CPlayermgr_whisper1579_wrapper(struct CPlayer* _this, char* pwszMsg)
        {
           return CPlayermgr_whisper1579_user(_this, pwszMsg, CPlayermgr_whisper1579_next);
        };
        void CPlayerpc_AddBag1581_wrapper(struct CPlayer* _this, uint16_t wBagItemSerial)
        {
           CPlayerpc_AddBag1581_user(_this, wBagItemSerial, CPlayerpc_AddBag1581_next);
        };
        void CPlayerpc_AlterItemSlotRequest1583_wrapper(struct CPlayer* _this, char byNum, struct _alter_item_slot_request_clzo::__list* pList)
        {
           CPlayerpc_AlterItemSlotRequest1583_user(_this, byNum, pList, CPlayerpc_AlterItemSlotRequest1583_next);
        };
        void CPlayerpc_AlterLinkBoardSlotRequest1585_wrapper(struct CPlayer* _this, char byNum, struct _alter_link_slot_request_clzo::__list* pList, char byLBLock)
        {
           CPlayerpc_AlterLinkBoardSlotRequest1585_user(_this, byNum, pList, byLBLock, CPlayerpc_AlterLinkBoardSlotRequest1585_next);
        };
        void CPlayerpc_AlterWindowInfoRequest1587_wrapper(struct CPlayer* _this, unsigned int* pdwSkill, unsigned int* pdwForce, unsigned int* pdwChar, unsigned int* pdwAnimus, unsigned int dwInven, unsigned int* pdwInvenBag)
        {
           CPlayerpc_AlterWindowInfoRequest1587_user(_this, pdwSkill, pdwForce, pdwChar, pdwAnimus, dwInven, pdwInvenBag, CPlayerpc_AlterWindowInfoRequest1587_next);
        };
        void CPlayerpc_AnimusCommandRequest1589_wrapper(struct CPlayer* _this, char byCommandCode)
        {
           CPlayerpc_AnimusCommandRequest1589_user(_this, byCommandCode, CPlayerpc_AnimusCommandRequest1589_next);
        };
        void CPlayerpc_AnimusInvenChange1591_wrapper(struct CPlayer* _this, struct _STORAGE_POS_INDIV* pItem, uint16_t wReplaceSerial)
        {
           CPlayerpc_AnimusInvenChange1591_user(_this, pItem, wReplaceSerial, CPlayerpc_AnimusInvenChange1591_next);
        };
        void CPlayerpc_AnimusRecallRequest1593_wrapper(struct CPlayer* _this, uint16_t wAnimusItemSerial, uint16_t wAnimusClientHP, uint16_t wAnimusClientFP)
        {
           CPlayerpc_AnimusRecallRequest1593_user(_this, wAnimusItemSerial, wAnimusClientHP, wAnimusClientFP, CPlayerpc_AnimusRecallRequest1593_next);
        };
        void CPlayerpc_AnimusReturnRequest1595_wrapper(struct CPlayer* _this)
        {
           CPlayerpc_AnimusReturnRequest1595_user(_this, CPlayerpc_AnimusReturnRequest1595_next);
        };
        void CPlayerpc_AnimusTargetRequest1597_wrapper(struct CPlayer* _this, char byObjectID, uint16_t wObjectIndex, unsigned int dwObjectSerial)
        {
           CPlayerpc_AnimusTargetRequest1597_user(_this, byObjectID, wObjectIndex, dwObjectSerial, CPlayerpc_AnimusTargetRequest1597_next);
        };
        void CPlayerpc_AwayPartyJoinInvitationAnswer1599_wrapper(struct CPlayer* _this, struct _CLID* pidBoss, char byRetCode)
        {
           CPlayerpc_AwayPartyJoinInvitationAnswer1599_user(_this, pidBoss, byRetCode, CPlayerpc_AwayPartyJoinInvitationAnswer1599_next);
        };
        void CPlayerpc_AwaypartyInvitationRequest1601_wrapper(struct CPlayer* _this, char* pwszCharName)
        {
           CPlayerpc_AwaypartyInvitationRequest1601_user(_this, pwszCharName, CPlayerpc_AwaypartyInvitationRequest1601_next);
        };
        void CPlayerpc_BackTowerRequest1603_wrapper(struct CPlayer* _this, unsigned int dwTowerObjSerial)
        {
           CPlayerpc_BackTowerRequest1603_user(_this, dwTowerObjSerial, CPlayerpc_BackTowerRequest1603_next);
        };
        void CPlayerpc_BackTrapRequest1605_wrapper(struct CPlayer* _this, unsigned int dwTrapObjSerial, uint16_t wAddSerial)
        {
           CPlayerpc_BackTrapRequest1605_user(_this, dwTrapObjSerial, wAddSerial, CPlayerpc_BackTrapRequest1605_next);
        };
        void CPlayerpc_BillingInfoRequest1607_wrapper(struct CPlayer* _this)
        {
           CPlayerpc_BillingInfoRequest1607_user(_this, CPlayerpc_BillingInfoRequest1607_next);
        };
        void CPlayerpc_BriefPass1609_wrapper(struct CPlayer* _this, char byQuestSlotIndex)
        {
           CPlayerpc_BriefPass1609_user(_this, byQuestSlotIndex, CPlayerpc_BriefPass1609_next);
        };
        void CPlayerpc_BuddyAddAnswer1611_wrapper(struct CPlayer* _this, bool bAccept, uint16_t wAskerIndex, unsigned int dwAskerSerial)
        {
           CPlayerpc_BuddyAddAnswer1611_user(_this, bAccept, wAskerIndex, dwAskerSerial, CPlayerpc_BuddyAddAnswer1611_next);
        };
        void CPlayerpc_BuddyAddRequest1613_wrapper(struct CPlayer* _this, uint16_t wDstIndex, unsigned int dwDstSerial, char* pwszDstName)
        {
           CPlayerpc_BuddyAddRequest1613_user(_this, wDstIndex, dwDstSerial, pwszDstName, CPlayerpc_BuddyAddRequest1613_next);
        };
        void CPlayerpc_BuddyDelRequest1615_wrapper(struct CPlayer* _this, unsigned int dwSerial)
        {
           CPlayerpc_BuddyDelRequest1615_user(_this, dwSerial, CPlayerpc_BuddyDelRequest1615_next);
        };
        void CPlayerpc_BuddyDownloadRequest1617_wrapper(struct CPlayer* _this)
        {
           CPlayerpc_BuddyDownloadRequest1617_user(_this, CPlayerpc_BuddyDownloadRequest1617_next);
        };
        void CPlayerpc_BuyItemStore1619_wrapper(struct CPlayer* _this, struct CItemStore* pStore, char byOfferNum, struct _buy_store_request_clzo::_list* pList, int bUseNPCLinkIntem)
        {
           CPlayerpc_BuyItemStore1619_user(_this, pStore, byOfferNum, pList, bUseNPCLinkIntem, CPlayerpc_BuyItemStore1619_next);
        };
        char CPlayerpc_CanSelectClassRequest1621_wrapper(struct CPlayer* _this, char* pIsRealClassUp)
        {
           return CPlayerpc_CanSelectClassRequest1621_user(_this, pIsRealClassUp, CPlayerpc_CanSelectClassRequest1621_next);
        };
        void CPlayerpc_CastVoteRequest1623_wrapper(struct CPlayer* _this, int nVoteSerial, char byCode)
        {
           CPlayerpc_CastVoteRequest1623_user(_this, nVoteSerial, byCode, CPlayerpc_CastVoteRequest1623_next);
        };
        void CPlayerpc_ChangeModeType1625_wrapper(struct CPlayer* _this, int nModeType, int nStandType)
        {
           CPlayerpc_ChangeModeType1625_user(_this, nModeType, nStandType, CPlayerpc_ChangeModeType1625_next);
        };
        bool CPlayerpc_CharacterRenameCash1627_wrapper(struct CPlayer* _this, bool bChange, struct _STORAGE_POS_INDIV* pItem, char* strCharacterName)
        {
           return CPlayerpc_CharacterRenameCash1627_user(_this, bChange, pItem, strCharacterName, CPlayerpc_CharacterRenameCash1627_next);
        };
        char CPlayerpc_CharacterRenameCheck1629_wrapper(struct CPlayer* _this, char* strCharacterName)
        {
           return CPlayerpc_CharacterRenameCheck1629_user(_this, strCharacterName, CPlayerpc_CharacterRenameCheck1629_next);
        };
        void CPlayerpc_ChatAllRequest1631_wrapper(struct CPlayer* _this, char* pwszChatData)
        {
           CPlayerpc_ChatAllRequest1631_user(_this, pwszChatData, CPlayerpc_ChatAllRequest1631_next);
        };
        void CPlayerpc_ChatCircleRequest1633_wrapper(struct CPlayer* _this, char* pwszChatData)
        {
           CPlayerpc_ChatCircleRequest1633_user(_this, pwszChatData, CPlayerpc_ChatCircleRequest1633_next);
        };
        void CPlayerpc_ChatFarRequest1635_wrapper(struct CPlayer* _this, char* pwszName, char* pwszChatData)
        {
           CPlayerpc_ChatFarRequest1635_user(_this, pwszName, pwszChatData, CPlayerpc_ChatFarRequest1635_next);
        };
        void CPlayerpc_ChatGmNoticeRequest1637_wrapper(struct CPlayer* _this, char* pwszChatData)
        {
           CPlayerpc_ChatGmNoticeRequest1637_user(_this, pwszChatData, CPlayerpc_ChatGmNoticeRequest1637_next);
        };
        void CPlayerpc_ChatGuildEstSenRequest1639_wrapper(struct CPlayer* _this, char* pwszChatData)
        {
           CPlayerpc_ChatGuildEstSenRequest1639_user(_this, pwszChatData, CPlayerpc_ChatGuildEstSenRequest1639_next);
        };
        void CPlayerpc_ChatGuildRequest1641_wrapper(struct CPlayer* _this, unsigned int dwDstSerial, char* pwszChatData)
        {
           CPlayerpc_ChatGuildRequest1641_user(_this, dwDstSerial, pwszChatData, CPlayerpc_ChatGuildRequest1641_next);
        };
        void CPlayerpc_ChatMapRequest1643_wrapper(struct CPlayer* _this, char* pwszChatData)
        {
           CPlayerpc_ChatMapRequest1643_user(_this, pwszChatData, CPlayerpc_ChatMapRequest1643_next);
        };
        void CPlayerpc_ChatMgrWhisperRequest1645_wrapper(struct CPlayer* _this, char* pwszChatData)
        {
           CPlayerpc_ChatMgrWhisperRequest1645_user(_this, pwszChatData, CPlayerpc_ChatMgrWhisperRequest1645_next);
        };
        void CPlayerpc_ChatMultiFarRequest1647_wrapper(struct CPlayer* _this, char byDstNum, struct _w_name* pDstName, char* pwszMsg)
        {
           CPlayerpc_ChatMultiFarRequest1647_user(_this, byDstNum, pDstName, pwszMsg, CPlayerpc_ChatMultiFarRequest1647_next);
        };
        void CPlayerpc_ChatOperatorRequest1649_wrapper(struct CPlayer* _this, char byRaceCode, char* pwszChatData)
        {
           CPlayerpc_ChatOperatorRequest1649_user(_this, byRaceCode, pwszChatData, CPlayerpc_ChatOperatorRequest1649_next);
        };
        void CPlayerpc_ChatPartyRequest1651_wrapper(struct CPlayer* _this, char* pwszChatData)
        {
           CPlayerpc_ChatPartyRequest1651_user(_this, pwszChatData, CPlayerpc_ChatPartyRequest1651_next);
        };
        void CPlayerpc_ChatRaceBossCryRequest1653_wrapper(struct CPlayer* _this, char* pwszChatData)
        {
           CPlayerpc_ChatRaceBossCryRequest1653_user(_this, pwszChatData, CPlayerpc_ChatRaceBossCryRequest1653_next);
        };
        void CPlayerpc_ChatRaceBossRequest1655_wrapper(struct CPlayer* _this, char* pwszChatData)
        {
           CPlayerpc_ChatRaceBossRequest1655_user(_this, pwszChatData, CPlayerpc_ChatRaceBossRequest1655_next);
        };
        void CPlayerpc_ChatRaceRequest1657_wrapper(struct CPlayer* _this, char* pwszChatData)
        {
           CPlayerpc_ChatRaceRequest1657_user(_this, pwszChatData, CPlayerpc_ChatRaceRequest1657_next);
        };
        void CPlayerpc_ChatRePresentationRequest1659_wrapper(struct CPlayer* _this, char* pwszChatData)
        {
           CPlayerpc_ChatRePresentationRequest1659_user(_this, pwszChatData, CPlayerpc_ChatRePresentationRequest1659_next);
        };
        void CPlayerpc_ChatTradeRequestMsg1661_wrapper(struct CPlayer* _this, char bySubType, char* pwszTradeMsg)
        {
           CPlayerpc_ChatTradeRequestMsg1661_user(_this, bySubType, pwszTradeMsg, CPlayerpc_ChatTradeRequestMsg1661_next);
        };
        void CPlayerpc_ClassSkillRequest1663_wrapper(struct CPlayer* _this, uint16_t wSkillIndex, struct _CHRID* pidDst, uint16_t* pConsumeSerial)
        {
           CPlayerpc_ClassSkillRequest1663_user(_this, wSkillIndex, pidDst, pConsumeSerial, CPlayerpc_ClassSkillRequest1663_next);
        };
        void CPlayerpc_CombineItem1665_wrapper(struct CPlayer* _this, uint16_t wManualIndex, char byMaterialNum, struct _STORAGE_POS_INDIV* pipMaterials, uint16_t wOverlapSerial)
        {
           CPlayerpc_CombineItem1665_user(_this, wManualIndex, byMaterialNum, pipMaterials, wOverlapSerial, CPlayerpc_CombineItem1665_next);
        };
        void CPlayerpc_CombineItemEx1667_wrapper(struct CPlayer* _this, struct _combine_ex_item_request_clzo* pRecv)
        {
           CPlayerpc_CombineItemEx1667_user(_this, pRecv, CPlayerpc_CombineItemEx1667_next);
        };
        void CPlayerpc_CombineItemExAccept1669_wrapper(struct CPlayer* _this, struct _combine_ex_item_accept_request_clzo* pRecv)
        {
           CPlayerpc_CombineItemExAccept1669_user(_this, pRecv, CPlayerpc_CombineItemExAccept1669_next);
        };
        void CPlayerpc_CuttingComplete1671_wrapper(struct CPlayer* _this, char byNpcRace)
        {
           CPlayerpc_CuttingComplete1671_user(_this, byNpcRace, CPlayerpc_CuttingComplete1671_next);
        };
        void CPlayerpc_DTradeAddRequest1673_wrapper(struct CPlayer* _this, char bySlotIndex, char byStorageCode, unsigned int dwSerial, char byAmount)
        {
           CPlayerpc_DTradeAddRequest1673_user(_this, bySlotIndex, byStorageCode, dwSerial, byAmount, CPlayerpc_DTradeAddRequest1673_next);
        };
        void CPlayerpc_DTradeAnswerRequest1675_wrapper(struct CPlayer* _this, struct _CLID* pidAsker)
        {
           CPlayerpc_DTradeAnswerRequest1675_user(_this, pidAsker, CPlayerpc_DTradeAnswerRequest1675_next);
        };
        void CPlayerpc_DTradeAskRequest1677_wrapper(struct CPlayer* _this, uint16_t wDstIndex)
        {
           CPlayerpc_DTradeAskRequest1677_user(_this, wDstIndex, CPlayerpc_DTradeAskRequest1677_next);
        };
        void CPlayerpc_DTradeBetRequest1679_wrapper(struct CPlayer* _this, char byMoneyUnit, unsigned int dwBetAmount)
        {
           CPlayerpc_DTradeBetRequest1679_user(_this, byMoneyUnit, dwBetAmount, CPlayerpc_DTradeBetRequest1679_next);
        };
        void CPlayerpc_DTradeCancleRequest1681_wrapper(struct CPlayer* _this)
        {
           CPlayerpc_DTradeCancleRequest1681_user(_this, CPlayerpc_DTradeCancleRequest1681_next);
        };
        void CPlayerpc_DTradeDelRequest1683_wrapper(struct CPlayer* _this, char bySlotIndex)
        {
           CPlayerpc_DTradeDelRequest1683_user(_this, bySlotIndex, CPlayerpc_DTradeDelRequest1683_next);
        };
        void CPlayerpc_DTradeLockRequest1685_wrapper(struct CPlayer* _this)
        {
           CPlayerpc_DTradeLockRequest1685_user(_this, CPlayerpc_DTradeLockRequest1685_next);
        };
        void CPlayerpc_DTradeOKRequest1687_wrapper(struct CPlayer* _this, unsigned int* pdwKey)
        {
           CPlayerpc_DTradeOKRequest1687_user(_this, pdwKey, CPlayerpc_DTradeOKRequest1687_next);
        };
        void CPlayerpc_DarkHoleAnswerReenterRequest1689_wrapper(struct CPlayer* _this, bool bEnter, uint16_t wChannelIndex, unsigned int dwChannelSerial)
        {
           CPlayerpc_DarkHoleAnswerReenterRequest1689_user(_this, bEnter, wChannelIndex, dwChannelSerial, CPlayerpc_DarkHoleAnswerReenterRequest1689_next);
        };
        void CPlayerpc_DarkHoleClearOutRequest1691_wrapper(struct CPlayer* _this)
        {
           CPlayerpc_DarkHoleClearOutRequest1691_user(_this, CPlayerpc_DarkHoleClearOutRequest1691_next);
        };
        void CPlayerpc_DarkHoleEnterRequest1693_wrapper(struct CPlayer* _this, uint16_t wHoleIndex, unsigned int dwHoleSerial)
        {
           CPlayerpc_DarkHoleEnterRequest1693_user(_this, wHoleIndex, dwHoleSerial, CPlayerpc_DarkHoleEnterRequest1693_next);
        };
        void CPlayerpc_DarkHoleGiveupOutRequest1695_wrapper(struct CPlayer* _this)
        {
           CPlayerpc_DarkHoleGiveupOutRequest1695_user(_this, CPlayerpc_DarkHoleGiveupOutRequest1695_next);
        };
        void CPlayerpc_DarkHoleOpenRequest1697_wrapper(struct CPlayer* _this, unsigned int dwItemSerial)
        {
           CPlayerpc_DarkHoleOpenRequest1697_user(_this, dwItemSerial, CPlayerpc_DarkHoleOpenRequest1697_next);
        };
        void CPlayerpc_DowngradeItem1699_wrapper(struct CPlayer* _this, struct _STORAGE_POS_INDIV* pposTalik, struct _STORAGE_POS_INDIV* pposToolItem, struct _STORAGE_POS_INDIV* pposUpgItem)
        {
           CPlayerpc_DowngradeItem1699_user(_this, pposTalik, pposToolItem, pposUpgItem, CPlayerpc_DowngradeItem1699_next);
        };
        void CPlayerpc_EmbellishPart1701_wrapper(struct CPlayer* _this, struct _STORAGE_POS_INDIV* pItem, uint16_t wChangeSerial)
        {
           CPlayerpc_EmbellishPart1701_user(_this, pItem, wChangeSerial, CPlayerpc_EmbellishPart1701_next);
        };
        void CPlayerpc_EquipPart1703_wrapper(struct CPlayer* _this, struct _STORAGE_POS_INDIV* pItem)
        {
           CPlayerpc_EquipPart1703_user(_this, pItem, CPlayerpc_EquipPart1703_next);
        };
        void CPlayerpc_ExchangeDalantForGold1705_wrapper(struct CPlayer* _this, unsigned int dwDalant)
        {
           CPlayerpc_ExchangeDalantForGold1705_user(_this, dwDalant, CPlayerpc_ExchangeDalantForGold1705_next);
        };
        void CPlayerpc_ExchangeGoldForDalant1707_wrapper(struct CPlayer* _this, unsigned int dwGold)
        {
           CPlayerpc_ExchangeGoldForDalant1707_user(_this, dwGold, CPlayerpc_ExchangeGoldForDalant1707_next);
        };
        void CPlayerpc_ExchangeGoldForPvP1709_wrapper(struct CPlayer* _this, unsigned int dwGold)
        {
           CPlayerpc_ExchangeGoldForPvP1709_user(_this, dwGold, CPlayerpc_ExchangeGoldForPvP1709_next);
        };
        void CPlayerpc_ExchangeItem1711_wrapper(struct CPlayer* _this, uint16_t wManualIndex, uint16_t wItemSerial)
        {
           CPlayerpc_ExchangeItem1711_user(_this, wManualIndex, wItemSerial, CPlayerpc_ExchangeItem1711_next);
        };
        void CPlayerpc_ExitWorldRequest1713_wrapper(struct CPlayer* _this)
        {
           CPlayerpc_ExitWorldRequest1713_user(_this, CPlayerpc_ExitWorldRequest1713_next);
        };
        void CPlayerpc_ForceInvenChange1715_wrapper(struct CPlayer* _this, struct _STORAGE_POS_INDIV* pItem, uint16_t wReplaceSerial)
        {
           CPlayerpc_ForceInvenChange1715_user(_this, pItem, wReplaceSerial, CPlayerpc_ForceInvenChange1715_next);
        };
        void CPlayerpc_ForceRequest1717_wrapper(struct CPlayer* _this, uint16_t wForceSerial, struct _CHRID* pidDst, uint16_t* pConsumeSerial)
        {
           CPlayerpc_ForceRequest1717_user(_this, wForceSerial, pidDst, pConsumeSerial, CPlayerpc_ForceRequest1717_next);
        };
        void CPlayerpc_GestureRequest1719_wrapper(struct CPlayer* _this, char byGestureType)
        {
           CPlayerpc_GestureRequest1719_user(_this, byGestureType, CPlayerpc_GestureRequest1719_next);
        };
        bool CPlayerpc_GiveItem1721_wrapper(struct CPlayer* _this, struct _STORAGE_LIST::_db_con* kItem, char* szReason, bool bDrop)
        {
           return CPlayerpc_GiveItem1721_user(_this, kItem, szReason, bDrop, CPlayerpc_GiveItem1721_next);
        };
        void CPlayerpc_GotoAvatorRequest1723_wrapper(struct CPlayer* _this, char* pwszAvatorName)
        {
           CPlayerpc_GotoAvatorRequest1723_user(_this, pwszAvatorName, CPlayerpc_GotoAvatorRequest1723_next);
        };
        void CPlayerpc_GotoBasePortalRequest1725_wrapper(struct CPlayer* _this, uint16_t wItemSerial)
        {
           CPlayerpc_GotoBasePortalRequest1725_user(_this, wItemSerial, CPlayerpc_GotoBasePortalRequest1725_next);
        };
        void CPlayerpc_GuildBattleBlock1727_wrapper(struct CPlayer* _this, bool bBlock)
        {
           CPlayerpc_GuildBattleBlock1727_user(_this, bBlock, CPlayerpc_GuildBattleBlock1727_next);
        };
        void CPlayerpc_GuildCancelSuggestRequest1729_wrapper(struct CPlayer* _this, unsigned int dwMatterVoteSynKey)
        {
           CPlayerpc_GuildCancelSuggestRequest1729_user(_this, dwMatterVoteSynKey, CPlayerpc_GuildCancelSuggestRequest1729_next);
        };
        void CPlayerpc_GuildDownLoadRequest1731_wrapper(struct CPlayer* _this)
        {
           CPlayerpc_GuildDownLoadRequest1731_user(_this, CPlayerpc_GuildDownLoadRequest1731_next);
        };
        void CPlayerpc_GuildEstablishRequest1733_wrapper(struct CPlayer* _this, char* pwszGuildName)
        {
           CPlayerpc_GuildEstablishRequest1733_user(_this, pwszGuildName, CPlayerpc_GuildEstablishRequest1733_next);
        };
        void CPlayerpc_GuildHonorListRequest1735_wrapper(struct CPlayer* _this, char byUI)
        {
           CPlayerpc_GuildHonorListRequest1735_user(_this, byUI, CPlayerpc_GuildHonorListRequest1735_next);
        };
        void CPlayerpc_GuildJoinAcceptRequest1737_wrapper(struct CPlayer* _this, unsigned int dwApplierSerial, bool bAccept)
        {
           CPlayerpc_GuildJoinAcceptRequest1737_user(_this, dwApplierSerial, bAccept, CPlayerpc_GuildJoinAcceptRequest1737_next);
        };
        void CPlayerpc_GuildJoinApplyCancelRequest1739_wrapper(struct CPlayer* _this)
        {
           CPlayerpc_GuildJoinApplyCancelRequest1739_user(_this, CPlayerpc_GuildJoinApplyCancelRequest1739_next);
        };
        void CPlayerpc_GuildJoinApplyRequest1741_wrapper(struct CPlayer* _this, char* pwszGuildName)
        {
           CPlayerpc_GuildJoinApplyRequest1741_user(_this, pwszGuildName, CPlayerpc_GuildJoinApplyRequest1741_next);
        };
        void CPlayerpc_GuildListRequest1743_wrapper(struct CPlayer* _this, char byPage)
        {
           CPlayerpc_GuildListRequest1743_user(_this, byPage, CPlayerpc_GuildListRequest1743_next);
        };
        void CPlayerpc_GuildManageRequest1745_wrapper(struct CPlayer* _this, char byType, unsigned int dwDst, unsigned int dwObj1, unsigned int dwObj2, unsigned int dwObj3)
        {
           CPlayerpc_GuildManageRequest1745_user(_this, byType, dwDst, dwObj1, dwObj2, dwObj3, CPlayerpc_GuildManageRequest1745_next);
        };
        void CPlayerpc_GuildNextHonorListRequest1747_wrapper(struct CPlayer* _this)
        {
           CPlayerpc_GuildNextHonorListRequest1747_user(_this, CPlayerpc_GuildNextHonorListRequest1747_next);
        };
        void CPlayerpc_GuildOfferSuggestRequest1749_wrapper(struct CPlayer* _this, char byMatterType, unsigned int dwMatterDst, char* pwszComment, unsigned int dwMatterObj1, unsigned int dwMatterObj2, unsigned int dwMatterObj3)
        {
           CPlayerpc_GuildOfferSuggestRequest1749_user(_this, byMatterType, dwMatterDst, pwszComment, dwMatterObj1, dwMatterObj2, dwMatterObj3, CPlayerpc_GuildOfferSuggestRequest1749_next);
        };
        void CPlayerpc_GuildPushMoneyRequest1751_wrapper(struct CPlayer* _this, unsigned int dwPushDalant, unsigned int dwPushGold)
        {
           CPlayerpc_GuildPushMoneyRequest1751_user(_this, dwPushDalant, dwPushGold, CPlayerpc_GuildPushMoneyRequest1751_next);
        };
        void CPlayerpc_GuildQueryInfoRequest1753_wrapper(struct CPlayer* _this, unsigned int dwGuildSerial)
        {
           CPlayerpc_GuildQueryInfoRequest1753_user(_this, dwGuildSerial, CPlayerpc_GuildQueryInfoRequest1753_next);
        };
        void CPlayerpc_GuildRoomEnterRequest1755_wrapper(struct CPlayer* _this, struct _guildroom_enter_request_clzo* pProtocol)
        {
           CPlayerpc_GuildRoomEnterRequest1755_user(_this, pProtocol, CPlayerpc_GuildRoomEnterRequest1755_next);
        };
        void CPlayerpc_GuildRoomOutRequest1757_wrapper(struct CPlayer* _this, struct _guildroom_out_request_clzo* pProtocol)
        {
           CPlayerpc_GuildRoomOutRequest1757_user(_this, pProtocol, CPlayerpc_GuildRoomOutRequest1757_next);
        };
        void CPlayerpc_GuildRoomRentRequest1759_wrapper(struct CPlayer* _this, struct _guildroom_rent_request_clzo* pProtocol)
        {
           CPlayerpc_GuildRoomRentRequest1759_user(_this, pProtocol, CPlayerpc_GuildRoomRentRequest1759_next);
        };
        void CPlayerpc_GuildRoomRestTimeRequest1761_wrapper(struct CPlayer* _this, struct _guildroom_resttime_request_clzo* pProtocol)
        {
           CPlayerpc_GuildRoomRestTimeRequest1761_user(_this, pProtocol, CPlayerpc_GuildRoomRestTimeRequest1761_next);
        };
        void CPlayerpc_GuildSelfLeaveRequest1763_wrapper(struct CPlayer* _this)
        {
           CPlayerpc_GuildSelfLeaveRequest1763_user(_this, CPlayerpc_GuildSelfLeaveRequest1763_next);
        };
        void CPlayerpc_GuildSetHonorRequest1765_wrapper(struct CPlayer* _this, struct _guild_honor_set_request_clzo* pData)
        {
           CPlayerpc_GuildSetHonorRequest1765_user(_this, pData, CPlayerpc_GuildSetHonorRequest1765_next);
        };
        void CPlayerpc_GuildVoteRequest1767_wrapper(struct CPlayer* _this, unsigned int dwMatterVoteSynKey, char byVoteCode)
        {
           CPlayerpc_GuildVoteRequest1767_user(_this, dwMatterVoteSynKey, byVoteCode, CPlayerpc_GuildVoteRequest1767_next);
        };
        char CPlayerpc_InitClass1769_wrapper(struct CPlayer* _this)
        {
           return CPlayerpc_InitClass1769_user(_this, CPlayerpc_InitClass1769_next);
        };
        char CPlayerpc_InitClassRequest1771_wrapper(struct CPlayer* _this)
        {
           return CPlayerpc_InitClassRequest1771_user(_this, CPlayerpc_InitClassRequest1771_next);
        };
        void CPlayerpc_LimitItemNumRequest1773_wrapper(struct CPlayer* _this, unsigned int dwStoreIndex)
        {
           CPlayerpc_LimitItemNumRequest1773_user(_this, dwStoreIndex, CPlayerpc_LimitItemNumRequest1773_next);
        };
        void CPlayerpc_LinkBoardRequest1775_wrapper(struct CPlayer* _this)
        {
           CPlayerpc_LinkBoardRequest1775_user(_this, CPlayerpc_LinkBoardRequest1775_next);
        };
        void CPlayerpc_MacroUpdate1777_wrapper(struct CPlayer* _this, char* pBuf)
        {
           CPlayerpc_MacroUpdate1777_user(_this, pBuf, CPlayerpc_MacroUpdate1777_next);
        };
        void CPlayerpc_MakeItem1779_wrapper(struct CPlayer* _this, struct _STORAGE_POS_INDIV* pipMakeTool, uint16_t wManualIndex, char byMaterialNum, struct _STORAGE_POS_INDIV* pipMaterials)
        {
           CPlayerpc_MakeItem1779_user(_this, pipMakeTool, wManualIndex, byMaterialNum, pipMaterials, CPlayerpc_MakeItem1779_next);
        };
        void CPlayerpc_MakeTowerRequest1781_wrapper(struct CPlayer* _this, uint16_t wSkillIndex, uint16_t wTowerItemSerial, char byMaterialNum, struct _make_tower_request_clzo::__material* pMaterial, float* pfPos, uint16_t* pConsumeSerial)
        {
           CPlayerpc_MakeTowerRequest1781_user(_this, wSkillIndex, wTowerItemSerial, byMaterialNum, pMaterial, pfPos, pConsumeSerial, CPlayerpc_MakeTowerRequest1781_next);
        };
        void CPlayerpc_MakeTrapRequest1783_wrapper(struct CPlayer* _this, uint16_t wSkillIndex, uint16_t wTrapItemSerial, float* pfPos, uint16_t* pConsumeSerial)
        {
           CPlayerpc_MakeTrapRequest1783_user(_this, wSkillIndex, wTrapItemSerial, pfPos, pConsumeSerial, CPlayerpc_MakeTrapRequest1783_next);
        };
        void CPlayerpc_MineCancle1785_wrapper(struct CPlayer* _this)
        {
           CPlayerpc_MineCancle1785_user(_this, CPlayerpc_MineCancle1785_next);
        };
        void CPlayerpc_MineComplete1787_wrapper(struct CPlayer* _this)
        {
           CPlayerpc_MineComplete1787_user(_this, CPlayerpc_MineComplete1787_next);
        };
        void CPlayerpc_MineStart1789_wrapper(struct CPlayer* _this, char byMineIndex, char byOreIndex, uint16_t wBatterySerial)
        {
           CPlayerpc_MineStart1789_user(_this, byMineIndex, byOreIndex, wBatterySerial, CPlayerpc_MineStart1789_next);
        };
        void CPlayerpc_MoveModeChangeRequest1791_wrapper(struct CPlayer* _this, char byMoveType)
        {
           CPlayerpc_MoveModeChangeRequest1791_user(_this, byMoveType, CPlayerpc_MoveModeChangeRequest1791_next);
        };
        void CPlayerpc_MoveNext1793_wrapper(struct CPlayer* _this, char byMoveType, float* pfCur, float* pfTar, char byDirect)
        {
           CPlayerpc_MoveNext1793_user(_this, byMoveType, pfCur, pfTar, byDirect, CPlayerpc_MoveNext1793_next);
        };
        void CPlayerpc_MovePortal1795_wrapper(struct CPlayer* _this, int nPortalIndex, uint16_t* pConsumeSerial)
        {
           CPlayerpc_MovePortal1795_user(_this, nPortalIndex, pConsumeSerial, CPlayerpc_MovePortal1795_next);
        };
        void CPlayerpc_MoveStop1797_wrapper(struct CPlayer* _this, float* pfCur)
        {
           CPlayerpc_MoveStop1797_user(_this, pfCur, CPlayerpc_MoveStop1797_next);
        };
        void CPlayerpc_MoveToOwnStoneMapRequest1799_wrapper(struct CPlayer* _this)
        {
           CPlayerpc_MoveToOwnStoneMapRequest1799_user(_this, CPlayerpc_MoveToOwnStoneMapRequest1799_next);
        };
        bool CPlayerpc_NPCLinkCheckItemRequest1801_wrapper(struct CPlayer* _this, struct _STORAGE_POS_INDIV* pStorage)
        {
           return CPlayerpc_NPCLinkCheckItemRequest1801_user(_this, pStorage, CPlayerpc_NPCLinkCheckItemRequest1801_next);
        };
        char CPlayerpc_NPCLinkCheckItemRequest_Check1803_wrapper(struct CPlayer* _this, struct _STORAGE_POS_INDIV* pStorage)
        {
           return CPlayerpc_NPCLinkCheckItemRequest_Check1803_user(_this, pStorage, CPlayerpc_NPCLinkCheckItemRequest_Check1803_next);
        };
        char CPlayerpc_NPCLinkCheckItemRequest_Use1805_wrapper(struct CPlayer* _this, struct _STORAGE_POS_INDIV* pStorage)
        {
           return CPlayerpc_NPCLinkCheckItemRequest_Use1805_user(_this, pStorage, CPlayerpc_NPCLinkCheckItemRequest_Use1805_next);
        };
        void CPlayerpc_NewPosStart1807_wrapper(struct CPlayer* _this)
        {
           CPlayerpc_NewPosStart1807_user(_this, CPlayerpc_NewPosStart1807_next);
        };
        void CPlayerpc_NotifyRaceBossCryMsg1809_wrapper(struct CPlayer* _this)
        {
           CPlayerpc_NotifyRaceBossCryMsg1809_user(_this, CPlayerpc_NotifyRaceBossCryMsg1809_next);
        };
        void CPlayerpc_NuclearAfterEffect1811_wrapper(struct CPlayer* _this)
        {
           CPlayerpc_NuclearAfterEffect1811_user(_this, CPlayerpc_NuclearAfterEffect1811_next);
        };
        void CPlayerpc_OffPart1813_wrapper(struct CPlayer* _this, struct _STORAGE_POS_INDIV* pItem)
        {
           CPlayerpc_OffPart1813_user(_this, pItem, CPlayerpc_OffPart1813_next);
        };
        void CPlayerpc_OreCutting1815_wrapper(struct CPlayer* _this, uint16_t wOreSerial, char byProcessNum)
        {
           CPlayerpc_OreCutting1815_user(_this, wOreSerial, byProcessNum, CPlayerpc_OreCutting1815_next);
        };
        void CPlayerpc_OreIntoBag1817_wrapper(struct CPlayer* _this, uint16_t wResIndex, uint16_t wSerial, char byAddAmount)
        {
           CPlayerpc_OreIntoBag1817_user(_this, wResIndex, wSerial, byAddAmount, CPlayerpc_OreIntoBag1817_next);
        };
        void CPlayerpc_PartyAlterLootShareReqeuest1819_wrapper(struct CPlayer* _this, char byLootShareMode)
        {
           CPlayerpc_PartyAlterLootShareReqeuest1819_user(_this, byLootShareMode, CPlayerpc_PartyAlterLootShareReqeuest1819_next);
        };
        void CPlayerpc_PartyDisJointReqeuest1821_wrapper(struct CPlayer* _this)
        {
           CPlayerpc_PartyDisJointReqeuest1821_user(_this, CPlayerpc_PartyDisJointReqeuest1821_next);
        };
        void CPlayerpc_PartyJoinApplication1823_wrapper(struct CPlayer* _this, uint16_t wBossIndex)
        {
           CPlayerpc_PartyJoinApplication1823_user(_this, wBossIndex, CPlayerpc_PartyJoinApplication1823_next);
        };
        void CPlayerpc_PartyJoinApplicationAnswer1825_wrapper(struct CPlayer* _this, struct _CLID* pidApplicant)
        {
           CPlayerpc_PartyJoinApplicationAnswer1825_user(_this, pidApplicant, CPlayerpc_PartyJoinApplicationAnswer1825_next);
        };
        void CPlayerpc_PartyJoinInvitation1827_wrapper(struct CPlayer* _this, uint16_t wDstIndex)
        {
           CPlayerpc_PartyJoinInvitation1827_user(_this, wDstIndex, CPlayerpc_PartyJoinInvitation1827_next);
        };
        void CPlayerpc_PartyJoinInvitationAnswer1829_wrapper(struct CPlayer* _this, struct _CLID* pidBoss)
        {
           CPlayerpc_PartyJoinInvitationAnswer1829_user(_this, pidBoss, CPlayerpc_PartyJoinInvitationAnswer1829_next);
        };
        void CPlayerpc_PartyLeaveCompulsionReqeuest1831_wrapper(struct CPlayer* _this, unsigned int dwExiterSerial)
        {
           CPlayerpc_PartyLeaveCompulsionReqeuest1831_user(_this, dwExiterSerial, CPlayerpc_PartyLeaveCompulsionReqeuest1831_next);
        };
        void CPlayerpc_PartyLeaveSelfReqeuest1833_wrapper(struct CPlayer* _this)
        {
           CPlayerpc_PartyLeaveSelfReqeuest1833_user(_this, CPlayerpc_PartyLeaveSelfReqeuest1833_next);
        };
        void CPlayerpc_PartyLockReqeuest1835_wrapper(struct CPlayer* _this, bool bLock)
        {
           CPlayerpc_PartyLockReqeuest1835_user(_this, bLock, CPlayerpc_PartyLockReqeuest1835_next);
        };
        void CPlayerpc_PartyReqBlock1837_wrapper(struct CPlayer* _this, bool bBlock)
        {
           CPlayerpc_PartyReqBlock1837_user(_this, bBlock, CPlayerpc_PartyReqBlock1837_next);
        };
        void CPlayerpc_PartySuccessionReqeuest1839_wrapper(struct CPlayer* _this, unsigned int dwSuccessorSerial)
        {
           CPlayerpc_PartySuccessionReqeuest1839_user(_this, dwSuccessorSerial, CPlayerpc_PartySuccessionReqeuest1839_next);
        };
        void CPlayerpc_PlayAttack_Force1841_wrapper(struct CPlayer* _this, struct CCharacter* pDst, float* pfAreaPos, uint16_t wForceSerial, uint16_t* pConsumeSerial, uint16_t wEffBtSerial)
        {
           CPlayerpc_PlayAttack_Force1841_user(_this, pDst, pfAreaPos, wForceSerial, pConsumeSerial, wEffBtSerial, CPlayerpc_PlayAttack_Force1841_next);
        };
        void CPlayerpc_PlayAttack_Gen1843_wrapper(struct CPlayer* _this, struct CCharacter* pDst, char byAttPart, uint16_t wBulletSerial, uint16_t wEffBtSerial, bool bCount)
        {
           CPlayerpc_PlayAttack_Gen1843_user(_this, pDst, byAttPart, wBulletSerial, wEffBtSerial, bCount, CPlayerpc_PlayAttack_Gen1843_next);
        };
        void CPlayerpc_PlayAttack_SelfDestruction1845_wrapper(struct CPlayer* _this)
        {
           CPlayerpc_PlayAttack_SelfDestruction1845_user(_this, CPlayerpc_PlayAttack_SelfDestruction1845_next);
        };
        void CPlayerpc_PlayAttack_Siege1847_wrapper(struct CPlayer* _this, struct CCharacter* pDst, float* pfAttackPos, char byAttPart, uint16_t wBulletSerial, uint16_t wEffBtSerial)
        {
           CPlayerpc_PlayAttack_Siege1847_user(_this, pDst, pfAttackPos, byAttPart, wBulletSerial, wEffBtSerial, CPlayerpc_PlayAttack_Siege1847_next);
        };
        void CPlayerpc_PlayAttack_Skill1849_wrapper(struct CPlayer* _this, struct CCharacter* pDst, float* pfAttackPos, char byEffectCode, uint16_t wSkillIndex, uint16_t wBulletSerial, uint16_t* pConsumeSerial, uint16_t wEffBtSerial)
        {
           CPlayerpc_PlayAttack_Skill1849_user(_this, pDst, pfAttackPos, byEffectCode, wSkillIndex, wBulletSerial, pConsumeSerial, wEffBtSerial, CPlayerpc_PlayAttack_Skill1849_next);
        };
        void CPlayerpc_PlayAttack_Test1851_wrapper(struct CPlayer* _this, char byEffectCode, char byEffectIndex, uint16_t wBulletItemSerial, char byWeaponPart, int16_t* pzTar)
        {
           CPlayerpc_PlayAttack_Test1851_user(_this, byEffectCode, byEffectIndex, wBulletItemSerial, byWeaponPart, pzTar, CPlayerpc_PlayAttack_Test1851_next);
        };
        void CPlayerpc_PlayAttack_Unit1853_wrapper(struct CPlayer* _this, struct CCharacter* pDst, char byWeaponPart)
        {
           CPlayerpc_PlayAttack_Unit1853_user(_this, pDst, byWeaponPart, CPlayerpc_PlayAttack_Unit1853_next);
        };
        void CPlayerpc_PostContentRequest1855_wrapper(struct CPlayer* _this, unsigned int dwIndex)
        {
           CPlayerpc_PostContentRequest1855_user(_this, dwIndex, CPlayerpc_PostContentRequest1855_next);
        };
        void CPlayerpc_PostDeleteRequest1857_wrapper(struct CPlayer* _this, unsigned int dwIndex)
        {
           CPlayerpc_PostDeleteRequest1857_user(_this, dwIndex, CPlayerpc_PostDeleteRequest1857_next);
        };
        void CPlayerpc_PostItemGoldRequest1859_wrapper(struct CPlayer* _this, unsigned int dwIndex)
        {
           CPlayerpc_PostItemGoldRequest1859_user(_this, dwIndex, CPlayerpc_PostItemGoldRequest1859_next);
        };
        void CPlayerpc_PostListRequest1861_wrapper(struct CPlayer* _this)
        {
           CPlayerpc_PostListRequest1861_user(_this, CPlayerpc_PostListRequest1861_next);
        };
        void CPlayerpc_PostReturnConfirmRequest1863_wrapper(struct CPlayer* _this, unsigned int dwPostSerial)
        {
           CPlayerpc_PostReturnConfirmRequest1863_user(_this, dwPostSerial, CPlayerpc_PostReturnConfirmRequest1863_next);
        };
        void CPlayerpc_PotionDivision1865_wrapper(struct CPlayer* _this, uint16_t wSerial, uint16_t wTarSerial, char byAmount)
        {
           CPlayerpc_PotionDivision1865_user(_this, wSerial, wTarSerial, byAmount, CPlayerpc_PotionDivision1865_next);
        };
        void CPlayerpc_PotionSeparation1867_wrapper(struct CPlayer* _this, uint16_t wSerial, char byAmount)
        {
           CPlayerpc_PotionSeparation1867_user(_this, wSerial, byAmount, CPlayerpc_PotionSeparation1867_next);
        };
        void CPlayerpc_PotionUseTrunkExtend1869_wrapper(struct CPlayer* _this)
        {
           CPlayerpc_PotionUseTrunkExtend1869_user(_this, CPlayerpc_PotionUseTrunkExtend1869_next);
        };
        void CPlayerpc_ProposeVoteRequest1871_wrapper(struct CPlayer* _this, char byLimGrade, char* pwszCont)
        {
           CPlayerpc_ProposeVoteRequest1871_user(_this, byLimGrade, pwszCont, CPlayerpc_ProposeVoteRequest1871_next);
        };
        void CPlayerpc_PvpCashRecorver1873_wrapper(struct CPlayer* _this, unsigned int dwItemSerial, char byItemCnt)
        {
           CPlayerpc_PvpCashRecorver1873_user(_this, dwItemSerial, byItemCnt, CPlayerpc_PvpCashRecorver1873_next);
        };
        void CPlayerpc_QuestGiveupRequest1875_wrapper(struct CPlayer* _this, char byQuestDBSlot)
        {
           CPlayerpc_QuestGiveupRequest1875_user(_this, byQuestDBSlot, CPlayerpc_QuestGiveupRequest1875_next);
        };
        bool CPlayerpc_RadarCharInfo1877_wrapper(struct CPlayer* _this)
        {
           return CPlayerpc_RadarCharInfo1877_user(_this, CPlayerpc_RadarCharInfo1877_next);
        };
        void CPlayerpc_RealMovPos1879_wrapper(struct CPlayer* _this, float* pfCur)
        {
           CPlayerpc_RealMovPos1879_user(_this, pfCur, CPlayerpc_RealMovPos1879_next);
        };
        void CPlayerpc_RefreshGroupTargetPosition1881_wrapper(struct CPlayer* _this, char byGroupType, struct CGameObject* pObject)
        {
           CPlayerpc_RefreshGroupTargetPosition1881_user(_this, byGroupType, pObject, CPlayerpc_RefreshGroupTargetPosition1881_next);
        };
        void CPlayerpc_RegistBind1883_wrapper(struct CPlayer* _this, struct CItemStore* pStore)
        {
           CPlayerpc_RegistBind1883_user(_this, pStore, CPlayerpc_RegistBind1883_next);
        };
        void CPlayerpc_ReleaseGroupTargetObjectRequest1885_wrapper(struct CPlayer* _this, char byGroupType)
        {
           CPlayerpc_ReleaseGroupTargetObjectRequest1885_user(_this, byGroupType, CPlayerpc_ReleaseGroupTargetObjectRequest1885_next);
        };
        void CPlayerpc_ReleaseSiegeModeRequest1887_wrapper(struct CPlayer* _this)
        {
           CPlayerpc_ReleaseSiegeModeRequest1887_user(_this, CPlayerpc_ReleaseSiegeModeRequest1887_next);
        };
        void CPlayerpc_ReleaseTargetObjectRequest1889_wrapper(struct CPlayer* _this)
        {
           CPlayerpc_ReleaseTargetObjectRequest1889_user(_this, CPlayerpc_ReleaseTargetObjectRequest1889_next);
        };
        char CPlayerpc_RenameItemNConditionCheck1891_wrapper(struct CPlayer* _this, struct _STORAGE_POS_INDIV* pItemInfo, struct _STORAGE_LIST::_db_con** ppItem)
        {
           return CPlayerpc_RenameItemNConditionCheck1891_user(_this, pItemInfo, ppItem, CPlayerpc_RenameItemNConditionCheck1891_next);
        };
        void CPlayerpc_RequestChangeTaxRate1893_wrapper(struct CPlayer* _this, char byTaxRate)
        {
           CPlayerpc_RequestChangeTaxRate1893_user(_this, byTaxRate, CPlayerpc_RequestChangeTaxRate1893_next);
        };
        void CPlayerpc_RequestDialogWithNPC1895_wrapper(struct CPlayer* _this, struct CItemStore* pStore)
        {
           CPlayerpc_RequestDialogWithNPC1895_user(_this, pStore, CPlayerpc_RequestDialogWithNPC1895_next);
        };
        void CPlayerpc_RequestPatriarchPunishment1897_wrapper(struct CPlayer* _this, char byType, char* pwszName, char* pwszCont)
        {
           CPlayerpc_RequestPatriarchPunishment1897_user(_this, byType, pwszName, pwszCont, CPlayerpc_RequestPatriarchPunishment1897_next);
        };
        void CPlayerpc_RequestQuestFromNPC1899_wrapper(struct CPlayer* _this, struct CItemStore* pStore, unsigned int dwNPCQuestIndex)
        {
           CPlayerpc_RequestQuestFromNPC1899_user(_this, pStore, dwNPCQuestIndex, CPlayerpc_RequestQuestFromNPC1899_next);
        };
        void CPlayerpc_RequestQuestListFromNPC1901_wrapper(struct CPlayer* _this, struct CItemStore* pStore)
        {
           CPlayerpc_RequestQuestListFromNPC1901_user(_this, pStore, CPlayerpc_RequestQuestListFromNPC1901_next);
        };
        void CPlayerpc_RequestTaxRate1903_wrapper(struct CPlayer* _this)
        {
           CPlayerpc_RequestTaxRate1903_user(_this, CPlayerpc_RequestTaxRate1903_next);
        };
        void CPlayerpc_RequestUILockCertify1905_wrapper(struct CPlayer* _this, struct CUserDB* pUserDB, char* uszUILockPW)
        {
           CPlayerpc_RequestUILockCertify1905_user(_this, pUserDB, uszUILockPW, CPlayerpc_RequestUILockCertify1905_next);
        };
        void CPlayerpc_RequestUILockFindPW1907_wrapper(struct CPlayer* _this, struct CUserDB* pUserDB, char* uszHintAnswer)
        {
           CPlayerpc_RequestUILockFindPW1907_user(_this, pUserDB, uszHintAnswer, CPlayerpc_RequestUILockFindPW1907_next);
        };
        void CPlayerpc_RequestUILockInit1909_wrapper(struct CPlayer* _this, struct CUserDB* pUserDB, char* szUILockPW, char* szUILockPW_Confirm, char byUILock_HintIndex, char* uszUILock_HintAnswer)
        {
           CPlayerpc_RequestUILockInit1909_user(_this, pUserDB, szUILockPW, szUILockPW_Confirm, byUILock_HintIndex, uszUILock_HintAnswer, CPlayerpc_RequestUILockInit1909_next);
        };
        void CPlayerpc_RequestUILockUpdate1911_wrapper(struct CPlayer* _this, char* uszUILockPWOld, char* uszUILockPW, char* uszUILockPW_Confirm, char byUILock_HintIndex, char* uszUILock_HintAnswer)
        {
           CPlayerpc_RequestUILockUpdate1911_user(_this, uszUILockPWOld, uszUILockPW, uszUILockPW_Confirm, byUILock_HintIndex, uszUILock_HintAnswer, CPlayerpc_RequestUILockUpdate1911_next);
        };
        void CPlayerpc_RequestWatchingWithNPC1913_wrapper(struct CPlayer* _this, struct CItemStore* pStore)
        {
           CPlayerpc_RequestWatchingWithNPC1913_user(_this, pStore, CPlayerpc_RequestWatchingWithNPC1913_next);
        };
        void CPlayerpc_ResDivision1915_wrapper(struct CPlayer* _this, uint16_t wStartSerial, uint16_t wTarSerial, char byMoveAmount)
        {
           CPlayerpc_ResDivision1915_user(_this, wStartSerial, wTarSerial, byMoveAmount, CPlayerpc_ResDivision1915_next);
        };
        void CPlayerpc_ResSeparation1917_wrapper(struct CPlayer* _this, uint16_t wStartSerial, char byMoveAmount)
        {
           CPlayerpc_ResSeparation1917_user(_this, wStartSerial, byMoveAmount, CPlayerpc_ResSeparation1917_next);
        };
        bool CPlayerpc_Resurrect1919_wrapper(struct CPlayer* _this, bool bQuickPotion)
        {
           return CPlayerpc_Resurrect1919_user(_this, bQuickPotion, CPlayerpc_Resurrect1919_next);
        };
        void CPlayerpc_Revival1921_wrapper(struct CPlayer* _this, bool bUseableJade)
        {
           CPlayerpc_Revival1921_user(_this, bUseableJade, CPlayerpc_Revival1921_next);
        };
        void CPlayerpc_SelectClassRequest1923_wrapper(struct CPlayer* _this, uint16_t wSelClassIndex, char bySelectRewardItem)
        {
           CPlayerpc_SelectClassRequest1923_user(_this, wSelClassIndex, bySelectRewardItem, CPlayerpc_SelectClassRequest1923_next);
        };
        void CPlayerpc_SelectQuestAfterHappenEvent1925_wrapper(struct CPlayer* _this, char bySelectIndex)
        {
           CPlayerpc_SelectQuestAfterHappenEvent1925_user(_this, bySelectIndex, CPlayerpc_SelectQuestAfterHappenEvent1925_next);
        };
        void CPlayerpc_SelectQuestReward1927_wrapper(struct CPlayer* _this, char byQuestDBSlot, char bySelectItemSlotIndex, char bySelectLinkQuestIndex)
        {
           CPlayerpc_SelectQuestReward1927_user(_this, byQuestDBSlot, bySelectItemSlotIndex, bySelectLinkQuestIndex, CPlayerpc_SelectQuestReward1927_next);
        };
        void CPlayerpc_SellItemStore1929_wrapper(struct CPlayer* _this, struct CItemStore* pStore, char byOfferNum, struct _sell_store_request_clzo::_list* pList, int bUseNPCLinkIntem)
        {
           CPlayerpc_SellItemStore1929_user(_this, pStore, byOfferNum, pList, bUseNPCLinkIntem, CPlayerpc_SellItemStore1929_next);
        };
        void CPlayerpc_SetGroupMapPointRequest1931_wrapper(struct CPlayer* _this, char byGroupType, float* pzTar)
        {
           CPlayerpc_SetGroupMapPointRequest1931_user(_this, byGroupType, pzTar, CPlayerpc_SetGroupMapPointRequest1931_next);
        };
        void CPlayerpc_SetGroupTargetObjectRequest1933_wrapper(struct CPlayer* _this, struct CGameObject* pTar, unsigned int dwSerial, char byGroupType)
        {
           CPlayerpc_SetGroupTargetObjectRequest1933_user(_this, pTar, dwSerial, byGroupType, CPlayerpc_SetGroupTargetObjectRequest1933_next);
        };
        void CPlayerpc_SetInGuildBattle1935_wrapper(struct CPlayer* _this, bool bInGuildBattle, char byColorInx)
        {
           CPlayerpc_SetInGuildBattle1935_user(_this, bInGuildBattle, byColorInx, CPlayerpc_SetInGuildBattle1935_next);
        };
        bool CPlayerpc_SetItemCheckRequest1937_wrapper(struct CPlayer* _this, unsigned int dwSetItem, char bySetItemNum, char bySetEffectNum, bool bSet)
        {
           return CPlayerpc_SetItemCheckRequest1937_user(_this, dwSetItem, bySetItemNum, bySetEffectNum, bSet, CPlayerpc_SetItemCheckRequest1937_next);
        };
        void CPlayerpc_SetRaceBossCryMsg1939_wrapper(struct CPlayer* _this, char bySlot, char* pwszCryMsg)
        {
           CPlayerpc_SetRaceBossCryMsg1939_user(_this, bySlot, pwszCryMsg, CPlayerpc_SetRaceBossCryMsg1939_next);
        };
        void CPlayerpc_SetTargetObjectRequest1941_wrapper(struct CPlayer* _this, struct CGameObject* pTar, unsigned int dwSerial, bool bForce)
        {
           CPlayerpc_SetTargetObjectRequest1941_user(_this, pTar, dwSerial, bForce, CPlayerpc_SetTargetObjectRequest1941_next);
        };
        void CPlayerpc_SkillRequest1943_wrapper(struct CPlayer* _this, char bySkillIndex, struct _CHRID* pidDst, uint16_t* pConsumeSerial)
        {
           CPlayerpc_SkillRequest1943_user(_this, bySkillIndex, pidDst, pConsumeSerial, CPlayerpc_SkillRequest1943_next);
        };
        void CPlayerpc_Stop1945_wrapper(struct CPlayer* _this)
        {
           CPlayerpc_Stop1945_user(_this, CPlayerpc_Stop1945_next);
        };
        void CPlayerpc_TakeGroundingItem1947_wrapper(struct CPlayer* _this, struct CItemBox* pBox, uint16_t wAddSerial)
        {
           CPlayerpc_TakeGroundingItem1947_user(_this, pBox, wAddSerial, CPlayerpc_TakeGroundingItem1947_next);
        };
        void CPlayerpc_TalikCrystalExchange1949_wrapper(struct CPlayer* _this, char byExchangeNum, struct _talik_crystal_exchange_clzo::_list* pList)
        {
           CPlayerpc_TalikCrystalExchange1949_user(_this, byExchangeNum, pList, CPlayerpc_TalikCrystalExchange1949_next);
        };
        void CPlayerpc_ThrowSkillRequest1951_wrapper(struct CPlayer* _this, uint16_t wBulletSerial, struct _CHRID* pidDst, uint16_t* pConsumeSerial)
        {
           CPlayerpc_ThrowSkillRequest1951_user(_this, wBulletSerial, pidDst, pConsumeSerial, CPlayerpc_ThrowSkillRequest1951_next);
        };
        void CPlayerpc_ThrowStorageItem1953_wrapper(struct CPlayer* _this, struct _STORAGE_POS_INDIV* pItem)
        {
           CPlayerpc_ThrowStorageItem1953_user(_this, pItem, CPlayerpc_ThrowStorageItem1953_next);
        };
        void CPlayerpc_ThrowUnitRequest1955_wrapper(struct CPlayer* _this, struct _CHRID* pidDst, uint16_t* pConsumeSerial)
        {
           CPlayerpc_ThrowUnitRequest1955_user(_this, pidDst, pConsumeSerial, CPlayerpc_ThrowUnitRequest1955_next);
        };
        void CPlayerpc_TradeBlock1957_wrapper(struct CPlayer* _this, bool bBlock)
        {
           CPlayerpc_TradeBlock1957_user(_this, bBlock, CPlayerpc_TradeBlock1957_next);
        };
        void CPlayerpc_TransShipRenewTicketRequest1959_wrapper(struct CPlayer* _this, uint16_t wTicketItemSerial)
        {
           CPlayerpc_TransShipRenewTicketRequest1959_user(_this, wTicketItemSerial, CPlayerpc_TransShipRenewTicketRequest1959_next);
        };
        void CPlayerpc_TransformSiegeModeRequest1961_wrapper(struct CPlayer* _this, uint16_t wItemSerial)
        {
           CPlayerpc_TransformSiegeModeRequest1961_user(_this, wItemSerial, CPlayerpc_TransformSiegeModeRequest1961_next);
        };
        void CPlayerpc_TrunkAlterItemSlotRequest1963_wrapper(struct CPlayer* _this, unsigned int dwItemSerial, char byClientSlotIndex, char byStorageIndex)
        {
           CPlayerpc_TrunkAlterItemSlotRequest1963_user(_this, dwItemSerial, byClientSlotIndex, byStorageIndex, CPlayerpc_TrunkAlterItemSlotRequest1963_next);
        };
        void CPlayerpc_TrunkChangePasswdRequest1965_wrapper(struct CPlayer* _this, char* pwszPrevPassword, char* pwszChngPassword, char byHintIndex, char* pwszHintAnswer)
        {
           CPlayerpc_TrunkChangePasswdRequest1965_user(_this, pwszPrevPassword, pwszChngPassword, byHintIndex, pwszHintAnswer, CPlayerpc_TrunkChangePasswdRequest1965_next);
        };
        char CPlayerpc_TrunkCreateCostIsFreeRequest1967_wrapper(struct CPlayer* _this)
        {
           return CPlayerpc_TrunkCreateCostIsFreeRequest1967_user(_this, CPlayerpc_TrunkCreateCostIsFreeRequest1967_next);
        };
        void CPlayerpc_TrunkDownloadRequest1969_wrapper(struct CPlayer* _this, char* pwszPassword)
        {
           CPlayerpc_TrunkDownloadRequest1969_user(_this, pwszPassword, CPlayerpc_TrunkDownloadRequest1969_next);
        };
        void CPlayerpc_TrunkEstRequest1971_wrapper(struct CPlayer* _this, char* pwszPassword, char byHintIndex, char* pwszHintAnswer)
        {
           CPlayerpc_TrunkEstRequest1971_user(_this, pwszPassword, byHintIndex, pwszHintAnswer, CPlayerpc_TrunkEstRequest1971_next);
        };
        void CPlayerpc_TrunkExtendRequest1973_wrapper(struct CPlayer* _this)
        {
           CPlayerpc_TrunkExtendRequest1973_user(_this, CPlayerpc_TrunkExtendRequest1973_next);
        };
        void CPlayerpc_TrunkHintAnswerRequest1975_wrapper(struct CPlayer* _this, char* pwszAnswer)
        {
           CPlayerpc_TrunkHintAnswerRequest1975_user(_this, pwszAnswer, CPlayerpc_TrunkHintAnswerRequest1975_next);
        };
        void CPlayerpc_TrunkIoMergeRequest1977_wrapper(struct CPlayer* _this, char byStartStorageIndex, char byTarStorageIndex, uint16_t wStartItemSerial, uint16_t wTarItemSerial, uint16_t wMoveAmount)
        {
           CPlayerpc_TrunkIoMergeRequest1977_user(_this, byStartStorageIndex, byTarStorageIndex, wStartItemSerial, wTarItemSerial, wMoveAmount, CPlayerpc_TrunkIoMergeRequest1977_next);
        };
        void CPlayerpc_TrunkIoMoneyRequest1979_wrapper(struct CPlayer* _this, char byCase, unsigned int dwDalant, unsigned int dwGold)
        {
           CPlayerpc_TrunkIoMoneyRequest1979_user(_this, byCase, dwDalant, dwGold, CPlayerpc_TrunkIoMoneyRequest1979_next);
        };
        void CPlayerpc_TrunkIoMoveRequest1981_wrapper(struct CPlayer* _this, char byStartStorageIndex, char byTarStorageIndex, uint16_t wItemSerial, char byClientSlotIndex)
        {
           CPlayerpc_TrunkIoMoveRequest1981_user(_this, byStartStorageIndex, byTarStorageIndex, wItemSerial, byClientSlotIndex, CPlayerpc_TrunkIoMoveRequest1981_next);
        };
        void CPlayerpc_TrunkIoSwapRequest1983_wrapper(struct CPlayer* _this, char byStartStorageIndex, char byTarStorageIndex, uint16_t wStartItemSerial, uint16_t wTarItemSerial)
        {
           CPlayerpc_TrunkIoSwapRequest1983_user(_this, byStartStorageIndex, byTarStorageIndex, wStartItemSerial, wTarItemSerial, CPlayerpc_TrunkIoSwapRequest1983_next);
        };
        void CPlayerpc_TrunkPotionDivision1985_wrapper(struct CPlayer* _this, uint16_t wStartSerial, uint16_t wTarSerial, uint16_t wMoveAmount, char byStorageIndex)
        {
           CPlayerpc_TrunkPotionDivision1985_user(_this, wStartSerial, wTarSerial, wMoveAmount, byStorageIndex, CPlayerpc_TrunkPotionDivision1985_next);
        };
        void CPlayerpc_TrunkPwHintIndexRequest1987_wrapper(struct CPlayer* _this)
        {
           CPlayerpc_TrunkPwHintIndexRequest1987_user(_this, CPlayerpc_TrunkPwHintIndexRequest1987_next);
        };
        void CPlayerpc_TrunkResDivision1989_wrapper(struct CPlayer* _this, uint16_t wStartSerial, uint16_t wTarSerial, uint16_t wMoveAmount, char byStorageIndex)
        {
           CPlayerpc_TrunkResDivision1989_user(_this, wStartSerial, wTarSerial, wMoveAmount, byStorageIndex, CPlayerpc_TrunkResDivision1989_next);
        };
        void CPlayerpc_UnitBulletFillRequest1991_wrapper(struct CPlayer* _this, char bySlotIndex, uint16_t* pwBulletIndex, int bUseNPCLinkIntem)
        {
           CPlayerpc_UnitBulletFillRequest1991_user(_this, bySlotIndex, pwBulletIndex, bUseNPCLinkIntem, CPlayerpc_UnitBulletFillRequest1991_next);
        };
        void CPlayerpc_UnitBulletReplaceRequest1993_wrapper(struct CPlayer* _this, char bySlotIndex, char byPackIndex, char byBulletPart)
        {
           CPlayerpc_UnitBulletReplaceRequest1993_user(_this, bySlotIndex, byPackIndex, byBulletPart, CPlayerpc_UnitBulletReplaceRequest1993_next);
        };
        void CPlayerpc_UnitDeliveryRequest1995_wrapper(struct CPlayer* _this, char bySlotIndex, struct CItemStore* pStore, bool bPayFee, float* pfNewPos, int bUseNPCLinkIntem)
        {
           CPlayerpc_UnitDeliveryRequest1995_user(_this, bySlotIndex, pStore, bPayFee, pfNewPos, bUseNPCLinkIntem, CPlayerpc_UnitDeliveryRequest1995_next);
        };
        void CPlayerpc_UnitFrameBuyRequest1997_wrapper(struct CPlayer* _this, char byFrameCode, int bUseNPCLinkIntem)
        {
           CPlayerpc_UnitFrameBuyRequest1997_user(_this, byFrameCode, bUseNPCLinkIntem, CPlayerpc_UnitFrameBuyRequest1997_next);
        };
        void CPlayerpc_UnitFrameRepairRequest1999_wrapper(struct CPlayer* _this, char bySlotIndex, int bUseNPCLinkIntem)
        {
           CPlayerpc_UnitFrameRepairRequest1999_user(_this, bySlotIndex, bUseNPCLinkIntem, CPlayerpc_UnitFrameRepairRequest1999_next);
        };
        void CPlayerpc_UnitLeaveRequest2001_wrapper(struct CPlayer* _this, float* pfNewPos)
        {
           CPlayerpc_UnitLeaveRequest2001_user(_this, pfNewPos, CPlayerpc_UnitLeaveRequest2001_next);
        };
        void CPlayerpc_UnitPackFillRequest2003_wrapper(struct CPlayer* _this, char bySlotIndex, char byFillNum, struct _unit_pack_fill_request_clzo::__list* pList, int bUseNPCLinkIntem)
        {
           CPlayerpc_UnitPackFillRequest2003_user(_this, bySlotIndex, byFillNum, pList, bUseNPCLinkIntem, CPlayerpc_UnitPackFillRequest2003_next);
        };
        void CPlayerpc_UnitPartTuningRequest2005_wrapper(struct CPlayer* _this, char bySlotIndex, char byTuningNum, struct _tuning_data* pTuningData, int bUseNPCLinkIntem)
        {
           CPlayerpc_UnitPartTuningRequest2005_user(_this, bySlotIndex, byTuningNum, pTuningData, bUseNPCLinkIntem, CPlayerpc_UnitPartTuningRequest2005_next);
        };
        void CPlayerpc_UnitReturnRequest2007_wrapper(struct CPlayer* _this)
        {
           CPlayerpc_UnitReturnRequest2007_user(_this, CPlayerpc_UnitReturnRequest2007_next);
        };
        void CPlayerpc_UnitSellRequest2009_wrapper(struct CPlayer* _this, char bySlotIndex, int bUseNPCLinkIntem)
        {
           CPlayerpc_UnitSellRequest2009_user(_this, bySlotIndex, bUseNPCLinkIntem, CPlayerpc_UnitSellRequest2009_next);
        };
        void CPlayerpc_UnitTakeRequest2011_wrapper(struct CPlayer* _this)
        {
           CPlayerpc_UnitTakeRequest2011_user(_this, CPlayerpc_UnitTakeRequest2011_next);
        };
        void CPlayerpc_UpdateDataForPostSend2013_wrapper(struct CPlayer* _this)
        {
           CPlayerpc_UpdateDataForPostSend2013_user(_this, CPlayerpc_UpdateDataForPostSend2013_next);
        };
        void CPlayerpc_UpdateDataForTrade2015_wrapper(struct CPlayer* _this, struct CPlayer* pTrader)
        {
           CPlayerpc_UpdateDataForTrade2015_user(_this, pTrader, CPlayerpc_UpdateDataForTrade2015_next);
        };
        void CPlayerpc_UpgradeItem2017_wrapper(struct CPlayer* _this, struct _STORAGE_POS_INDIV* pposTalik, struct _STORAGE_POS_INDIV* pposToolItem, struct _STORAGE_POS_INDIV* pposUpgItem, char byJewelNum, struct _STORAGE_POS_INDIV* pposUpgJewel)
        {
           CPlayerpc_UpgradeItem2017_user(_this, pposTalik, pposToolItem, pposUpgItem, byJewelNum, pposUpgJewel, CPlayerpc_UpgradeItem2017_next);
        };
        int CPlayerpc_UseFireCracker2019_wrapper(struct CPlayer* _this, uint16_t wItemSerial)
        {
           return CPlayerpc_UseFireCracker2019_user(_this, wItemSerial, CPlayerpc_UseFireCracker2019_next);
        };
        void CPlayerpc_UsePotionItem2021_wrapper(struct CPlayer* _this, struct CPlayer* pTargetPlayer, struct _STORAGE_POS_INDIV* pItem)
        {
           CPlayerpc_UsePotionItem2021_user(_this, pTargetPlayer, pItem, CPlayerpc_UsePotionItem2021_next);
        };
        bool CPlayerpc_UseRadarItem2023_wrapper(struct CPlayer* _this, struct _STORAGE_POS_INDIV* pItem, uint16_t* pConsumeSerial)
        {
           return CPlayerpc_UseRadarItem2023_user(_this, pItem, pConsumeSerial, CPlayerpc_UseRadarItem2023_next);
        };
        char CPlayerpc_UseRecoverLossExpItem2025_wrapper(struct CPlayer* _this, uint16_t wItemSerial)
        {
           return CPlayerpc_UseRecoverLossExpItem2025_user(_this, wItemSerial, CPlayerpc_UseRecoverLossExpItem2025_next);
        };
        char CPlayerpc_UserSoccerBall2027_wrapper(struct CPlayer* _this, uint16_t wItemSerial, uint16_t* wItemIndex)
        {
           return CPlayerpc_UserSoccerBall2027_user(_this, wItemSerial, wItemIndex, CPlayerpc_UserSoccerBall2027_next);
        };
        bool CPlayerpc_WPActiveAttack_Force2029_wrapper(struct CPlayer* _this, struct _be_damaged_char* pDamList, int* nDamagedObjNum, struct _force_fld* pForceFld)
        {
           return CPlayerpc_WPActiveAttack_Force2029_user(_this, pDamList, nDamagedObjNum, pForceFld, CPlayerpc_WPActiveAttack_Force2029_next);
        };
        bool CPlayerpc_WPActiveAttack_Skill2031_wrapper(struct CPlayer* _this, struct _be_damaged_char* pDamList, int* nDamagedObjNum, int* nShotNum, struct _skill_fld* pSkillFld, char byEffectCode, uint16_t wBulletSerial)
        {
           return CPlayerpc_WPActiveAttack_Skill2031_user(_this, pDamList, nDamagedObjNum, nShotNum, pSkillFld, byEffectCode, wBulletSerial, CPlayerpc_WPActiveAttack_Skill2031_next);
        };
        void CPlayerpc_WhisperBlock2033_wrapper(struct CPlayer* _this, bool bBlock)
        {
           CPlayerpc_WhisperBlock2033_user(_this, bBlock, CPlayerpc_WhisperBlock2033_next);
        };
        char CPlayerskill_process2035_wrapper(struct CPlayer* _this, int nEffectCode, int nSkillIndex, struct _CHRID* pidDst, uint16_t* pConsumeSerial, int* pnLv)
        {
           return CPlayerskill_process2035_user(_this, nEffectCode, nSkillIndex, pidDst, pConsumeSerial, pnLv, CPlayerskill_process2035_next);
        };
        void CPlayerskill_process_for_aura2037_wrapper(struct CPlayer* _this, int nSkillIndex)
        {
           CPlayerskill_process_for_aura2037_user(_this, nSkillIndex, CPlayerskill_process_for_aura2037_next);
        };
        char CPlayerskill_process_for_item2039_wrapper(struct CPlayer* _this, int nSkillIndex, struct _CHRID* pidDst, int* pnLv)
        {
           return CPlayerskill_process_for_item2039_user(_this, nSkillIndex, pidDst, pnLv, CPlayerskill_process_for_item2039_next);
        };
        
        void CPlayerdtor_CPlayer2041_wrapper(struct CPlayer* _this)
        {
           CPlayerdtor_CPlayer2041_user(_this, CPlayerdtor_CPlayer2041_next);
        };
        
        ::std::array<hook_record, 1019> CPlayer_functions = 
        {
            _hook_record {
                (LPVOID)0x140055b00L,
                (LPVOID *)&CPlayerAddDalant2_user,
                (LPVOID *)&CPlayerAddDalant2_next,
                (LPVOID)cast_pointer_function(CPlayerAddDalant2_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int, bool))&CPlayer::AddDalant)
            },
            _hook_record {
                (LPVOID)0x140055d30L,
                (LPVOID *)&CPlayerAddGold4_user,
                (LPVOID *)&CPlayerAddGold4_next,
                (LPVOID)cast_pointer_function(CPlayerAddGold4_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int, bool))&CPlayer::AddGold)
            },
            _hook_record {
                (LPVOID)0x1400f7a70L,
                (LPVOID *)&CPlayerAlterDalant6_user,
                (LPVOID *)&CPlayerAlterDalant6_next,
                (LPVOID)cast_pointer_function(CPlayerAlterDalant6_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(long double))&CPlayer::AlterDalant)
            },
            _hook_record {
                (LPVOID)0x14005bb50L,
                (LPVOID *)&CPlayerAlterExp8_user,
                (LPVOID *)&CPlayerAlterExp8_next,
                (LPVOID)cast_pointer_function(CPlayerAlterExp8_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(long double, bool, bool, bool))&CPlayer::AlterExp)
            },
            _hook_record {
                (LPVOID)0x1400d0e00L,
                (LPVOID *)&CPlayerAlterExp_Animus10_user,
                (LPVOID *)&CPlayerAlterExp_Animus10_next,
                (LPVOID)cast_pointer_function(CPlayerAlterExp_Animus10_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(int64_t))&CPlayer::AlterExp_Animus)
            },
            _hook_record {
                (LPVOID)0x14005c550L,
                (LPVOID *)&CPlayerAlterExp_Potion12_user,
                (LPVOID *)&CPlayerAlterExp_Potion12_next,
                (LPVOID)cast_pointer_function(CPlayerAlterExp_Potion12_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(long double))&CPlayer::AlterExp_Potion)
            },
            _hook_record {
                (LPVOID)0x1400d0d40L,
                (LPVOID *)&CPlayerAlterFP_Animus14_user,
                (LPVOID *)&CPlayerAlterFP_Animus14_next,
                (LPVOID)cast_pointer_function(CPlayerAlterFP_Animus14_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(int))&CPlayer::AlterFP_Animus)
            },
            _hook_record {
                (LPVOID)0x1400f7b20L,
                (LPVOID *)&CPlayerAlterGold16_user,
                (LPVOID *)&CPlayerAlterGold16_next,
                (LPVOID)cast_pointer_function(CPlayerAlterGold16_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(long double))&CPlayer::AlterGold)
            },
            _hook_record {
                (LPVOID)0x1400d0c80L,
                (LPVOID *)&CPlayerAlterHP_Animus18_user,
                (LPVOID *)&CPlayerAlterHP_Animus18_next,
                (LPVOID)cast_pointer_function(CPlayerAlterHP_Animus18_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(int))&CPlayer::AlterHP_Animus)
            },
            _hook_record {
                (LPVOID)0x1400d11a0L,
                (LPVOID *)&CPlayerAlterMaxLevel20_user,
                (LPVOID *)&CPlayerAlterMaxLevel20_next,
                (LPVOID)cast_pointer_function(CPlayerAlterMaxLevel20_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::AlterMaxLevel)
            },
            _hook_record {
                (LPVOID)0x1400d0fd0L,
                (LPVOID *)&CPlayerAlterMode_Animus22_user,
                (LPVOID *)&CPlayerAlterMode_Animus22_next,
                (LPVOID)cast_pointer_function(CPlayerAlterMode_Animus22_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::AlterMode_Animus)
            },
            _hook_record {
                (LPVOID)0x14005f990L,
                (LPVOID *)&CPlayerAlterPvPCashBag24_user,
                (LPVOID *)&CPlayerAlterPvPCashBag24_next,
                (LPVOID)cast_pointer_function(CPlayerAlterPvPCashBag24_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(long double, PVP_MONEY_ALTER_TYPE))&CPlayer::AlterPvPCashBag)
            },
            _hook_record {
                (LPVOID)0x14005f660L,
                (LPVOID *)&CPlayerAlterPvPPoint26_user,
                (LPVOID *)&CPlayerAlterPvPPoint26_next,
                (LPVOID)cast_pointer_function(CPlayerAlterPvPPoint26_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(long double, PVP_ALTER_TYPE, unsigned int))&CPlayer::AlterPvPPoint)
            },
            _hook_record {
                (LPVOID)0x140068f30L,
                (LPVOID *)&CPlayerAlterPvpPointLeak28_user,
                (LPVOID *)&CPlayerAlterPvpPointLeak28_next,
                (LPVOID)cast_pointer_function(CPlayerAlterPvpPointLeak28_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(long double))&CPlayer::AlterPvpPointLeak)
            },
            _hook_record {
                (LPVOID)0x1400554b0L,
                (LPVOID *)&CPlayerAlterSec30_user,
                (LPVOID *)&CPlayerAlterSec30_next,
                (LPVOID)cast_pointer_function(CPlayerAlterSec30_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::AlterSec)
            },
            _hook_record {
                (LPVOID)0x140062fc0L,
                (LPVOID *)&CPlayerApplyEquipItemEffect32_user,
                (LPVOID *)&CPlayerApplyEquipItemEffect32_next,
                (LPVOID)cast_pointer_function(CPlayerApplyEquipItemEffect32_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(int, bool))&CPlayer::ApplyEquipItemEffect)
            },
            _hook_record {
                (LPVOID)0x140063130L,
                (LPVOID *)&CPlayerApplySetItemEffect34_user,
                (LPVOID *)&CPlayerApplySetItemEffect34_next,
                (LPVOID)cast_pointer_function(CPlayerApplySetItemEffect34_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct si_interpret*, unsigned int, char, char, bool))&CPlayer::ApplySetItemEffect)
            },
            _hook_record {
                (LPVOID)0x140061490L,
                (LPVOID *)&CPlayerAttackableHeight36_user,
                (LPVOID *)&CPlayerAttackableHeight36_next,
                (LPVOID)cast_pointer_function(CPlayerAttackableHeight36_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)())&CPlayer::AttackableHeight)
            },
            _hook_record {
                (LPVOID)0x1400570b0L,
                (LPVOID *)&CPlayerAutoCharge_Booster38_user,
                (LPVOID *)&CPlayerAutoCharge_Booster38_next,
                (LPVOID)cast_pointer_function(CPlayerAutoCharge_Booster38_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::AutoCharge_Booster)
            },
            _hook_record {
                (LPVOID)0x140056270L,
                (LPVOID *)&CPlayerAutoRecover40_user,
                (LPVOID *)&CPlayerAutoRecover40_next,
                (LPVOID)cast_pointer_function(CPlayerAutoRecover40_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::AutoRecover)
            },
            _hook_record {
                (LPVOID)0x140056ee0L,
                (LPVOID *)&CPlayerAutoRecover_Animus42_user,
                (LPVOID *)&CPlayerAutoRecover_Animus42_next,
                (LPVOID)cast_pointer_function(CPlayerAutoRecover_Animus42_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::AutoRecover_Animus)
            },
            _hook_record {
                (LPVOID)0x140067ca0L,
                (LPVOID *)&CPlayerBilling_Logout44_user,
                (LPVOID *)&CPlayerBilling_Logout44_next,
                (LPVOID)cast_pointer_function(CPlayerBilling_Logout44_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::Billing_Logout)
            },
            _hook_record {
                (LPVOID)0x140064590L,
                (LPVOID *)&CPlayerBreakCloakBooster46_user,
                (LPVOID *)&CPlayerBreakCloakBooster46_next,
                (LPVOID)cast_pointer_function(CPlayerBreakCloakBooster46_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::BreakCloakBooster)
            },
            _hook_record {
                (LPVOID)0x1400478b0L,
                (LPVOID *)&CPlayerctor_CPlayer48_user,
                (LPVOID *)&CPlayerctor_CPlayer48_next,
                (LPVOID)cast_pointer_function(CPlayerctor_CPlayer48_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::ctor_CPlayer)
            },
            _hook_record {
                (LPVOID)0x14005ace0L,
                (LPVOID *)&CPlayerCalPvpCashPoint50_user,
                (LPVOID *)&CPlayerCalPvpCashPoint50_next,
                (LPVOID)cast_pointer_function(CPlayerCalPvpCashPoint50_wrapper),
                (LPVOID)cast_pointer_function((long double(CPlayer::*)(int, int, char*))&CPlayer::CalPvpCashPoint)
            },
            _hook_record {
                (LPVOID)0x14005ad50L,
                (LPVOID *)&CPlayerCalPvpTempCash52_user,
                (LPVOID *)&CPlayerCalPvpTempCash52_next,
                (LPVOID)cast_pointer_function(CPlayerCalPvpTempCash52_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CPlayer*, char))&CPlayer::CalPvpTempCash)
            },
            _hook_record {
                (LPVOID)0x140064630L,
                (LPVOID *)&CPlayerCalcAddPointByClass54_user,
                (LPVOID *)&CPlayerCalcAddPointByClass54_next,
                (LPVOID)cast_pointer_function(CPlayerCalcAddPointByClass54_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::CalcAddPointByClass)
            },
            _hook_record {
                (LPVOID)0x1400efbd0L,
                (LPVOID *)&CPlayerCalcCurFPRate56_user,
                (LPVOID *)&CPlayerCalcCurFPRate56_next,
                (LPVOID)cast_pointer_function(CPlayerCalcCurFPRate56_wrapper),
                (LPVOID)cast_pointer_function((uint16_t(CPlayer::*)())&CPlayer::CalcCurFPRate)
            },
            _hook_record {
                (LPVOID)0x14005f560L,
                (LPVOID *)&CPlayerCalcCurHPRate58_user,
                (LPVOID *)&CPlayerCalcCurHPRate58_next,
                (LPVOID)cast_pointer_function(CPlayerCalcCurHPRate58_wrapper),
                (LPVOID)cast_pointer_function((uint16_t(CPlayer::*)())&CPlayer::CalcCurHPRate)
            },
            _hook_record {
                (LPVOID)0x1400efc40L,
                (LPVOID *)&CPlayerCalcCurSPRate60_user,
                (LPVOID *)&CPlayerCalcCurSPRate60_next,
                (LPVOID)cast_pointer_function(CPlayerCalcCurSPRate60_wrapper),
                (LPVOID)cast_pointer_function((uint16_t(CPlayer::*)())&CPlayer::CalcCurSPRate)
            },
            _hook_record {
                (LPVOID)0x14005fb70L,
                (LPVOID *)&CPlayerCalcDPRate62_user,
                (LPVOID *)&CPlayerCalcDPRate62_next,
                (LPVOID)cast_pointer_function(CPlayerCalcDPRate62_wrapper),
                (LPVOID)cast_pointer_function((float(CPlayer::*)())&CPlayer::CalcDPRate)
            },
            _hook_record {
                (LPVOID)0x140050720L,
                (LPVOID *)&CPlayerCalcDefTol64_user,
                (LPVOID *)&CPlayerCalcDefTol64_next,
                (LPVOID)cast_pointer_function(CPlayerCalcDefTol64_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::CalcDefTol)
            },
            _hook_record {
                (LPVOID)0x1400575c0L,
                (LPVOID *)&CPlayerCalcEquipAttackDelay66_user,
                (LPVOID *)&CPlayerCalcEquipAttackDelay66_next,
                (LPVOID)cast_pointer_function(CPlayerCalcEquipAttackDelay66_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)())&CPlayer::CalcEquipAttackDelay)
            },
            _hook_record {
                (LPVOID)0x140057430L,
                (LPVOID *)&CPlayerCalcEquipMaxDP68_user,
                (LPVOID *)&CPlayerCalcEquipMaxDP68_next,
                (LPVOID)cast_pointer_function(CPlayerCalcEquipMaxDP68_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(bool))&CPlayer::CalcEquipMaxDP)
            },
            _hook_record {
                (LPVOID)0x140057220L,
                (LPVOID *)&CPlayerCalcEquipSpeed70_user,
                (LPVOID *)&CPlayerCalcEquipSpeed70_next,
                (LPVOID)cast_pointer_function(CPlayerCalcEquipSpeed70_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::CalcEquipSpeed)
            },
            _hook_record {
                (LPVOID)0x14005a600L,
                (LPVOID *)&CPlayerCalcExp72_user,
                (LPVOID *)&CPlayerCalcExp72_next,
                (LPVOID)cast_pointer_function(CPlayerCalcExp72_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CCharacter*, int, struct CPartyModeKillMonsterExpNotify*))&CPlayer::CalcExp)
            },
            _hook_record {
                (LPVOID)0x14005b4e0L,
                (LPVOID *)&CPlayerCalcPvP74_user,
                (LPVOID *)&CPlayerCalcPvP74_next,
                (LPVOID)cast_pointer_function(CPlayerCalcPvP74_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CPlayer*, char))&CPlayer::CalcPvP)
            },
            _hook_record {
                (LPVOID)0x1400a2420L,
                (LPVOID *)&CPlayerCheckAlterMaxPoint76_user,
                (LPVOID *)&CPlayerCheckAlterMaxPoint76_next,
                (LPVOID)cast_pointer_function(CPlayerCheckAlterMaxPoint76_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::CheckAlterMaxPoint)
            },
            _hook_record {
                (LPVOID)0x1400685b0L,
                (LPVOID *)&CPlayerCheckBattleMode78_user,
                (LPVOID *)&CPlayerCheckBattleMode78_next,
                (LPVOID)cast_pointer_function(CPlayerCheckBattleMode78_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::CheckBattleMode)
            },
            _hook_record {
                (LPVOID)0x1400ffa80L,
                (LPVOID *)&CPlayerCheckGroupMapPoint80_user,
                (LPVOID *)&CPlayerCheckGroupMapPoint80_next,
                (LPVOID)cast_pointer_function(CPlayerCheckGroupMapPoint80_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::CheckGroupMapPoint)
            },
            _hook_record {
                (LPVOID)0x1400febc0L,
                (LPVOID *)&CPlayerCheckGroupTargeting82_user,
                (LPVOID *)&CPlayerCheckGroupTargeting82_next,
                (LPVOID)cast_pointer_function(CPlayerCheckGroupTargeting82_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::CheckGroupTargeting)
            },
            _hook_record {
                (LPVOID)0x1400ce2c0L,
                (LPVOID *)&CPlayerCheckMentalTakeAndUpdateLastMetalTicket84_user,
                (LPVOID *)&CPlayerCheckMentalTakeAndUpdateLastMetalTicket84_next,
                (LPVOID)cast_pointer_function(CPlayerCheckMentalTakeAndUpdateLastMetalTicket84_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char*))&CPlayer::CheckMentalTakeAndUpdateLastMetalTicket)
            },
            _hook_record {
                (LPVOID)0x140069080L,
                (LPVOID *)&CPlayerCheckNameChange86_user,
                (LPVOID *)&CPlayerCheckNameChange86_next,
                (LPVOID)cast_pointer_function(CPlayerCheckNameChange86_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::CheckNameChange)
            },
            _hook_record {
                (LPVOID)0x1400648f0L,
                (LPVOID *)&CPlayerCheckPosInTown88_user,
                (LPVOID *)&CPlayerCheckPosInTown88_next,
                (LPVOID)cast_pointer_function(CPlayerCheckPosInTown88_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::CheckPosInTown)
            },
            _hook_record {
                (LPVOID)0x1400c7c50L,
                (LPVOID *)&CPlayerCheckPos_Region90_user,
                (LPVOID *)&CPlayerCheckPos_Region90_next,
                (LPVOID)cast_pointer_function(CPlayerCheckPos_Region90_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::CheckPos_Region)
            },
            _hook_record {
                (LPVOID)0x140106b70L,
                (LPVOID *)&CPlayerCheckUnitCutTime92_user,
                (LPVOID *)&CPlayerCheckUnitCutTime92_next,
                (LPVOID)cast_pointer_function(CPlayerCheckUnitCutTime92_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::CheckUnitCutTime)
            },
            _hook_record {
                (LPVOID)0x1400a3a00L,
                (LPVOID *)&CPlayerCheet_BufEffectEnd94_user,
                (LPVOID *)&CPlayerCheet_BufEffectEnd94_next,
                (LPVOID)cast_pointer_function(CPlayerCheet_BufEffectEnd94_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::Cheet_BufEffectEnd)
            },
            _hook_record {
                (LPVOID)0x1400a0520L,
                (LPVOID *)&CPlayerClearGravityStone96_user,
                (LPVOID *)&CPlayerClearGravityStone96_next,
                (LPVOID)cast_pointer_function(CPlayerClearGravityStone96_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::ClearGravityStone)
            },
            _hook_record {
                (LPVOID)0x14004f140L,
                (LPVOID *)&CPlayerCorpse98_user,
                (LPVOID *)&CPlayerCorpse98_next,
                (LPVOID)cast_pointer_function(CPlayerCorpse98_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CCharacter*))&CPlayer::Corpse)
            },
            _hook_record {
                (LPVOID)0x140049ab0L,
                (LPVOID *)&CPlayerCreate100_user,
                (LPVOID *)&CPlayerCreate100_next,
                (LPVOID)cast_pointer_function(CPlayerCreate100_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::Create)
            },
            _hook_record {
                (LPVOID)0x14004b150L,
                (LPVOID *)&CPlayerCreateComplete102_user,
                (LPVOID *)&CPlayerCreateComplete102_next,
                (LPVOID)cast_pointer_function(CPlayerCreateComplete102_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::CreateComplete)
            },
            _hook_record {
                (LPVOID)0x1400538c0L,
                (LPVOID *)&CPlayerDTradeInit104_user,
                (LPVOID *)&CPlayerDTradeInit104_next,
                (LPVOID)cast_pointer_function(CPlayerDTradeInit104_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::DTradeInit)
            },
            _hook_record {
                (LPVOID)0x1400a1fa0L,
                (LPVOID *)&CPlayerDecHalfSFContDam106_user,
                (LPVOID *)&CPlayerDecHalfSFContDam106_next,
                (LPVOID)cast_pointer_function(CPlayerDecHalfSFContDam106_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(float))&CPlayer::DecHalfSFContDam)
            },
            _hook_record {
                (LPVOID)0x1400c9be0L,
                (LPVOID *)&CPlayerDelPostData108_user,
                (LPVOID *)&CPlayerDelPostData108_next,
                (LPVOID)cast_pointer_function(CPlayerDelPostData108_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int))&CPlayer::DelPostData)
            },
            _hook_record {
                (LPVOID)0x1400686f0L,
                (LPVOID *)&CPlayerDeleteCouponItem110_user,
                (LPVOID *)&CPlayerDeleteCouponItem110_next,
                (LPVOID)cast_pointer_function(CPlayerDeleteCouponItem110_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _STORAGE_POS_INDIV*, int))&CPlayer::DeleteCouponItem)
            },
            _hook_record {
                (LPVOID)0x140067f60L,
                (LPVOID *)&CPlayerDeleteUseConsumeItem112_user,
                (LPVOID *)&CPlayerDeleteUseConsumeItem112_next,
                (LPVOID)cast_pointer_function(CPlayerDeleteUseConsumeItem112_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct _STORAGE_LIST::_db_con**, int*, bool*))&CPlayer::DeleteUseConsumeItem)
            },
            _hook_record {
                (LPVOID)0x140057d90L,
                (LPVOID *)&CPlayerEmb_AddStorage114_user,
                (LPVOID *)&CPlayerEmb_AddStorage114_next,
                (LPVOID)cast_pointer_function(CPlayerEmb_AddStorage114_wrapper),
                (LPVOID)cast_pointer_function((struct _STORAGE_LIST::_db_con*(CPlayer::*)(char, struct _STORAGE_LIST::_storage_con*, bool, bool))&CPlayer::Emb_AddStorage)
            },
            _hook_record {
                (LPVOID)0x140058a80L,
                (LPVOID *)&CPlayerEmb_AlterDurPoint116_user,
                (LPVOID *)&CPlayerEmb_AlterDurPoint116_next,
                (LPVOID)cast_pointer_function(CPlayerEmb_AlterDurPoint116_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CPlayer::*)(char, char, int, bool, bool))&CPlayer::Emb_AlterDurPoint)
            },
            _hook_record {
                (LPVOID)0x140059430L,
                (LPVOID *)&CPlayerEmb_AlterStat118_user,
                (LPVOID *)&CPlayerEmb_AlterStat118_next,
                (LPVOID)cast_pointer_function(CPlayerEmb_AlterStat118_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, unsigned int, char, char*, bool))&CPlayer::Emb_AlterStat)
            },
            _hook_record {
                (LPVOID)0x140059af0L,
                (LPVOID *)&CPlayerEmb_AlterStat_F120_user,
                (LPVOID *)&CPlayerEmb_AlterStat_F120_next,
                (LPVOID)cast_pointer_function(CPlayerEmb_AlterStat_F120_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, float, char))&CPlayer::Emb_AlterStat_F)
            },
            _hook_record {
                (LPVOID)0x1400caa70L,
                (LPVOID *)&CPlayerEmb_CheckActForQuest122_user,
                (LPVOID *)&CPlayerEmb_CheckActForQuest122_next,
                (LPVOID)cast_pointer_function(CPlayerEmb_CheckActForQuest122_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(int, char*, uint16_t, bool))&CPlayer::Emb_CheckActForQuest)
            },
            _hook_record {
                (LPVOID)0x1400cad40L,
                (LPVOID *)&CPlayerEmb_CheckActForQuestParty124_user,
                (LPVOID *)&CPlayerEmb_CheckActForQuestParty124_next,
                (LPVOID)cast_pointer_function(CPlayerEmb_CheckActForQuestParty124_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(int, char*, uint16_t))&CPlayer::Emb_CheckActForQuestParty)
            },
            _hook_record {
                (LPVOID)0x1400cae50L,
                (LPVOID *)&CPlayerEmb_CompleteQuest126_user,
                (LPVOID *)&CPlayerEmb_CompleteQuest126_next,
                (LPVOID)cast_pointer_function(CPlayerEmb_CompleteQuest126_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, char))&CPlayer::Emb_CompleteQuest)
            },
            _hook_record {
                (LPVOID)0x1400cb890L,
                (LPVOID *)&CPlayerEmb_CreateNPCQuest128_user,
                (LPVOID *)&CPlayerEmb_CreateNPCQuest128_next,
                (LPVOID)cast_pointer_function(CPlayerEmb_CreateNPCQuest128_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(char*, unsigned int))&CPlayer::Emb_CreateNPCQuest)
            },
            _hook_record {
                (LPVOID)0x1400ca830L,
                (LPVOID *)&CPlayerEmb_CreateQuestEvent130_user,
                (LPVOID *)&CPlayerEmb_CreateQuestEvent130_next,
                (LPVOID)cast_pointer_function(CPlayerEmb_CreateQuestEvent130_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(QUEST_HAPPEN, char*))&CPlayer::Emb_CreateQuestEvent)
            },
            _hook_record {
                (LPVOID)0x1400583b0L,
                (LPVOID *)&CPlayerEmb_DelStorage132_user,
                (LPVOID *)&CPlayerEmb_DelStorage132_next,
                (LPVOID)cast_pointer_function(CPlayerEmb_DelStorage132_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(char, char, bool, bool, char*))&CPlayer::Emb_DelStorage)
            },
            _hook_record {
                (LPVOID)0x14005a0f0L,
                (LPVOID *)&CPlayerEmb_EquipLink134_user,
                (LPVOID *)&CPlayerEmb_EquipLink134_next,
                (LPVOID)cast_pointer_function(CPlayerEmb_EquipLink134_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::Emb_EquipLink)
            },
            _hook_record {
                (LPVOID)0x1400590d0L,
                (LPVOID *)&CPlayerEmb_ItemUpgrade136_user,
                (LPVOID *)&CPlayerEmb_ItemUpgrade136_next,
                (LPVOID)cast_pointer_function(CPlayerEmb_ItemUpgrade136_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, char, unsigned int))&CPlayer::Emb_ItemUpgrade)
            },
            _hook_record {
                (LPVOID)0x140059e80L,
                (LPVOID *)&CPlayerEmb_RidindUnit138_user,
                (LPVOID *)&CPlayerEmb_RidindUnit138_next,
                (LPVOID)cast_pointer_function(CPlayerEmb_RidindUnit138_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(bool, struct CParkingUnit*))&CPlayer::Emb_RidindUnit)
            },
            _hook_record {
                (LPVOID)0x1400cbe20L,
                (LPVOID *)&CPlayerEmb_StartQuest140_user,
                (LPVOID *)&CPlayerEmb_StartQuest140_next,
                (LPVOID)cast_pointer_function(CPlayerEmb_StartQuest140_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(char, struct _happen_event_cont*))&CPlayer::Emb_StartQuest)
            },
            _hook_record {
                (LPVOID)0x140059340L,
                (LPVOID *)&CPlayerEmb_UpdateStat142_user,
                (LPVOID *)&CPlayerEmb_UpdateStat142_next,
                (LPVOID)cast_pointer_function(CPlayerEmb_UpdateStat142_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)(unsigned int, unsigned int, unsigned int))&CPlayer::Emb_UpdateStat)
            },
            _hook_record {
                (LPVOID)0x14005a220L,
                (LPVOID *)&CPlayerExitUpdateDataToWorld144_user,
                (LPVOID *)&CPlayerExitUpdateDataToWorld144_next,
                (LPVOID)cast_pointer_function(CPlayerExitUpdateDataToWorld144_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::ExitUpdateDataToWorld)
            },
            _hook_record {
                (LPVOID)0x140069290L,
                (LPVOID *)&CPlayerExtractStringToTime146_user,
                (LPVOID *)&CPlayerExtractStringToTime146_next,
                (LPVOID)cast_pointer_function(CPlayerExtractStringToTime146_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int, struct _SYSTEMTIME*))&CPlayer::ExtractStringToTime)
            },
            _hook_record {
                (LPVOID)0x140091160L,
                (LPVOID *)&CPlayerFindFarChatPlayerWithTemp148_user,
                (LPVOID *)&CPlayerFindFarChatPlayerWithTemp148_next,
                (LPVOID)cast_pointer_function(CPlayerFindFarChatPlayerWithTemp148_wrapper),
                (LPVOID)cast_pointer_function((struct CPlayer*(CPlayer::*)(char*))&CPlayer::FindFarChatPlayerWithTemp)
            },
            _hook_record {
                (LPVOID)0x1400a2260L,
                (LPVOID *)&CPlayerFixTargetWhile150_user,
                (LPVOID *)&CPlayerFixTargetWhile150_next,
                (LPVOID)cast_pointer_function(CPlayerFixTargetWhile150_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CCharacter*, unsigned int))&CPlayer::FixTargetWhile)
            },
            _hook_record {
                (LPVOID)0x1401065a0L,
                (LPVOID *)&CPlayerForcePullUnit152_user,
                (LPVOID *)&CPlayerForcePullUnit152_next,
                (LPVOID)cast_pointer_function(CPlayerForcePullUnit152_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(bool))&CPlayer::ForcePullUnit)
            },
            _hook_record {
                (LPVOID)0x1400644c0L,
                (LPVOID *)&CPlayerGetAddSpeed154_user,
                (LPVOID *)&CPlayerGetAddSpeed154_next,
                (LPVOID)cast_pointer_function(CPlayerGetAddSpeed154_wrapper),
                (LPVOID)cast_pointer_function((float(CPlayer::*)())&CPlayer::GetAddSpeed)
            },
            _hook_record {
                (LPVOID)0x14004edf0L,
                (LPVOID *)&CPlayerGetAfterEffect156_user,
                (LPVOID *)&CPlayerGetAfterEffect156_next,
                (LPVOID)cast_pointer_function(CPlayerGetAfterEffect156_wrapper),
                (LPVOID)cast_pointer_function((struct _sf_continous*(CPlayer::*)())&CPlayer::GetAfterEffect)
            },
            _hook_record {
                (LPVOID)0x140063600L,
                (LPVOID *)&CPlayerGetAttackDP158_user,
                (LPVOID *)&CPlayerGetAttackDP158_next,
                (LPVOID)cast_pointer_function(CPlayerGetAttackDP158_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)())&CPlayer::GetAttackDP)
            },
            _hook_record {
                (LPVOID)0x140063430L,
                (LPVOID *)&CPlayerGetAttackLevel160_user,
                (LPVOID *)&CPlayerGetAttackLevel160_next,
                (LPVOID)cast_pointer_function(CPlayerGetAttackLevel160_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)())&CPlayer::GetAttackLevel)
            },
            _hook_record {
                (LPVOID)0x140060200L,
                (LPVOID *)&CPlayerGetAttackRange162_user,
                (LPVOID *)&CPlayerGetAttackRange162_next,
                (LPVOID)cast_pointer_function(CPlayerGetAttackRange162_wrapper),
                (LPVOID)cast_pointer_function((float(CPlayer::*)())&CPlayer::GetAttackRange)
            },
            _hook_record {
                (LPVOID)0x140063370L,
                (LPVOID *)&CPlayerGetAvoidRate164_user,
                (LPVOID *)&CPlayerGetAvoidRate164_next,
                (LPVOID)cast_pointer_function(CPlayerGetAvoidRate164_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)())&CPlayer::GetAvoidRate)
            },
            _hook_record {
                (LPVOID)0x1400600a0L,
                (LPVOID *)&CPlayerGetBillingType166_user,
                (LPVOID *)&CPlayerGetBillingType166_next,
                (LPVOID)cast_pointer_function(CPlayerGetBillingType166_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)())&CPlayer::GetBillingType)
            },
            _hook_record {
                (LPVOID)0x1403eac50L,
                (LPVOID *)&CPlayerGetBindDummy168_user,
                (LPVOID *)&CPlayerGetBindDummy168_next,
                (LPVOID)cast_pointer_function(CPlayerGetBindDummy168_wrapper),
                (LPVOID)cast_pointer_function((struct _dummy_position*(CPlayer::*)())&CPlayer::GetBindDummy)
            },
            _hook_record {
                (LPVOID)0x1400a0160L,
                (LPVOID *)&CPlayerGetBindMap170_user,
                (LPVOID *)&CPlayerGetBindMap170_next,
                (LPVOID)cast_pointer_function(CPlayerGetBindMap170_wrapper),
                (LPVOID)cast_pointer_function((struct CMapData*(CPlayer::*)(float*, bool))&CPlayer::GetBindMap)
            },
            _hook_record {
                (LPVOID)0x1403eac30L,
                (LPVOID *)&CPlayerGetBindMapData172_user,
                (LPVOID *)&CPlayerGetBindMapData172_next,
                (LPVOID)cast_pointer_function(CPlayerGetBindMapData172_wrapper),
                (LPVOID)cast_pointer_function((struct CMapData*(CPlayer::*)())&CPlayer::GetBindMapData)
            },
            _hook_record {
                (LPVOID)0x1402f2770L,
                (LPVOID *)&CPlayerGetCashAmount174_user,
                (LPVOID *)&CPlayerGetCashAmount174_next,
                (LPVOID)cast_pointer_function(CPlayerGetCashAmount174_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)())&CPlayer::GetCashAmount)
            },
            _hook_record {
                (LPVOID)0x14007c480L,
                (LPVOID *)&CPlayerGetDP176_user,
                (LPVOID *)&CPlayerGetDP176_next,
                (LPVOID)cast_pointer_function(CPlayerGetDP176_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)())&CPlayer::GetDP)
            },
            _hook_record {
                (LPVOID)0x1400636f0L,
                (LPVOID *)&CPlayerGetDamageDP178_user,
                (LPVOID *)&CPlayerGetDamageDP178_next,
                (LPVOID)cast_pointer_function(CPlayerGetDamageDP178_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)(int))&CPlayer::GetDamageDP)
            },
            _hook_record {
                (LPVOID)0x140063520L,
                (LPVOID *)&CPlayerGetDamageLevel180_user,
                (LPVOID *)&CPlayerGetDamageLevel180_next,
                (LPVOID)cast_pointer_function(CPlayerGetDamageLevel180_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)(int))&CPlayer::GetDamageLevel)
            },
            _hook_record {
                (LPVOID)0x140060260L,
                (LPVOID *)&CPlayerGetDefFC182_user,
                (LPVOID *)&CPlayerGetDefFC182_next,
                (LPVOID)cast_pointer_function(CPlayerGetDefFC182_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)(int, struct CCharacter*, int*))&CPlayer::GetDefFC)
            },
            _hook_record {
                (LPVOID)0x140061340L,
                (LPVOID *)&CPlayerGetDefFacing184_user,
                (LPVOID *)&CPlayerGetDefFacing184_next,
                (LPVOID)cast_pointer_function(CPlayerGetDefFacing184_wrapper),
                (LPVOID)cast_pointer_function((float(CPlayer::*)(int))&CPlayer::GetDefFacing)
            },
            _hook_record {
                (LPVOID)0x1400611f0L,
                (LPVOID *)&CPlayerGetDefGap186_user,
                (LPVOID *)&CPlayerGetDefGap186_next,
                (LPVOID)cast_pointer_function(CPlayerGetDefGap186_wrapper),
                (LPVOID)cast_pointer_function((float(CPlayer::*)(int))&CPlayer::GetDefGap)
            },
            _hook_record {
                (LPVOID)0x140060c00L,
                (LPVOID *)&CPlayerGetDefSkill188_user,
                (LPVOID *)&CPlayerGetDefSkill188_next,
                (LPVOID)cast_pointer_function(CPlayerGetDefSkill188_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)(bool))&CPlayer::GetDefSkill)
            },
            _hook_record {
                (LPVOID)0x140057d00L,
                (LPVOID *)&CPlayerGetEffectEquipCode190_user,
                (LPVOID *)&CPlayerGetEffectEquipCode190_next,
                (LPVOID)cast_pointer_function(CPlayerGetEffectEquipCode190_wrapper),
                (LPVOID)cast_pointer_function((char(CPlayer::*)(char, char))&CPlayer::GetEffectEquipCode)
            },
            _hook_record {
                (LPVOID)0x14007c3e0L,
                (LPVOID *)&CPlayerGetFP192_user,
                (LPVOID *)&CPlayerGetFP192_next,
                (LPVOID)cast_pointer_function(CPlayerGetFP192_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)())&CPlayer::GetFP)
            },
            _hook_record {
                (LPVOID)0x140060d00L,
                (LPVOID *)&CPlayerGetFireTol194_user,
                (LPVOID *)&CPlayerGetFireTol194_next,
                (LPVOID)cast_pointer_function(CPlayerGetFireTol194_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)())&CPlayer::GetFireTol)
            },
            _hook_record {
                (LPVOID)0x14005f4e0L,
                (LPVOID *)&CPlayerGetGauge196_user,
                (LPVOID *)&CPlayerGetGauge196_next,
                (LPVOID)cast_pointer_function(CPlayerGetGauge196_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)(int))&CPlayer::GetGauge)
            },
            _hook_record {
                (LPVOID)0x1400614c0L,
                (LPVOID *)&CPlayerGetGenAttackProb198_user,
                (LPVOID *)&CPlayerGetGenAttackProb198_next,
                (LPVOID)cast_pointer_function(CPlayerGetGenAttackProb198_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)(struct CCharacter*, int, bool))&CPlayer::GetGenAttackProb)
            },
            _hook_record {
                (LPVOID)0x140047880L,
                (LPVOID *)&CPlayerGetGroupTarget200_user,
                (LPVOID *)&CPlayerGetGroupTarget200_next,
                (LPVOID)cast_pointer_function(CPlayerGetGroupTarget200_wrapper),
                (LPVOID)cast_pointer_function((struct CPlayer::__target*(CPlayer::*)(char))&CPlayer::GetGroupTarget)
            },
            _hook_record {
                (LPVOID)0x1400743a0L,
                (LPVOID *)&CPlayerGetHP202_user,
                (LPVOID *)&CPlayerGetHP202_next,
                (LPVOID)cast_pointer_function(CPlayerGetHP202_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)())&CPlayer::GetHP)
            },
            _hook_record {
                (LPVOID)0x140060110L,
                (LPVOID *)&CPlayerGetInitClassCost204_user,
                (LPVOID *)&CPlayerGetInitClassCost204_next,
                (LPVOID)cast_pointer_function(CPlayerGetInitClassCost204_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CPlayer::*)())&CPlayer::GetInitClassCost)
            },
            _hook_record {
                (LPVOID)0x140074420L,
                (LPVOID *)&CPlayerGetLevel206_user,
                (LPVOID *)&CPlayerGetLevel206_next,
                (LPVOID)cast_pointer_function(CPlayerGetLevel206_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)())&CPlayer::GetLevel)
            },
            _hook_record {
                (LPVOID)0x140063800L,
                (LPVOID *)&CPlayerGetMasteryCumAfterAttack208_user,
                (LPVOID *)&CPlayerGetMasteryCumAfterAttack208_next,
                (LPVOID)cast_pointer_function(CPlayerGetMasteryCumAfterAttack208_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)(int))&CPlayer::GetMasteryCumAfterAttack)
            },
            _hook_record {
                (LPVOID)0x140078970L,
                (LPVOID *)&CPlayerGetMaxDP210_user,
                (LPVOID *)&CPlayerGetMaxDP210_next,
                (LPVOID)cast_pointer_function(CPlayerGetMaxDP210_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)())&CPlayer::GetMaxDP)
            },
            _hook_record {
                (LPVOID)0x14007a930L,
                (LPVOID *)&CPlayerGetMaxFP212_user,
                (LPVOID *)&CPlayerGetMaxFP212_next,
                (LPVOID)cast_pointer_function(CPlayerGetMaxFP212_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)())&CPlayer::GetMaxFP)
            },
            _hook_record {
                (LPVOID)0x140074220L,
                (LPVOID *)&CPlayerGetMaxHP214_user,
                (LPVOID *)&CPlayerGetMaxHP214_next,
                (LPVOID)cast_pointer_function(CPlayerGetMaxHP214_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)())&CPlayer::GetMaxHP)
            },
            _hook_record {
                (LPVOID)0x14007a9d0L,
                (LPVOID *)&CPlayerGetMaxSP216_user,
                (LPVOID *)&CPlayerGetMaxSP216_next,
                (LPVOID)cast_pointer_function(CPlayerGetMaxSP216_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)())&CPlayer::GetMaxSP)
            },
            _hook_record {
                (LPVOID)0x140056200L,
                (LPVOID *)&CPlayerGetMoney218_user,
                (LPVOID *)&CPlayerGetMoney218_next,
                (LPVOID)cast_pointer_function(CPlayerGetMoney218_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CPlayer::*)(char))&CPlayer::GetMoney)
            },
            _hook_record {
                (LPVOID)0x14005d7c0L,
                (LPVOID *)&CPlayerGetMoveSpeed220_user,
                (LPVOID *)&CPlayerGetMoveSpeed220_next,
                (LPVOID)cast_pointer_function(CPlayerGetMoveSpeed220_wrapper),
                (LPVOID)cast_pointer_function((float(CPlayer::*)())&CPlayer::GetMoveSpeed)
            },
            _hook_record {
                (LPVOID)0x140061950L,
                (LPVOID *)&CPlayerGetObjName222_user,
                (LPVOID *)&CPlayerGetObjName222_next,
                (LPVOID)cast_pointer_function(CPlayerGetObjName222_wrapper),
                (LPVOID)cast_pointer_function((char*(CPlayer::*)())&CPlayer::GetObjName)
            },
            _hook_record {
                (LPVOID)0x140074470L,
                (LPVOID *)&CPlayerGetObjRace224_user,
                (LPVOID *)&CPlayerGetObjRace224_next,
                (LPVOID)cast_pointer_function(CPlayerGetObjRace224_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)())&CPlayer::GetObjRace)
            },
            _hook_record {
                (LPVOID)0x14005d6a0L,
                (LPVOID *)&CPlayerGetPartyExpDistributionRate226_user,
                (LPVOID *)&CPlayerGetPartyExpDistributionRate226_next,
                (LPVOID)cast_pointer_function(CPlayerGetPartyExpDistributionRate226_wrapper),
                (LPVOID)cast_pointer_function((float(CPlayer::*)(int, int, int))&CPlayer::GetPartyExpDistributionRate)
            },
            _hook_record {
                (LPVOID)0x14029d860L,
                (LPVOID *)&CPlayerGetPvpOrderView228_user,
                (LPVOID *)&CPlayerGetPvpOrderView228_next,
                (LPVOID)cast_pointer_function(CPlayerGetPvpOrderView228_wrapper),
                (LPVOID)cast_pointer_function((struct CPvpOrderView*(CPlayer::*)())&CPlayer::GetPvpOrderView)
            },
            _hook_record {
                (LPVOID)0x140068fb0L,
                (LPVOID *)&CPlayerGetPvpPointLeak230_user,
                (LPVOID *)&CPlayerGetPvpPointLeak230_next,
                (LPVOID)cast_pointer_function(CPlayerGetPvpPointLeak230_wrapper),
                (LPVOID)cast_pointer_function((long double(CPlayer::*)())&CPlayer::GetPvpPointLeak)
            },
            _hook_record {
                (LPVOID)0x14029d4d0L,
                (LPVOID *)&CPlayerGetPvpPointLimiter232_user,
                (LPVOID *)&CPlayerGetPvpPointLimiter232_next,
                (LPVOID)cast_pointer_function(CPlayerGetPvpPointLimiter232_wrapper),
                (LPVOID)cast_pointer_function((struct CPvpPointLimiter*(CPlayer::*)(struct CPvpPointLimiter*))&CPlayer::GetPvpPointLimiter)
            },
            _hook_record {
                (LPVOID)0x140172210L,
                (LPVOID *)&CPlayerGetRecallAnimus234_user,
                (LPVOID *)&CPlayerGetRecallAnimus234_next,
                (LPVOID)cast_pointer_function(CPlayerGetRecallAnimus234_wrapper),
                (LPVOID)cast_pointer_function((struct CAnimus*(CPlayer::*)())&CPlayer::GetRecallAnimus)
            },
            _hook_record {
                (LPVOID)0x1400cda30L,
                (LPVOID *)&CPlayerGetRewardItems_DarkDungeon236_user,
                (LPVOID *)&CPlayerGetRewardItems_DarkDungeon236_next,
                (LPVOID)cast_pointer_function(CPlayerGetRewardItems_DarkDungeon236_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)(struct _dh_reward_sub_setup*, struct _STORAGE_LIST::_db_con*, int))&CPlayer::GetRewardItems_DarkDungeon)
            },
            _hook_record {
                (LPVOID)0x14007c430L,
                (LPVOID *)&CPlayerGetSP238_user,
                (LPVOID *)&CPlayerGetSP238_next,
                (LPVOID)cast_pointer_function(CPlayerGetSP238_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)())&CPlayer::GetSP)
            },
            _hook_record {
                (LPVOID)0x140060ee0L,
                (LPVOID *)&CPlayerGetSoilTol240_user,
                (LPVOID *)&CPlayerGetSoilTol240_next,
                (LPVOID)cast_pointer_function(CPlayerGetSoilTol240_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)())&CPlayer::GetSoilTol)
            },
            _hook_record {
                (LPVOID)0x14007c4f0L,
                (LPVOID *)&CPlayerGetStateFlag242_user,
                (LPVOID *)&CPlayerGetStateFlag242_next,
                (LPVOID)cast_pointer_function(CPlayerGetStateFlag242_wrapper),
                (LPVOID)cast_pointer_function((uint64_t(CPlayer::*)())&CPlayer::GetStateFlag)
            },
            _hook_record {
                (LPVOID)0x14005fda0L,
                (LPVOID *)&CPlayerGetTargetObj244_user,
                (LPVOID *)&CPlayerGetTargetObj244_next,
                (LPVOID)cast_pointer_function(CPlayerGetTargetObj244_wrapper),
                (LPVOID)cast_pointer_function((struct CGameObject*(CPlayer::*)())&CPlayer::GetTargetObj)
            },
            _hook_record {
                (LPVOID)0x140067d50L,
                (LPVOID *)&CPlayerGetUseConsumeItem246_user,
                (LPVOID *)&CPlayerGetUseConsumeItem246_next,
                (LPVOID)cast_pointer_function(CPlayerGetUseConsumeItem246_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct _consume_item_list*, uint16_t*, struct _STORAGE_LIST::_db_con**, int*, bool*))&CPlayer::GetUseConsumeItem)
            },
            _hook_record {
                (LPVOID)0x140053a10L,
                (LPVOID *)&CPlayerGetVisualVer248_user,
                (LPVOID *)&CPlayerGetVisualVer248_next,
                (LPVOID)cast_pointer_function(CPlayerGetVisualVer248_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)())&CPlayer::GetVisualVer)
            },
            _hook_record {
                (LPVOID)0x140060df0L,
                (LPVOID *)&CPlayerGetWaterTol250_user,
                (LPVOID *)&CPlayerGetWaterTol250_next,
                (LPVOID)cast_pointer_function(CPlayerGetWaterTol250_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)())&CPlayer::GetWaterTol)
            },
            _hook_record {
                (LPVOID)0x1400610c0L,
                (LPVOID *)&CPlayerGetWeaponAdjust252_user,
                (LPVOID *)&CPlayerGetWeaponAdjust252_next,
                (LPVOID)cast_pointer_function(CPlayerGetWeaponAdjust252_wrapper),
                (LPVOID)cast_pointer_function((float(CPlayer::*)())&CPlayer::GetWeaponAdjust)
            },
            _hook_record {
                (LPVOID)0x1400744f0L,
                (LPVOID *)&CPlayerGetWeaponClass254_user,
                (LPVOID *)&CPlayerGetWeaponClass254_next,
                (LPVOID)cast_pointer_function(CPlayerGetWeaponClass254_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)())&CPlayer::GetWeaponClass)
            },
            _hook_record {
                (LPVOID)0x140060240L,
                (LPVOID *)&CPlayerGetWeaponRange256_user,
                (LPVOID *)&CPlayerGetWeaponRange256_next,
                (LPVOID)cast_pointer_function(CPlayerGetWeaponRange256_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)())&CPlayer::GetWeaponRange)
            },
            _hook_record {
                (LPVOID)0x1400601c0L,
                (LPVOID *)&CPlayerGetWidth258_user,
                (LPVOID *)&CPlayerGetWidth258_next,
                (LPVOID)cast_pointer_function(CPlayerGetWidth258_wrapper),
                (LPVOID)cast_pointer_function((float(CPlayer::*)())&CPlayer::GetWidth)
            },
            _hook_record {
                (LPVOID)0x140060fd0L,
                (LPVOID *)&CPlayerGetWindTol260_user,
                (LPVOID *)&CPlayerGetWindTol260_next,
                (LPVOID)cast_pointer_function(CPlayerGetWindTol260_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)())&CPlayer::GetWindTol)
            },
            _hook_record {
                (LPVOID)0x1400aa500L,
                (LPVOID *)&CPlayerGuild_Buy_Emblem_Complete262_user,
                (LPVOID *)&CPlayerGuild_Buy_Emblem_Complete262_next,
                (LPVOID)cast_pointer_function(CPlayerGuild_Buy_Emblem_Complete262_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct _DB_QRY_SYN_DATA*))&CPlayer::Guild_Buy_Emblem_Complete)
            },
            _hook_record {
                (LPVOID)0x1400aa820L,
                (LPVOID *)&CPlayerGuild_Disjoint_Complete264_user,
                (LPVOID *)&CPlayerGuild_Disjoint_Complete264_next,
                (LPVOID)cast_pointer_function(CPlayerGuild_Disjoint_Complete264_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct _DB_QRY_SYN_DATA*))&CPlayer::Guild_Disjoint_Complete)
            },
            _hook_record {
                (LPVOID)0x1400a9560L,
                (LPVOID *)&CPlayerGuild_Force_Leave_Complete266_user,
                (LPVOID *)&CPlayerGuild_Force_Leave_Complete266_next,
                (LPVOID)cast_pointer_function(CPlayerGuild_Force_Leave_Complete266_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct _DB_QRY_SYN_DATA*))&CPlayer::Guild_Force_Leave_Complete)
            },
            _hook_record {
                (LPVOID)0x1400a8a10L,
                (LPVOID *)&CPlayerGuild_Insert_Complete268_user,
                (LPVOID *)&CPlayerGuild_Insert_Complete268_next,
                (LPVOID)cast_pointer_function(CPlayerGuild_Insert_Complete268_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct _DB_QRY_SYN_DATA*))&CPlayer::Guild_Insert_Complete)
            },
            _hook_record {
                (LPVOID)0x1400a98b0L,
                (LPVOID *)&CPlayerGuild_Join_Accept_Complete270_user,
                (LPVOID *)&CPlayerGuild_Join_Accept_Complete270_next,
                (LPVOID)cast_pointer_function(CPlayerGuild_Join_Accept_Complete270_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct _DB_QRY_SYN_DATA*))&CPlayer::Guild_Join_Accept_Complete)
            },
            _hook_record {
                (LPVOID)0x1400aa050L,
                (LPVOID *)&CPlayerGuild_Pop_Money_Complete272_user,
                (LPVOID *)&CPlayerGuild_Pop_Money_Complete272_next,
                (LPVOID)cast_pointer_function(CPlayerGuild_Pop_Money_Complete272_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct _DB_QRY_SYN_DATA*))&CPlayer::Guild_Pop_Money_Complete)
            },
            _hook_record {
                (LPVOID)0x1400a9ce0L,
                (LPVOID *)&CPlayerGuild_Push_Money_Complete274_user,
                (LPVOID *)&CPlayerGuild_Push_Money_Complete274_next,
                (LPVOID)cast_pointer_function(CPlayerGuild_Push_Money_Complete274_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct _DB_QRY_SYN_DATA*))&CPlayer::Guild_Push_Money_Complete)
            },
            _hook_record {
                (LPVOID)0x1400a9120L,
                (LPVOID *)&CPlayerGuild_Self_Leave_Complete276_user,
                (LPVOID *)&CPlayerGuild_Self_Leave_Complete276_next,
                (LPVOID)cast_pointer_function(CPlayerGuild_Self_Leave_Complete276_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct _DB_QRY_SYN_DATA*))&CPlayer::Guild_Self_Leave_Complete)
            },
            _hook_record {
                (LPVOID)0x1400aa960L,
                (LPVOID *)&CPlayerGuild_Update_GuildMater_Complete278_user,
                (LPVOID *)&CPlayerGuild_Update_GuildMater_Complete278_next,
                (LPVOID)cast_pointer_function(CPlayerGuild_Update_GuildMater_Complete278_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct _DB_QRY_SYN_DATA*))&CPlayer::Guild_Update_GuildMater_Complete)
            },
            _hook_record {
                (LPVOID)0x1400ccbc0L,
                (LPVOID *)&CPlayerHSKQuestEnd_Att280_user,
                (LPVOID *)&CPlayerHSKQuestEnd_Att280_next,
                (LPVOID)cast_pointer_function(CPlayerHSKQuestEnd_Att280_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, struct CPlayer*))&CPlayer::HSKQuestEnd_Att)
            },
            _hook_record {
                (LPVOID)0x1400532f0L,
                (LPVOID *)&CPlayerHideNameEffect282_user,
                (LPVOID *)&CPlayerHideNameEffect282_next,
                (LPVOID)cast_pointer_function(CPlayerHideNameEffect282_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(bool))&CPlayer::HideNameEffect)
            },
            _hook_record {
                (LPVOID)0x14005ffc0L,
                (LPVOID *)&CPlayerIncCriEffKillPoint284_user,
                (LPVOID *)&CPlayerIncCriEffKillPoint284_next,
                (LPVOID)cast_pointer_function(CPlayerIncCriEffKillPoint284_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::IncCriEffKillPoint)
            },
            _hook_record {
                (LPVOID)0x14005fec0L,
                (LPVOID *)&CPlayerIncCriEffPvPCashBag286_user,
                (LPVOID *)&CPlayerIncCriEffPvPCashBag286_next,
                (LPVOID)cast_pointer_function(CPlayerIncCriEffPvPCashBag286_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(long double))&CPlayer::IncCriEffPvPCashBag)
            },
            _hook_record {
                (LPVOID)0x14005fb00L,
                (LPVOID *)&CPlayerIncPvPPoint288_user,
                (LPVOID *)&CPlayerIncPvPPoint288_next,
                (LPVOID)cast_pointer_function(CPlayerIncPvPPoint288_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(long double, PVP_ALTER_TYPE, unsigned int))&CPlayer::IncPvPPoint)
            },
            _hook_record {
                (LPVOID)0x140048660L,
                (LPVOID *)&CPlayerInit290_user,
                (LPVOID *)&CPlayerInit290_next,
                (LPVOID)cast_pointer_function(CPlayerInit290_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct _object_id*))&CPlayer::Init)
            },
            _hook_record {
                (LPVOID)0x1400505a0L,
                (LPVOID *)&CPlayerIntoMap292_user,
                (LPVOID *)&CPlayerIntoMap292_next,
                (LPVOID)cast_pointer_function(CPlayerIntoMap292_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(char))&CPlayer::IntoMap)
            },
            _hook_record {
                (LPVOID)0x14008f230L,
                (LPVOID *)&CPlayerIsActingSiegeMode294_user,
                (LPVOID *)&CPlayerIsActingSiegeMode294_next,
                (LPVOID)cast_pointer_function(CPlayerIsActingSiegeMode294_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::IsActingSiegeMode)
            },
            _hook_record {
                (LPVOID)0x140067d00L,
                (LPVOID *)&CPlayerIsApplyPcbangPrimium296_user,
                (LPVOID *)&CPlayerIsApplyPcbangPrimium296_next,
                (LPVOID)cast_pointer_function(CPlayerIsApplyPcbangPrimium296_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::IsApplyPcbangPrimium)
            },
            _hook_record {
                (LPVOID)0x140063290L,
                (LPVOID *)&CPlayerIsBeAttackedAble298_user,
                (LPVOID *)&CPlayerIsBeAttackedAble298_next,
                (LPVOID)cast_pointer_function(CPlayerIsBeAttackedAble298_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(bool))&CPlayer::IsBeAttackedAble)
            },
            _hook_record {
                (LPVOID)0x1400f0dc0L,
                (LPVOID *)&CPlayerIsBeDamagedAble300_user,
                (LPVOID *)&CPlayerIsBeDamagedAble300_next,
                (LPVOID)cast_pointer_function(CPlayerIsBeDamagedAble300_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CCharacter*))&CPlayer::IsBeDamagedAble)
            },
            _hook_record {
                (LPVOID)0x14008a1e0L,
                (LPVOID *)&CPlayerIsBulletValidity302_user,
                (LPVOID *)&CPlayerIsBulletValidity302_next,
                (LPVOID)cast_pointer_function(CPlayerIsBulletValidity302_wrapper),
                (LPVOID)cast_pointer_function((struct _STORAGE_LIST::_db_con*(CPlayer::*)(uint16_t))&CPlayer::IsBulletValidity)
            },
            _hook_record {
                (LPVOID)0x14007a8d0L,
                (LPVOID *)&CPlayerIsChaosMode304_user,
                (LPVOID *)&CPlayerIsChaosMode304_next,
                (LPVOID)cast_pointer_function(CPlayerIsChaosMode304_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::IsChaosMode)
            },
            _hook_record {
                (LPVOID)0x140089f60L,
                (LPVOID *)&CPlayerIsEffBulletValidity306_user,
                (LPVOID *)&CPlayerIsEffBulletValidity306_next,
                (LPVOID)cast_pointer_function(CPlayerIsEffBulletValidity306_wrapper),
                (LPVOID)cast_pointer_function((struct _STORAGE_LIST::_db_con*(CPlayer::*)(uint16_t))&CPlayer::IsEffBulletValidity)
            },
            _hook_record {
                (LPVOID)0x140057870L,
                (LPVOID *)&CPlayerIsEffectableEquip308_user,
                (LPVOID *)&CPlayerIsEffectableEquip308_next,
                (LPVOID)cast_pointer_function(CPlayerIsEffectableEquip308_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct _STORAGE_LIST::_storage_con*))&CPlayer::IsEffectableEquip)
            },
            _hook_record {
                (LPVOID)0x140057af0L,
                (LPVOID *)&CPlayerIsEquipAbleGrade310_user,
                (LPVOID *)&CPlayerIsEquipAbleGrade310_next,
                (LPVOID)cast_pointer_function(CPlayerIsEquipAbleGrade310_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(char))&CPlayer::IsEquipAbleGrade)
            },
            _hook_record {
                (LPVOID)0x1400ce610L,
                (LPVOID *)&CPlayerIsHaveMentalTicket312_user,
                (LPVOID *)&CPlayerIsHaveMentalTicket312_next,
                (LPVOID)cast_pointer_function(CPlayerIsHaveMentalTicket312_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::IsHaveMentalTicket)
            },
            _hook_record {
                (LPVOID)0x1400744c0L,
                (LPVOID *)&CPlayerIsInTown314_user,
                (LPVOID *)&CPlayerIsInTown314_next,
                (LPVOID)cast_pointer_function(CPlayerIsInTown314_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::IsInTown)
            },
            _hook_record {
                (LPVOID)0x140069060L,
                (LPVOID *)&CPlayerIsLastAttBuff316_user,
                (LPVOID *)&CPlayerIsLastAttBuff316_next,
                (LPVOID)cast_pointer_function(CPlayerIsLastAttBuff316_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::IsLastAttBuff)
            },
            _hook_record {
                (LPVOID)0x1403eacd0L,
                (LPVOID *)&CPlayerIsMapLoading318_user,
                (LPVOID *)&CPlayerIsMapLoading318_next,
                (LPVOID)cast_pointer_function(CPlayerIsMapLoading318_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::IsMapLoading)
            },
            _hook_record {
                (LPVOID)0x1402e1830L,
                (LPVOID *)&CPlayerIsMineMode320_user,
                (LPVOID *)&CPlayerIsMineMode320_next,
                (LPVOID)cast_pointer_function(CPlayerIsMineMode320_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::IsMineMode)
            },
            _hook_record {
                (LPVOID)0x1400ce530L,
                (LPVOID *)&CPlayerIsMiningByMinigTicket322_user,
                (LPVOID *)&CPlayerIsMiningByMinigTicket322_next,
                (LPVOID)cast_pointer_function(CPlayerIsMiningByMinigTicket322_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::IsMiningByMinigTicket)
            },
            _hook_record {
                (LPVOID)0x140057790L,
                (LPVOID *)&CPlayerIsOutExtraStopPos324_user,
                (LPVOID *)&CPlayerIsOutExtraStopPos324_next,
                (LPVOID)cast_pointer_function(CPlayerIsOutExtraStopPos324_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(float*))&CPlayer::IsOutExtraStopPos)
            },
            _hook_record {
                (LPVOID)0x14004cc20L,
                (LPVOID *)&CPlayerIsOverOneDay326_user,
                (LPVOID *)&CPlayerIsOverOneDay326_next,
                (LPVOID)cast_pointer_function(CPlayerIsOverOneDay326_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::IsOverOneDay)
            },
            _hook_record {
                (LPVOID)0x14007d3c0L,
                (LPVOID *)&CPlayerIsPassExpLimitLvDiff328_user,
                (LPVOID *)&CPlayerIsPassExpLimitLvDiff328_next,
                (LPVOID)cast_pointer_function(CPlayerIsPassExpLimitLvDiff328_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(int, bool*))&CPlayer::IsPassExpLimitLvDiff)
            },
            _hook_record {
                (LPVOID)0x14007d8f0L,
                (LPVOID *)&CPlayerIsPassMasteryLimitLvDiff330_user,
                (LPVOID *)&CPlayerIsPassMasteryLimitLvDiff330_next,
                (LPVOID)cast_pointer_function(CPlayerIsPassMasteryLimitLvDiff330_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(int))&CPlayer::IsPassMasteryLimitLvDiff)
            },
            _hook_record {
                (LPVOID)0x140068150L,
                (LPVOID *)&CPlayerIsPunished332_user,
                (LPVOID *)&CPlayerIsPunished332_next,
                (LPVOID)cast_pointer_function(CPlayerIsPunished332_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(char, bool))&CPlayer::IsPunished)
            },
            _hook_record {
                (LPVOID)0x14007be20L,
                (LPVOID *)&CPlayerIsRecallAnimus334_user,
                (LPVOID *)&CPlayerIsRecallAnimus334_next,
                (LPVOID)cast_pointer_function(CPlayerIsRecallAnimus334_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::IsRecallAnimus)
            },
            _hook_record {
                (LPVOID)0x140063200L,
                (LPVOID *)&CPlayerIsRecvableContEffect336_user,
                (LPVOID *)&CPlayerIsRecvableContEffect336_next,
                (LPVOID)cast_pointer_function(CPlayerIsRecvableContEffect336_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::IsRecvableContEffect)
            },
            _hook_record {
                (LPVOID)0x1400c9b50L,
                (LPVOID *)&CPlayerIsReturnPostUpdate338_user,
                (LPVOID *)&CPlayerIsReturnPostUpdate338_next,
                (LPVOID)cast_pointer_function(CPlayerIsReturnPostUpdate338_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::IsReturnPostUpdate)
            },
            _hook_record {
                (LPVOID)0x1400f0d40L,
                (LPVOID *)&CPlayerIsRidingShip340_user,
                (LPVOID *)&CPlayerIsRidingShip340_next,
                (LPVOID)cast_pointer_function(CPlayerIsRidingShip340_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::IsRidingShip)
            },
            _hook_record {
                (LPVOID)0x140106da0L,
                (LPVOID *)&CPlayerIsRidingUnit342_user,
                (LPVOID *)&CPlayerIsRidingUnit342_next,
                (LPVOID)cast_pointer_function(CPlayerIsRidingUnit342_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::IsRidingUnit)
            },
            _hook_record {
                (LPVOID)0x1400a1e40L,
                (LPVOID *)&CPlayerIsSFActableByClass344_user,
                (LPVOID *)&CPlayerIsSFActableByClass344_next,
                (LPVOID)cast_pointer_function(CPlayerIsSFActableByClass344_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(char, struct _base_fld*))&CPlayer::IsSFActableByClass)
            },
            _hook_record {
                (LPVOID)0x1400a1250L,
                (LPVOID *)&CPlayerIsSFUsableGauge346_user,
                (LPVOID *)&CPlayerIsSFUsableGauge346_next,
                (LPVOID)cast_pointer_function(CPlayerIsSFUsableGauge346_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(char, uint16_t, uint16_t*))&CPlayer::IsSFUsableGauge)
            },
            _hook_record {
                (LPVOID)0x1400a0fe0L,
                (LPVOID *)&CPlayerIsSFUsableSFMastery348_user,
                (LPVOID *)&CPlayerIsSFUsableSFMastery348_next,
                (LPVOID)cast_pointer_function(CPlayerIsSFUsableSFMastery348_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(char, int))&CPlayer::IsSFUsableSFMastery)
            },
            _hook_record {
                (LPVOID)0x1400a1150L,
                (LPVOID *)&CPlayerIsSFUseableRace350_user,
                (LPVOID *)&CPlayerIsSFUseableRace350_next,
                (LPVOID)cast_pointer_function(CPlayerIsSFUseableRace350_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(char, uint16_t))&CPlayer::IsSFUseableRace)
            },
            _hook_record {
                (LPVOID)0x1400f0d10L,
                (LPVOID *)&CPlayerIsSiegeMode352_user,
                (LPVOID *)&CPlayerIsSiegeMode352_next,
                (LPVOID)cast_pointer_function(CPlayerIsSiegeMode352_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::IsSiegeMode)
            },
            _hook_record {
                (LPVOID)0x14005fc30L,
                (LPVOID *)&CPlayerIsTargetObj354_user,
                (LPVOID *)&CPlayerIsTargetObj354_next,
                (LPVOID)cast_pointer_function(CPlayerIsTargetObj354_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CGameObject*))&CPlayer::IsTargetObj)
            },
            _hook_record {
                (LPVOID)0x140069d20L,
                (LPVOID *)&CPlayerIsUsableAccountType356_user,
                (LPVOID *)&CPlayerIsUsableAccountType356_next,
                (LPVOID)cast_pointer_function(CPlayerIsUsableAccountType356_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(int))&CPlayer::IsUsableAccountType)
            },
            _hook_record {
                (LPVOID)0x1400645e0L,
                (LPVOID *)&CPlayerIsUseCloakBooster358_user,
                (LPVOID *)&CPlayerIsUseCloakBooster358_next,
                (LPVOID)cast_pointer_function(CPlayerIsUseCloakBooster358_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::IsUseCloakBooster)
            },
            _hook_record {
                (LPVOID)0x1400a3a50L,
                (LPVOID *)&CPlayerIsUseReleaseRaceBuffPotion360_user,
                (LPVOID *)&CPlayerIsUseReleaseRaceBuffPotion360_next,
                (LPVOID)cast_pointer_function(CPlayerIsUseReleaseRaceBuffPotion360_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::IsUseReleaseRaceBuffPotion)
            },
            _hook_record {
                (LPVOID)0x1400686c0L,
                (LPVOID *)&CPlayerIs_Battle_Mode362_user,
                (LPVOID *)&CPlayerIs_Battle_Mode362_next,
                (LPVOID)cast_pointer_function(CPlayerIs_Battle_Mode362_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::Is_Battle_Mode)
            },
            _hook_record {
                (LPVOID)0x1400cb810L,
                (LPVOID *)&CPlayerLimLvNpcQuestDelete364_user,
                (LPVOID *)&CPlayerLimLvNpcQuestDelete364_next,
                (LPVOID)cast_pointer_function(CPlayerLimLvNpcQuestDelete364_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::LimLvNpcQuestDelete)
            },
            _hook_record {
                (LPVOID)0x1400489b0L,
                (LPVOID *)&CPlayerLoad366_user,
                (LPVOID *)&CPlayerLoad366_next,
                (LPVOID)cast_pointer_function(CPlayerLoad366_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CUserDB*, bool))&CPlayer::Load)
            },
            _hook_record {
                (LPVOID)0x1400541a0L,
                (LPVOID *)&CPlayerLoop368_user,
                (LPVOID *)&CPlayerLoop368_next,
                (LPVOID)cast_pointer_function(CPlayerLoop368_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::Loop)
            },
            _hook_record {
                (LPVOID)0x14004cee0L,
                (LPVOID *)&CPlayerNetClose370_user,
                (LPVOID *)&CPlayerNetClose370_next,
                (LPVOID)cast_pointer_function(CPlayerNetClose370_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(bool))&CPlayer::NetClose)
            },
            _hook_record {
                (LPVOID)0x14005d4a0L,
                (LPVOID *)&CPlayerNewViewCircleObject372_user,
                (LPVOID *)&CPlayerNewViewCircleObject372_next,
                (LPVOID)cast_pointer_function(CPlayerNewViewCircleObject372_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::NewViewCircleObject)
            },
            _hook_record {
                (LPVOID)0x140066350L,
                (LPVOID *)&CPlayerOnLoop_Static374_user,
                (LPVOID *)&CPlayerOnLoop_Static374_next,
                (LPVOID)cast_pointer_function(CPlayerOnLoop_Static374_wrapper),
                (LPVOID)cast_pointer_function((void(*)())&CPlayer::OnLoop_Static)
            },
            _hook_record {
                (LPVOID)0x1400501d0L,
                (LPVOID *)&CPlayerOutOfMap376_user,
                (LPVOID *)&CPlayerOutOfMap376_next,
                (LPVOID)cast_pointer_function(CPlayerOutOfMap376_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CMapData*, uint16_t, char, float*))&CPlayer::OutOfMap)
            },
            _hook_record {
                (LPVOID)0x140055510L,
                (LPVOID *)&CPlayerOutOfSec378_user,
                (LPVOID *)&CPlayerOutOfSec378_next,
                (LPVOID)cast_pointer_function(CPlayerOutOfSec378_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::OutOfSec)
            },
            _hook_record {
                (LPVOID)0x140053860L,
                (LPVOID *)&CPlayerPastWhisperInit380_user,
                (LPVOID *)&CPlayerPastWhisperInit380_next,
                (LPVOID)cast_pointer_function(CPlayerPastWhisperInit380_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::PastWhisperInit)
            },
            _hook_record {
                (LPVOID)0x1400a39b0L,
                (LPVOID *)&CPlayerPotion_Buf_Extend382_user,
                (LPVOID *)&CPlayerPotion_Buf_Extend382_next,
                (LPVOID)cast_pointer_function(CPlayerPotion_Buf_Extend382_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::Potion_Buf_Extend)
            },
            _hook_record {
                (LPVOID)0x140069b90L,
                (LPVOID *)&CPlayerPushDQSCheatPlyerVoteInfo384_user,
                (LPVOID *)&CPlayerPushDQSCheatPlyerVoteInfo384_next,
                (LPVOID)cast_pointer_function(CPlayerPushDQSCheatPlyerVoteInfo384_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::PushDQSCheatPlyerVoteInfo)
            },
            _hook_record {
                (LPVOID)0x1400699f0L,
                (LPVOID *)&CPlayerPushDQSUpdatePlyerVoteInfo386_user,
                (LPVOID *)&CPlayerPushDQSUpdatePlyerVoteInfo386_next,
                (LPVOID)cast_pointer_function(CPlayerPushDQSUpdatePlyerVoteInfo386_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::PushDQSUpdatePlyerVoteInfo)
            },
            _hook_record {
                (LPVOID)0x140069900L,
                (LPVOID *)&CPlayerPushDQSUpdateVoteAvilable388_user,
                (LPVOID *)&CPlayerPushDQSUpdateVoteAvilable388_next,
                (LPVOID)cast_pointer_function(CPlayerPushDQSUpdateVoteAvilable388_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::PushDQSUpdateVoteAvilable)
            },
            _hook_record {
                (LPVOID)0x14005c9a0L,
                (LPVOID *)&CPlayerReCalcMaxHFSP390_user,
                (LPVOID *)&CPlayerReCalcMaxHFSP390_next,
                (LPVOID)cast_pointer_function(CPlayerReCalcMaxHFSP390_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(bool, bool))&CPlayer::ReCalcMaxHFSP)
            },
            _hook_record {
                (LPVOID)0x1400bf7a0L,
                (LPVOID *)&CPlayerRecallRandomPositionInRange392_user,
                (LPVOID *)&CPlayerRecallRandomPositionInRange392_next,
                (LPVOID)cast_pointer_function(CPlayerRecallRandomPositionInRange392_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CMapData*, uint16_t, float*, int))&CPlayer::RecallRandomPositionInRange)
            },
            _hook_record {
                (LPVOID)0x1400cc840L,
                (LPVOID *)&CPlayerRecvHSKQuest394_user,
                (LPVOID *)&CPlayerRecvHSKQuest394_next,
                (LPVOID)cast_pointer_function(CPlayerRecvHSKQuest394_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, int, uint16_t, uint16_t, char))&CPlayer::RecvHSKQuest)
            },
            _hook_record {
                (LPVOID)0x140053a30L,
                (LPVOID *)&CPlayerRecvKillMessage396_user,
                (LPVOID *)&CPlayerRecvKillMessage396_next,
                (LPVOID)cast_pointer_function(CPlayerRecvKillMessage396_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CCharacter*))&CPlayer::RecvKillMessage)
            },
            _hook_record {
                (LPVOID)0x1400663b0L,
                (LPVOID *)&CPlayerReservationForceClose398_user,
                (LPVOID *)&CPlayerReservationForceClose398_next,
                (LPVOID)cast_pointer_function(CPlayerReservationForceClose398_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::ReservationForceClose)
            },
            _hook_record {
                (LPVOID)0x1400500a0L,
                (LPVOID *)&CPlayerResurrect400_user,
                (LPVOID *)&CPlayerResurrect400_next,
                (LPVOID)cast_pointer_function(CPlayerResurrect400_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::Resurrect)
            },
            _hook_record {
                (LPVOID)0x1400d1030L,
                (LPVOID *)&CPlayerReturn_AnimusAsk402_user,
                (LPVOID *)&CPlayerReturn_AnimusAsk402_next,
                (LPVOID)cast_pointer_function(CPlayerReturn_AnimusAsk402_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::Return_AnimusAsk)
            },
            _hook_record {
                (LPVOID)0x140096550L,
                (LPVOID *)&CPlayerRewardChangeClass404_user,
                (LPVOID *)&CPlayerRewardChangeClass404_next,
                (LPVOID)cast_pointer_function(CPlayerRewardChangeClass404_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _class_fld*, char))&CPlayer::RewardChangeClass)
            },
            _hook_record {
                (LPVOID)0x140095880L,
                (LPVOID *)&CPlayerRewardChangeClassMastery406_user,
                (LPVOID *)&CPlayerRewardChangeClassMastery406_next,
                (LPVOID)cast_pointer_function(CPlayerRewardChangeClassMastery406_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _class_fld*))&CPlayer::RewardChangeClassMastery)
            },
            _hook_record {
                (LPVOID)0x140096100L,
                (LPVOID *)&CPlayerRewardChangeClassRewardItem408_user,
                (LPVOID *)&CPlayerRewardChangeClassRewardItem408_next,
                (LPVOID)cast_pointer_function(CPlayerRewardChangeClassRewardItem408_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _class_fld*, char))&CPlayer::RewardChangeClassRewardItem)
            },
            _hook_record {
                (LPVOID)0x140056070L,
                (LPVOID *)&CPlayerRewardRaceWarPvpCash410_user,
                (LPVOID *)&CPlayerRewardRaceWarPvpCash410_next,
                (LPVOID)cast_pointer_function(CPlayerRewardRaceWarPvpCash410_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::RewardRaceWarPvpCash)
            },
            _hook_record {
                (LPVOID)0x1400cdc00L,
                (LPVOID *)&CPlayerReward_DarkDungeon412_user,
                (LPVOID *)&CPlayerReward_DarkDungeon412_next,
                (LPVOID)cast_pointer_function(CPlayerReward_DarkDungeon412_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _dh_reward_sub_setup*, char*, int, struct _STORAGE_LIST::_db_con*, int*))&CPlayer::Reward_DarkDungeon)
            },
            _hook_record {
                (LPVOID)0x1400a2190L,
                (LPVOID *)&CPlayerRobbedHP414_user,
                (LPVOID *)&CPlayerRobbedHP414_next,
                (LPVOID)cast_pointer_function(CPlayerRobbedHP414_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CCharacter*, int))&CPlayer::RobbedHP)
            },
            _hook_record {
                (LPVOID)0x140053f70L,
                (LPVOID *)&CPlayerSFContDelMessage416_user,
                (LPVOID *)&CPlayerSFContDelMessage416_next,
                (LPVOID)cast_pointer_function(CPlayerSFContDelMessage416_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, bool, bool))&CPlayer::SFContDelMessage)
            },
            _hook_record {
                (LPVOID)0x140053d30L,
                (LPVOID *)&CPlayerSFContInsertMessage418_user,
                (LPVOID *)&CPlayerSFContInsertMessage418_next,
                (LPVOID)cast_pointer_function(CPlayerSFContInsertMessage418_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, bool, struct CPlayer*))&CPlayer::SFContInsertMessage)
            },
            _hook_record {
                (LPVOID)0x140054120L,
                (LPVOID *)&CPlayerSFContUpdateTimeMessage420_user,
                (LPVOID *)&CPlayerSFContUpdateTimeMessage420_next,
                (LPVOID)cast_pointer_function(CPlayerSFContUpdateTimeMessage420_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, int))&CPlayer::SFContUpdateTimeMessage)
            },
            _hook_record {
                (LPVOID)0x14009ea60L,
                (LPVOID *)&CPlayerSF_AllContDamageForceRemove_Once422_user,
                (LPVOID *)&CPlayerSF_AllContDamageForceRemove_Once422_next,
                (LPVOID)cast_pointer_function(CPlayerSF_AllContDamageForceRemove_Once422_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CCharacter*))&CPlayer::SF_AllContDamageForceRemove_Once)
            },
            _hook_record {
                (LPVOID)0x1400a3e00L,
                (LPVOID *)&CPlayerSF_AllContDamageRemove_Once424_user,
                (LPVOID *)&CPlayerSF_AllContDamageRemove_Once424_next,
                (LPVOID)cast_pointer_function(CPlayerSF_AllContDamageRemove_Once424_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CCharacter*))&CPlayer::SF_AllContDamageRemove_Once)
            },
            _hook_record {
                (LPVOID)0x14009e950L,
                (LPVOID *)&CPlayerSF_AllContHelpForceRemove_Once426_user,
                (LPVOID *)&CPlayerSF_AllContHelpForceRemove_Once426_next,
                (LPVOID)cast_pointer_function(CPlayerSF_AllContHelpForceRemove_Once426_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CCharacter*))&CPlayer::SF_AllContHelpForceRemove_Once)
            },
            _hook_record {
                (LPVOID)0x14009e840L,
                (LPVOID *)&CPlayerSF_AllContHelpSkillRemove_Once428_user,
                (LPVOID *)&CPlayerSF_AllContHelpSkillRemove_Once428_next,
                (LPVOID)cast_pointer_function(CPlayerSF_AllContHelpSkillRemove_Once428_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CCharacter*))&CPlayer::SF_AllContHelpSkillRemove_Once)
            },
            _hook_record {
                (LPVOID)0x14009dab0L,
                (LPVOID *)&CPlayerSF_AttHPtoDstFP_Once430_user,
                (LPVOID *)&CPlayerSF_AttHPtoDstFP_Once430_next,
                (LPVOID)cast_pointer_function(CPlayerSF_AttHPtoDstFP_Once430_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CCharacter*, float))&CPlayer::SF_AttHPtoDstFP_Once)
            },
            _hook_record {
                (LPVOID)0x14009dbd0L,
                (LPVOID *)&CPlayerSF_ContDamageTimeInc_Once432_user,
                (LPVOID *)&CPlayerSF_ContDamageTimeInc_Once432_next,
                (LPVOID)cast_pointer_function(CPlayerSF_ContDamageTimeInc_Once432_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CCharacter*, float))&CPlayer::SF_ContDamageTimeInc_Once)
            },
            _hook_record {
                (LPVOID)0x14009e0a0L,
                (LPVOID *)&CPlayerSF_ContHelpTimeInc_Once434_user,
                (LPVOID *)&CPlayerSF_ContHelpTimeInc_Once434_next,
                (LPVOID)cast_pointer_function(CPlayerSF_ContHelpTimeInc_Once434_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CCharacter*, float))&CPlayer::SF_ContHelpTimeInc_Once)
            },
            _hook_record {
                (LPVOID)0x14009f040L,
                (LPVOID *)&CPlayerSF_ConvertMonsterTarget436_user,
                (LPVOID *)&CPlayerSF_ConvertMonsterTarget436_next,
                (LPVOID)cast_pointer_function(CPlayerSF_ConvertMonsterTarget436_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CCharacter*, float))&CPlayer::SF_ConvertMonsterTarget)
            },
            _hook_record {
                (LPVOID)0x1400a0720L,
                (LPVOID *)&CPlayerSF_ConvertTargetDest438_user,
                (LPVOID *)&CPlayerSF_ConvertTargetDest438_next,
                (LPVOID)cast_pointer_function(CPlayerSF_ConvertTargetDest438_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CCharacter*, float))&CPlayer::SF_ConvertTargetDest)
            },
            _hook_record {
                (LPVOID)0x14009fcc0L,
                (LPVOID *)&CPlayerSF_DamageAndStun440_user,
                (LPVOID *)&CPlayerSF_DamageAndStun440_next,
                (LPVOID)cast_pointer_function(CPlayerSF_DamageAndStun440_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CCharacter*, float))&CPlayer::SF_DamageAndStun)
            },
            _hook_record {
                (LPVOID)0x14009fc10L,
                (LPVOID *)&CPlayerSF_FPDec442_user,
                (LPVOID *)&CPlayerSF_FPDec442_next,
                (LPVOID)cast_pointer_function(CPlayerSF_FPDec442_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CCharacter*, float))&CPlayer::SF_FPDec)
            },
            _hook_record {
                (LPVOID)0x1400a3c60L,
                (LPVOID *)&CPlayerSF_HFSInc_Once444_user,
                (LPVOID *)&CPlayerSF_HFSInc_Once444_next,
                (LPVOID)cast_pointer_function(CPlayerSF_HFSInc_Once444_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CCharacter*))&CPlayer::SF_HFSInc_Once)
            },
            _hook_record {
                (LPVOID)0x14009de60L,
                (LPVOID *)&CPlayerSF_HPInc_Once446_user,
                (LPVOID *)&CPlayerSF_HPInc_Once446_next,
                (LPVOID)cast_pointer_function(CPlayerSF_HPInc_Once446_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CCharacter*, float))&CPlayer::SF_HPInc_Once)
            },
            _hook_record {
                (LPVOID)0x14009f820L,
                (LPVOID *)&CPlayerSF_IncHPCircleParty448_user,
                (LPVOID *)&CPlayerSF_IncHPCircleParty448_next,
                (LPVOID)cast_pointer_function(CPlayerSF_IncHPCircleParty448_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CCharacter*, float))&CPlayer::SF_IncHPCircleParty)
            },
            _hook_record {
                (LPVOID)0x1400a0670L,
                (LPVOID *)&CPlayerSF_IncreaseDP450_user,
                (LPVOID *)&CPlayerSF_IncreaseDP450_next,
                (LPVOID)cast_pointer_function(CPlayerSF_IncreaseDP450_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CCharacter*, float))&CPlayer::SF_IncreaseDP)
            },
            _hook_record {
                (LPVOID)0x14009e6a0L,
                (LPVOID *)&CPlayerSF_LateContDamageRemove_Once452_user,
                (LPVOID *)&CPlayerSF_LateContDamageRemove_Once452_next,
                (LPVOID)cast_pointer_function(CPlayerSF_LateContDamageRemove_Once452_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CCharacter*))&CPlayer::SF_LateContDamageRemove_Once)
            },
            _hook_record {
                (LPVOID)0x14009e550L,
                (LPVOID *)&CPlayerSF_LateContHelpForceRemove_Once454_user,
                (LPVOID *)&CPlayerSF_LateContHelpForceRemove_Once454_next,
                (LPVOID)cast_pointer_function(CPlayerSF_LateContHelpForceRemove_Once454_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CCharacter*))&CPlayer::SF_LateContHelpForceRemove_Once)
            },
            _hook_record {
                (LPVOID)0x14009e400L,
                (LPVOID *)&CPlayerSF_LateContHelpSkillRemove_Once456_user,
                (LPVOID *)&CPlayerSF_LateContHelpSkillRemove_Once456_next,
                (LPVOID)cast_pointer_function(CPlayerSF_LateContHelpSkillRemove_Once456_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CCharacter*))&CPlayer::SF_LateContHelpSkillRemove_Once)
            },
            _hook_record {
                (LPVOID)0x1400a00e0L,
                (LPVOID *)&CPlayerSF_MakePortalReturnBindPositionPartyMember458_user,
                (LPVOID *)&CPlayerSF_MakePortalReturnBindPositionPartyMember458_next,
                (LPVOID)cast_pointer_function(CPlayerSF_MakePortalReturnBindPositionPartyMember458_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CCharacter*, float, char*))&CPlayer::SF_MakePortalReturnBindPositionPartyMember)
            },
            _hook_record {
                (LPVOID)0x1400a0920L,
                (LPVOID *)&CPlayerSF_MakeZeroAnimusRecallTimeOnce460_user,
                (LPVOID *)&CPlayerSF_MakeZeroAnimusRecallTimeOnce460_next,
                (LPVOID)cast_pointer_function(CPlayerSF_MakeZeroAnimusRecallTimeOnce460_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CCharacter*, float))&CPlayer::SF_MakeZeroAnimusRecallTimeOnce)
            },
            _hook_record {
                (LPVOID)0x14009eba0L,
                (LPVOID *)&CPlayerSF_OthersContHelpSFRemove_Once462_user,
                (LPVOID *)&CPlayerSF_OthersContHelpSFRemove_Once462_next,
                (LPVOID)cast_pointer_function(CPlayerSF_OthersContHelpSFRemove_Once462_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(float))&CPlayer::SF_OthersContHelpSFRemove_Once)
            },
            _hook_record {
                (LPVOID)0x14009e2c0L,
                (LPVOID *)&CPlayerSF_OverHealing_Once464_user,
                (LPVOID *)&CPlayerSF_OverHealing_Once464_next,
                (LPVOID)cast_pointer_function(CPlayerSF_OverHealing_Once464_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CCharacter*, float))&CPlayer::SF_OverHealing_Once)
            },
            _hook_record {
                (LPVOID)0x1400a0790L,
                (LPVOID *)&CPlayerSF_RecoverAllReturnStateAnimusHPFull466_user,
                (LPVOID *)&CPlayerSF_RecoverAllReturnStateAnimusHPFull466_next,
                (LPVOID)cast_pointer_function(CPlayerSF_RecoverAllReturnStateAnimusHPFull466_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CCharacter*, float))&CPlayer::SF_RecoverAllReturnStateAnimusHPFull)
            },
            _hook_record {
                (LPVOID)0x14009f610L,
                (LPVOID *)&CPlayerSF_ReleaseMonsterTarget468_user,
                (LPVOID *)&CPlayerSF_ReleaseMonsterTarget468_next,
                (LPVOID)cast_pointer_function(CPlayerSF_ReleaseMonsterTarget468_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CCharacter*, float))&CPlayer::SF_ReleaseMonsterTarget)
            },
            _hook_record {
                (LPVOID)0x14009ff50L,
                (LPVOID *)&CPlayerSF_RemoveAllContHelp_Once470_user,
                (LPVOID *)&CPlayerSF_RemoveAllContHelp_Once470_next,
                (LPVOID)cast_pointer_function(CPlayerSF_RemoveAllContHelp_Once470_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CCharacter*, float))&CPlayer::SF_RemoveAllContHelp_Once)
            },
            _hook_record {
                (LPVOID)0x14009dde0L,
                (LPVOID *)&CPlayerSF_Resurrect_Once472_user,
                (LPVOID *)&CPlayerSF_Resurrect_Once472_next,
                (LPVOID)cast_pointer_function(CPlayerSF_Resurrect_Once472_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CCharacter*))&CPlayer::SF_Resurrect_Once)
            },
            _hook_record {
                (LPVOID)0x1400a0590L,
                (LPVOID *)&CPlayerSF_ReturnBindPosition474_user,
                (LPVOID *)&CPlayerSF_ReturnBindPosition474_next,
                (LPVOID)cast_pointer_function(CPlayerSF_ReturnBindPosition474_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CCharacter*, float))&CPlayer::SF_ReturnBindPosition)
            },
            _hook_record {
                (LPVOID)0x14009fb60L,
                (LPVOID *)&CPlayerSF_SPDec476_user,
                (LPVOID *)&CPlayerSF_SPDec476_next,
                (LPVOID)cast_pointer_function(CPlayerSF_SPDec476_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CCharacter*, float))&CPlayer::SF_SPDec)
            },
            _hook_record {
                (LPVOID)0x14009dfa0L,
                (LPVOID *)&CPlayerSF_STInc_Once478_user,
                (LPVOID *)&CPlayerSF_STInc_Once478_next,
                (LPVOID)cast_pointer_function(CPlayerSF_STInc_Once478_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CCharacter*, float))&CPlayer::SF_STInc_Once)
            },
            _hook_record {
                (LPVOID)0x1400a0990L,
                (LPVOID *)&CPlayerSF_SelfDestruction480_user,
                (LPVOID *)&CPlayerSF_SelfDestruction480_next,
                (LPVOID)cast_pointer_function(CPlayerSF_SelfDestruction480_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CCharacter*, float))&CPlayer::SF_SelfDestruction)
            },
            _hook_record {
                (LPVOID)0x14009ee20L,
                (LPVOID *)&CPlayerSF_SkillContHelpTimeInc_Once482_user,
                (LPVOID *)&CPlayerSF_SkillContHelpTimeInc_Once482_next,
                (LPVOID)cast_pointer_function(CPlayerSF_SkillContHelpTimeInc_Once482_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CCharacter*, float))&CPlayer::SF_SkillContHelpTimeInc_Once)
            },
            _hook_record {
                (LPVOID)0x14009fad0L,
                (LPVOID *)&CPlayerSF_Stun484_user,
                (LPVOID *)&CPlayerSF_Stun484_next,
                (LPVOID)cast_pointer_function(CPlayerSF_Stun484_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CCharacter*, float))&CPlayer::SF_Stun)
            },
            _hook_record {
                (LPVOID)0x1400a0a10L,
                (LPVOID *)&CPlayerSF_TeleportToDestination486_user,
                (LPVOID *)&CPlayerSF_TeleportToDestination486_next,
                (LPVOID)cast_pointer_function(CPlayerSF_TeleportToDestination486_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CCharacter*, bool))&CPlayer::SF_TeleportToDestination)
            },
            _hook_record {
                (LPVOID)0x14009fd50L,
                (LPVOID *)&CPlayerSF_TransDestHP488_user,
                (LPVOID *)&CPlayerSF_TransDestHP488_next,
                (LPVOID)cast_pointer_function(CPlayerSF_TransDestHP488_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CCharacter*, float, char*))&CPlayer::SF_TransDestHP)
            },
            _hook_record {
                (LPVOID)0x14009f260L,
                (LPVOID *)&CPlayerSF_TransMonsterHP490_user,
                (LPVOID *)&CPlayerSF_TransMonsterHP490_next,
                (LPVOID)cast_pointer_function(CPlayerSF_TransMonsterHP490_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CCharacter*, float))&CPlayer::SF_TransMonsterHP)
            },
            _hook_record {
                (LPVOID)0x1400dcab0L,
                (LPVOID *)&CPlayerSendData_ChatTrans492_user,
                (LPVOID *)&CPlayerSendData_ChatTrans492_next,
                (LPVOID)cast_pointer_function(CPlayerSendData_ChatTrans492_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, unsigned int, char, bool, char*, char, char*))&CPlayer::SendData_ChatTrans)
            },
            _hook_record {
                (LPVOID)0x1400de2a0L,
                (LPVOID *)&CPlayerSendData_PartyMemberEffect494_user,
                (LPVOID *)&CPlayerSendData_PartyMemberEffect494_next,
                (LPVOID)cast_pointer_function(CPlayerSendData_PartyMemberEffect494_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, uint16_t, char))&CPlayer::SendData_PartyMemberEffect)
            },
            _hook_record {
                (LPVOID)0x1400ddbb0L,
                (LPVOID *)&CPlayerSendData_PartyMemberFP496_user,
                (LPVOID *)&CPlayerSendData_PartyMemberFP496_next,
                (LPVOID)cast_pointer_function(CPlayerSendData_PartyMemberFP496_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendData_PartyMemberFP)
            },
            _hook_record {
                (LPVOID)0x1400dda70L,
                (LPVOID *)&CPlayerSendData_PartyMemberHP498_user,
                (LPVOID *)&CPlayerSendData_PartyMemberHP498_next,
                (LPVOID)cast_pointer_function(CPlayerSendData_PartyMemberHP498_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendData_PartyMemberHP)
            },
            _hook_record {
                (LPVOID)0x1400dd7e0L,
                (LPVOID *)&CPlayerSendData_PartyMemberInfo500_user,
                (LPVOID *)&CPlayerSendData_PartyMemberInfo500_next,
                (LPVOID)cast_pointer_function(CPlayerSendData_PartyMemberInfo500_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t))&CPlayer::SendData_PartyMemberInfo)
            },
            _hook_record {
                (LPVOID)0x1400dd4a0L,
                (LPVOID *)&CPlayerSendData_PartyMemberInfoToMembers502_user,
                (LPVOID *)&CPlayerSendData_PartyMemberInfoToMembers502_next,
                (LPVOID)cast_pointer_function(CPlayerSendData_PartyMemberInfoToMembers502_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendData_PartyMemberInfoToMembers)
            },
            _hook_record {
                (LPVOID)0x1400dde30L,
                (LPVOID *)&CPlayerSendData_PartyMemberLv504_user,
                (LPVOID *)&CPlayerSendData_PartyMemberLv504_next,
                (LPVOID)cast_pointer_function(CPlayerSendData_PartyMemberLv504_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendData_PartyMemberLv)
            },
            _hook_record {
                (LPVOID)0x1400de120L,
                (LPVOID *)&CPlayerSendData_PartyMemberMaxHFSP506_user,
                (LPVOID *)&CPlayerSendData_PartyMemberMaxHFSP506_next,
                (LPVOID)cast_pointer_function(CPlayerSendData_PartyMemberMaxHFSP506_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendData_PartyMemberMaxHFSP)
            },
            _hook_record {
                (LPVOID)0x1400ddf80L,
                (LPVOID *)&CPlayerSendData_PartyMemberPos508_user,
                (LPVOID *)&CPlayerSendData_PartyMemberPos508_next,
                (LPVOID)cast_pointer_function(CPlayerSendData_PartyMemberPos508_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendData_PartyMemberPos)
            },
            _hook_record {
                (LPVOID)0x1400ddcf0L,
                (LPVOID *)&CPlayerSendData_PartyMemberSP510_user,
                (LPVOID *)&CPlayerSendData_PartyMemberSP510_next,
                (LPVOID)cast_pointer_function(CPlayerSendData_PartyMemberSP510_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendData_PartyMemberSP)
            },
            _hook_record {
                (LPVOID)0x1400d91a0L,
                (LPVOID *)&CPlayerSendMsg_AMPInvenDownloadResult512_user,
                (LPVOID *)&CPlayerSendMsg_AMPInvenDownloadResult512_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AMPInvenDownloadResult512_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_AMPInvenDownloadResult)
            },
            _hook_record {
                (LPVOID)0x1400dc320L,
                (LPVOID *)&CPlayerSendMsg_AddBagResult514_user,
                (LPVOID *)&CPlayerSendMsg_AddBagResult514_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AddBagResult514_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_AddBagResult)
            },
            _hook_record {
                (LPVOID)0x1400e0a80L,
                (LPVOID *)&CPlayerSendMsg_AddEffect516_user,
                (LPVOID *)&CPlayerSendMsg_AddEffect516_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AddEffect516_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t, char, uint16_t, unsigned int, char*))&CPlayer::SendMsg_AddEffect)
            },
            _hook_record {
                (LPVOID)0x1400dc450L,
                (LPVOID *)&CPlayerSendMsg_AdjustAmountInform518_user,
                (LPVOID *)&CPlayerSendMsg_AdjustAmountInform518_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AdjustAmountInform518_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, uint16_t, unsigned int))&CPlayer::SendMsg_AdjustAmountInform)
            },
            _hook_record {
                (LPVOID)0x1400d6630L,
                (LPVOID *)&CPlayerSendMsg_AlterBooster520_user,
                (LPVOID *)&CPlayerSendMsg_AlterBooster520_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AlterBooster520_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_AlterBooster)
            },
            _hook_record {
                (LPVOID)0x1400e07f0L,
                (LPVOID *)&CPlayerSendMsg_AlterContEffectTime522_user,
                (LPVOID *)&CPlayerSendMsg_AlterContEffectTime522_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AlterContEffectTime522_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_AlterContEffectTime)
            },
            _hook_record {
                (LPVOID)0x1400dee10L,
                (LPVOID *)&CPlayerSendMsg_AlterEquipSPInform524_user,
                (LPVOID *)&CPlayerSendMsg_AlterEquipSPInform524_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AlterEquipSPInform524_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_AlterEquipSPInform)
            },
            _hook_record {
                (LPVOID)0x1400de5b0L,
                (LPVOID *)&CPlayerSendMsg_AlterExpInform526_user,
                (LPVOID *)&CPlayerSendMsg_AlterExpInform526_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AlterExpInform526_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_AlterExpInform)
            },
            _hook_record {
                (LPVOID)0x1400def40L,
                (LPVOID *)&CPlayerSendMsg_AlterGradeInform528_user,
                (LPVOID *)&CPlayerSendMsg_AlterGradeInform528_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AlterGradeInform528_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_AlterGradeInform)
            },
            _hook_record {
                (LPVOID)0x1400deea0L,
                (LPVOID *)&CPlayerSendMsg_AlterHPInform530_user,
                (LPVOID *)&CPlayerSendMsg_AlterHPInform530_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AlterHPInform530_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_AlterHPInform)
            },
            _hook_record {
                (LPVOID)0x1400de7a0L,
                (LPVOID *)&CPlayerSendMsg_AlterItemDurInform532_user,
                (LPVOID *)&CPlayerSendMsg_AlterItemDurInform532_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AlterItemDurInform532_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, uint16_t, uint64_t))&CPlayer::SendMsg_AlterItemDurInform)
            },
            _hook_record {
                (LPVOID)0x1400df280L,
                (LPVOID *)&CPlayerSendMsg_AlterMaxDP534_user,
                (LPVOID *)&CPlayerSendMsg_AlterMaxDP534_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AlterMaxDP534_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_AlterMaxDP)
            },
            _hook_record {
                (LPVOID)0x1400df070L,
                (LPVOID *)&CPlayerSendMsg_AlterMoneyInform536_user,
                (LPVOID *)&CPlayerSendMsg_AlterMoneyInform536_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AlterMoneyInform536_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_AlterMoneyInform)
            },
            _hook_record {
                (LPVOID)0x1400decd0L,
                (LPVOID *)&CPlayerSendMsg_AlterPvPCash538_user,
                (LPVOID *)&CPlayerSendMsg_AlterPvPCash538_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AlterPvPCash538_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(int))&CPlayer::SendMsg_AlterPvPCash)
            },
            _hook_record {
                (LPVOID)0x1400dec30L,
                (LPVOID *)&CPlayerSendMsg_AlterPvPPoint540_user,
                (LPVOID *)&CPlayerSendMsg_AlterPvPPoint540_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AlterPvPPoint540_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_AlterPvPPoint)
            },
            _hook_record {
                (LPVOID)0x1400defd0L,
                (LPVOID *)&CPlayerSendMsg_AlterPvPRank542_user,
                (LPVOID *)&CPlayerSendMsg_AlterPvPRank542_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AlterPvPRank542_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t, unsigned int))&CPlayer::SendMsg_AlterPvPRank)
            },
            _hook_record {
                (LPVOID)0x1400d7030L,
                (LPVOID *)&CPlayerSendMsg_AlterRegionInform544_user,
                (LPVOID *)&CPlayerSendMsg_AlterRegionInform544_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AlterRegionInform544_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(int))&CPlayer::SendMsg_AlterRegionInform)
            },
            _hook_record {
                (LPVOID)0x1400ded80L,
                (LPVOID *)&CPlayerSendMsg_AlterSPInform546_user,
                (LPVOID *)&CPlayerSendMsg_AlterSPInform546_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AlterSPInform546_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_AlterSPInform)
            },
            _hook_record {
                (LPVOID)0x1400df130L,
                (LPVOID *)&CPlayerSendMsg_AlterTol548_user,
                (LPVOID *)&CPlayerSendMsg_AlterTol548_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AlterTol548_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_AlterTol)
            },
            _hook_record {
                (LPVOID)0x1400e0750L,
                (LPVOID *)&CPlayerSendMsg_AlterTowerHP550_user,
                (LPVOID *)&CPlayerSendMsg_AlterTowerHP550_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AlterTowerHP550_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t, uint16_t))&CPlayer::SendMsg_AlterTowerHP)
            },
            _hook_record {
                (LPVOID)0x1400d6fa0L,
                (LPVOID *)&CPlayerSendMsg_AlterTownOrField552_user,
                (LPVOID *)&CPlayerSendMsg_AlterTownOrField552_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AlterTownOrField552_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_AlterTownOrField)
            },
            _hook_record {
                (LPVOID)0x1400deb90L,
                (LPVOID *)&CPlayerSendMsg_AlterUnitBulletInform554_user,
                (LPVOID *)&CPlayerSendMsg_AlterUnitBulletInform554_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AlterUnitBulletInform554_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, uint16_t))&CPlayer::SendMsg_AlterUnitBulletInform)
            },
            _hook_record {
                (LPVOID)0x1400db830L,
                (LPVOID *)&CPlayerSendMsg_AlterUnitHPInform556_user,
                (LPVOID *)&CPlayerSendMsg_AlterUnitHPInform556_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AlterUnitHPInform556_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, unsigned int))&CPlayer::SendMsg_AlterUnitHPInform)
            },
            _hook_record {
                (LPVOID)0x1400deaf0L,
                (LPVOID *)&CPlayerSendMsg_AlterWeaponBulletInform558_user,
                (LPVOID *)&CPlayerSendMsg_AlterWeaponBulletInform558_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AlterWeaponBulletInform558_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t, uint16_t))&CPlayer::SendMsg_AlterWeaponBulletInform)
            },
            _hook_record {
                (LPVOID)0x1400e8e60L,
                (LPVOID *)&CPlayerSendMsg_Alter_Action_Point560_user,
                (LPVOID *)&CPlayerSendMsg_Alter_Action_Point560_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_Alter_Action_Point560_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, unsigned int))&CPlayer::SendMsg_Alter_Action_Point)
            },
            _hook_record {
                (LPVOID)0x1400dbcc0L,
                (LPVOID *)&CPlayerSendMsg_AnimusExpInform562_user,
                (LPVOID *)&CPlayerSendMsg_AnimusExpInform562_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AnimusExpInform562_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_AnimusExpInform)
            },
            _hook_record {
                (LPVOID)0x1400dbbf0L,
                (LPVOID *)&CPlayerSendMsg_AnimusFPInform564_user,
                (LPVOID *)&CPlayerSendMsg_AnimusFPInform564_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AnimusFPInform564_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_AnimusFPInform)
            },
            _hook_record {
                (LPVOID)0x1400dbb20L,
                (LPVOID *)&CPlayerSendMsg_AnimusHPInform566_user,
                (LPVOID *)&CPlayerSendMsg_AnimusHPInform566_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AnimusHPInform566_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_AnimusHPInform)
            },
            _hook_record {
                (LPVOID)0x1400dc0b0L,
                (LPVOID *)&CPlayerSendMsg_AnimusInvenChange568_user,
                (LPVOID *)&CPlayerSendMsg_AnimusInvenChange568_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AnimusInvenChange568_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_AnimusInvenChange)
            },
            _hook_record {
                (LPVOID)0x1400dbda0L,
                (LPVOID *)&CPlayerSendMsg_AnimusModeInform570_user,
                (LPVOID *)&CPlayerSendMsg_AnimusModeInform570_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AnimusModeInform570_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_AnimusModeInform)
            },
            _hook_record {
                (LPVOID)0x1400db8d0L,
                (LPVOID *)&CPlayerSendMsg_AnimusRecallResult572_user,
                (LPVOID *)&CPlayerSendMsg_AnimusRecallResult572_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AnimusRecallResult572_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, uint16_t, struct CAnimus*))&CPlayer::SendMsg_AnimusRecallResult)
            },
            _hook_record {
                (LPVOID)0x1400dbe30L,
                (LPVOID *)&CPlayerSendMsg_AnimusRecallWaitTimeFree574_user,
                (LPVOID *)&CPlayerSendMsg_AnimusRecallWaitTimeFree574_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AnimusRecallWaitTimeFree574_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(bool))&CPlayer::SendMsg_AnimusRecallWaitTimeFree)
            },
            _hook_record {
                (LPVOID)0x1400db9e0L,
                (LPVOID *)&CPlayerSendMsg_AnimusReturnResult576_user,
                (LPVOID *)&CPlayerSendMsg_AnimusReturnResult576_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AnimusReturnResult576_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, uint16_t, char))&CPlayer::SendMsg_AnimusReturnResult)
            },
            _hook_record {
                (LPVOID)0x1400dba90L,
                (LPVOID *)&CPlayerSendMsg_AnimusTargetResult578_user,
                (LPVOID *)&CPlayerSendMsg_AnimusTargetResult578_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AnimusTargetResult578_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_AnimusTargetResult)
            },
            _hook_record {
                (LPVOID)0x1400e9460L,
                (LPVOID *)&CPlayerSendMsg_ApexInform580_user,
                (LPVOID *)&CPlayerSendMsg_ApexInform580_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_ApexInform580_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int, char*))&CPlayer::SendMsg_ApexInform)
            },
            _hook_record {
                (LPVOID)0x1400d4bb0L,
                (LPVOID *)&CPlayerSendMsg_AttackResult_Count582_user,
                (LPVOID *)&CPlayerSendMsg_AttackResult_Count582_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AttackResult_Count582_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CAttack*))&CPlayer::SendMsg_AttackResult_Count)
            },
            _hook_record {
                (LPVOID)0x1400d4210L,
                (LPVOID *)&CPlayerSendMsg_AttackResult_Error584_user,
                (LPVOID *)&CPlayerSendMsg_AttackResult_Error584_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AttackResult_Error584_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(int))&CPlayer::SendMsg_AttackResult_Error)
            },
            _hook_record {
                (LPVOID)0x1400d4760L,
                (LPVOID *)&CPlayerSendMsg_AttackResult_Force586_user,
                (LPVOID *)&CPlayerSendMsg_AttackResult_Force586_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AttackResult_Force586_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CAttack*))&CPlayer::SendMsg_AttackResult_Force)
            },
            _hook_record {
                (LPVOID)0x1400d42a0L,
                (LPVOID *)&CPlayerSendMsg_AttackResult_Gen588_user,
                (LPVOID *)&CPlayerSendMsg_AttackResult_Gen588_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AttackResult_Gen588_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CAttack*, uint16_t))&CPlayer::SendMsg_AttackResult_Gen)
            },
            _hook_record {
                (LPVOID)0x1400d4db0L,
                (LPVOID *)&CPlayerSendMsg_AttackResult_SelfDestruction590_user,
                (LPVOID *)&CPlayerSendMsg_AttackResult_SelfDestruction590_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AttackResult_SelfDestruction590_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CAttack*))&CPlayer::SendMsg_AttackResult_SelfDestruction)
            },
            _hook_record {
                (LPVOID)0x1400d5080L,
                (LPVOID *)&CPlayerSendMsg_AttackResult_Siege592_user,
                (LPVOID *)&CPlayerSendMsg_AttackResult_Siege592_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AttackResult_Siege592_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CAttack*, uint16_t))&CPlayer::SendMsg_AttackResult_Siege)
            },
            _hook_record {
                (LPVOID)0x1400d44c0L,
                (LPVOID *)&CPlayerSendMsg_AttackResult_Skill594_user,
                (LPVOID *)&CPlayerSendMsg_AttackResult_Skill594_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AttackResult_Skill594_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, struct CPlayerAttack*, uint16_t))&CPlayer::SendMsg_AttackResult_Skill)
            },
            _hook_record {
                (LPVOID)0x1400d49e0L,
                (LPVOID *)&CPlayerSendMsg_AttackResult_Unit596_user,
                (LPVOID *)&CPlayerSendMsg_AttackResult_Unit596_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AttackResult_Unit596_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CAttack*, char, uint16_t))&CPlayer::SendMsg_AttackResult_Unit)
            },
            _hook_record {
                (LPVOID)0x1400e7160L,
                (LPVOID *)&CPlayerSendMsg_AwayPartyInvitationQuestion598_user,
                (LPVOID *)&CPlayerSendMsg_AwayPartyInvitationQuestion598_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AwayPartyInvitationQuestion598_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t))&CPlayer::SendMsg_AwayPartyInvitationQuestion)
            },
            _hook_record {
                (LPVOID)0x1400e70d0L,
                (LPVOID *)&CPlayerSendMsg_AwayPartyRequestResult600_user,
                (LPVOID *)&CPlayerSendMsg_AwayPartyRequestResult600_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_AwayPartyRequestResult600_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_AwayPartyRequestResult)
            },
            _hook_record {
                (LPVOID)0x1400e06a0L,
                (LPVOID *)&CPlayerSendMsg_BackTowerResult602_user,
                (LPVOID *)&CPlayerSendMsg_BackTowerResult602_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_BackTowerResult602_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, uint16_t, uint16_t))&CPlayer::SendMsg_BackTowerResult)
            },
            _hook_record {
                (LPVOID)0x1400e0f80L,
                (LPVOID *)&CPlayerSendMsg_BackTrapResult604_user,
                (LPVOID *)&CPlayerSendMsg_BackTrapResult604_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_BackTrapResult604_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_BackTrapResult)
            },
            _hook_record {
                (LPVOID)0x1400d8820L,
                (LPVOID *)&CPlayerSendMsg_BaseDownloadResult606_user,
                (LPVOID *)&CPlayerSendMsg_BaseDownloadResult606_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_BaseDownloadResult606_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_BaseDownloadResult)
            },
            _hook_record {
                (LPVOID)0x1400e4730L,
                (LPVOID *)&CPlayerSendMsg_BillingExipreInform608_user,
                (LPVOID *)&CPlayerSendMsg_BillingExipreInform608_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_BillingExipreInform608_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, uint16_t))&CPlayer::SendMsg_BillingExipreInform)
            },
            _hook_record {
                (LPVOID)0x1400e4640L,
                (LPVOID *)&CPlayerSendMsg_BillingTypeChangeInform610_user,
                (LPVOID *)&CPlayerSendMsg_BillingTypeChangeInform610_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_BillingTypeChangeInform610_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(int16_t, int, struct _SYSTEMTIME*, char))&CPlayer::SendMsg_BillingTypeChangeInform)
            },
            _hook_record {
                (LPVOID)0x1400dbf50L,
                (LPVOID *)&CPlayerSendMsg_BreakdownEquipItem612_user,
                (LPVOID *)&CPlayerSendMsg_BreakdownEquipItem612_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_BreakdownEquipItem612_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, uint16_t))&CPlayer::SendMsg_BreakdownEquipItem)
            },
            _hook_record {
                (LPVOID)0x1400e7c20L,
                (LPVOID *)&CPlayerSendMsg_BuddhaEventMsg614_user,
                (LPVOID *)&CPlayerSendMsg_BuddhaEventMsg614_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_BuddhaEventMsg614_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_BuddhaEventMsg)
            },
            _hook_record {
                (LPVOID)0x1400e4ac0L,
                (LPVOID *)&CPlayerSendMsg_BuddyAddAnswerResult616_user,
                (LPVOID *)&CPlayerSendMsg_BuddyAddAnswerResult616_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_BuddyAddAnswerResult616_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, bool, unsigned int, uint16_t, unsigned int, char*))&CPlayer::SendMsg_BuddyAddAnswerResult)
            },
            _hook_record {
                (LPVOID)0x1400e4910L,
                (LPVOID *)&CPlayerSendMsg_BuddyAddAsk618_user,
                (LPVOID *)&CPlayerSendMsg_BuddyAddAsk618_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_BuddyAddAsk618_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t, unsigned int, char*))&CPlayer::SendMsg_BuddyAddAsk)
            },
            _hook_record {
                (LPVOID)0x1400e49f0L,
                (LPVOID *)&CPlayerSendMsg_BuddyAddFail620_user,
                (LPVOID *)&CPlayerSendMsg_BuddyAddFail620_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_BuddyAddFail620_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char*))&CPlayer::SendMsg_BuddyAddFail)
            },
            _hook_record {
                (LPVOID)0x1400e4bd0L,
                (LPVOID *)&CPlayerSendMsg_BuddyDelResult622_user,
                (LPVOID *)&CPlayerSendMsg_BuddyDelResult622_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_BuddyDelResult622_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, unsigned int))&CPlayer::SendMsg_BuddyDelResult)
            },
            _hook_record {
                (LPVOID)0x1400e47d0L,
                (LPVOID *)&CPlayerSendMsg_BuddyLoginInform624_user,
                (LPVOID *)&CPlayerSendMsg_BuddyLoginInform624_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_BuddyLoginInform624_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int, char, char))&CPlayer::SendMsg_BuddyLoginInform)
            },
            _hook_record {
                (LPVOID)0x1400e4880L,
                (LPVOID *)&CPlayerSendMsg_BuddyLogoffInform626_user,
                (LPVOID *)&CPlayerSendMsg_BuddyLogoffInform626_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_BuddyLogoffInform626_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int))&CPlayer::SendMsg_BuddyLogoffInform)
            },
            _hook_record {
                (LPVOID)0x1400e8500L,
                (LPVOID *)&CPlayerSendMsg_BuddyNameReNewal628_user,
                (LPVOID *)&CPlayerSendMsg_BuddyNameReNewal628_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_BuddyNameReNewal628_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int, char*))&CPlayer::SendMsg_BuddyNameReNewal)
            },
            _hook_record {
                (LPVOID)0x1400e4c70L,
                (LPVOID *)&CPlayerSendMsg_BuddyPosInform630_user,
                (LPVOID *)&CPlayerSendMsg_BuddyPosInform630_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_BuddyPosInform630_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int, char, char))&CPlayer::SendMsg_BuddyPosInform)
            },
            _hook_record {
                (LPVOID)0x1400e96a0L,
                (LPVOID *)&CPlayerSendMsg_BuyCashItemMode632_user,
                (LPVOID *)&CPlayerSendMsg_BuyCashItemMode632_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_BuyCashItemMode632_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_BuyCashItemMode)
            },
            _hook_record {
                (LPVOID)0x1400d70c0L,
                (LPVOID *)&CPlayerSendMsg_BuyItemStoreResult634_user,
                (LPVOID *)&CPlayerSendMsg_BuyItemStoreResult634_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_BuyItemStoreResult634_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CItemStore*, int, struct _buy_offer*, char))&CPlayer::SendMsg_BuyItemStoreResult)
            },
            _hook_record {
                (LPVOID)0x1400e3ed0L,
                (LPVOID *)&CPlayerSendMsg_CancelSuggestResult636_user,
                (LPVOID *)&CPlayerSendMsg_CancelSuggestResult636_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_CancelSuggestResult636_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_CancelSuggestResult)
            },
            _hook_record {
                (LPVOID)0x1400e2d90L,
                (LPVOID *)&CPlayerSendMsg_CastVoteResult638_user,
                (LPVOID *)&CPlayerSendMsg_CastVoteResult638_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_CastVoteResult638_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_CastVoteResult)
            },
            _hook_record {
                (LPVOID)0x1400de860L,
                (LPVOID *)&CPlayerSendMsg_ChangeClassCommand640_user,
                (LPVOID *)&CPlayerSendMsg_ChangeClassCommand640_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_ChangeClassCommand640_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_ChangeClassCommand)
            },
            _hook_record {
                (LPVOID)0x1400e8460L,
                (LPVOID *)&CPlayerSendMsg_CharacterRenameCashResult642_user,
                (LPVOID *)&CPlayerSendMsg_CharacterRenameCashResult642_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_CharacterRenameCashResult642_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(bool, char))&CPlayer::SendMsg_CharacterRenameCashResult)
            },
            _hook_record {
                (LPVOID)0x1400dcc30L,
                (LPVOID *)&CPlayerSendMsg_ChatFarFailure644_user,
                (LPVOID *)&CPlayerSendMsg_ChatFarFailure644_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_ChatFarFailure644_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(bool))&CPlayer::SendMsg_ChatFarFailure)
            },
            _hook_record {
                (LPVOID)0x1400e0ca0L,
                (LPVOID *)&CPlayerSendMsg_Circle_DelEffect646_user,
                (LPVOID *)&CPlayerSendMsg_Circle_DelEffect646_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_Circle_DelEffect646_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, uint16_t, char, bool))&CPlayer::SendMsg_Circle_DelEffect)
            },
            _hook_record {
                (LPVOID)0x1400dfb00L,
                (LPVOID *)&CPlayerSendMsg_ClassSkillResult648_user,
                (LPVOID *)&CPlayerSendMsg_ClassSkillResult648_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_ClassSkillResult648_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, struct _CHRID*, uint16_t))&CPlayer::SendMsg_ClassSkillResult)
            },
            _hook_record {
                (LPVOID)0x1400da9f0L,
                (LPVOID *)&CPlayerSendMsg_ClearDarkHole650_user,
                (LPVOID *)&CPlayerSendMsg_ClearDarkHole650_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_ClearDarkHole650_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_ClearDarkHole)
            },
            _hook_record {
                (LPVOID)0x1400d82d0L,
                (LPVOID *)&CPlayerSendMsg_CombineItemExAcceptResult652_user,
                (LPVOID *)&CPlayerSendMsg_CombineItemExAcceptResult652_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_CombineItemExAcceptResult652_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _combine_ex_item_accept_result_zocl*))&CPlayer::SendMsg_CombineItemExAcceptResult)
            },
            _hook_record {
                (LPVOID)0x1400d8250L,
                (LPVOID *)&CPlayerSendMsg_CombineItemExResult654_user,
                (LPVOID *)&CPlayerSendMsg_CombineItemExResult654_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_CombineItemExResult654_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _combine_ex_item_result_zocl*))&CPlayer::SendMsg_CombineItemExResult)
            },
            _hook_record {
                (LPVOID)0x1400d8000L,
                (LPVOID *)&CPlayerSendMsg_CombineItemResult656_user,
                (LPVOID *)&CPlayerSendMsg_CombineItemResult656_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_CombineItemResult656_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, unsigned int, struct _STORAGE_LIST::_db_con*))&CPlayer::SendMsg_CombineItemResult)
            },
            _hook_record {
                (LPVOID)0x1400d8100L,
                (LPVOID *)&CPlayerSendMsg_CombineLendItemResult658_user,
                (LPVOID *)&CPlayerSendMsg_CombineLendItemResult658_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_CombineLendItemResult658_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, unsigned int, struct _STORAGE_LIST::_db_con*))&CPlayer::SendMsg_CombineLendItemResult)
            },
            _hook_record {
                (LPVOID)0x1400e05f0L,
                (LPVOID *)&CPlayerSendMsg_CreateTowerResult660_user,
                (LPVOID *)&CPlayerSendMsg_CreateTowerResult660_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_CreateTowerResult660_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, unsigned int))&CPlayer::SendMsg_CreateTowerResult)
            },
            _hook_record {
                (LPVOID)0x1400e0d70L,
                (LPVOID *)&CPlayerSendMsg_CreateTrapResult662_user,
                (LPVOID *)&CPlayerSendMsg_CreateTrapResult662_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_CreateTrapResult662_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, unsigned int))&CPlayer::SendMsg_CreateTrapResult)
            },
            _hook_record {
                (LPVOID)0x1400d9360L,
                (LPVOID *)&CPlayerSendMsg_CumDownloadResult664_user,
                (LPVOID *)&CPlayerSendMsg_CumDownloadResult664_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_CumDownloadResult664_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_CumDownloadResult)
            },
            _hook_record {
                (LPVOID)0x1400dca10L,
                (LPVOID *)&CPlayerSendMsg_CuttingCompleteResult666_user,
                (LPVOID *)&CPlayerSendMsg_CuttingCompleteResult666_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_CuttingCompleteResult666_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_CuttingCompleteResult)
            },
            _hook_record {
                (LPVOID)0x1400e1a30L,
                (LPVOID *)&CPlayerSendMsg_DTradeAccomplishInform668_user,
                (LPVOID *)&CPlayerSendMsg_DTradeAccomplishInform668_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_DTradeAccomplishInform668_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(bool, uint16_t))&CPlayer::SendMsg_DTradeAccomplishInform)
            },
            _hook_record {
                (LPVOID)0x1400e15a0L,
                (LPVOID *)&CPlayerSendMsg_DTradeAddInform670_user,
                (LPVOID *)&CPlayerSendMsg_DTradeAddInform670_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_DTradeAddInform670_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, struct _STORAGE_LIST::_db_con*, char))&CPlayer::SendMsg_DTradeAddInform)
            },
            _hook_record {
                (LPVOID)0x1400e1510L,
                (LPVOID *)&CPlayerSendMsg_DTradeAddResult672_user,
                (LPVOID *)&CPlayerSendMsg_DTradeAddResult672_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_DTradeAddResult672_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_DTradeAddResult)
            },
            _hook_record {
                (LPVOID)0x1400e1140L,
                (LPVOID *)&CPlayerSendMsg_DTradeAnswerResult674_user,
                (LPVOID *)&CPlayerSendMsg_DTradeAnswerResult674_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_DTradeAnswerResult674_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_DTradeAnswerResult)
            },
            _hook_record {
                (LPVOID)0x1400e10a0L,
                (LPVOID *)&CPlayerSendMsg_DTradeAskInform676_user,
                (LPVOID *)&CPlayerSendMsg_DTradeAskInform676_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_DTradeAskInform676_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CPlayer*))&CPlayer::SendMsg_DTradeAskInform)
            },
            _hook_record {
                (LPVOID)0x1400e1010L,
                (LPVOID *)&CPlayerSendMsg_DTradeAskResult678_user,
                (LPVOID *)&CPlayerSendMsg_DTradeAskResult678_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_DTradeAskResult678_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_DTradeAskResult)
            },
            _hook_record {
                (LPVOID)0x1400e1880L,
                (LPVOID *)&CPlayerSendMsg_DTradeBetInform680_user,
                (LPVOID *)&CPlayerSendMsg_DTradeBetInform680_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_DTradeBetInform680_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, unsigned int))&CPlayer::SendMsg_DTradeBetInform)
            },
            _hook_record {
                (LPVOID)0x1400e17f0L,
                (LPVOID *)&CPlayerSendMsg_DTradeBetResult682_user,
                (LPVOID *)&CPlayerSendMsg_DTradeBetResult682_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_DTradeBetResult682_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_DTradeBetResult)
            },
            _hook_record {
                (LPVOID)0x1400e1380L,
                (LPVOID *)&CPlayerSendMsg_DTradeCancleInform684_user,
                (LPVOID *)&CPlayerSendMsg_DTradeCancleInform684_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_DTradeCancleInform684_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_DTradeCancleInform)
            },
            _hook_record {
                (LPVOID)0x1400e12f0L,
                (LPVOID *)&CPlayerSendMsg_DTradeCancleResult686_user,
                (LPVOID *)&CPlayerSendMsg_DTradeCancleResult686_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_DTradeCancleResult686_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_DTradeCancleResult)
            },
            _hook_record {
                (LPVOID)0x1400e1b10L,
                (LPVOID *)&CPlayerSendMsg_DTradeCloseInform688_user,
                (LPVOID *)&CPlayerSendMsg_DTradeCloseInform688_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_DTradeCloseInform688_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_DTradeCloseInform)
            },
            _hook_record {
                (LPVOID)0x1400e1750L,
                (LPVOID *)&CPlayerSendMsg_DTradeDelInform690_user,
                (LPVOID *)&CPlayerSendMsg_DTradeDelInform690_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_DTradeDelInform690_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_DTradeDelInform)
            },
            _hook_record {
                (LPVOID)0x1400e16c0L,
                (LPVOID *)&CPlayerSendMsg_DTradeDelResult692_user,
                (LPVOID *)&CPlayerSendMsg_DTradeDelResult692_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_DTradeDelResult692_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_DTradeDelResult)
            },
            _hook_record {
                (LPVOID)0x1400e1490L,
                (LPVOID *)&CPlayerSendMsg_DTradeLockInform694_user,
                (LPVOID *)&CPlayerSendMsg_DTradeLockInform694_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_DTradeLockInform694_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_DTradeLockInform)
            },
            _hook_record {
                (LPVOID)0x1400e1400L,
                (LPVOID *)&CPlayerSendMsg_DTradeLockResult696_user,
                (LPVOID *)&CPlayerSendMsg_DTradeLockResult696_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_DTradeLockResult696_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_DTradeLockResult)
            },
            _hook_record {
                (LPVOID)0x1400e19b0L,
                (LPVOID *)&CPlayerSendMsg_DTradeOKInform698_user,
                (LPVOID *)&CPlayerSendMsg_DTradeOKInform698_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_DTradeOKInform698_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_DTradeOKInform)
            },
            _hook_record {
                (LPVOID)0x1400e1920L,
                (LPVOID *)&CPlayerSendMsg_DTradeOKResult700_user,
                (LPVOID *)&CPlayerSendMsg_DTradeOKResult700_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_DTradeOKResult700_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_DTradeOKResult)
            },
            _hook_record {
                (LPVOID)0x1400e11d0L,
                (LPVOID *)&CPlayerSendMsg_DTradeStartInform702_user,
                (LPVOID *)&CPlayerSendMsg_DTradeStartInform702_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_DTradeStartInform702_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CPlayer*, struct CPlayer*, unsigned int*))&CPlayer::SendMsg_DTradeStartInform)
            },
            _hook_record {
                (LPVOID)0x1400e1cf0L,
                (LPVOID *)&CPlayerSendMsg_DTradeUnitAddInform704_user,
                (LPVOID *)&CPlayerSendMsg_DTradeUnitAddInform704_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_DTradeUnitAddInform704_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t, struct _UNIT_DB_BASE::_LIST*))&CPlayer::SendMsg_DTradeUnitAddInform)
            },
            _hook_record {
                (LPVOID)0x1400e1ba0L,
                (LPVOID *)&CPlayerSendMsg_DTradeUnitInfoInform706_user,
                (LPVOID *)&CPlayerSendMsg_DTradeUnitInfoInform706_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_DTradeUnitInfoInform706_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, struct _UNIT_DB_BASE::_LIST*))&CPlayer::SendMsg_DTradeUnitInfoInform)
            },
            _hook_record {
                (LPVOID)0x1400d5290L,
                (LPVOID *)&CPlayerSendMsg_DamageResult708_user,
                (LPVOID *)&CPlayerSendMsg_DamageResult708_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_DamageResult708_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _STORAGE_LIST::_db_con*))&CPlayer::SendMsg_DamageResult)
            },
            _hook_record {
                (LPVOID)0x1400da760L,
                (LPVOID *)&CPlayerSendMsg_DarkHoleOpenFail710_user,
                (LPVOID *)&CPlayerSendMsg_DarkHoleOpenFail710_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_DarkHoleOpenFail710_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(int, char))&CPlayer::SendMsg_DarkHoleOpenFail)
            },
            _hook_record {
                (LPVOID)0x1400da5b0L,
                (LPVOID *)&CPlayerSendMsg_DarkHoleOpenResult712_user,
                (LPVOID *)&CPlayerSendMsg_DarkHoleOpenResult712_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_DarkHoleOpenResult712_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(int, int, char, uint16_t, unsigned int))&CPlayer::SendMsg_DarkHoleOpenResult)
            },
            _hook_record {
                (LPVOID)0x1400e7330L,
                (LPVOID *)&CPlayerSendMsg_DarkHoleRewardMessage714_user,
                (LPVOID *)&CPlayerSendMsg_DarkHoleRewardMessage714_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_DarkHoleRewardMessage714_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _STORAGE_LIST::_db_con*, unsigned int, int))&CPlayer::SendMsg_DarkHoleRewardMessage)
            },
            _hook_record {
                (LPVOID)0x1400e0bb0L,
                (LPVOID *)&CPlayerSendMsg_DelEffect716_user,
                (LPVOID *)&CPlayerSendMsg_DelEffect716_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_DelEffect716_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, uint16_t, char))&CPlayer::SendMsg_DelEffect)
            },
            _hook_record {
                (LPVOID)0x1400dc3b0L,
                (LPVOID *)&CPlayerSendMsg_DeleteStorageInform718_user,
                (LPVOID *)&CPlayerSendMsg_DeleteStorageInform718_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_DeleteStorageInform718_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, uint16_t))&CPlayer::SendMsg_DeleteStorageInform)
            },
            _hook_record {
                (LPVOID)0x1400d5950L,
                (LPVOID *)&CPlayerSendMsg_Destroy720_user,
                (LPVOID *)&CPlayerSendMsg_Destroy720_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_Destroy720_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_Destroy)
            },
            _hook_record {
                (LPVOID)0x1400d59f0L,
                (LPVOID *)&CPlayerSendMsg_Die722_user,
                (LPVOID *)&CPlayerSendMsg_Die722_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_Die722_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_Die)
            },
            _hook_record {
                (LPVOID)0x1400d77c0L,
                (LPVOID *)&CPlayerSendMsg_EconomyHistoryInform724_user,
                (LPVOID *)&CPlayerSendMsg_EconomyHistoryInform724_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_EconomyHistoryInform724_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_EconomyHistoryInform)
            },
            _hook_record {
                (LPVOID)0x1400d7900L,
                (LPVOID *)&CPlayerSendMsg_EconomyRateInform726_user,
                (LPVOID *)&CPlayerSendMsg_EconomyRateInform726_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_EconomyRateInform726_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(bool))&CPlayer::SendMsg_EconomyRateInform)
            },
            _hook_record {
                (LPVOID)0x1400d7dc0L,
                (LPVOID *)&CPlayerSendMsg_EmbellishResult728_user,
                (LPVOID *)&CPlayerSendMsg_EmbellishResult728_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_EmbellishResult728_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_EmbellishResult)
            },
            _hook_record {
                (LPVOID)0x1400da800L,
                (LPVOID *)&CPlayerSendMsg_EnterDarkHole730_user,
                (LPVOID *)&CPlayerSendMsg_EnterDarkHole730_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_EnterDarkHole730_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, unsigned int))&CPlayer::SendMsg_EnterDarkHole)
            },
            _hook_record {
                (LPVOID)0x1400e8930L,
                (LPVOID *)&CPlayerSendMsg_EquipItemLevelLimit732_user,
                (LPVOID *)&CPlayerSendMsg_EquipItemLevelLimit732_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_EquipItemLevelLimit732_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(int))&CPlayer::SendMsg_EquipItemLevelLimit)
            },
            _hook_record {
                (LPVOID)0x1400d5340L,
                (LPVOID *)&CPlayerSendMsg_EquipPartChange734_user,
                (LPVOID *)&CPlayerSendMsg_EquipPartChange734_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_EquipPartChange734_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_EquipPartChange)
            },
            _hook_record {
                (LPVOID)0x1400d7d30L,
                (LPVOID *)&CPlayerSendMsg_EquipPartResult736_user,
                (LPVOID *)&CPlayerSendMsg_EquipPartResult736_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_EquipPartResult736_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_EquipPartResult)
            },
            _hook_record {
                (LPVOID)0x1400d8350L,
                (LPVOID *)&CPlayerSendMsg_ExchangeItemResult738_user,
                (LPVOID *)&CPlayerSendMsg_ExchangeItemResult738_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_ExchangeItemResult738_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, struct _STORAGE_LIST::_db_con*))&CPlayer::SendMsg_ExchangeItemResult)
            },
            _hook_record {
                (LPVOID)0x1400d8440L,
                (LPVOID *)&CPlayerSendMsg_ExchangeLendItemResult740_user,
                (LPVOID *)&CPlayerSendMsg_ExchangeLendItemResult740_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_ExchangeLendItemResult740_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, struct _STORAGE_LIST::_db_con*))&CPlayer::SendMsg_ExchangeLendItemResult)
            },
            _hook_record {
                (LPVOID)0x1400d7700L,
                (LPVOID *)&CPlayerSendMsg_ExchangeMoneyResult742_user,
                (LPVOID *)&CPlayerSendMsg_ExchangeMoneyResult742_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_ExchangeMoneyResult742_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_ExchangeMoneyResult)
            },
            _hook_record {
                (LPVOID)0x1400d6c50L,
                (LPVOID *)&CPlayerSendMsg_ExitWorldResult744_user,
                (LPVOID *)&CPlayerSendMsg_ExitWorldResult744_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_ExitWorldResult744_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_ExitWorldResult)
            },
            _hook_record {
                (LPVOID)0x1400e35e0L,
                (LPVOID *)&CPlayerSendMsg_ExtTrunkExtendResult746_user,
                (LPVOID *)&CPlayerSendMsg_ExtTrunkExtendResult746_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_ExtTrunkExtendResult746_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, char))&CPlayer::SendMsg_ExtTrunkExtendResult)
            },
            _hook_record {
                (LPVOID)0x1400e6bc0L,
                (LPVOID *)&CPlayerSendMsg_FanfareItem748_user,
                (LPVOID *)&CPlayerSendMsg_FanfareItem748_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_FanfareItem748_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, struct _STORAGE_LIST::_db_con*, struct CItemBox*))&CPlayer::SendMsg_FanfareItem)
            },
            _hook_record {
                (LPVOID)0x1400d6d80L,
                (LPVOID *)&CPlayerSendMsg_FcitemInform750_user,
                (LPVOID *)&CPlayerSendMsg_FcitemInform750_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_FcitemInform750_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t, unsigned int))&CPlayer::SendMsg_FcitemInform)
            },
            _hook_record {
                (LPVOID)0x1400d5a80L,
                (LPVOID *)&CPlayerSendMsg_FixPosition752_user,
                (LPVOID *)&CPlayerSendMsg_FixPosition752_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_FixPosition752_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(int))&CPlayer::SendMsg_FixPosition)
            },
            _hook_record {
                (LPVOID)0x1400d9510L,
                (LPVOID *)&CPlayerSendMsg_ForceDownloadResult754_user,
                (LPVOID *)&CPlayerSendMsg_ForceDownloadResult754_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_ForceDownloadResult754_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_ForceDownloadResult)
            },
            _hook_record {
                (LPVOID)0x1400dc020L,
                (LPVOID *)&CPlayerSendMsg_ForceInvenChange756_user,
                (LPVOID *)&CPlayerSendMsg_ForceInvenChange756_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_ForceInvenChange756_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_ForceInvenChange)
            },
            _hook_record {
                (LPVOID)0x1400df770L,
                (LPVOID *)&CPlayerSendMsg_ForceResult758_user,
                (LPVOID *)&CPlayerSendMsg_ForceResult758_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_ForceResult758_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, struct _CHRID*, struct _STORAGE_LIST::_db_con*, int))&CPlayer::SendMsg_ForceResult)
            },
            _hook_record {
                (LPVOID)0x1400e60e0L,
                (LPVOID *)&CPlayerSendMsg_GM_Greeting760_user,
                (LPVOID *)&CPlayerSendMsg_GM_Greeting760_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_GM_Greeting760_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char*, char*))&CPlayer::SendMsg_GM_Greeting)
            },
            _hook_record {
                (LPVOID)0x1400e63e0L,
                (LPVOID *)&CPlayerSendMsg_GUILD_Greeting762_user,
                (LPVOID *)&CPlayerSendMsg_GUILD_Greeting762_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_GUILD_Greeting762_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char*, char*))&CPlayer::SendMsg_GUILD_Greeting)
            },
            _hook_record {
                (LPVOID)0x1400da520L,
                (LPVOID *)&CPlayerSendMsg_GestureInform764_user,
                (LPVOID *)&CPlayerSendMsg_GestureInform764_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_GestureInform764_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_GestureInform)
            },
            _hook_record {
                (LPVOID)0x1400da900L,
                (LPVOID *)&CPlayerSendMsg_GiveupDarkHole766_user,
                (LPVOID *)&CPlayerSendMsg_GiveupDarkHole766_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_GiveupDarkHole766_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_GiveupDarkHole)
            },
            _hook_record {
                (LPVOID)0x1400d6a90L,
                (LPVOID *)&CPlayerSendMsg_GotoBasePortalResult768_user,
                (LPVOID *)&CPlayerSendMsg_GotoBasePortalResult768_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_GotoBasePortalResult768_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_GotoBasePortalResult)
            },
            _hook_record {
                (LPVOID)0x1400d6b80L,
                (LPVOID *)&CPlayerSendMsg_GotoRecallResult770_user,
                (LPVOID *)&CPlayerSendMsg_GotoRecallResult770_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_GotoRecallResult770_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, float*, char))&CPlayer::SendMsg_GotoRecallResult)
            },
            _hook_record {
                (LPVOID)0x1400e2c30L,
                (LPVOID *)&CPlayerSendMsg_GroupTargetInform772_user,
                (LPVOID *)&CPlayerSendMsg_GroupTargetInform772_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_GroupTargetInform772_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char*))&CPlayer::SendMsg_GroupTargetInform)
            },
            _hook_record {
                (LPVOID)0x1400e3b90L,
                (LPVOID *)&CPlayerSendMsg_GuildEstablishFail774_user,
                (LPVOID *)&CPlayerSendMsg_GuildEstablishFail774_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_GuildEstablishFail774_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_GuildEstablishFail)
            },
            _hook_record {
                (LPVOID)0x1400e7740L,
                (LPVOID *)&CPlayerSendMsg_GuildForceLeaveBoradori776_user,
                (LPVOID *)&CPlayerSendMsg_GuildForceLeaveBoradori776_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_GuildForceLeaveBoradori776_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_GuildForceLeaveBoradori)
            },
            _hook_record {
                (LPVOID)0x1400e4000L,
                (LPVOID *)&CPlayerSendMsg_GuildJoinAcceptFail778_user,
                (LPVOID *)&CPlayerSendMsg_GuildJoinAcceptFail778_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_GuildJoinAcceptFail778_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, unsigned int))&CPlayer::SendMsg_GuildJoinAcceptFail)
            },
            _hook_record {
                (LPVOID)0x1400e3d20L,
                (LPVOID *)&CPlayerSendMsg_GuildJoinApplyCancelResult780_user,
                (LPVOID *)&CPlayerSendMsg_GuildJoinApplyCancelResult780_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_GuildJoinApplyCancelResult780_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_GuildJoinApplyCancelResult)
            },
            _hook_record {
                (LPVOID)0x1400e40a0L,
                (LPVOID *)&CPlayerSendMsg_GuildJoinApplyRejectInform782_user,
                (LPVOID *)&CPlayerSendMsg_GuildJoinApplyRejectInform782_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_GuildJoinApplyRejectInform782_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_GuildJoinApplyRejectInform)
            },
            _hook_record {
                (LPVOID)0x1400e3c20L,
                (LPVOID *)&CPlayerSendMsg_GuildJoinApplyResult784_user,
                (LPVOID *)&CPlayerSendMsg_GuildJoinApplyResult784_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_GuildJoinApplyResult784_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, struct CGuild*))&CPlayer::SendMsg_GuildJoinApplyResult)
            },
            _hook_record {
                (LPVOID)0x1400e41e0L,
                (LPVOID *)&CPlayerSendMsg_GuildJoinOtherInform786_user,
                (LPVOID *)&CPlayerSendMsg_GuildJoinOtherInform786_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_GuildJoinOtherInform786_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_GuildJoinOtherInform)
            },
            _hook_record {
                (LPVOID)0x1400e5d70L,
                (LPVOID *)&CPlayerSendMsg_GuildManageResult788_user,
                (LPVOID *)&CPlayerSendMsg_GuildManageResult788_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_GuildManageResult788_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_GuildManageResult)
            },
            _hook_record {
                (LPVOID)0x1400e7650L,
                (LPVOID *)&CPlayerSendMsg_GuildMasterEffect790_user,
                (LPVOID *)&CPlayerSendMsg_GuildMasterEffect790_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_GuildMasterEffect790_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, char, char, char, char))&CPlayer::SendMsg_GuildMasterEffect)
            },
            _hook_record {
                (LPVOID)0x1400e4120L,
                (LPVOID *)&CPlayerSendMsg_GuildPushMoneyResult792_user,
                (LPVOID *)&CPlayerSendMsg_GuildPushMoneyResult792_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_GuildPushMoneyResult792_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_GuildPushMoneyResult)
            },
            _hook_record {
                (LPVOID)0x1400e59e0L,
                (LPVOID *)&CPlayerSendMsg_GuildRoomEnterResult794_user,
                (LPVOID *)&CPlayerSendMsg_GuildRoomEnterResult794_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_GuildRoomEnterResult794_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, char, uint16_t, float*, int))&CPlayer::SendMsg_GuildRoomEnterResult)
            },
            _hook_record {
                (LPVOID)0x1400e5af0L,
                (LPVOID *)&CPlayerSendMsg_GuildRoomOutResult796_user,
                (LPVOID *)&CPlayerSendMsg_GuildRoomOutResult796_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_GuildRoomOutResult796_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, uint16_t, float*))&CPlayer::SendMsg_GuildRoomOutResult)
            },
            _hook_record {
                (LPVOID)0x1400e5930L,
                (LPVOID *)&CPlayerSendMsg_GuildRoomRentResult798_user,
                (LPVOID *)&CPlayerSendMsg_GuildRoomRentResult798_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_GuildRoomRentResult798_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, char))&CPlayer::SendMsg_GuildRoomRentResult)
            },
            _hook_record {
                (LPVOID)0x1400e5bf0L,
                (LPVOID *)&CPlayerSendMsg_GuildRoomRestTimeResult800_user,
                (LPVOID *)&CPlayerSendMsg_GuildRoomRestTimeResult800_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_GuildRoomRestTimeResult800_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_GuildRoomRestTimeResult)
            },
            _hook_record {
                (LPVOID)0x1400e3db0L,
                (LPVOID *)&CPlayerSendMsg_GuildSelfLeaveResult802_user,
                (LPVOID *)&CPlayerSendMsg_GuildSelfLeaveResult802_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_GuildSelfLeaveResult802_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_GuildSelfLeaveResult)
            },
            _hook_record {
                (LPVOID)0x1400e75c0L,
                (LPVOID *)&CPlayerSendMsg_GuildSetHonorResult804_user,
                (LPVOID *)&CPlayerSendMsg_GuildSetHonorResult804_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_GuildSetHonorResult804_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_GuildSetHonorResult)
            },
            _hook_record {
                (LPVOID)0x1400df310L,
                (LPVOID *)&CPlayerSendMsg_HSKQuestActCum806_user,
                (LPVOID *)&CPlayerSendMsg_HSKQuestActCum806_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_HSKQuestActCum806_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_HSKQuestActCum)
            },
            _hook_record {
                (LPVOID)0x1400df450L,
                (LPVOID *)&CPlayerSendMsg_HSKQuestSucc808_user,
                (LPVOID *)&CPlayerSendMsg_HSKQuestSucc808_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_HSKQuestSucc808_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, bool))&CPlayer::SendMsg_HSKQuestSucc)
            },
            _hook_record {
                (LPVOID)0x1400e7860L,
                (LPVOID *)&CPlayerSendMsg_HonorGuildMark810_user,
                (LPVOID *)&CPlayerSendMsg_HonorGuildMark810_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_HonorGuildMark810_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_HonorGuildMark)
            },
            _hook_record {
                (LPVOID)0x1400e74a0L,
                (LPVOID *)&CPlayerSendMsg_InformTaxIncome812_user,
                (LPVOID *)&CPlayerSendMsg_InformTaxIncome812_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_InformTaxIncome812_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, unsigned int, char*))&CPlayer::SendMsg_InformTaxIncome)
            },
            _hook_record {
                (LPVOID)0x1400e8f00L,
                (LPVOID *)&CPlayerSendMsg_Init_Action_Point814_user,
                (LPVOID *)&CPlayerSendMsg_Init_Action_Point814_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_Init_Action_Point814_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_Init_Action_Point)
            },
            _hook_record {
                (LPVOID)0x1400e0440L,
                (LPVOID *)&CPlayerSendMsg_InsertItemInform816_user,
                (LPVOID *)&CPlayerSendMsg_InsertItemInform816_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_InsertItemInform816_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, struct _STORAGE_LIST::_db_con*))&CPlayer::SendMsg_InsertItemInform)
            },
            _hook_record {
                (LPVOID)0x1400e1ed0L,
                (LPVOID *)&CPlayerSendMsg_InsertNewQuest818_user,
                (LPVOID *)&CPlayerSendMsg_InsertNewQuest818_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_InsertNewQuest818_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, struct _QUEST_DB_BASE::_LIST*))&CPlayer::SendMsg_InsertNewQuest)
            },
            _hook_record {
                (LPVOID)0x1400e1fb0L,
                (LPVOID *)&CPlayerSendMsg_InsertNextQuest820_user,
                (LPVOID *)&CPlayerSendMsg_InsertNextQuest820_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_InsertNextQuest820_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, struct _QUEST_DB_BASE::_LIST*))&CPlayer::SendMsg_InsertNextQuest)
            },
            _hook_record {
                (LPVOID)0x1400e2140L,
                (LPVOID *)&CPlayerSendMsg_InsertQuestFailure822_user,
                (LPVOID *)&CPlayerSendMsg_InsertQuestFailure822_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_InsertQuestFailure822_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, unsigned int, char))&CPlayer::SendMsg_InsertQuestFailure)
            },
            _hook_record {
                (LPVOID)0x1400e0530L,
                (LPVOID *)&CPlayerSendMsg_InsertQuestItemInform824_user,
                (LPVOID *)&CPlayerSendMsg_InsertQuestItemInform824_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_InsertQuestItemInform824_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _STORAGE_LIST::_db_con*))&CPlayer::SendMsg_InsertQuestItemInform)
            },
            _hook_record {
                (LPVOID)0x1400d8f70L,
                (LPVOID *)&CPlayerSendMsg_InvenDownloadResult826_user,
                (LPVOID *)&CPlayerSendMsg_InvenDownloadResult826_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_InvenDownloadResult826_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_InvenDownloadResult)
            },
            _hook_record {
                (LPVOID)0x1400d85f0L,
                (LPVOID *)&CPlayerSendMsg_ItemDowngrade828_user,
                (LPVOID *)&CPlayerSendMsg_ItemDowngrade828_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_ItemDowngrade828_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_ItemDowngrade)
            },
            _hook_record {
                (LPVOID)0x1400d6e20L,
                (LPVOID *)&CPlayerSendMsg_ItemStorageRefresh830_user,
                (LPVOID *)&CPlayerSendMsg_ItemStorageRefresh830_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_ItemStorageRefresh830_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_ItemStorageRefresh)
            },
            _hook_record {
                (LPVOID)0x1400d8560L,
                (LPVOID *)&CPlayerSendMsg_ItemUpgrade832_user,
                (LPVOID *)&CPlayerSendMsg_ItemUpgrade832_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_ItemUpgrade832_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_ItemUpgrade)
            },
            _hook_record {
                (LPVOID)0x1400e8330L,
                (LPVOID *)&CPlayerSendMsg_JadeEffectErr834_user,
                (LPVOID *)&CPlayerSendMsg_JadeEffectErr834_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_JadeEffectErr834_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_JadeEffectErr)
            },
            _hook_record {
                (LPVOID)0x1400e8af0L,
                (LPVOID *)&CPlayerSendMsg_LendItemTimeExpired836_user,
                (LPVOID *)&CPlayerSendMsg_LendItemTimeExpired836_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_LendItemTimeExpired836_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, uint16_t))&CPlayer::SendMsg_LendItemTimeExpired)
            },
            _hook_record {
                (LPVOID)0x1400d63f0L,
                (LPVOID *)&CPlayerSendMsg_Level838_user,
                (LPVOID *)&CPlayerSendMsg_Level838_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_Level838_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(int))&CPlayer::SendMsg_Level)
            },
            _hook_record {
                (LPVOID)0x1400da1c0L,
                (LPVOID *)&CPlayerSendMsg_LinkBoardDownloadResult840_user,
                (LPVOID *)&CPlayerSendMsg_LinkBoardDownloadResult840_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_LinkBoardDownloadResult840_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_LinkBoardDownloadResult)
            },
            _hook_record {
                (LPVOID)0x1400e4f00L,
                (LPVOID *)&CPlayerSendMsg_MacroRequest842_user,
                (LPVOID *)&CPlayerSendMsg_MacroRequest842_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_MacroRequest842_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_MacroRequest)
            },
            _hook_record {
                (LPVOID)0x1400e0e20L,
                (LPVOID *)&CPlayerSendMsg_MadeTrapNumInform844_user,
                (LPVOID *)&CPlayerSendMsg_MadeTrapNumInform844_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_MadeTrapNumInform844_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_MadeTrapNumInform)
            },
            _hook_record {
                (LPVOID)0x1400d7ee0L,
                (LPVOID *)&CPlayerSendMsg_MakeItemCheatSendButtonEnable846_user,
                (LPVOID *)&CPlayerSendMsg_MakeItemCheatSendButtonEnable846_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_MakeItemCheatSendButtonEnable846_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(bool))&CPlayer::SendMsg_MakeItemCheatSendButtonEnable)
            },
            _hook_record {
                (LPVOID)0x1400d7f70L,
                (LPVOID *)&CPlayerSendMsg_MakeItemResult848_user,
                (LPVOID *)&CPlayerSendMsg_MakeItemResult848_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_MakeItemResult848_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_MakeItemResult)
            },
            _hook_record {
                (LPVOID)0x1400e4d20L,
                (LPVOID *)&CPlayerSendMsg_MapEnvInform850_user,
                (LPVOID *)&CPlayerSendMsg_MapEnvInform850_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_MapEnvInform850_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, unsigned int))&CPlayer::SendMsg_MapEnvInform)
            },
            _hook_record {
                (LPVOID)0x1400d6950L,
                (LPVOID *)&CPlayerSendMsg_MapOut852_user,
                (LPVOID *)&CPlayerSendMsg_MapOut852_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_MapOut852_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char))&CPlayer::SendMsg_MapOut)
            },
            _hook_record {
                (LPVOID)0x1400d6480L,
                (LPVOID *)&CPlayerSendMsg_MaxHFSP854_user,
                (LPVOID *)&CPlayerSendMsg_MaxHFSP854_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_MaxHFSP854_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_MaxHFSP)
            },
            _hook_record {
                (LPVOID)0x1400e9500L,
                (LPVOID *)&CPlayerSendMsg_MaxPvpPointInform856_user,
                (LPVOID *)&CPlayerSendMsg_MaxPvpPointInform856_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_MaxPvpPointInform856_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(int))&CPlayer::SendMsg_MaxPvpPointInform)
            },
            _hook_record {
                (LPVOID)0x1400dc620L,
                (LPVOID *)&CPlayerSendMsg_MineCancle858_user,
                (LPVOID *)&CPlayerSendMsg_MineCancle858_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_MineCancle858_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_MineCancle)
            },
            _hook_record {
                (LPVOID)0x1400dc6a0L,
                (LPVOID *)&CPlayerSendMsg_MineCompleteResult860_user,
                (LPVOID *)&CPlayerSendMsg_MineCompleteResult860_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_MineCompleteResult860_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, uint16_t, char, uint16_t))&CPlayer::SendMsg_MineCompleteResult)
            },
            _hook_record {
                (LPVOID)0x1400dc590L,
                (LPVOID *)&CPlayerSendMsg_MineStartResult862_user,
                (LPVOID *)&CPlayerSendMsg_MineStartResult862_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_MineStartResult862_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_MineStartResult)
            },
            _hook_record {
                (LPVOID)0x1400e5270L,
                (LPVOID *)&CPlayerSendMsg_MonsterAggroData864_user,
                (LPVOID *)&CPlayerSendMsg_MonsterAggroData864_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_MonsterAggroData864_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CCharacter*))&CPlayer::SendMsg_MonsterAggroData)
            },
            _hook_record {
                (LPVOID)0x1400d6340L,
                (LPVOID *)&CPlayerSendMsg_MoveError866_user,
                (LPVOID *)&CPlayerSendMsg_MoveError866_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_MoveError866_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_MoveError)
            },
            _hook_record {
                (LPVOID)0x1400d5dd0L,
                (LPVOID *)&CPlayerSendMsg_MoveNext868_user,
                (LPVOID *)&CPlayerSendMsg_MoveNext868_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_MoveNext868_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(bool))&CPlayer::SendMsg_MoveNext)
            },
            _hook_record {
                (LPVOID)0x1400da070L,
                (LPVOID *)&CPlayerSendMsg_MovePortal870_user,
                (LPVOID *)&CPlayerSendMsg_MovePortal870_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_MovePortal870_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, float*, char))&CPlayer::SendMsg_MovePortal)
            },
            _hook_record {
                (LPVOID)0x1400d9f90L,
                (LPVOID *)&CPlayerSendMsg_MovePortal872_user,
                (LPVOID *)&CPlayerSendMsg_MovePortal872_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_MovePortal872_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, char, float*, bool))&CPlayer::SendMsg_MovePortal)
            },
            _hook_record {
                (LPVOID)0x1400e5ce0L,
                (LPVOID *)&CPlayerSendMsg_MoveToOwnStoneMapInform874_user,
                (LPVOID *)&CPlayerSendMsg_MoveToOwnStoneMapInform874_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_MoveToOwnStoneMapInform874_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_MoveToOwnStoneMapInform)
            },
            _hook_record {
                (LPVOID)0x1400e5c00L,
                (LPVOID *)&CPlayerSendMsg_MoveToOwnStoneMapResult876_user,
                (LPVOID *)&CPlayerSendMsg_MoveToOwnStoneMapResult876_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_MoveToOwnStoneMapResult876_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, float*))&CPlayer::SendMsg_MoveToOwnStoneMapResult)
            },
            _hook_record {
                (LPVOID)0x1400e7b40L,
                (LPVOID *)&CPlayerSendMsg_NPCLinkItemCheckResult878_user,
                (LPVOID *)&CPlayerSendMsg_NPCLinkItemCheckResult878_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_NPCLinkItemCheckResult878_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, struct _STORAGE_POS_INDIV*))&CPlayer::SendMsg_NPCLinkItemCheckResult)
            },
            _hook_record {
                (LPVOID)0x1400e9620L,
                (LPVOID *)&CPlayerSendMsg_NewMovePotionResult880_user,
                (LPVOID *)&CPlayerSendMsg_NewMovePotionResult880_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_NewMovePotionResult880_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_NewMovePotionResult)
            },
            _hook_record {
                (LPVOID)0x1400d40c0L,
                (LPVOID *)&CPlayerSendMsg_NewViewOther882_user,
                (LPVOID *)&CPlayerSendMsg_NewViewOther882_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_NewViewOther882_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_NewViewOther)
            },
            _hook_record {
                (LPVOID)0x1400e92b0L,
                (LPVOID *)&CPlayerSendMsg_NotifyEffectForGetItem884_user,
                (LPVOID *)&CPlayerSendMsg_NotifyEffectForGetItem884_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_NotifyEffectForGetItem884_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, unsigned int, char*, struct _STORAGE_LIST::_db_con*, bool))&CPlayer::SendMsg_NotifyEffectForGetItem)
            },
            _hook_record {
                (LPVOID)0x1400de640L,
                (LPVOID *)&CPlayerSendMsg_NotifyGetExpInfo886_user,
                (LPVOID *)&CPlayerSendMsg_NotifyGetExpInfo886_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_NotifyGetExpInfo886_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(long double, long double, long double))&CPlayer::SendMsg_NotifyGetExpInfo)
            },
            _hook_record {
                (LPVOID)0x1400e7d50L,
                (LPVOID *)&CPlayerSendMsg_Notify_ExceptFromRaceRanking888_user,
                (LPVOID *)&CPlayerSendMsg_Notify_ExceptFromRaceRanking888_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_Notify_ExceptFromRaceRanking888_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(int))&CPlayer::SendMsg_Notify_ExceptFromRaceRanking)
            },
            _hook_record {
                (LPVOID)0x1400e9100L,
                (LPVOID *)&CPlayerSendMsg_Notify_Get_Golden_Box890_user,
                (LPVOID *)&CPlayerSendMsg_Notify_Get_Golden_Box890_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_Notify_Get_Golden_Box890_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, unsigned int, char*, struct _STORAGE_LIST::_db_con*, bool))&CPlayer::SendMsg_Notify_Get_Golden_Box)
            },
            _hook_record {
                (LPVOID)0x1400e42b0L,
                (LPVOID *)&CPlayerSendMsg_Notify_Gravity_Stone_Owner_Die892_user,
                (LPVOID *)&CPlayerSendMsg_Notify_Gravity_Stone_Owner_Die892_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_Notify_Gravity_Stone_Owner_Die892_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_Notify_Gravity_Stone_Owner_Die)
            },
            _hook_record {
                (LPVOID)0x1400e8fd0L,
                (LPVOID *)&CPlayerSendMsg_Notify_Me_Get_Golden_Box894_user,
                (LPVOID *)&CPlayerSendMsg_Notify_Me_Get_Golden_Box894_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_Notify_Me_Get_Golden_Box894_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, struct _STORAGE_LIST::_db_con*))&CPlayer::SendMsg_Notify_Me_Get_Golden_Box)
            },
            _hook_record {
                (LPVOID)0x1400df580L,
                (LPVOID *)&CPlayerSendMsg_NpcQuestHistoryInform896_user,
                (LPVOID *)&CPlayerSendMsg_NpcQuestHistoryInform896_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_NpcQuestHistoryInform896_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_NpcQuestHistoryInform)
            },
            _hook_record {
                (LPVOID)0x1400df670L,
                (LPVOID *)&CPlayerSendMsg_NpcQuestListResult898_user,
                (LPVOID *)&CPlayerSendMsg_NpcQuestListResult898_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_NpcQuestListResult898_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _NPCQuestIndexTempData*))&CPlayer::SendMsg_NpcQuestListResult)
            },
            _hook_record {
                (LPVOID)0x1400d7e50L,
                (LPVOID *)&CPlayerSendMsg_OffPartResult900_user,
                (LPVOID *)&CPlayerSendMsg_OffPartResult900_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_OffPartResult900_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_OffPartResult)
            },
            _hook_record {
                (LPVOID)0x1400e3e40L,
                (LPVOID *)&CPlayerSendMsg_OfferSuggestResult902_user,
                (LPVOID *)&CPlayerSendMsg_OfferSuggestResult902_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_OfferSuggestResult902_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_OfferSuggestResult)
            },
            _hook_record {
                (LPVOID)0x1400dc790L,
                (LPVOID *)&CPlayerSendMsg_OreCuttingResult904_user,
                (LPVOID *)&CPlayerSendMsg_OreCuttingResult904_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_OreCuttingResult904_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, unsigned int))&CPlayer::SendMsg_OreCuttingResult)
            },
            _hook_record {
                (LPVOID)0x1400dc950L,
                (LPVOID *)&CPlayerSendMsg_OreIntoBagResult906_user,
                (LPVOID *)&CPlayerSendMsg_OreIntoBagResult906_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_OreIntoBagResult906_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, uint16_t, char, unsigned int))&CPlayer::SendMsg_OreIntoBagResult)
            },
            _hook_record {
                (LPVOID)0x1400e8780L,
                (LPVOID *)&CPlayerSendMsg_OreTransferCount908_user,
                (LPVOID *)&CPlayerSendMsg_OreTransferCount908_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_OreTransferCount908_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_OreTransferCount)
            },
            _hook_record {
                (LPVOID)0x1400d55b0L,
                (LPVOID *)&CPlayerSendMsg_OtherShapeAll910_user,
                (LPVOID *)&CPlayerSendMsg_OtherShapeAll910_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_OtherShapeAll910_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CPlayer*))&CPlayer::SendMsg_OtherShapeAll)
            },
            _hook_record {
                (LPVOID)0x1400d58b0L,
                (LPVOID *)&CPlayerSendMsg_OtherShapeError912_user,
                (LPVOID *)&CPlayerSendMsg_OtherShapeError912_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_OtherShapeError912_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CPlayer*, char))&CPlayer::SendMsg_OtherShapeError)
            },
            _hook_record {
                (LPVOID)0x1400d5690L,
                (LPVOID *)&CPlayerSendMsg_OtherShapePart914_user,
                (LPVOID *)&CPlayerSendMsg_OtherShapePart914_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_OtherShapePart914_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CPlayer*))&CPlayer::SendMsg_OtherShapePart)
            },
            _hook_record {
                (LPVOID)0x1400d5770L,
                (LPVOID *)&CPlayerSendMsg_OtherShapePartEx_CashChange916_user,
                (LPVOID *)&CPlayerSendMsg_OtherShapePartEx_CashChange916_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_OtherShapePartEx_CashChange916_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CPlayer*, CPlayer::CashChangeStateFlag, CPlayer::CashChangeStateFlag))&CPlayer::SendMsg_OtherShapePartEx_CashChange)
            },
            _hook_record {
                (LPVOID)0x1400de400L,
                (LPVOID *)&CPlayerSendMsg_PartyAlterLootShareResult918_user,
                (LPVOID *)&CPlayerSendMsg_PartyAlterLootShareResult918_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_PartyAlterLootShareResult918_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_PartyAlterLootShareResult)
            },
            _hook_record {
                (LPVOID)0x1400dd2e0L,
                (LPVOID *)&CPlayerSendMsg_PartyDisjointResult920_user,
                (LPVOID *)&CPlayerSendMsg_PartyDisjointResult920_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_PartyDisjointResult920_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_PartyDisjointResult)
            },
            _hook_record {
                (LPVOID)0x1400dd070L,
                (LPVOID *)&CPlayerSendMsg_PartyJoinApplicationQuestion922_user,
                (LPVOID *)&CPlayerSendMsg_PartyJoinApplicationQuestion922_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_PartyJoinApplicationQuestion922_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CPlayer*))&CPlayer::SendMsg_PartyJoinApplicationQuestion)
            },
            _hook_record {
                (LPVOID)0x1400dd110L,
                (LPVOID *)&CPlayerSendMsg_PartyJoinFailLevel924_user,
                (LPVOID *)&CPlayerSendMsg_PartyJoinFailLevel924_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_PartyJoinFailLevel924_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_PartyJoinFailLevel)
            },
            _hook_record {
                (LPVOID)0x1400dccc0L,
                (LPVOID *)&CPlayerSendMsg_PartyJoinInvitationQuestion926_user,
                (LPVOID *)&CPlayerSendMsg_PartyJoinInvitationQuestion926_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_PartyJoinInvitationQuestion926_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t))&CPlayer::SendMsg_PartyJoinInvitationQuestion)
            },
            _hook_record {
                (LPVOID)0x1400dce50L,
                (LPVOID *)&CPlayerSendMsg_PartyJoinJoinerResult928_user,
                (LPVOID *)&CPlayerSendMsg_PartyJoinJoinerResult928_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_PartyJoinJoinerResult928_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_PartyJoinJoinerResult)
            },
            _hook_record {
                (LPVOID)0x1400dcd60L,
                (LPVOID *)&CPlayerSendMsg_PartyJoinMemberResult930_user,
                (LPVOID *)&CPlayerSendMsg_PartyJoinMemberResult930_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_PartyJoinMemberResult930_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CPartyPlayer*, char))&CPlayer::SendMsg_PartyJoinMemberResult)
            },
            _hook_record {
                (LPVOID)0x1400dd240L,
                (LPVOID *)&CPlayerSendMsg_PartyLeaveCompulsionResult932_user,
                (LPVOID *)&CPlayerSendMsg_PartyLeaveCompulsionResult932_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_PartyLeaveCompulsionResult932_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CPartyPlayer*))&CPlayer::SendMsg_PartyLeaveCompulsionResult)
            },
            _hook_record {
                (LPVOID)0x1400dd190L,
                (LPVOID *)&CPlayerSendMsg_PartyLeaveSelfResult934_user,
                (LPVOID *)&CPlayerSendMsg_PartyLeaveSelfResult934_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_PartyLeaveSelfResult934_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CPartyPlayer*, bool))&CPlayer::SendMsg_PartyLeaveSelfResult)
            },
            _hook_record {
                (LPVOID)0x1400dd410L,
                (LPVOID *)&CPlayerSendMsg_PartyLockResult936_user,
                (LPVOID *)&CPlayerSendMsg_PartyLockResult936_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_PartyLockResult936_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_PartyLockResult)
            },
            _hook_record {
                (LPVOID)0x1400de490L,
                (LPVOID *)&CPlayerSendMsg_PartyLootItemInform938_user,
                (LPVOID *)&CPlayerSendMsg_PartyLootItemInform938_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_PartyLootItemInform938_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int, char, uint16_t, char))&CPlayer::SendMsg_PartyLootItemInform)
            },
            _hook_record {
                (LPVOID)0x1400dd370L,
                (LPVOID *)&CPlayerSendMsg_PartySuccessResult940_user,
                (LPVOID *)&CPlayerSendMsg_PartySuccessResult940_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_PartySuccessResult940_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CPartyPlayer*))&CPlayer::SendMsg_PartySuccessResult)
            },
            _hook_record {
                (LPVOID)0x1400e8810L,
                (LPVOID *)&CPlayerSendMsg_PcRoomCharClass942_user,
                (LPVOID *)&CPlayerSendMsg_PcRoomCharClass942_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_PcRoomCharClass942_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int))&CPlayer::SendMsg_PcRoomCharClass)
            },
            _hook_record {
                (LPVOID)0x1400e88a0L,
                (LPVOID *)&CPlayerSendMsg_PcRoomError944_user,
                (LPVOID *)&CPlayerSendMsg_PcRoomError944_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_PcRoomError944_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_PcRoomError)
            },
            _hook_record {
                (LPVOID)0x1400e68a0L,
                (LPVOID *)&CPlayerSendMsg_PostContent946_user,
                (LPVOID *)&CPlayerSendMsg_PostContent946_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_PostContent946_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, unsigned int, char*, char, uint16_t, uint64_t, unsigned int, unsigned int))&CPlayer::SendMsg_PostContent)
            },
            _hook_record {
                (LPVOID)0x1400e6a80L,
                (LPVOID *)&CPlayerSendMsg_PostDelete948_user,
                (LPVOID *)&CPlayerSendMsg_PostDelete948_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_PostDelete948_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, unsigned int))&CPlayer::SendMsg_PostDelete)
            },
            _hook_record {
                (LPVOID)0x1400e6620L,
                (LPVOID *)&CPlayerSendMsg_PostDelivery950_user,
                (LPVOID *)&CPlayerSendMsg_PostDelivery950_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_PostDelivery950_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, unsigned int, char*, char*, bool, bool, char))&CPlayer::SendMsg_PostDelivery)
            },
            _hook_record {
                (LPVOID)0x1400e69f0L,
                (LPVOID *)&CPlayerSendMsg_PostItemGold952_user,
                (LPVOID *)&CPlayerSendMsg_PostItemGold952_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_PostItemGold952_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_PostItemGold)
            },
            _hook_record {
                (LPVOID)0x1400e6740L,
                (LPVOID *)&CPlayerSendMsg_PostReturn954_user,
                (LPVOID *)&CPlayerSendMsg_PostReturn954_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_PostReturn954_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, unsigned int, char*, char*, char*, char, uint16_t, uint64_t, unsigned int, unsigned int))&CPlayer::SendMsg_PostReturn)
            },
            _hook_record {
                (LPVOID)0x1400e6b20L,
                (LPVOID *)&CPlayerSendMsg_PostReturnConfirm956_user,
                (LPVOID *)&CPlayerSendMsg_PostReturnConfirm956_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_PostReturnConfirm956_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, unsigned int))&CPlayer::SendMsg_PostReturnConfirm)
            },
            _hook_record {
                (LPVOID)0x1400e6560L,
                (LPVOID *)&CPlayerSendMsg_PostSendReply958_user,
                (LPVOID *)&CPlayerSendMsg_PostSendReply958_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_PostSendReply958_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_PostSendReply)
            },
            _hook_record {
                (LPVOID)0x1400e8660L,
                (LPVOID *)&CPlayerSendMsg_PotionDelayTime960_user,
                (LPVOID *)&CPlayerSendMsg_PotionDelayTime960_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_PotionDelayTime960_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int*, unsigned int))&CPlayer::SendMsg_PotionDelayTime)
            },
            _hook_record {
                (LPVOID)0x1400d8750L,
                (LPVOID *)&CPlayerSendMsg_PotionDivision962_user,
                (LPVOID *)&CPlayerSendMsg_PotionDivision962_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_PotionDivision962_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t, char, uint16_t, char, int))&CPlayer::SendMsg_PotionDivision)
            },
            _hook_record {
                (LPVOID)0x1400d8680L,
                (LPVOID *)&CPlayerSendMsg_PotionSeparation964_user,
                (LPVOID *)&CPlayerSendMsg_PotionSeparation964_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_PotionSeparation964_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t, char, uint16_t, char, int))&CPlayer::SendMsg_PotionSeparation)
            },
            _hook_record {
                (LPVOID)0x1400e9590L,
                (LPVOID *)&CPlayerSendMsg_PremiumCashItemUse966_user,
                (LPVOID *)&CPlayerSendMsg_PremiumCashItemUse966_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_PremiumCashItemUse966_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t))&CPlayer::SendMsg_PremiumCashItemUse)
            },
            _hook_record {
                (LPVOID)0x1400e2d00L,
                (LPVOID *)&CPlayerSendMsg_ProposeVoteResult968_user,
                (LPVOID *)&CPlayerSendMsg_ProposeVoteResult968_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_ProposeVoteResult968_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_ProposeVoteResult)
            },
            _hook_record {
                (LPVOID)0x1400e2640L,
                (LPVOID *)&CPlayerSendMsg_PvpRankListVersionUp970_user,
                (LPVOID *)&CPlayerSendMsg_PvpRankListVersionUp970_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_PvpRankListVersionUp970_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_PvpRankListVersionUp)
            },
            _hook_record {
                (LPVOID)0x1400e21f0L,
                (LPVOID *)&CPlayerSendMsg_QuestComplete972_user,
                (LPVOID *)&CPlayerSendMsg_QuestComplete972_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_QuestComplete972_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_QuestComplete)
            },
            _hook_record {
                (LPVOID)0x1400d96c0L,
                (LPVOID *)&CPlayerSendMsg_QuestDownloadResult974_user,
                (LPVOID *)&CPlayerSendMsg_QuestDownloadResult974_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_QuestDownloadResult974_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_QuestDownloadResult)
            },
            _hook_record {
                (LPVOID)0x1400e2330L,
                (LPVOID *)&CPlayerSendMsg_QuestFailure976_user,
                (LPVOID *)&CPlayerSendMsg_QuestFailure976_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_QuestFailure976_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char))&CPlayer::SendMsg_QuestFailure)
            },
            _hook_record {
                (LPVOID)0x1400e23d0L,
                (LPVOID *)&CPlayerSendMsg_QuestGiveUpResult978_user,
                (LPVOID *)&CPlayerSendMsg_QuestGiveUpResult978_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_QuestGiveUpResult978_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_QuestGiveUpResult)
            },
            _hook_record {
                (LPVOID)0x1400d9860L,
                (LPVOID *)&CPlayerSendMsg_QuestHistoryDownloadResult980_user,
                (LPVOID *)&CPlayerSendMsg_QuestHistoryDownloadResult980_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_QuestHistoryDownloadResult980_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_QuestHistoryDownloadResult)
            },
            _hook_record {
                (LPVOID)0x1400e2280L,
                (LPVOID *)&CPlayerSendMsg_QuestProcess982_user,
                (LPVOID *)&CPlayerSendMsg_QuestProcess982_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_QuestProcess982_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, uint16_t))&CPlayer::SendMsg_QuestProcess)
            },
            _hook_record {
                (LPVOID)0x1400e6260L,
                (LPVOID *)&CPlayerSendMsg_RACE_Greeting984_user,
                (LPVOID *)&CPlayerSendMsg_RACE_Greeting984_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_RACE_Greeting984_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char*, char*))&CPlayer::SendMsg_RACE_Greeting)
            },
            _hook_record {
                (LPVOID)0x1400e77c0L,
                (LPVOID *)&CPlayerSendMsg_RaceBattlePenelty986_user,
                (LPVOID *)&CPlayerSendMsg_RaceBattlePenelty986_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_RaceBattlePenelty986_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(int, char))&CPlayer::SendMsg_RaceBattlePenelty)
            },
            _hook_record {
                (LPVOID)0x1400e6ff0L,
                (LPVOID *)&CPlayerSendMsg_RaceBossCryMsg988_user,
                (LPVOID *)&CPlayerSendMsg_RaceBossCryMsg988_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_RaceBossCryMsg988_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_RaceBossCryMsg)
            },
            _hook_record {
                (LPVOID)0x1400df1f0L,
                (LPVOID *)&CPlayerSendMsg_RaceTopInform990_user,
                (LPVOID *)&CPlayerSendMsg_RaceTopInform990_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_RaceTopInform990_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(bool))&CPlayer::SendMsg_RaceTopInform)
            },
            _hook_record {
                (LPVOID)0x1400e5eb0L,
                (LPVOID *)&CPlayerSendMsg_RadarCharSearchResult992_user,
                (LPVOID *)&CPlayerSendMsg_RadarCharSearchResult992_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_RadarCharSearchResult992_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_RadarCharSearchResult)
            },
            _hook_record {
                (LPVOID)0x1400e6050L,
                (LPVOID *)&CPlayerSendMsg_RadarDelayTime994_user,
                (LPVOID *)&CPlayerSendMsg_RadarDelayTime994_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_RadarDelayTime994_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int))&CPlayer::SendMsg_RadarDelayTime)
            },
            _hook_record {
                (LPVOID)0x1400dab70L,
                (LPVOID *)&CPlayerSendMsg_ReEnterAsk996_user,
                (LPVOID *)&CPlayerSendMsg_ReEnterAsk996_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_ReEnterAsk996_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t, unsigned int))&CPlayer::SendMsg_ReEnterAsk)
            },
            _hook_record {
                (LPVOID)0x1400daae0L,
                (LPVOID *)&CPlayerSendMsg_ReEnterDarkHoleResult998_user,
                (LPVOID *)&CPlayerSendMsg_ReEnterDarkHoleResult998_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_ReEnterDarkHoleResult998_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_ReEnterDarkHoleResult)
            },
            _hook_record {
                (LPVOID)0x1400d5c00L,
                (LPVOID *)&CPlayerSendMsg_RealMovePoint1000_user,
                (LPVOID *)&CPlayerSendMsg_RealMovePoint1000_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_RealMovePoint1000_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(int))&CPlayer::SendMsg_RealMovePoint)
            },
            _hook_record {
                (LPVOID)0x1400d6540L,
                (LPVOID *)&CPlayerSendMsg_Recover1002_user,
                (LPVOID *)&CPlayerSendMsg_Recover1002_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_Recover1002_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_Recover)
            },
            _hook_record {
                (LPVOID)0x1400e24f0L,
                (LPVOID *)&CPlayerSendMsg_RecvHSKQuest1004_user,
                (LPVOID *)&CPlayerSendMsg_RecvHSKQuest1004_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_RecvHSKQuest1004_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_RecvHSKQuest)
            },
            _hook_record {
                (LPVOID)0x1400e2b00L,
                (LPVOID *)&CPlayerSendMsg_RefeshGroupTargetPosition1006_user,
                (LPVOID *)&CPlayerSendMsg_RefeshGroupTargetPosition1006_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_RefeshGroupTargetPosition1006_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_RefeshGroupTargetPosition)
            },
            _hook_record {
                (LPVOID)0x1400da130L,
                (LPVOID *)&CPlayerSendMsg_RegistBindResult1008_user,
                (LPVOID *)&CPlayerSendMsg_RegistBindResult1008_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_RegistBindResult1008_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_RegistBindResult)
            },
            _hook_record {
                (LPVOID)0x1400e2a70L,
                (LPVOID *)&CPlayerSendMsg_ReleaseGroupTargetObjectResult1010_user,
                (LPVOID *)&CPlayerSendMsg_ReleaseGroupTargetObjectResult1010_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_ReleaseGroupTargetObjectResult1010_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_ReleaseGroupTargetObjectResult)
            },
            _hook_record {
                (LPVOID)0x1400e4480L,
                (LPVOID *)&CPlayerSendMsg_ReleaseSiegeModeResult1012_user,
                (LPVOID *)&CPlayerSendMsg_ReleaseSiegeModeResult1012_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_ReleaseSiegeModeResult1012_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_ReleaseSiegeModeResult)
            },
            _hook_record {
                (LPVOID)0x1400e85d0L,
                (LPVOID *)&CPlayerSendMsg_RemainOreRate1014_user,
                (LPVOID *)&CPlayerSendMsg_RemainOreRate1014_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_RemainOreRate1014_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_RemainOreRate)
            },
            _hook_record {
                (LPVOID)0x1400e4570L,
                (LPVOID *)&CPlayerSendMsg_RemainTimeInform1016_user,
                (LPVOID *)&CPlayerSendMsg_RemainTimeInform1016_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_RemainTimeInform1016_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(int16_t, int, struct _SYSTEMTIME*))&CPlayer::SendMsg_RemainTimeInform)
            },
            _hook_record {
                (LPVOID)0x1400dc220L,
                (LPVOID *)&CPlayerSendMsg_ResDivision1018_user,
                (LPVOID *)&CPlayerSendMsg_ResDivision1018_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_ResDivision1018_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, struct _STORAGE_LIST::_db_con*, struct _STORAGE_LIST::_db_con*))&CPlayer::SendMsg_ResDivision)
            },
            _hook_record {
                (LPVOID)0x1400dc140L,
                (LPVOID *)&CPlayerSendMsg_ResSeparation1020_user,
                (LPVOID *)&CPlayerSendMsg_ResSeparation1020_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_ResSeparation1020_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, struct _STORAGE_LIST::_db_con*, struct _STORAGE_LIST::_db_con*))&CPlayer::SendMsg_ResSeparation)
            },
            _hook_record {
                (LPVOID)0x1400e7400L,
                (LPVOID *)&CPlayerSendMsg_ResultChangeTaxRate1022_user,
                (LPVOID *)&CPlayerSendMsg_ResultChangeTaxRate1022_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_ResultChangeTaxRate1022_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char))&CPlayer::SendMsg_ResultChangeTaxRate)
            },
            _hook_record {
                (LPVOID)0x1400df4f0L,
                (LPVOID *)&CPlayerSendMsg_ResultNpcQuest1024_user,
                (LPVOID *)&CPlayerSendMsg_ResultNpcQuest1024_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_ResultNpcQuest1024_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(bool))&CPlayer::SendMsg_ResultNpcQuest)
            },
            _hook_record {
                (LPVOID)0x1400d60b0L,
                (LPVOID *)&CPlayerSendMsg_Resurrect1026_user,
                (LPVOID *)&CPlayerSendMsg_Resurrect1026_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_Resurrect1026_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, bool))&CPlayer::SendMsg_Resurrect)
            },
            _hook_record {
                (LPVOID)0x1400d61c0L,
                (LPVOID *)&CPlayerSendMsg_ResurrectInform1028_user,
                (LPVOID *)&CPlayerSendMsg_ResurrectInform1028_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_ResurrectInform1028_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_ResurrectInform)
            },
            _hook_record {
                (LPVOID)0x1400d5f30L,
                (LPVOID *)&CPlayerSendMsg_Revival1030_user,
                (LPVOID *)&CPlayerSendMsg_Revival1030_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_Revival1030_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, bool))&CPlayer::SendMsg_Revival)
            },
            _hook_record {
                (LPVOID)0x1400e82b0L,
                (LPVOID *)&CPlayerSendMsg_RevivalOfJade1032_user,
                (LPVOID *)&CPlayerSendMsg_RevivalOfJade1032_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_RevivalOfJade1032_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t))&CPlayer::SendMsg_RevivalOfJade)
            },
            _hook_record {
                (LPVOID)0x1400de9e0L,
                (LPVOID *)&CPlayerSendMsg_RewardAddItem1034_user,
                (LPVOID *)&CPlayerSendMsg_RewardAddItem1034_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_RewardAddItem1034_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _STORAGE_LIST::_db_con*, char))&CPlayer::SendMsg_RewardAddItem)
            },
            _hook_record {
                (LPVOID)0x1400e78f0L,
                (LPVOID *)&CPlayerSendMsg_SFDelayRequest1036_user,
                (LPVOID *)&CPlayerSendMsg_SFDelayRequest1036_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_SFDelayRequest1036_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_SFDelayRequest)
            },
            _hook_record {
                (LPVOID)0x1400de8f0L,
                (LPVOID *)&CPlayerSendMsg_SelectClassResult1038_user,
                (LPVOID *)&CPlayerSendMsg_SelectClassResult1038_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_SelectClassResult1038_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, uint16_t))&CPlayer::SendMsg_SelectClassResult)
            },
            _hook_record {
                (LPVOID)0x1400e2460L,
                (LPVOID *)&CPlayerSendMsg_SelectQuestReward1040_user,
                (LPVOID *)&CPlayerSendMsg_SelectQuestReward1040_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_SelectQuestReward1040_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_SelectQuestReward)
            },
            _hook_record {
                (LPVOID)0x1400e2090L,
                (LPVOID *)&CPlayerSendMsg_SelectWaitedQuest1042_user,
                (LPVOID *)&CPlayerSendMsg_SelectWaitedQuest1042_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_SelectWaitedQuest1042_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, unsigned int, char))&CPlayer::SendMsg_SelectWaitedQuest)
            },
            _hook_record {
                (LPVOID)0x1400d7490L,
                (LPVOID *)&CPlayerSendMsg_SellItemStoreResult1044_user,
                (LPVOID *)&CPlayerSendMsg_SellItemStoreResult1044_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_SellItemStoreResult1044_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CItemStore*, char))&CPlayer::SendMsg_SellItemStoreResult)
            },
            _hook_record {
                (LPVOID)0x1400e03a0L,
                (LPVOID *)&CPlayerSendMsg_SetDPInform1046_user,
                (LPVOID *)&CPlayerSendMsg_SetDPInform1046_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_SetDPInform1046_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_SetDPInform)
            },
            _hook_record {
                (LPVOID)0x1400e01c0L,
                (LPVOID *)&CPlayerSendMsg_SetFPInform1048_user,
                (LPVOID *)&CPlayerSendMsg_SetFPInform1048_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_SetFPInform1048_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_SetFPInform)
            },
            _hook_record {
                (LPVOID)0x1400e7250L,
                (LPVOID *)&CPlayerSendMsg_SetGroupMapPoint1050_user,
                (LPVOID *)&CPlayerSendMsg_SetGroupMapPoint1050_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_SetGroupMapPoint1050_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, char, float*, char))&CPlayer::SendMsg_SetGroupMapPoint)
            },
            _hook_record {
                (LPVOID)0x1400e28f0L,
                (LPVOID *)&CPlayerSendMsg_SetGroupTargetObjectResult1052_user,
                (LPVOID *)&CPlayerSendMsg_SetGroupTargetObjectResult1052_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_SetGroupTargetObjectResult1052_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char))&CPlayer::SendMsg_SetGroupTargetObjectResult)
            },
            _hook_record {
                (LPVOID)0x1400e0260L,
                (LPVOID *)&CPlayerSendMsg_SetHPInform1054_user,
                (LPVOID *)&CPlayerSendMsg_SetHPInform1054_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_SetHPInform1054_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_SetHPInform)
            },
            _hook_record {
                (LPVOID)0x1400e51c0L,
                (LPVOID *)&CPlayerSendMsg_SetItemCheckResult1056_user,
                (LPVOID *)&CPlayerSendMsg_SetItemCheckResult1056_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_SetItemCheckResult1056_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, unsigned int, char))&CPlayer::SendMsg_SetItemCheckResult)
            },
            _hook_record {
                (LPVOID)0x1400e0300L,
                (LPVOID *)&CPlayerSendMsg_SetSPInform1058_user,
                (LPVOID *)&CPlayerSendMsg_SetSPInform1058_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_SetSPInform1058_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_SetSPInform)
            },
            _hook_record {
                (LPVOID)0x1400e27a0L,
                (LPVOID *)&CPlayerSendMsg_SetTargetObjectResult1060_user,
                (LPVOID *)&CPlayerSendMsg_SetTargetObjectResult1060_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_SetTargetObjectResult1060_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, bool))&CPlayer::SendMsg_SetTargetObjectResult)
            },
            _hook_record {
                (LPVOID)0x1400df950L,
                (LPVOID *)&CPlayerSendMsg_SkillResult1062_user,
                (LPVOID *)&CPlayerSendMsg_SkillResult1062_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_SkillResult1062_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, struct _CHRID*, char, int))&CPlayer::SendMsg_SkillResult)
            },
            _hook_record {
                (LPVOID)0x1400d99f0L,
                (LPVOID *)&CPlayerSendMsg_SpecialDownloadResult1064_user,
                (LPVOID *)&CPlayerSendMsg_SpecialDownloadResult1064_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_SpecialDownloadResult1064_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_SpecialDownloadResult)
            },
            _hook_record {
                (LPVOID)0x1400e09b0L,
                (LPVOID *)&CPlayerSendMsg_StartContSF1066_user,
                (LPVOID *)&CPlayerSendMsg_StartContSF1066_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_StartContSF1066_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _sf_continous*))&CPlayer::SendMsg_StartContSF)
            },
            _hook_record {
                (LPVOID)0x1400dbec0L,
                (LPVOID *)&CPlayerSendMsg_StartNewPos1068_user,
                (LPVOID *)&CPlayerSendMsg_StartNewPos1068_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_StartNewPos1068_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_StartNewPos)
            },
            _hook_record {
                (LPVOID)0x1400e1e50L,
                (LPVOID *)&CPlayerSendMsg_StartShopping1070_user,
                (LPVOID *)&CPlayerSendMsg_StartShopping1070_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_StartShopping1070_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_StartShopping)
            },
            _hook_record {
                (LPVOID)0x1400d6cd0L,
                (LPVOID *)&CPlayerSendMsg_StatInform1072_user,
                (LPVOID *)&CPlayerSendMsg_StatInform1072_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_StatInform1072_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, unsigned int, char))&CPlayer::SendMsg_StatInform)
            },
            _hook_record {
                (LPVOID)0x1400d69f0L,
                (LPVOID *)&CPlayerSendMsg_StateInform1074_user,
                (LPVOID *)&CPlayerSendMsg_StateInform1074_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_StateInform1074_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint64_t))&CPlayer::SendMsg_StateInform)
            },
            _hook_record {
                (LPVOID)0x1400d6240L,
                (LPVOID *)&CPlayerSendMsg_Stop1076_user,
                (LPVOID *)&CPlayerSendMsg_Stop1076_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_Stop1076_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(bool))&CPlayer::SendMsg_Stop)
            },
            _hook_record {
                (LPVOID)0x1400d75c0L,
                (LPVOID *)&CPlayerSendMsg_StoreLimitItemAmountInfo1078_user,
                (LPVOID *)&CPlayerSendMsg_StoreLimitItemAmountInfo1078_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_StoreLimitItemAmountInfo1078_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int, struct _limit_amount_info*))&CPlayer::SendMsg_StoreLimitItemAmountInfo)
            },
            _hook_record {
                (LPVOID)0x1400d9db0L,
                (LPVOID *)&CPlayerSendMsg_StoreListResult1080_user,
                (LPVOID *)&CPlayerSendMsg_StoreListResult1080_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_StoreListResult1080_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_StoreListResult)
            },
            _hook_record {
                (LPVOID)0x1400e8b90L,
                (LPVOID *)&CPlayerSendMsg_TLStatusInfo1082_user,
                (LPVOID *)&CPlayerSendMsg_TLStatusInfo1082_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_TLStatusInfo1082_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int, char))&CPlayer::SendMsg_TLStatusInfo)
            },
            _hook_record {
                (LPVOID)0x1400e8dd0L,
                (LPVOID *)&CPlayerSendMsg_TLStatusPenalty1084_user,
                (LPVOID *)&CPlayerSendMsg_TLStatusPenalty1084_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_TLStatusPenalty1084_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_TLStatusPenalty)
            },
            _hook_record {
                (LPVOID)0x1400d6800L,
                (LPVOID *)&CPlayerSendMsg_TakeAddResult1086_user,
                (LPVOID *)&CPlayerSendMsg_TakeAddResult1086_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_TakeAddResult1086_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, struct _STORAGE_LIST::_db_con*))&CPlayer::SendMsg_TakeAddResult)
            },
            _hook_record {
                (LPVOID)0x1400d66e0L,
                (LPVOID *)&CPlayerSendMsg_TakeNewResult1088_user,
                (LPVOID *)&CPlayerSendMsg_TakeNewResult1088_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_TakeNewResult1088_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, struct _STORAGE_LIST::_db_con*))&CPlayer::SendMsg_TakeNewResult)
            },
            _hook_record {
                (LPVOID)0x1400e94e0L,
                (LPVOID *)&CPlayerSendMsg_TalikCrystalExchangeResult1090_user,
                (LPVOID *)&CPlayerSendMsg_TalikCrystalExchangeResult1090_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_TalikCrystalExchangeResult1090_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, struct _STORAGE_LIST::_db_con*))&CPlayer::SendMsg_TalikCrystalExchangeResult)
            },
            _hook_record {
                (LPVOID)0x1400e26d0L,
                (LPVOID *)&CPlayerSendMsg_TargetObjectHPInform1092_user,
                (LPVOID *)&CPlayerSendMsg_TargetObjectHPInform1092_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_TargetObjectHPInform1092_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendMsg_TargetObjectHPInform)
            },
            _hook_record {
                (LPVOID)0x1400e7cb0L,
                (LPVOID *)&CPlayerSendMsg_TeleportError1094_user,
                (LPVOID *)&CPlayerSendMsg_TeleportError1094_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_TeleportError1094_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, unsigned int))&CPlayer::SendMsg_TeleportError)
            },
            _hook_record {
                (LPVOID)0x1400d4f60L,
                (LPVOID *)&CPlayerSendMsg_TestAttackResult1096_user,
                (LPVOID *)&CPlayerSendMsg_TestAttackResult1096_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_TestAttackResult1096_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, uint16_t, char, char, int16_t*))&CPlayer::SendMsg_TestAttackResult)
            },
            _hook_record {
                (LPVOID)0x1400dfca0L,
                (LPVOID *)&CPlayerSendMsg_ThrowSkillResult1098_user,
                (LPVOID *)&CPlayerSendMsg_ThrowSkillResult1098_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_ThrowSkillResult1098_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, struct _CHRID*, char))&CPlayer::SendMsg_ThrowSkillResult)
            },
            _hook_record {
                (LPVOID)0x1400d68c0L,
                (LPVOID *)&CPlayerSendMsg_ThrowStorageResult1100_user,
                (LPVOID *)&CPlayerSendMsg_ThrowStorageResult1100_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_ThrowStorageResult1100_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_ThrowStorageResult)
            },
            _hook_record {
                (LPVOID)0x1400dff30L,
                (LPVOID *)&CPlayerSendMsg_ThrowUnitResult1102_user,
                (LPVOID *)&CPlayerSendMsg_ThrowUnitResult1102_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_ThrowUnitResult1102_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, struct _CHRID*, uint16_t))&CPlayer::SendMsg_ThrowUnitResult)
            },
            _hook_record {
                (LPVOID)0x1400e0eb0L,
                (LPVOID *)&CPlayerSendMsg_TowerContinue1104_user,
                (LPVOID *)&CPlayerSendMsg_TowerContinue1104_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_TowerContinue1104_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t, struct CGuardTower*))&CPlayer::SendMsg_TowerContinue)
            },
            _hook_record {
                (LPVOID)0x1400dc500L,
                (LPVOID *)&CPlayerSendMsg_TransShipRenewTicketResult1106_user,
                (LPVOID *)&CPlayerSendMsg_TransShipRenewTicketResult1106_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_TransShipRenewTicketResult1106_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_TransShipRenewTicketResult)
            },
            _hook_record {
                (LPVOID)0x1400e4340L,
                (LPVOID *)&CPlayerSendMsg_TransformSiegeModeResult1108_user,
                (LPVOID *)&CPlayerSendMsg_TransformSiegeModeResult1108_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_TransformSiegeModeResult1108_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_TransformSiegeModeResult)
            },
            _hook_record {
                (LPVOID)0x1400e3490L,
                (LPVOID *)&CPlayerSendMsg_TrunkChangPasswdResult1110_user,
                (LPVOID *)&CPlayerSendMsg_TrunkChangPasswdResult1110_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_TrunkChangPasswdResult1110_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_TrunkChangPasswdResult)
            },
            _hook_record {
                (LPVOID)0x1400e2ec0L,
                (LPVOID *)&CPlayerSendMsg_TrunkDownloadResult1112_user,
                (LPVOID *)&CPlayerSendMsg_TrunkDownloadResult1112_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_TrunkDownloadResult1112_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_TrunkDownloadResult)
            },
            _hook_record {
                (LPVOID)0x1400e3390L,
                (LPVOID *)&CPlayerSendMsg_TrunkEstResult1114_user,
                (LPVOID *)&CPlayerSendMsg_TrunkEstResult1114_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_TrunkEstResult1114_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, unsigned int))&CPlayer::SendMsg_TrunkEstResult)
            },
            _hook_record {
                (LPVOID)0x1400e3520L,
                (LPVOID *)&CPlayerSendMsg_TrunkExtendResult1116_user,
                (LPVOID *)&CPlayerSendMsg_TrunkExtendResult1116_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_TrunkExtendResult1116_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, unsigned int, unsigned int))&CPlayer::SendMsg_TrunkExtendResult)
            },
            _hook_record {
                (LPVOID)0x1400e3ab0L,
                (LPVOID *)&CPlayerSendMsg_TrunkHintAnswerResult1118_user,
                (LPVOID *)&CPlayerSendMsg_TrunkHintAnswerResult1118_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_TrunkHintAnswerResult1118_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char*))&CPlayer::SendMsg_TrunkHintAnswerResult)
            },
            _hook_record {
                (LPVOID)0x1400e3930L,
                (LPVOID *)&CPlayerSendMsg_TrunkIoMoneyResult1120_user,
                (LPVOID *)&CPlayerSendMsg_TrunkIoMoneyResult1120_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_TrunkIoMoneyResult1120_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, long double, long double, unsigned int, unsigned int, unsigned int))&CPlayer::SendMsg_TrunkIoMoneyResult)
            },
            _hook_record {
                (LPVOID)0x1400e3870L,
                (LPVOID *)&CPlayerSendMsg_TrunkIoResult1122_user,
                (LPVOID *)&CPlayerSendMsg_TrunkIoResult1122_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_TrunkIoResult1122_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, unsigned int, unsigned int))&CPlayer::SendMsg_TrunkIoResult)
            },
            _hook_record {
                (LPVOID)0x1400e37a0L,
                (LPVOID *)&CPlayerSendMsg_TrunkPotionDivision1124_user,
                (LPVOID *)&CPlayerSendMsg_TrunkPotionDivision1124_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_TrunkPotionDivision1124_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t, uint16_t, uint16_t, uint16_t, int))&CPlayer::SendMsg_TrunkPotionDivision)
            },
            _hook_record {
                (LPVOID)0x1400e3a10L,
                (LPVOID *)&CPlayerSendMsg_TrunkPwHintIndexResult1126_user,
                (LPVOID *)&CPlayerSendMsg_TrunkPwHintIndexResult1126_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_TrunkPwHintIndexResult1126_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char))&CPlayer::SendMsg_TrunkPwHintIndexResult)
            },
            _hook_record {
                (LPVOID)0x1400e36a0L,
                (LPVOID *)&CPlayerSendMsg_TrunkResDivision1128_user,
                (LPVOID *)&CPlayerSendMsg_TrunkResDivision1128_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_TrunkResDivision1128_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, struct _STORAGE_LIST::_db_con*, struct _STORAGE_LIST::_db_con*))&CPlayer::SendMsg_TrunkResDivision)
            },
            _hook_record {
                (LPVOID)0x1400e7fb0L,
                (LPVOID *)&CPlayerSendMsg_UILock_FindPW_Result1130_user,
                (LPVOID *)&CPlayerSendMsg_UILock_FindPW_Result1130_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_UILock_FindPW_Result1130_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char*, char))&CPlayer::SendMsg_UILock_FindPW_Result)
            },
            _hook_record {
                (LPVOID)0x1400e80b0L,
                (LPVOID *)&CPlayerSendMsg_UILock_Init_Request_ToAccount1132_user,
                (LPVOID *)&CPlayerSendMsg_UILock_Init_Request_ToAccount1132_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_UILock_Init_Request_ToAccount1132_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int, char*, uint16_t, char, char*))&CPlayer::SendMsg_UILock_Init_Request_ToAccount)
            },
            _hook_record {
                (LPVOID)0x1400e7de0L,
                (LPVOID *)&CPlayerSendMsg_UILock_Init_Result1134_user,
                (LPVOID *)&CPlayerSendMsg_UILock_Init_Result1134_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_UILock_Init_Result1134_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_UILock_Init_Result)
            },
            _hook_record {
                (LPVOID)0x1400e7e80L,
                (LPVOID *)&CPlayerSendMsg_UILock_Login_Result1136_user,
                (LPVOID *)&CPlayerSendMsg_UILock_Login_Result1136_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_UILock_Login_Result1136_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char))&CPlayer::SendMsg_UILock_Login_Result)
            },
            _hook_record {
                (LPVOID)0x1400e81b0L,
                (LPVOID *)&CPlayerSendMsg_UILock_Update_Request_ToAccount1138_user,
                (LPVOID *)&CPlayerSendMsg_UILock_Update_Request_ToAccount1138_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_UILock_Update_Request_ToAccount1138_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int, char*, uint16_t, char, char*))&CPlayer::SendMsg_UILock_Update_Request_ToAccount)
            },
            _hook_record {
                (LPVOID)0x1400e7f20L,
                (LPVOID *)&CPlayerSendMsg_UILock_Update_Result1140_user,
                (LPVOID *)&CPlayerSendMsg_UILock_Update_Result1140_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_UILock_Update_Result1140_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_UILock_Update_Result)
            },
            _hook_record {
                (LPVOID)0x1400db5d0L,
                (LPVOID *)&CPlayerSendMsg_UnitAlterFeeInform1142_user,
                (LPVOID *)&CPlayerSendMsg_UnitAlterFeeInform1142_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_UnitAlterFeeInform1142_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, unsigned int))&CPlayer::SendMsg_UnitAlterFeeInform)
            },
            _hook_record {
                (LPVOID)0x1400db090L,
                (LPVOID *)&CPlayerSendMsg_UnitBulletFillResult1144_user,
                (LPVOID *)&CPlayerSendMsg_UnitBulletFillResult1144_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_UnitBulletFillResult1144_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, uint16_t*, unsigned int*))&CPlayer::SendMsg_UnitBulletFillResult)
            },
            _hook_record {
                (LPVOID)0x1400db670L,
                (LPVOID *)&CPlayerSendMsg_UnitBulletReplaceResult1146_user,
                (LPVOID *)&CPlayerSendMsg_UnitBulletReplaceResult1146_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_UnitBulletReplaceResult1146_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_UnitBulletReplaceResult)
            },
            _hook_record {
                (LPVOID)0x1400db310L,
                (LPVOID *)&CPlayerSendMsg_UnitDeliveryResult1148_user,
                (LPVOID *)&CPlayerSendMsg_UnitDeliveryResult1148_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_UnitDeliveryResult1148_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, unsigned int, unsigned int))&CPlayer::SendMsg_UnitDeliveryResult)
            },
            _hook_record {
                (LPVOID)0x1400db700L,
                (LPVOID *)&CPlayerSendMsg_UnitDestroy1150_user,
                (LPVOID *)&CPlayerSendMsg_UnitDestroy1150_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_UnitDestroy1150_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_UnitDestroy)
            },
            _hook_record {
                (LPVOID)0x1400db790L,
                (LPVOID *)&CPlayerSendMsg_UnitForceReturnInform1152_user,
                (LPVOID *)&CPlayerSendMsg_UnitForceReturnInform1152_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_UnitForceReturnInform1152_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, unsigned int))&CPlayer::SendMsg_UnitForceReturnInform)
            },
            _hook_record {
                (LPVOID)0x1400dac10L,
                (LPVOID *)&CPlayerSendMsg_UnitFrameBuyResult1154_user,
                (LPVOID *)&CPlayerSendMsg_UnitFrameBuyResult1154_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_UnitFrameBuyResult1154_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, char, uint16_t, uint16_t, unsigned int*))&CPlayer::SendMsg_UnitFrameBuyResult)
            },
            _hook_record {
                (LPVOID)0x1400dafb0L,
                (LPVOID *)&CPlayerSendMsg_UnitFrameRepairResult1156_user,
                (LPVOID *)&CPlayerSendMsg_UnitFrameRepairResult1156_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_UnitFrameRepairResult1156_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, unsigned int, unsigned int))&CPlayer::SendMsg_UnitFrameRepairResult)
            },
            _hook_record {
                (LPVOID)0x1400db540L,
                (LPVOID *)&CPlayerSendMsg_UnitLeaveResult1158_user,
                (LPVOID *)&CPlayerSendMsg_UnitLeaveResult1158_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_UnitLeaveResult1158_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_UnitLeaveResult)
            },
            _hook_record {
                (LPVOID)0x1400db1d0L,
                (LPVOID *)&CPlayerSendMsg_UnitPackFillResult1160_user,
                (LPVOID *)&CPlayerSendMsg_UnitPackFillResult1160_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_UnitPackFillResult1160_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, char, struct _unit_pack_fill_request_clzo::__list*, unsigned int*))&CPlayer::SendMsg_UnitPackFillResult)
            },
            _hook_record {
                (LPVOID)0x1400dae30L,
                (LPVOID *)&CPlayerSendMsg_UnitPartTuningResult1162_user,
                (LPVOID *)&CPlayerSendMsg_UnitPartTuningResult1162_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_UnitPartTuningResult1162_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, int*))&CPlayer::SendMsg_UnitPartTuningResult)
            },
            _hook_record {
                (LPVOID)0x1400db3f0L,
                (LPVOID *)&CPlayerSendMsg_UnitReturnResult1164_user,
                (LPVOID *)&CPlayerSendMsg_UnitReturnResult1164_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_UnitReturnResult1164_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, unsigned int))&CPlayer::SendMsg_UnitReturnResult)
            },
            _hook_record {
                (LPVOID)0x1400d54a0L,
                (LPVOID *)&CPlayerSendMsg_UnitRideChange1166_user,
                (LPVOID *)&CPlayerSendMsg_UnitRideChange1166_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_UnitRideChange1166_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(bool, struct CParkingUnit*))&CPlayer::SendMsg_UnitRideChange)
            },
            _hook_record {
                (LPVOID)0x1400dad40L,
                (LPVOID *)&CPlayerSendMsg_UnitSellResult1168_user,
                (LPVOID *)&CPlayerSendMsg_UnitSellResult1168_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_UnitSellResult1168_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, uint16_t, int, unsigned int, unsigned int, unsigned int))&CPlayer::SendMsg_UnitSellResult)
            },
            _hook_record {
                (LPVOID)0x1400db4b0L,
                (LPVOID *)&CPlayerSendMsg_UnitTakeResult1170_user,
                (LPVOID *)&CPlayerSendMsg_UnitTakeResult1170_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_UnitTakeResult1170_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SendMsg_UnitTakeResult)
            },
            _hook_record {
                (LPVOID)0x1400e8cb0L,
                (LPVOID *)&CPlayerSendMsg_UpdateTLStatusInfo1172_user,
                (LPVOID *)&CPlayerSendMsg_UpdateTLStatusInfo1172_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_UpdateTLStatusInfo1172_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int, char))&CPlayer::SendMsg_UpdateTLStatusInfo)
            },
            _hook_record {
                (LPVOID)0x1400d7b80L,
                (LPVOID *)&CPlayerSendMsg_UsPotionResultOther1174_user,
                (LPVOID *)&CPlayerSendMsg_UsPotionResultOther1174_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_UsPotionResultOther1174_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, uint16_t, struct CPlayer*, bool))&CPlayer::SendMsg_UsPotionResultOther)
            },
            _hook_record {
                (LPVOID)0x1400e83c0L,
                (LPVOID *)&CPlayerSendMsg_UseJadeResult1176_user,
                (LPVOID *)&CPlayerSendMsg_UseJadeResult1176_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_UseJadeResult1176_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, uint16_t))&CPlayer::SendMsg_UseJadeResult)
            },
            _hook_record {
                (LPVOID)0x1400d7a70L,
                (LPVOID *)&CPlayerSendMsg_UsePotionResult1178_user,
                (LPVOID *)&CPlayerSendMsg_UsePotionResult1178_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_UsePotionResult1178_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, uint16_t, char))&CPlayer::SendMsg_UsePotionResult)
            },
            _hook_record {
                (LPVOID)0x1400e5e00L,
                (LPVOID *)&CPlayerSendMsg_UseRadarResult1180_user,
                (LPVOID *)&CPlayerSendMsg_UseRadarResult1180_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_UseRadarResult1180_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, uint16_t, unsigned int))&CPlayer::SendMsg_UseRadarResult)
            },
            _hook_record {
                (LPVOID)0x1400e3f60L,
                (LPVOID *)&CPlayerSendMsg_VoteResult1182_user,
                (LPVOID *)&CPlayerSendMsg_VoteResult1182_next,
                (LPVOID)cast_pointer_function(CPlayerSendMsg_VoteResult1182_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int, char))&CPlayer::SendMsg_VoteResult)
            },
            _hook_record {
                (LPVOID)0x1400e5520L,
                (LPVOID *)&CPlayerSendTargetMonsterSFContInfo1184_user,
                (LPVOID *)&CPlayerSendTargetMonsterSFContInfo1184_next,
                (LPVOID)cast_pointer_function(CPlayerSendTargetMonsterSFContInfo1184_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendTargetMonsterSFContInfo)
            },
            _hook_record {
                (LPVOID)0x1400e5740L,
                (LPVOID *)&CPlayerSendTargetPlayerDamageContInfo1186_user,
                (LPVOID *)&CPlayerSendTargetPlayerDamageContInfo1186_next,
                (LPVOID)cast_pointer_function(CPlayerSendTargetPlayerDamageContInfo1186_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SendTargetPlayerDamageContInfo)
            },
            _hook_record {
                (LPVOID)0x1400577f0L,
                (LPVOID *)&CPlayerSenseState1188_user,
                (LPVOID *)&CPlayerSenseState1188_next,
                (LPVOID)cast_pointer_function(CPlayerSenseState1188_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SenseState)
            },
            _hook_record {
                (LPVOID)0x1400743f0L,
                (LPVOID *)&CPlayerSetAttackPart1190_user,
                (LPVOID *)&CPlayerSetAttackPart1190_next,
                (LPVOID)cast_pointer_function(CPlayerSetAttackPart1190_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(int))&CPlayer::SetAttackPart)
            },
            _hook_record {
                (LPVOID)0x140068650L,
                (LPVOID *)&CPlayerSetBattleMode1192_user,
                (LPVOID *)&CPlayerSetBattleMode1192_next,
                (LPVOID)cast_pointer_function(CPlayerSetBattleMode1192_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(bool))&CPlayer::SetBattleMode)
            },
            _hook_record {
                (LPVOID)0x1403eaca0L,
                (LPVOID *)&CPlayerSetBindDummy1194_user,
                (LPVOID *)&CPlayerSetBindDummy1194_next,
                (LPVOID)cast_pointer_function(CPlayerSetBindDummy1194_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _dummy_position*))&CPlayer::SetBindDummy)
            },
            _hook_record {
                (LPVOID)0x1403eac70L,
                (LPVOID *)&CPlayerSetBindMapData1196_user,
                (LPVOID *)&CPlayerSetBindMapData1196_next,
                (LPVOID)cast_pointer_function(CPlayerSetBindMapData1196_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CMapData*))&CPlayer::SetBindMapData)
            },
            _hook_record {
                (LPVOID)0x1400a03c0L,
                (LPVOID *)&CPlayerSetBindPosition1198_user,
                (LPVOID *)&CPlayerSetBindPosition1198_next,
                (LPVOID)cast_pointer_function(CPlayerSetBindPosition1198_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CMapData*, struct _dummy_position*))&CPlayer::SetBindPosition)
            },
            _hook_record {
                (LPVOID)0x1402f2740L,
                (LPVOID *)&CPlayerSetCashAmount1200_user,
                (LPVOID *)&CPlayerSetCashAmount1200_next,
                (LPVOID)cast_pointer_function(CPlayerSetCashAmount1200_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(int))&CPlayer::SetCashAmount)
            },
            _hook_record {
                (LPVOID)0x1400cfd80L,
                (LPVOID *)&CPlayerSetCntEnable1202_user,
                (LPVOID *)&CPlayerSetCntEnable1202_next,
                (LPVOID)cast_pointer_function(CPlayerSetCntEnable1202_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(bool))&CPlayer::SetCntEnable)
            },
            _hook_record {
                (LPVOID)0x14005f340L,
                (LPVOID *)&CPlayerSetDP1204_user,
                (LPVOID *)&CPlayerSetDP1204_next,
                (LPVOID)cast_pointer_function(CPlayerSetDP1204_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(int, bool))&CPlayer::SetDP)
            },
            _hook_record {
                (LPVOID)0x14005da70L,
                (LPVOID *)&CPlayerSetDamage1206_user,
                (LPVOID *)&CPlayerSetDamage1206_next,
                (LPVOID)cast_pointer_function(CPlayerSetDamage1206_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)(int, struct CCharacter*, int, bool, int, unsigned int, bool))&CPlayer::SetDamage)
            },
            _hook_record {
                (LPVOID)0x140057c70L,
                (LPVOID *)&CPlayerSetEffectEquipCode1208_user,
                (LPVOID *)&CPlayerSetEffectEquipCode1208_next,
                (LPVOID)cast_pointer_function(CPlayerSetEffectEquipCode1208_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, char))&CPlayer::SetEffectEquipCode)
            },
            _hook_record {
                (LPVOID)0x140050cc0L,
                (LPVOID *)&CPlayerSetEquipEffect1210_user,
                (LPVOID *)&CPlayerSetEquipEffect1210_next,
                (LPVOID)cast_pointer_function(CPlayerSetEquipEffect1210_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _STORAGE_LIST::_storage_con*, bool))&CPlayer::SetEquipEffect)
            },
            _hook_record {
                (LPVOID)0x140052280L,
                (LPVOID *)&CPlayerSetEquipJadeEffect1212_user,
                (LPVOID *)&CPlayerSetEquipJadeEffect1212_next,
                (LPVOID)cast_pointer_function(CPlayerSetEquipJadeEffect1212_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(int, float, bool))&CPlayer::SetEquipJadeEffect)
            },
            _hook_record {
                (LPVOID)0x14005f140L,
                (LPVOID *)&CPlayerSetFP1214_user,
                (LPVOID *)&CPlayerSetFP1214_next,
                (LPVOID)cast_pointer_function(CPlayerSetFP1214_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(int, bool))&CPlayer::SetFP)
            },
            _hook_record {
                (LPVOID)0x14005f430L,
                (LPVOID *)&CPlayerSetGauge1216_user,
                (LPVOID *)&CPlayerSetGauge1216_next,
                (LPVOID)cast_pointer_function(CPlayerSetGauge1216_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(int, int, bool))&CPlayer::SetGauge)
            },
            _hook_record {
                (LPVOID)0x1400647d0L,
                (LPVOID *)&CPlayerSetGrade1218_user,
                (LPVOID *)&CPlayerSetGrade1218_next,
                (LPVOID)cast_pointer_function(CPlayerSetGrade1218_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SetGrade)
            },
            _hook_record {
                (LPVOID)0x14005efa0L,
                (LPVOID *)&CPlayerSetHP1220_user,
                (LPVOID *)&CPlayerSetHP1220_next,
                (LPVOID)cast_pointer_function(CPlayerSetHP1220_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(int, bool))&CPlayer::SetHP)
            },
            _hook_record {
                (LPVOID)0x140050d30L,
                (LPVOID *)&CPlayerSetHaveEffect1222_user,
                (LPVOID *)&CPlayerSetHaveEffect1222_next,
                (LPVOID)cast_pointer_function(CPlayerSetHaveEffect1222_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(bool))&CPlayer::SetHaveEffect)
            },
            _hook_record {
                (LPVOID)0x140068840L,
                (LPVOID *)&CPlayerSetHaveEffectUseTime1224_user,
                (LPVOID *)&CPlayerSetHaveEffectUseTime1224_next,
                (LPVOID)cast_pointer_function(CPlayerSetHaveEffectUseTime1224_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _STORAGE_LIST::_db_con*, bool))&CPlayer::SetHaveEffectUseTime)
            },
            _hook_record {
                (LPVOID)0x140068ff0L,
                (LPVOID *)&CPlayerSetLastAttBuff1226_user,
                (LPVOID *)&CPlayerSetLastAttBuff1226_next,
                (LPVOID)cast_pointer_function(CPlayerSetLastAttBuff1226_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(bool))&CPlayer::SetLastAttBuff)
            },
            _hook_record {
                (LPVOID)0x140055630L,
                (LPVOID *)&CPlayerSetLevel1228_user,
                (LPVOID *)&CPlayerSetLevel1228_next,
                (LPVOID)cast_pointer_function(CPlayerSetLevel1228_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SetLevel)
            },
            _hook_record {
                (LPVOID)0x140055930L,
                (LPVOID *)&CPlayerSetLevelD1230_user,
                (LPVOID *)&CPlayerSetLevelD1230_next,
                (LPVOID)cast_pointer_function(CPlayerSetLevelD1230_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::SetLevelD)
            },
            _hook_record {
                (LPVOID)0x140052970L,
                (LPVOID *)&CPlayerSetMstHaveEffect1232_user,
                (LPVOID *)&CPlayerSetMstHaveEffect1232_next,
                (LPVOID)cast_pointer_function(CPlayerSetMstHaveEffect1232_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _ResourceItem_fld*, struct _STORAGE_LIST::_db_con*, bool, int))&CPlayer::SetMstHaveEffect)
            },
            _hook_record {
                (LPVOID)0x140052c20L,
                (LPVOID *)&CPlayerSetMstPt1234_user,
                (LPVOID *)&CPlayerSetMstPt1234_next,
                (LPVOID)cast_pointer_function(CPlayerSetMstPt1234_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(int, float, bool, int))&CPlayer::SetMstPt)
            },
            _hook_record {
                (LPVOID)0x1400a3920L,
                (LPVOID *)&CPlayerSetPotionActDelay1236_user,
                (LPVOID *)&CPlayerSetPotionActDelay1236_next,
                (LPVOID)cast_pointer_function(CPlayerSetPotionActDelay1236_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, unsigned int, unsigned int))&CPlayer::SetPotionActDelay)
            },
            _hook_record {
                (LPVOID)0x140068ed0L,
                (LPVOID *)&CPlayerSetPvpPointLeak1238_user,
                (LPVOID *)&CPlayerSetPvpPointLeak1238_next,
                (LPVOID)cast_pointer_function(CPlayerSetPvpPointLeak1238_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(long double))&CPlayer::SetPvpPointLeak)
            },
            _hook_record {
                (LPVOID)0x140064850L,
                (LPVOID *)&CPlayerSetRankRate1240_user,
                (LPVOID *)&CPlayerSetRankRate1240_next,
                (LPVOID)cast_pointer_function(CPlayerSetRankRate1240_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t, unsigned int))&CPlayer::SetRankRate)
            },
            _hook_record {
                (LPVOID)0x14005f240L,
                (LPVOID *)&CPlayerSetSP1242_user,
                (LPVOID *)&CPlayerSetSP1242_next,
                (LPVOID)cast_pointer_function(CPlayerSetSP1242_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(int, bool))&CPlayer::SetSP)
            },
            _hook_record {
                (LPVOID)0x140064a40L,
                (LPVOID *)&CPlayerSetShapeAllBuffer1244_user,
                (LPVOID *)&CPlayerSetShapeAllBuffer1244_next,
                (LPVOID)cast_pointer_function(CPlayerSetShapeAllBuffer1244_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SetShapeAllBuffer)
            },
            _hook_record {
                (LPVOID)0x1400f0bc0L,
                (LPVOID *)&CPlayerSetSiege1246_user,
                (LPVOID *)&CPlayerSetSiege1246_next,
                (LPVOID)cast_pointer_function(CPlayerSetSiege1246_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _STORAGE_LIST::_db_con*))&CPlayer::SetSiege)
            },
            _hook_record {
                (LPVOID)0x140063a90L,
                (LPVOID *)&CPlayerSetStateFlag1248_user,
                (LPVOID *)&CPlayerSetStateFlag1248_next,
                (LPVOID)cast_pointer_function(CPlayerSetStateFlag1248_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SetStateFlag)
            },
            _hook_record {
                (LPVOID)0x140065ee0L,
                (LPVOID *)&CPlayerSetStaticMember1250_user,
                (LPVOID *)&CPlayerSetStaticMember1250_next,
                (LPVOID)cast_pointer_function(CPlayerSetStaticMember1250_wrapper),
                (LPVOID)cast_pointer_function((void(*)())&CPlayer::SetStaticMember)
            },
            _hook_record {
                (LPVOID)0x14005d760L,
                (LPVOID *)&CPlayerSetTarPos1252_user,
                (LPVOID *)&CPlayerSetTarPos1252_next,
                (LPVOID)cast_pointer_function(CPlayerSetTarPos1252_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(float*, bool))&CPlayer::SetTarPos)
            },
            _hook_record {
                (LPVOID)0x1400a3b40L,
                (LPVOID *)&CPlayerSetUseReleaseRaceBuffPotion1254_user,
                (LPVOID *)&CPlayerSetUseReleaseRaceBuffPotion1254_next,
                (LPVOID)cast_pointer_function(CPlayerSetUseReleaseRaceBuffPotion1254_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::SetUseReleaseRaceBuffPotion)
            },
            _hook_record {
                (LPVOID)0x1401087b0L,
                (LPVOID *)&CPlayerSetVote1256_user,
                (LPVOID *)&CPlayerSetVote1256_next,
                (LPVOID)cast_pointer_function(CPlayerSetVote1256_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(int))&CPlayer::SetVote)
            },
            _hook_record {
                (LPVOID)0x1400c9a60L,
                (LPVOID *)&CPlayerSortPost1258_user,
                (LPVOID *)&CPlayerSortPost1258_next,
                (LPVOID)cast_pointer_function(CPlayerSortPost1258_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(int))&CPlayer::SortPost)
            },
            _hook_record {
                (LPVOID)0x140056140L,
                (LPVOID *)&CPlayerSubActPoint1260_user,
                (LPVOID *)&CPlayerSubActPoint1260_next,
                (LPVOID)cast_pointer_function(CPlayerSubActPoint1260_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, unsigned int))&CPlayer::SubActPoint)
            },
            _hook_record {
                (LPVOID)0x140055c40L,
                (LPVOID *)&CPlayerSubDalant1262_user,
                (LPVOID *)&CPlayerSubDalant1262_next,
                (LPVOID)cast_pointer_function(CPlayerSubDalant1262_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int))&CPlayer::SubDalant)
            },
            _hook_record {
                (LPVOID)0x140055e70L,
                (LPVOID *)&CPlayerSubGold1264_user,
                (LPVOID *)&CPlayerSubGold1264_next,
                (LPVOID)cast_pointer_function(CPlayerSubGold1264_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int))&CPlayer::SubGold)
            },
            _hook_record {
                (LPVOID)0x140055f60L,
                (LPVOID *)&CPlayerSubPoint1266_user,
                (LPVOID *)&CPlayerSubPoint1266_next,
                (LPVOID)cast_pointer_function(CPlayerSubPoint1266_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int))&CPlayer::SubPoint)
            },
            _hook_record {
                (LPVOID)0x140069600L,
                (LPVOID *)&CPlayerSumMinuteBetween1268_user,
                (LPVOID *)&CPlayerSumMinuteBetween1268_next,
                (LPVOID)cast_pointer_function(CPlayerSumMinuteBetween1268_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CPlayer::*)(struct _SYSTEMTIME*, struct _SYSTEMTIME*))&CPlayer::SumMinuteBetween)
            },
            _hook_record {
                (LPVOID)0x140069480L,
                (LPVOID *)&CPlayerSumMinuteOne1270_user,
                (LPVOID *)&CPlayerSumMinuteOne1270_next,
                (LPVOID)cast_pointer_function(CPlayerSumMinuteOne1270_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CPlayer::*)(struct _SYSTEMTIME*))&CPlayer::SumMinuteOne)
            },
            _hook_record {
                (LPVOID)0x1400a0480L,
                (LPVOID *)&CPlayerTakeGravityStone1272_user,
                (LPVOID *)&CPlayerTakeGravityStone1272_next,
                (LPVOID)cast_pointer_function(CPlayerTakeGravityStone1272_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::TakeGravityStone)
            },
            _hook_record {
                (LPVOID)0x1400a3620L,
                (LPVOID *)&CPlayerUpdateAuraSFCont1274_user,
                (LPVOID *)&CPlayerUpdateAuraSFCont1274_next,
                (LPVOID)cast_pointer_function(CPlayerUpdateAuraSFCont1274_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::UpdateAuraSFCont)
            },
            _hook_record {
                (LPVOID)0x14007be90L,
                (LPVOID *)&CPlayerUpdateChaosModeState1276_user,
                (LPVOID *)&CPlayerUpdateChaosModeState1276_next,
                (LPVOID)cast_pointer_function(CPlayerUpdateChaosModeState1276_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int))&CPlayer::UpdateChaosModeState)
            },
            _hook_record {
                (LPVOID)0x1400c9a00L,
                (LPVOID *)&CPlayerUpdateDelPost1278_user,
                (LPVOID *)&CPlayerUpdateDelPost1278_next,
                (LPVOID)cast_pointer_function(CPlayerUpdateDelPost1278_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(unsigned int, int))&CPlayer::UpdateDelPost)
            },
            _hook_record {
                (LPVOID)0x1400ce390L,
                (LPVOID *)&CPlayerUpdateLastCriTicket1280_user,
                (LPVOID *)&CPlayerUpdateLastCriTicket1280_next,
                (LPVOID)cast_pointer_function(CPlayerUpdateLastCriTicket1280_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t, char, char, char, char))&CPlayer::UpdateLastCriTicket)
            },
            _hook_record {
                (LPVOID)0x1400ce440L,
                (LPVOID *)&CPlayerUpdateLastMetalTicket1282_user,
                (LPVOID *)&CPlayerUpdateLastMetalTicket1282_next,
                (LPVOID)cast_pointer_function(CPlayerUpdateLastMetalTicket1282_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t, char, char, char, char))&CPlayer::UpdateLastMetalTicket)
            },
            _hook_record {
                (LPVOID)0x1400c98f0L,
                (LPVOID *)&CPlayerUpdatePost1284_user,
                (LPVOID *)&CPlayerUpdatePost1284_next,
                (LPVOID)cast_pointer_function(CPlayerUpdatePost1284_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int))&CPlayer::UpdatePost)
            },
            _hook_record {
                (LPVOID)0x1400c9c40L,
                (LPVOID *)&CPlayerUpdatePostAddLog1286_user,
                (LPVOID *)&CPlayerUpdatePostAddLog1286_next,
                (LPVOID)cast_pointer_function(CPlayerUpdatePostAddLog1286_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int, bool, int))&CPlayer::UpdatePostAddLog)
            },
            _hook_record {
                (LPVOID)0x140068390L,
                (LPVOID *)&CPlayerUpdatePvpOrderView1288_user,
                (LPVOID *)&CPlayerUpdatePvpOrderView1288_next,
                (LPVOID)cast_pointer_function(CPlayerUpdatePvpOrderView1288_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(int64_t))&CPlayer::UpdatePvpOrderView)
            },
            _hook_record {
                (LPVOID)0x1402081c0L,
                (LPVOID *)&CPlayerUpdatePvpPointLimiter1290_user,
                (LPVOID *)&CPlayerUpdatePvpPointLimiter1290_next,
                (LPVOID)cast_pointer_function(CPlayerUpdatePvpPointLimiter1290_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(int64_t))&CPlayer::UpdatePvpPointLimiter)
            },
            _hook_record {
                (LPVOID)0x1400c9b90L,
                (LPVOID *)&CPlayerUpdateReturnPost1292_user,
                (LPVOID *)&CPlayerUpdateReturnPost1292_next,
                (LPVOID)cast_pointer_function(CPlayerUpdateReturnPost1292_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int))&CPlayer::UpdateReturnPost)
            },
            _hook_record {
                (LPVOID)0x140053970L,
                (LPVOID *)&CPlayerUpdateVisualVer1294_user,
                (LPVOID *)&CPlayerUpdateVisualVer1294_next,
                (LPVOID)cast_pointer_function(CPlayerUpdateVisualVer1294_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(CPlayer::CashChangeStateFlag))&CPlayer::UpdateVisualVer)
            },
            _hook_record {
                (LPVOID)0x140069c80L,
                (LPVOID *)&CPlayerUpdate_GoldPoint1296_user,
                (LPVOID *)&CPlayerUpdate_GoldPoint1296_next,
                (LPVOID)cast_pointer_function(CPlayerUpdate_GoldPoint1296_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(unsigned int))&CPlayer::Update_GoldPoint)
            },
            _hook_record {
                (LPVOID)0x1400638c0L,
                (LPVOID *)&CPlayerUpdatedMasteryWriteHistory1298_user,
                (LPVOID *)&CPlayerUpdatedMasteryWriteHistory1298_next,
                (LPVOID)cast_pointer_function(CPlayerUpdatedMasteryWriteHistory1298_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::UpdatedMasteryWriteHistory)
            },
            _hook_record {
                (LPVOID)0x1400a25b0L,
                (LPVOID *)&CPlayerWPActiveForce1300_user,
                (LPVOID *)&CPlayerWPActiveForce1300_next,
                (LPVOID)cast_pointer_function(CPlayerWPActiveForce1300_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct _be_damaged_char*, int, struct _force_fld*))&CPlayer::WPActiveForce)
            },
            _hook_record {
                (LPVOID)0x1400a2b60L,
                (LPVOID *)&CPlayerWPActiveSkill1302_user,
                (LPVOID *)&CPlayerWPActiveSkill1302_next,
                (LPVOID)cast_pointer_function(CPlayerWPActiveSkill1302_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct _be_damaged_char*, int, struct _skill_fld*, int))&CPlayer::WPActiveSkill)
            },
            _hook_record {
                (LPVOID)0x14008a400L,
                (LPVOID *)&CPlayerWeaponSFActive1304_user,
                (LPVOID *)&CPlayerWeaponSFActive1304_next,
                (LPVOID)cast_pointer_function(CPlayerWeaponSFActive1304_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct _be_damaged_char*, int*, int*, uint16_t))&CPlayer::WeaponSFActive)
            },
            _hook_record {
                (LPVOID)0x1400d1080L,
                (LPVOID *)&CPlayer_AnimusReturn1306_user,
                (LPVOID *)&CPlayer_AnimusReturn1306_next,
                (LPVOID)cast_pointer_function(CPlayer_AnimusReturn1306_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::_AnimusReturn)
            },
            _hook_record {
                (LPVOID)0x14005cdf0L,
                (LPVOID *)&CPlayer_CalcMaxFP1308_user,
                (LPVOID *)&CPlayer_CalcMaxFP1308_next,
                (LPVOID)cast_pointer_function(CPlayer_CalcMaxFP1308_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)())&CPlayer::_CalcMaxFP)
            },
            _hook_record {
                (LPVOID)0x14005cd30L,
                (LPVOID *)&CPlayer_CalcMaxHP1310_user,
                (LPVOID *)&CPlayer_CalcMaxHP1310_next,
                (LPVOID)cast_pointer_function(CPlayer_CalcMaxHP1310_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)())&CPlayer::_CalcMaxHP)
            },
            _hook_record {
                (LPVOID)0x14005d1c0L,
                (LPVOID *)&CPlayer_CalcMaxSP1312_user,
                (LPVOID *)&CPlayer_CalcMaxSP1312_next,
                (LPVOID)cast_pointer_function(CPlayer_CalcMaxSP1312_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)())&CPlayer::_CalcMaxSP)
            },
            _hook_record {
                (LPVOID)0x140106a10L,
                (LPVOID *)&CPlayer_CheckForcePullUnit1314_user,
                (LPVOID *)&CPlayer_CheckForcePullUnit1314_next,
                (LPVOID)cast_pointer_function(CPlayer_CheckForcePullUnit1314_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::_CheckForcePullUnit)
            },
            _hook_record {
                (LPVOID)0x1401067d0L,
                (LPVOID *)&CPlayer_DeleteUnitKey1316_user,
                (LPVOID *)&CPlayer_DeleteUnitKey1316_next,
                (LPVOID)cast_pointer_function(CPlayer_DeleteUnitKey1316_wrapper),
                (LPVOID)cast_pointer_function((uint16_t(CPlayer::*)(char))&CPlayer::_DeleteUnitKey)
            },
            _hook_record {
                (LPVOID)0x14005ca20L,
                (LPVOID *)&CPlayer_GetItemEffect1318_user,
                (LPVOID *)&CPlayer_GetItemEffect1318_next,
                (LPVOID)cast_pointer_function(CPlayer_GetItemEffect1318_wrapper),
                (LPVOID)cast_pointer_function((struct _ITEM_EFFECT*(CPlayer::*)(struct _STORAGE_LIST::_db_con*))&CPlayer::_GetItemEffect)
            },
            _hook_record {
                (LPVOID)0x14005d2d0L,
                (LPVOID *)&CPlayer_GetPartyMemberInCircle1320_user,
                (LPVOID *)&CPlayer_GetPartyMemberInCircle1320_next,
                (LPVOID)cast_pointer_function(CPlayer_GetPartyMemberInCircle1320_wrapper),
                (LPVOID)cast_pointer_function((char(CPlayer::*)(struct CPlayer**, int, bool))&CPlayer::_GetPartyMemberInCircle)
            },
            _hook_record {
                (LPVOID)0x1401068b0L,
                (LPVOID *)&CPlayer_LockUnitKey1322_user,
                (LPVOID *)&CPlayer_LockUnitKey1322_next,
                (LPVOID)cast_pointer_function(CPlayer_LockUnitKey1322_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(char, bool))&CPlayer::_LockUnitKey)
            },
            _hook_record {
                (LPVOID)0x1400cce90L,
                (LPVOID *)&CPlayer_Reward_Quest1324_user,
                (LPVOID *)&CPlayer_Reward_Quest1324_next,
                (LPVOID)cast_pointer_function(CPlayer_Reward_Quest1324_wrapper),
                (LPVOID)cast_pointer_function((struct _Quest_fld*(CPlayer::*)(struct _Quest_fld*, char))&CPlayer::_Reward_Quest)
            },
            _hook_record {
                (LPVOID)0x1400a1bd0L,
                (LPVOID *)&CPlayer_TowerAllReturn1326_user,
                (LPVOID *)&CPlayer_TowerAllReturn1326_next,
                (LPVOID)cast_pointer_function(CPlayer_TowerAllReturn1326_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, bool))&CPlayer::_TowerAllReturn)
            },
            _hook_record {
                (LPVOID)0x1400a1480L,
                (LPVOID *)&CPlayer_TowerDestroy1328_user,
                (LPVOID *)&CPlayer_TowerDestroy1328_next,
                (LPVOID)cast_pointer_function(CPlayer_TowerDestroy1328_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CGuardTower*))&CPlayer::_TowerDestroy)
            },
            _hook_record {
                (LPVOID)0x1400a1a50L,
                (LPVOID *)&CPlayer_TowerReturn1330_user,
                (LPVOID *)&CPlayer_TowerReturn1330_next,
                (LPVOID)cast_pointer_function(CPlayer_TowerReturn1330_wrapper),
                (LPVOID)cast_pointer_function((uint16_t(CPlayer::*)(struct _STORAGE_LIST::_db_con*))&CPlayer::_TowerReturn)
            },
            _hook_record {
                (LPVOID)0x1400a15d0L,
                (LPVOID *)&CPlayer_TrapDestroy1332_user,
                (LPVOID *)&CPlayer_TrapDestroy1332_next,
                (LPVOID)cast_pointer_function(CPlayer_TrapDestroy1332_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CTrap*, char))&CPlayer::_TrapDestroy)
            },
            _hook_record {
                (LPVOID)0x1400a1650L,
                (LPVOID *)&CPlayer_TrapReturn1334_user,
                (LPVOID *)&CPlayer_TrapReturn1334_next,
                (LPVOID)cast_pointer_function(CPlayer_TrapReturn1334_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CTrap*, uint16_t))&CPlayer::_TrapReturn)
            },
            _hook_record {
                (LPVOID)0x140106de0L,
                (LPVOID *)&CPlayer_UnitDestroy1336_user,
                (LPVOID *)&CPlayer_UnitDestroy1336_next,
                (LPVOID)cast_pointer_function(CPlayer_UnitDestroy1336_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::_UnitDestroy)
            },
            _hook_record {
                (LPVOID)0x140106970L,
                (LPVOID *)&CPlayer_UpdateUnitDebt1338_user,
                (LPVOID *)&CPlayer_UpdateUnitDebt1338_next,
                (LPVOID)cast_pointer_function(CPlayer_UpdateUnitDebt1338_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, unsigned int))&CPlayer::_UpdateUnitDebt)
            },
            _hook_record {
                (LPVOID)0x140089a60L,
                (LPVOID *)&CPlayer_check_dst_param_after_attack1340_user,
                (LPVOID *)&CPlayer_check_dst_param_after_attack1340_next,
                (LPVOID)cast_pointer_function(CPlayer_check_dst_param_after_attack1340_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(int, struct CCharacter*))&CPlayer::_check_dst_param_after_attack)
            },
            _hook_record {
                (LPVOID)0x1400ff4c0L,
                (LPVOID *)&CPlayer_check_embel_part1342_user,
                (LPVOID *)&CPlayer_check_embel_part1342_next,
                (LPVOID)cast_pointer_function(CPlayer_check_embel_part1342_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct _STORAGE_LIST::_db_con*))&CPlayer::_check_embel_part)
            },
            _hook_record {
                (LPVOID)0x1400ff2d0L,
                (LPVOID *)&CPlayer_check_equip_part1344_user,
                (LPVOID *)&CPlayer_check_equip_part1344_next,
                (LPVOID)cast_pointer_function(CPlayer_check_equip_part1344_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct _STORAGE_LIST::_db_con*))&CPlayer::_check_equip_part)
            },
            _hook_record {
                (LPVOID)0x140065e00L,
                (LPVOID *)&CPlayer_check_equipmastery_lim1346_user,
                (LPVOID *)&CPlayer_check_equipmastery_lim1346_next,
                (LPVOID)cast_pointer_function(CPlayer_check_equipmastery_lim1346_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)(int))&CPlayer::_check_equipmastery_lim)
            },
            _hook_record {
                (LPVOID)0x140089930L,
                (LPVOID *)&CPlayer_check_exp_after_attack1348_user,
                (LPVOID *)&CPlayer_check_exp_after_attack1348_next,
                (LPVOID)cast_pointer_function(CPlayer_check_exp_after_attack1348_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)(int, struct _be_damaged_char*, struct CPartyModeKillMonsterExpNotify*))&CPlayer::_check_exp_after_attack)
            },
            _hook_record {
                (LPVOID)0x1400ff6d0L,
                (LPVOID *)&CPlayer_check_guild_target_object1350_user,
                (LPVOID *)&CPlayer_check_guild_target_object1350_next,
                (LPVOID)cast_pointer_function(CPlayer_check_guild_target_object1350_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::_check_guild_target_object)
            },
            _hook_record {
                (LPVOID)0x1400ff190L,
                (LPVOID *)&CPlayer_check_hp_send_party1352_user,
                (LPVOID *)&CPlayer_check_hp_send_party1352_next,
                (LPVOID)cast_pointer_function(CPlayer_check_hp_send_party1352_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::_check_hp_send_party)
            },
            _hook_record {
                (LPVOID)0x140065140L,
                (LPVOID *)&CPlayer_check_mastery_cum_lim1354_user,
                (LPVOID *)&CPlayer_check_mastery_cum_lim1354_next,
                (LPVOID)cast_pointer_function(CPlayer_check_mastery_cum_lim1354_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CPlayer::*)(char, char))&CPlayer::_check_mastery_cum_lim)
            },
            _hook_record {
                (LPVOID)0x1400657a0L,
                (LPVOID *)&CPlayer_check_mastery_lim1356_user,
                (LPVOID *)&CPlayer_check_mastery_lim1356_next,
                (LPVOID)cast_pointer_function(CPlayer_check_mastery_lim1356_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(CPlayer::*)(char, char))&CPlayer::_check_mastery_lim)
            },
            _hook_record {
                (LPVOID)0x1400ff5b0L,
                (LPVOID *)&CPlayer_check_party_target_object1358_user,
                (LPVOID *)&CPlayer_check_party_target_object1358_next,
                (LPVOID)cast_pointer_function(CPlayer_check_party_target_object1358_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::_check_party_target_object)
            },
            _hook_record {
                (LPVOID)0x1400ff7f0L,
                (LPVOID *)&CPlayer_check_race_target_object1360_user,
                (LPVOID *)&CPlayer_check_race_target_object1360_next,
                (LPVOID)cast_pointer_function(CPlayer_check_race_target_object1360_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::_check_race_target_object)
            },
            _hook_record {
                (LPVOID)0x1400ff020L,
                (LPVOID *)&CPlayer_check_target_object1362_user,
                (LPVOID *)&CPlayer_check_target_object1362_next,
                (LPVOID)cast_pointer_function(CPlayer_check_target_object1362_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::_check_target_object)
            },
            _hook_record {
                (LPVOID)0x1400861e0L,
                (LPVOID *)&CPlayer_pre_check_force_attack1364_user,
                (LPVOID *)&CPlayer_pre_check_force_attack1364_next,
                (LPVOID)cast_pointer_function(CPlayer_pre_check_force_attack1364_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)(struct CCharacter*, float*, uint16_t, struct _force_fld**, struct _STORAGE_LIST::_db_con**, uint16_t*, uint16_t, struct _STORAGE_LIST::_db_con**, struct _BulletItem_fld**))&CPlayer::_pre_check_force_attack)
            },
            _hook_record {
                (LPVOID)0x140087670L,
                (LPVOID *)&CPlayer_pre_check_in_guild_battle1366_user,
                (LPVOID *)&CPlayer_pre_check_in_guild_battle1366_next,
                (LPVOID)cast_pointer_function(CPlayer_pre_check_in_guild_battle1366_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)(struct CCharacter*))&CPlayer::_pre_check_in_guild_battle)
            },
            _hook_record {
                (LPVOID)0x1400878b0L,
                (LPVOID *)&CPlayer_pre_check_in_guild_battle_race1368_user,
                (LPVOID *)&CPlayer_pre_check_in_guild_battle_race1368_next,
                (LPVOID)cast_pointer_function(CPlayer_pre_check_in_guild_battle_race1368_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CCharacter*, bool))&CPlayer::_pre_check_in_guild_battle_race)
            },
            _hook_record {
                (LPVOID)0x140084670L,
                (LPVOID *)&CPlayer_pre_check_normal_attack1370_user,
                (LPVOID *)&CPlayer_pre_check_normal_attack1370_next,
                (LPVOID)cast_pointer_function(CPlayer_pre_check_normal_attack1370_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)(struct CCharacter*, uint16_t, bool, struct _STORAGE_LIST::_db_con**, struct _BulletItem_fld**, uint16_t, struct _STORAGE_LIST::_db_con**, struct _BulletItem_fld**))&CPlayer::_pre_check_normal_attack)
            },
            _hook_record {
                (LPVOID)0x140086de0L,
                (LPVOID *)&CPlayer_pre_check_siege_attack1372_user,
                (LPVOID *)&CPlayer_pre_check_siege_attack1372_next,
                (LPVOID)cast_pointer_function(CPlayer_pre_check_siege_attack1372_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)(struct CCharacter*, float*, uint16_t, struct _STORAGE_LIST::_db_con**, struct _BulletItem_fld**, uint16_t, struct _STORAGE_LIST::_db_con**, struct _BulletItem_fld**))&CPlayer::_pre_check_siege_attack)
            },
            _hook_record {
                (LPVOID)0x140085420L,
                (LPVOID *)&CPlayer_pre_check_skill_attack1374_user,
                (LPVOID *)&CPlayer_pre_check_skill_attack1374_next,
                (LPVOID)cast_pointer_function(CPlayer_pre_check_skill_attack1374_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)(struct CCharacter*, float*, char, struct _skill_fld*, uint16_t, struct _STORAGE_LIST::_db_con**, struct _BulletItem_fld**, int, uint16_t*, uint16_t, struct _STORAGE_LIST::_db_con**, struct _BulletItem_fld**))&CPlayer::_pre_check_skill_attack)
            },
            _hook_record {
                (LPVOID)0x1400a3c30L,
                (LPVOID *)&CPlayer_pre_check_skill_enable1376_user,
                (LPVOID *)&CPlayer_pre_check_skill_enable1376_next,
                (LPVOID)cast_pointer_function(CPlayer_pre_check_skill_enable1376_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct _skill_fld*))&CPlayer::_pre_check_skill_enable)
            },
            _hook_record {
                (LPVOID)0x1400a3100L,
                (LPVOID *)&CPlayer_pre_check_skill_gradelimit1378_user,
                (LPVOID *)&CPlayer_pre_check_skill_gradelimit1378_next,
                (LPVOID)cast_pointer_function(CPlayer_pre_check_skill_gradelimit1378_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct _skill_fld*))&CPlayer::_pre_check_skill_gradelimit)
            },
            _hook_record {
                (LPVOID)0x1400869e0L,
                (LPVOID *)&CPlayer_pre_check_unit_attack1380_user,
                (LPVOID *)&CPlayer_pre_check_unit_attack1380_next,
                (LPVOID)cast_pointer_function(CPlayer_pre_check_unit_attack1380_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)(struct CCharacter*, char, struct _UnitPart_fld**, struct _UnitBullet_fld**, struct _unit_bullet_param**))&CPlayer::_pre_check_unit_attack)
            },
            _hook_record {
                (LPVOID)0x14008b780L,
                (LPVOID *)&CPlayer_pre_check_wpactive_force_attack1382_user,
                (LPVOID *)&CPlayer_pre_check_wpactive_force_attack1382_next,
                (LPVOID)cast_pointer_function(CPlayer_pre_check_wpactive_force_attack1382_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::_pre_check_wpactive_force_attack)
            },
            _hook_record {
                (LPVOID)0x14008b5c0L,
                (LPVOID *)&CPlayer_pre_check_wpactive_skill_attack1384_user,
                (LPVOID *)&CPlayer_pre_check_wpactive_skill_attack1384_next,
                (LPVOID)cast_pointer_function(CPlayer_pre_check_wpactive_skill_attack1384_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(char, struct _skill_fld*, uint16_t, struct _STORAGE_LIST::_db_con**, struct _BulletItem_fld**))&CPlayer::_pre_check_wpactive_skill_attack)
            },
            _hook_record {
                (LPVOID)0x14004e2c0L,
                (LPVOID *)&CPlayer_set_db_sf_effect1386_user,
                (LPVOID *)&CPlayer_set_db_sf_effect1386_next,
                (LPVOID)cast_pointer_function(CPlayer_set_db_sf_effect1386_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _SFCONT_DB_BASE*))&CPlayer::_set_db_sf_effect)
            },
            _hook_record {
                (LPVOID)0x140061a60L,
                (LPVOID *)&CPlayerapply_case_equip_std_effect1391_user,
                (LPVOID *)&CPlayerapply_case_equip_std_effect1391_next,
                (LPVOID)cast_pointer_function(CPlayerapply_case_equip_std_effect1391_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _STORAGE_LIST::_db_con*, bool))&CPlayer::apply_case_equip_std_effect)
            },
            _hook_record {
                (LPVOID)0x1400623c0L,
                (LPVOID *)&CPlayerapply_case_equip_upgrade_effect1393_user,
                (LPVOID *)&CPlayerapply_case_equip_upgrade_effect1393_next,
                (LPVOID)cast_pointer_function(CPlayerapply_case_equip_upgrade_effect1393_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _STORAGE_LIST::_db_con*, bool))&CPlayer::apply_case_equip_upgrade_effect)
            },
            _hook_record {
                (LPVOID)0x140051850L,
                (LPVOID *)&CPlayerapply_have_item_std_effect1395_user,
                (LPVOID *)&CPlayerapply_have_item_std_effect1395_next,
                (LPVOID)cast_pointer_function(CPlayerapply_have_item_std_effect1395_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(int, float, bool, int))&CPlayer::apply_have_item_std_effect)
            },
            _hook_record {
                (LPVOID)0x140061b10L,
                (LPVOID *)&CPlayerapply_normal_item_std_effect1397_user,
                (LPVOID *)&CPlayerapply_normal_item_std_effect1397_next,
                (LPVOID)cast_pointer_function(CPlayerapply_normal_item_std_effect1397_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(int, float, bool))&CPlayer::apply_normal_item_std_effect)
            },
            _hook_record {
                (LPVOID)0x1400bfa90L,
                (LPVOID *)&CPlayerdev_SetGuildGrade1399_user,
                (LPVOID *)&CPlayerdev_SetGuildGrade1399_next,
                (LPVOID)cast_pointer_function(CPlayerdev_SetGuildGrade1399_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(char))&CPlayer::dev_SetGuildGrade)
            },
            _hook_record {
                (LPVOID)0x1400bfbc0L,
                (LPVOID *)&CPlayerdev_SetGuildGradeByGuildSerial1401_user,
                (LPVOID *)&CPlayerdev_SetGuildGradeByGuildSerial1401_next,
                (LPVOID)cast_pointer_function(CPlayerdev_SetGuildGradeByGuildSerial1401_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(unsigned int, char))&CPlayer::dev_SetGuildGradeByGuildSerial)
            },
            _hook_record {
                (LPVOID)0x1400bfb20L,
                (LPVOID *)&CPlayerdev_SetGuildGradeByName1403_user,
                (LPVOID *)&CPlayerdev_SetGuildGradeByName1403_next,
                (LPVOID)cast_pointer_function(CPlayerdev_SetGuildGradeByName1403_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(char*, char))&CPlayer::dev_SetGuildGradeByName)
            },
            _hook_record {
                (LPVOID)0x1400c0370L,
                (LPVOID *)&CPlayerdev_after_effect1405_user,
                (LPVOID *)&CPlayerdev_after_effect1405_next,
                (LPVOID)cast_pointer_function(CPlayerdev_after_effect1405_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::dev_after_effect)
            },
            _hook_record {
                (LPVOID)0x1400baf30L,
                (LPVOID *)&CPlayerdev_all_kill1407_user,
                (LPVOID *)&CPlayerdev_all_kill1407_next,
                (LPVOID)cast_pointer_function(CPlayerdev_all_kill1407_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::dev_all_kill)
            },
            _hook_record {
                (LPVOID)0x1400bc7e0L,
                (LPVOID *)&CPlayerdev_animus_recall_time_free1409_user,
                (LPVOID *)&CPlayerdev_animus_recall_time_free1409_next,
                (LPVOID)cast_pointer_function(CPlayerdev_animus_recall_time_free1409_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(bool))&CPlayer::dev_animus_recall_time_free)
            },
            _hook_record {
                (LPVOID)0x1400bda50L,
                (LPVOID *)&CPlayerdev_avator_copy1411_user,
                (LPVOID *)&CPlayerdev_avator_copy1411_next,
                (LPVOID)cast_pointer_function(CPlayerdev_avator_copy1411_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(char*))&CPlayer::dev_avator_copy)
            },
            _hook_record {
                (LPVOID)0x1400bb930L,
                (LPVOID *)&CPlayerdev_change_class1413_user,
                (LPVOID *)&CPlayerdev_change_class1413_next,
                (LPVOID)cast_pointer_function(CPlayerdev_change_class1413_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(char*))&CPlayer::dev_change_class)
            },
            _hook_record {
                (LPVOID)0x1400bdc90L,
                (LPVOID *)&CPlayerdev_cont_effect_del1415_user,
                (LPVOID *)&CPlayerdev_cont_effect_del1415_next,
                (LPVOID)cast_pointer_function(CPlayerdev_cont_effect_del1415_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::dev_cont_effect_del)
            },
            _hook_record {
                (LPVOID)0x1400bdc30L,
                (LPVOID *)&CPlayerdev_cont_effect_time1417_user,
                (LPVOID *)&CPlayerdev_cont_effect_time1417_next,
                (LPVOID)cast_pointer_function(CPlayerdev_cont_effect_time1417_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(unsigned int))&CPlayer::dev_cont_effect_time)
            },
            _hook_record {
                (LPVOID)0x1400bcad0L,
                (LPVOID *)&CPlayerdev_dalant1419_user,
                (LPVOID *)&CPlayerdev_dalant1419_next,
                (LPVOID)cast_pointer_function(CPlayerdev_dalant1419_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(unsigned int))&CPlayer::dev_dalant)
            },
            _hook_record {
                (LPVOID)0x1400bb330L,
                (LPVOID *)&CPlayerdev_die1421_user,
                (LPVOID *)&CPlayerdev_die1421_next,
                (LPVOID)cast_pointer_function(CPlayerdev_die1421_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::dev_die)
            },
            _hook_record {
                (LPVOID)0x1400c0630L,
                (LPVOID *)&CPlayerdev_drop_item1423_user,
                (LPVOID *)&CPlayerdev_drop_item1423_next,
                (LPVOID)cast_pointer_function(CPlayerdev_drop_item1423_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(char*, int, char*, int))&CPlayer::dev_drop_item)
            },
            _hook_record {
                (LPVOID)0x1400bb910L,
                (LPVOID *)&CPlayerdev_free_sf_by_class1425_user,
                (LPVOID *)&CPlayerdev_free_sf_by_class1425_next,
                (LPVOID)cast_pointer_function(CPlayerdev_free_sf_by_class1425_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::dev_free_sf_by_class)
            },
            _hook_record {
                (LPVOID)0x1400c00c0L,
                (LPVOID *)&CPlayerdev_full_animus_gauge1427_user,
                (LPVOID *)&CPlayerdev_full_animus_gauge1427_next,
                (LPVOID)cast_pointer_function(CPlayerdev_full_animus_gauge1427_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::dev_full_animus_gauge)
            },
            _hook_record {
                (LPVOID)0x1400bcd30L,
                (LPVOID *)&CPlayerdev_full_force1429_user,
                (LPVOID *)&CPlayerdev_full_force1429_next,
                (LPVOID)cast_pointer_function(CPlayerdev_full_force1429_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::dev_full_force)
            },
            _hook_record {
                (LPVOID)0x1400bb710L,
                (LPVOID *)&CPlayerdev_full_point1431_user,
                (LPVOID *)&CPlayerdev_full_point1431_next,
                (LPVOID)cast_pointer_function(CPlayerdev_full_point1431_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::dev_full_point)
            },
            _hook_record {
                (LPVOID)0x1400bcc00L,
                (LPVOID *)&CPlayerdev_gold1433_user,
                (LPVOID *)&CPlayerdev_gold1433_next,
                (LPVOID)cast_pointer_function(CPlayerdev_gold1433_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(unsigned int))&CPlayer::dev_gold)
            },
            _hook_record {
                (LPVOID)0x1400c0490L,
                (LPVOID *)&CPlayerdev_goto_monster1435_user,
                (LPVOID *)&CPlayerdev_goto_monster1435_next,
                (LPVOID)cast_pointer_function(CPlayerdev_goto_monster1435_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CMonster*))&CPlayer::dev_goto_monster)
            },
            _hook_record {
                (LPVOID)0x1400c0560L,
                (LPVOID *)&CPlayerdev_goto_npc1437_user,
                (LPVOID *)&CPlayerdev_goto_npc1437_next,
                (LPVOID)cast_pointer_function(CPlayerdev_goto_npc1437_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct CMerchant*))&CPlayer::dev_goto_npc)
            },
            _hook_record {
                (LPVOID)0x1400bb7b0L,
                (LPVOID *)&CPlayerdev_half_inven_amount1439_user,
                (LPVOID *)&CPlayerdev_half_inven_amount1439_next,
                (LPVOID)cast_pointer_function(CPlayerdev_half_inven_amount1439_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(uint64_t))&CPlayer::dev_half_inven_amount)
            },
            _hook_record {
                (LPVOID)0x1400bb640L,
                (LPVOID *)&CPlayerdev_half_point1441_user,
                (LPVOID *)&CPlayerdev_half_point1441_next,
                (LPVOID)cast_pointer_function(CPlayerdev_half_point1441_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::dev_half_point)
            },
            _hook_record {
                (LPVOID)0x1400bca80L,
                (LPVOID *)&CPlayerdev_init_monster1443_user,
                (LPVOID *)&CPlayerdev_init_monster1443_next,
                (LPVOID)cast_pointer_function(CPlayerdev_init_monster1443_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::dev_init_monster)
            },
            _hook_record {
                (LPVOID)0x1400bd840L,
                (LPVOID *)&CPlayerdev_inven_empty1445_user,
                (LPVOID *)&CPlayerdev_inven_empty1445_next,
                (LPVOID)cast_pointer_function(CPlayerdev_inven_empty1445_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::dev_inven_empty)
            },
            _hook_record {
                (LPVOID)0x1400bb470L,
                (LPVOID *)&CPlayerdev_item_make_no_use_matrial1447_user,
                (LPVOID *)&CPlayerdev_item_make_no_use_matrial1447_next,
                (LPVOID)cast_pointer_function(CPlayerdev_item_make_no_use_matrial1447_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(bool))&CPlayer::dev_item_make_no_use_matrial)
            },
            _hook_record {
                (LPVOID)0x1400bd540L,
                (LPVOID *)&CPlayerdev_loot_bag1449_user,
                (LPVOID *)&CPlayerdev_loot_bag1449_next,
                (LPVOID)cast_pointer_function(CPlayerdev_loot_bag1449_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::dev_loot_bag)
            },
            _hook_record {
                (LPVOID)0x1400bd800L,
                (LPVOID *)&CPlayerdev_loot_free1451_user,
                (LPVOID *)&CPlayerdev_loot_free1451_next,
                (LPVOID)cast_pointer_function(CPlayerdev_loot_free1451_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(bool))&CPlayer::dev_loot_free)
            },
            _hook_record {
                (LPVOID)0x1400be510L,
                (LPVOID *)&CPlayerdev_loot_fullitem1453_user,
                (LPVOID *)&CPlayerdev_loot_fullitem1453_next,
                (LPVOID)cast_pointer_function(CPlayerdev_loot_fullitem1453_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(char))&CPlayer::dev_loot_fullitem)
            },
            _hook_record {
                (LPVOID)0x1400bd2f0L,
                (LPVOID *)&CPlayerdev_loot_item1455_user,
                (LPVOID *)&CPlayerdev_loot_item1455_next,
                (LPVOID)cast_pointer_function(CPlayerdev_loot_item1455_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(char*, int, char*, int))&CPlayer::dev_loot_item)
            },
            _hook_record {
                (LPVOID)0x1400bd000L,
                (LPVOID *)&CPlayerdev_loot_material1457_user,
                (LPVOID *)&CPlayerdev_loot_material1457_next,
                (LPVOID)cast_pointer_function(CPlayerdev_loot_material1457_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::dev_loot_material)
            },
            _hook_record {
                (LPVOID)0x1400bd630L,
                (LPVOID *)&CPlayerdev_loot_mine1459_user,
                (LPVOID *)&CPlayerdev_loot_mine1459_next,
                (LPVOID)cast_pointer_function(CPlayerdev_loot_mine1459_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::dev_loot_mine)
            },
            _hook_record {
                (LPVOID)0x1400bd350L,
                (LPVOID *)&CPlayerdev_loot_tower1461_user,
                (LPVOID *)&CPlayerdev_loot_tower1461_next,
                (LPVOID)cast_pointer_function(CPlayerdev_loot_tower1461_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::dev_loot_tower)
            },
            _hook_record {
                (LPVOID)0x1400bb180L,
                (LPVOID *)&CPlayerdev_lv1463_user,
                (LPVOID *)&CPlayerdev_lv1463_next,
                (LPVOID)cast_pointer_function(CPlayerdev_lv1463_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(int))&CPlayer::dev_lv)
            },
            _hook_record {
                (LPVOID)0x1400bdbf0L,
                (LPVOID *)&CPlayerdev_make_succ1465_user,
                (LPVOID *)&CPlayerdev_make_succ1465_next,
                (LPVOID)cast_pointer_function(CPlayerdev_make_succ1465_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(bool))&CPlayer::dev_make_succ)
            },
            _hook_record {
                (LPVOID)0x1400be670L,
                (LPVOID *)&CPlayerdev_max_level_ext1467_user,
                (LPVOID *)&CPlayerdev_max_level_ext1467_next,
                (LPVOID)cast_pointer_function(CPlayerdev_max_level_ext1467_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(char))&CPlayer::dev_max_level_ext)
            },
            _hook_record {
                (LPVOID)0x1400bb430L,
                (LPVOID *)&CPlayerdev_never_die1469_user,
                (LPVOID *)&CPlayerdev_never_die1469_next,
                (LPVOID)cast_pointer_function(CPlayerdev_never_die1469_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(bool))&CPlayer::dev_never_die)
            },
            _hook_record {
                (LPVOID)0x1400bb4f0L,
                (LPVOID *)&CPlayerdev_quest_complete1471_user,
                (LPVOID *)&CPlayerdev_quest_complete1471_next,
                (LPVOID)cast_pointer_function(CPlayerdev_quest_complete1471_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::dev_quest_complete)
            },
            _hook_record {
                (LPVOID)0x1400ba4f0L,
                (LPVOID *)&CPlayerdev_quest_complete_other1473_user,
                (LPVOID *)&CPlayerdev_quest_complete_other1473_next,
                (LPVOID)cast_pointer_function(CPlayerdev_quest_complete_other1473_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(char*))&CPlayer::dev_quest_complete_other)
            },
            _hook_record {
                (LPVOID)0x1400bc8b0L,
                (LPVOID *)&CPlayerdev_set_animus_exp1475_user,
                (LPVOID *)&CPlayerdev_set_animus_exp1475_next,
                (LPVOID)cast_pointer_function(CPlayerdev_set_animus_exp1475_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(uint64_t))&CPlayer::dev_set_animus_exp)
            },
            _hook_record {
                (LPVOID)0x1400bfc60L,
                (LPVOID *)&CPlayerdev_set_animus_lv1477_user,
                (LPVOID *)&CPlayerdev_set_animus_lv1477_next,
                (LPVOID)cast_pointer_function(CPlayerdev_set_animus_lv1477_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(int))&CPlayer::dev_set_animus_lv)
            },
            _hook_record {
                (LPVOID)0x1400c0960L,
                (LPVOID *)&CPlayerdev_set_hp1479_user,
                (LPVOID *)&CPlayerdev_set_hp1479_next,
                (LPVOID)cast_pointer_function(CPlayerdev_set_hp1479_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(float))&CPlayer::dev_set_hp)
            },
            _hook_record {
                (LPVOID)0x1400c08b0L,
                (LPVOID *)&CPlayerdev_trap_attack_grade1481_user,
                (LPVOID *)&CPlayerdev_trap_attack_grade1481_next,
                (LPVOID)cast_pointer_function(CPlayerdev_trap_attack_grade1481_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(int))&CPlayer::dev_trap_attack_grade)
            },
            _hook_record {
                (LPVOID)0x1400bc1c0L,
                (LPVOID *)&CPlayerdev_up_all1483_user,
                (LPVOID *)&CPlayerdev_up_all1483_next,
                (LPVOID)cast_pointer_function(CPlayerdev_up_all1483_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(int))&CPlayer::dev_up_all)
            },
            _hook_record {
                (LPVOID)0x1400b9c50L,
                (LPVOID *)&CPlayerdev_up_all_pt1485_user,
                (LPVOID *)&CPlayerdev_up_all_pt1485_next,
                (LPVOID)cast_pointer_function(CPlayerdev_up_all_pt1485_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(int))&CPlayer::dev_up_all_pt)
            },
            _hook_record {
                (LPVOID)0x1400bc760L,
                (LPVOID *)&CPlayerdev_up_cashbag1487_user,
                (LPVOID *)&CPlayerdev_up_cashbag1487_next,
                (LPVOID)cast_pointer_function(CPlayerdev_up_cashbag1487_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(long double))&CPlayer::dev_up_cashbag)
            },
            _hook_record {
                (LPVOID)0x1400bb9a0L,
                (LPVOID *)&CPlayerdev_up_forceitem1489_user,
                (LPVOID *)&CPlayerdev_up_forceitem1489_next,
                (LPVOID)cast_pointer_function(CPlayerdev_up_forceitem1489_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(int))&CPlayer::dev_up_forceitem)
            },
            _hook_record {
                (LPVOID)0x1400bbb40L,
                (LPVOID *)&CPlayerdev_up_forcemastery1491_user,
                (LPVOID *)&CPlayerdev_up_forcemastery1491_next,
                (LPVOID)cast_pointer_function(CPlayerdev_up_forcemastery1491_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(int))&CPlayer::dev_up_forcemastery)
            },
            _hook_record {
                (LPVOID)0x1400bbbb0L,
                (LPVOID *)&CPlayerdev_up_mastery1493_user,
                (LPVOID *)&CPlayerdev_up_mastery1493_next,
                (LPVOID)cast_pointer_function(CPlayerdev_up_mastery1493_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(int, int, int))&CPlayer::dev_up_mastery)
            },
            _hook_record {
                (LPVOID)0x1400bc6f0L,
                (LPVOID *)&CPlayerdev_up_pvp1495_user,
                (LPVOID *)&CPlayerdev_up_pvp1495_next,
                (LPVOID)cast_pointer_function(CPlayerdev_up_pvp1495_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(long double))&CPlayer::dev_up_pvp)
            },
            _hook_record {
                (LPVOID)0x1400bbac0L,
                (LPVOID *)&CPlayerdev_up_skill1497_user,
                (LPVOID *)&CPlayerdev_up_skill1497_next,
                (LPVOID)cast_pointer_function(CPlayerdev_up_skill1497_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(char*, int))&CPlayer::dev_up_skill)
            },
            _hook_record {
                (LPVOID)0x1400bad40L,
                (LPVOID *)&CPlayerdev_view_boss1499_user,
                (LPVOID *)&CPlayerdev_view_boss1499_next,
                (LPVOID)cast_pointer_function(CPlayerdev_view_boss1499_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::dev_view_boss)
            },
            _hook_record {
                (LPVOID)0x1400bdea0L,
                (LPVOID *)&CPlayerdev_view_method1501_user,
                (LPVOID *)&CPlayerdev_view_method1501_next,
                (LPVOID)cast_pointer_function(CPlayerdev_view_method1501_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(char*))&CPlayer::dev_view_method)
            },
            _hook_record {
                (LPVOID)0x140088ec0L,
                (LPVOID *)&CPlayermake_force_attack_param1503_user,
                (LPVOID *)&CPlayermake_force_attack_param1503_next,
                (LPVOID)cast_pointer_function(CPlayermake_force_attack_param1503_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CCharacter*, struct _force_fld*, struct _STORAGE_LIST::_db_con*, float*, struct _attack_param*, struct _STORAGE_LIST::_db_con*, float))&CPlayer::make_force_attack_param)
            },
            _hook_record {
                (LPVOID)0x140087f40L,
                (LPVOID *)&CPlayermake_gen_attack_param1505_user,
                (LPVOID *)&CPlayermake_gen_attack_param1505_next,
                (LPVOID)cast_pointer_function(CPlayermake_gen_attack_param1505_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CCharacter*, char, struct _BulletItem_fld*, float, struct _attack_param*, struct _BulletItem_fld*, float))&CPlayer::make_gen_attack_param)
            },
            _hook_record {
                (LPVOID)0x1400893f0L,
                (LPVOID *)&CPlayermake_siege_attack_param1507_user,
                (LPVOID *)&CPlayermake_siege_attack_param1507_next,
                (LPVOID)cast_pointer_function(CPlayermake_siege_attack_param1507_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CCharacter*, float*, char, struct _BulletItem_fld*, float, struct _attack_param*, struct _BulletItem_fld*, float))&CPlayer::make_siege_attack_param)
            },
            _hook_record {
                (LPVOID)0x140088340L,
                (LPVOID *)&CPlayermake_skill_attack_param1509_user,
                (LPVOID *)&CPlayermake_skill_attack_param1509_next,
                (LPVOID)cast_pointer_function(CPlayermake_skill_attack_param1509_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CCharacter*, float*, char, struct _skill_fld*, int, struct _STORAGE_LIST::_db_con*, float, struct _attack_param*, struct _STORAGE_LIST::_db_con*, float))&CPlayer::make_skill_attack_param)
            },
            _hook_record {
                (LPVOID)0x140089230L,
                (LPVOID *)&CPlayermake_unit_attack_param1511_user,
                (LPVOID *)&CPlayermake_unit_attack_param1511_next,
                (LPVOID)cast_pointer_function(CPlayermake_unit_attack_param1511_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CCharacter*, struct _UnitPart_fld*, float, struct _attack_param*))&CPlayer::make_unit_attack_param)
            },
            _hook_record {
                (LPVOID)0x14008ae80L,
                (LPVOID *)&CPlayermake_wpactive_force_attack_param1513_user,
                (LPVOID *)&CPlayermake_wpactive_force_attack_param1513_next,
                (LPVOID)cast_pointer_function(CPlayermake_wpactive_force_attack_param1513_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CCharacter*, struct _force_fld*, float*, struct _attack_param*))&CPlayer::make_wpactive_force_attack_param)
            },
            _hook_record {
                (LPVOID)0x14008b0a0L,
                (LPVOID *)&CPlayermake_wpactive_skill_attack_param1515_user,
                (LPVOID *)&CPlayermake_wpactive_skill_attack_param1515_next,
                (LPVOID)cast_pointer_function(CPlayermake_wpactive_skill_attack_param1515_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CCharacter*, struct _skill_fld*, float*, char, int, struct _STORAGE_LIST::_db_con*, float, struct _attack_param*, int*))&CPlayer::make_wpactive_skill_attack_param)
            },
            _hook_record {
                (LPVOID)0x1400b8e60L,
                (LPVOID *)&CPlayermgr_MaxAttackPoint1517_user,
                (LPVOID *)&CPlayermgr_MaxAttackPoint1517_next,
                (LPVOID)cast_pointer_function(CPlayermgr_MaxAttackPoint1517_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(int))&CPlayer::mgr_MaxAttackPoint)
            },
            _hook_record {
                (LPVOID)0x1400b8ea0L,
                (LPVOID *)&CPlayermgr_TrunkInit1519_user,
                (LPVOID *)&CPlayermgr_TrunkInit1519_next,
                (LPVOID)cast_pointer_function(CPlayermgr_TrunkInit1519_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::mgr_TrunkInit)
            },
            _hook_record {
                (LPVOID)0x1400b9070L,
                (LPVOID *)&CPlayermgr_all_item_muzi1521_user,
                (LPVOID *)&CPlayermgr_all_item_muzi1521_next,
                (LPVOID)cast_pointer_function(CPlayermgr_all_item_muzi1521_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(int))&CPlayer::mgr_all_item_muzi)
            },
            _hook_record {
                (LPVOID)0x1400b8670L,
                (LPVOID *)&CPlayermgr_change_degree1523_user,
                (LPVOID *)&CPlayermgr_change_degree1523_next,
                (LPVOID)cast_pointer_function(CPlayermgr_change_degree1523_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(int))&CPlayer::mgr_change_degree)
            },
            _hook_record {
                (LPVOID)0x1400b9200L,
                (LPVOID *)&CPlayermgr_defense_item_grace1525_user,
                (LPVOID *)&CPlayermgr_defense_item_grace1525_next,
                (LPVOID)cast_pointer_function(CPlayermgr_defense_item_grace1525_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(char, int))&CPlayer::mgr_defense_item_grace)
            },
            _hook_record {
                (LPVOID)0x1400bec30L,
                (LPVOID *)&CPlayermgr_destroy_system_tower1527_user,
                (LPVOID *)&CPlayermgr_destroy_system_tower1527_next,
                (LPVOID)cast_pointer_function(CPlayermgr_destroy_system_tower1527_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::mgr_destroy_system_tower)
            },
            _hook_record {
                (LPVOID)0x1400bddc0L,
                (LPVOID *)&CPlayermgr_dungeon_pass1529_user,
                (LPVOID *)&CPlayermgr_dungeon_pass1529_next,
                (LPVOID)cast_pointer_function(CPlayermgr_dungeon_pass1529_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::mgr_dungeon_pass)
            },
            _hook_record {
                (LPVOID)0x1400b8db0L,
                (LPVOID *)&CPlayermgr_exit_keeper1531_user,
                (LPVOID *)&CPlayermgr_exit_keeper1531_next,
                (LPVOID)cast_pointer_function(CPlayermgr_exit_keeper1531_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::mgr_exit_keeper)
            },
            _hook_record {
                (LPVOID)0x1400b8da0L,
                (LPVOID *)&CPlayermgr_exit_stone1533_user,
                (LPVOID *)&CPlayermgr_exit_stone1533_next,
                (LPVOID)cast_pointer_function(CPlayermgr_exit_stone1533_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::mgr_exit_stone)
            },
            _hook_record {
                (LPVOID)0x1400bac60L,
                (LPVOID *)&CPlayermgr_free_ride_ship1535_user,
                (LPVOID *)&CPlayermgr_free_ride_ship1535_next,
                (LPVOID)cast_pointer_function(CPlayermgr_free_ride_ship1535_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::mgr_free_ride_ship)
            },
            _hook_record {
                (LPVOID)0x1400b87b0L,
                (LPVOID *)&CPlayermgr_gotoCoordinates1537_user,
                (LPVOID *)&CPlayermgr_gotoCoordinates1537_next,
                (LPVOID)cast_pointer_function(CPlayermgr_gotoCoordinates1537_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(char*, float, float, float))&CPlayer::mgr_gotoCoordinates)
            },
            _hook_record {
                (LPVOID)0x1400b88e0L,
                (LPVOID *)&CPlayermgr_gotoDstCoordinates1539_user,
                (LPVOID *)&CPlayermgr_gotoDstCoordinates1539_next,
                (LPVOID)cast_pointer_function(CPlayermgr_gotoDstCoordinates1539_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(char*, char*, float, float, float))&CPlayer::mgr_gotoDstCoordinates)
            },
            _hook_record {
                (LPVOID)0x1400b8dc0L,
                (LPVOID *)&CPlayermgr_goto_mine1541_user,
                (LPVOID *)&CPlayermgr_goto_mine1541_next,
                (LPVOID)cast_pointer_function(CPlayermgr_goto_mine1541_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::mgr_goto_mine)
            },
            _hook_record {
                (LPVOID)0x1400baa20L,
                (LPVOID *)&CPlayermgr_goto_shipport1543_user,
                (LPVOID *)&CPlayermgr_goto_shipport1543_next,
                (LPVOID)cast_pointer_function(CPlayermgr_goto_shipport1543_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(int, int))&CPlayer::mgr_goto_shipport)
            },
            _hook_record {
                (LPVOID)0x1400b8ce0L,
                (LPVOID *)&CPlayermgr_goto_stone1545_user,
                (LPVOID *)&CPlayermgr_goto_stone1545_next,
                (LPVOID)cast_pointer_function(CPlayermgr_goto_stone1545_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(char))&CPlayer::mgr_goto_stone)
            },
            _hook_record {
                (LPVOID)0x1400ba860L,
                (LPVOID *)&CPlayermgr_goto_store1547_user,
                (LPVOID *)&CPlayermgr_goto_store1547_next,
                (LPVOID)cast_pointer_function(CPlayermgr_goto_store1547_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(int, char*))&CPlayer::mgr_goto_store)
            },
            _hook_record {
                (LPVOID)0x1400b8cc0L,
                (LPVOID *)&CPlayermgr_holykeeper_start1549_user,
                (LPVOID *)&CPlayermgr_holykeeper_start1549_next,
                (LPVOID)cast_pointer_function(CPlayermgr_holykeeper_start1549_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(int))&CPlayer::mgr_holykeeper_start)
            },
            _hook_record {
                (LPVOID)0x1400b8ca0L,
                (LPVOID *)&CPlayermgr_holystone_start1551_user,
                (LPVOID *)&CPlayermgr_holystone_start1551_next,
                (LPVOID)cast_pointer_function(CPlayermgr_holystone_start1551_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(int))&CPlayer::mgr_holystone_start)
            },
            _hook_record {
                (LPVOID)0x1400b9480L,
                (LPVOID *)&CPlayermgr_item_telekinesis1553_user,
                (LPVOID *)&CPlayermgr_item_telekinesis1553_next,
                (LPVOID)cast_pointer_function(CPlayermgr_item_telekinesis1553_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::mgr_item_telekinesis)
            },
            _hook_record {
                (LPVOID)0x1400b8b30L,
                (LPVOID *)&CPlayermgr_kick1555_user,
                (LPVOID *)&CPlayermgr_kick1555_next,
                (LPVOID)cast_pointer_function(CPlayermgr_kick1555_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(char*))&CPlayer::mgr_kick)
            },
            _hook_record {
                (LPVOID)0x1400be750L,
                (LPVOID *)&CPlayermgr_make_system_tower1557_user,
                (LPVOID *)&CPlayermgr_make_system_tower1557_next,
                (LPVOID)cast_pointer_function(CPlayermgr_make_system_tower1557_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(char*))&CPlayer::mgr_make_system_tower)
            },
            _hook_record {
                (LPVOID)0x1400b8770L,
                (LPVOID *)&CPlayermgr_matchless1559_user,
                (LPVOID *)&CPlayermgr_matchless1559_next,
                (LPVOID)cast_pointer_function(CPlayermgr_matchless1559_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(bool))&CPlayer::mgr_matchless)
            },
            _hook_record {
                (LPVOID)0x1400bac20L,
                (LPVOID *)&CPlayermgr_pass_sch_one_step1561_user,
                (LPVOID *)&CPlayermgr_pass_sch_one_step1561_next,
                (LPVOID)cast_pointer_function(CPlayermgr_pass_sch_one_step1561_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::mgr_pass_sch_one_step)
            },
            _hook_record {
                (LPVOID)0x1400bf8c0L,
                (LPVOID *)&CPlayermgr_recall_guild_player1563_user,
                (LPVOID *)&CPlayermgr_recall_guild_player1563_next,
                (LPVOID)cast_pointer_function(CPlayermgr_recall_guild_player1563_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(char*))&CPlayer::mgr_recall_guild_player)
            },
            _hook_record {
                (LPVOID)0x1400ba760L,
                (LPVOID *)&CPlayermgr_recall_mon1565_user,
                (LPVOID *)&CPlayermgr_recall_mon1565_next,
                (LPVOID)cast_pointer_function(CPlayermgr_recall_mon1565_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(char*, int))&CPlayer::mgr_recall_mon)
            },
            _hook_record {
                (LPVOID)0x1400bf5c0L,
                (LPVOID *)&CPlayermgr_recall_party_player1567_user,
                (LPVOID *)&CPlayermgr_recall_party_player1567_next,
                (LPVOID)cast_pointer_function(CPlayermgr_recall_party_player1567_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(char*))&CPlayer::mgr_recall_party_player)
            },
            _hook_record {
                (LPVOID)0x1400ba690L,
                (LPVOID *)&CPlayermgr_recall_player1569_user,
                (LPVOID *)&CPlayermgr_recall_player1569_next,
                (LPVOID)cast_pointer_function(CPlayermgr_recall_player1569_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(char*))&CPlayer::mgr_recall_player)
            },
            _hook_record {
                (LPVOID)0x1400bef20L,
                (LPVOID *)&CPlayermgr_resurrect_player1571_user,
                (LPVOID *)&CPlayermgr_resurrect_player1571_next,
                (LPVOID)cast_pointer_function(CPlayermgr_resurrect_player1571_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(char*))&CPlayer::mgr_resurrect_player)
            },
            _hook_record {
                (LPVOID)0x1400b9410L,
                (LPVOID *)&CPlayermgr_set_animus_attack_point1573_user,
                (LPVOID *)&CPlayermgr_set_animus_attack_point1573_next,
                (LPVOID)cast_pointer_function(CPlayermgr_set_animus_attack_point1573_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(int))&CPlayer::mgr_set_animus_attack_point)
            },
            _hook_record {
                (LPVOID)0x1400b86e0L,
                (LPVOID *)&CPlayermgr_tracing1575_user,
                (LPVOID *)&CPlayermgr_tracing1575_next,
                (LPVOID)cast_pointer_function(CPlayermgr_tracing1575_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(bool))&CPlayer::mgr_tracing)
            },
            _hook_record {
                (LPVOID)0x1400bf3d0L,
                (LPVOID *)&CPlayermgr_user_ban1577_user,
                (LPVOID *)&CPlayermgr_user_ban1577_next,
                (LPVOID)cast_pointer_function(CPlayermgr_user_ban1577_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(char*, int, char*, char))&CPlayer::mgr_user_ban)
            },
            _hook_record {
                (LPVOID)0x1400bae10L,
                (LPVOID *)&CPlayermgr_whisper1579_user,
                (LPVOID *)&CPlayermgr_whisper1579_next,
                (LPVOID)cast_pointer_function(CPlayermgr_whisper1579_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(char*))&CPlayer::mgr_whisper)
            },
            _hook_record {
                (LPVOID)0x1400b4340L,
                (LPVOID *)&CPlayerpc_AddBag1581_user,
                (LPVOID *)&CPlayerpc_AddBag1581_next,
                (LPVOID)cast_pointer_function(CPlayerpc_AddBag1581_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t))&CPlayer::pc_AddBag)
            },
            _hook_record {
                (LPVOID)0x1400fd570L,
                (LPVOID *)&CPlayerpc_AlterItemSlotRequest1583_user,
                (LPVOID *)&CPlayerpc_AlterItemSlotRequest1583_next,
                (LPVOID)cast_pointer_function(CPlayerpc_AlterItemSlotRequest1583_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, struct _alter_item_slot_request_clzo::__list*))&CPlayer::pc_AlterItemSlotRequest)
            },
            _hook_record {
                (LPVOID)0x1400fd690L,
                (LPVOID *)&CPlayerpc_AlterLinkBoardSlotRequest1585_user,
                (LPVOID *)&CPlayerpc_AlterLinkBoardSlotRequest1585_next,
                (LPVOID)cast_pointer_function(CPlayerpc_AlterLinkBoardSlotRequest1585_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, struct _alter_link_slot_request_clzo::__list*, char))&CPlayer::pc_AlterLinkBoardSlotRequest)
            },
            _hook_record {
                (LPVOID)0x1400fd900L,
                (LPVOID *)&CPlayerpc_AlterWindowInfoRequest1587_user,
                (LPVOID *)&CPlayerpc_AlterWindowInfoRequest1587_next,
                (LPVOID)cast_pointer_function(CPlayerpc_AlterWindowInfoRequest1587_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int*, unsigned int*, unsigned int*, unsigned int*, unsigned int, unsigned int*))&CPlayer::pc_AlterWindowInfoRequest)
            },
            _hook_record {
                (LPVOID)0x1400d0ae0L,
                (LPVOID *)&CPlayerpc_AnimusCommandRequest1589_user,
                (LPVOID *)&CPlayerpc_AnimusCommandRequest1589_next,
                (LPVOID)cast_pointer_function(CPlayerpc_AnimusCommandRequest1589_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::pc_AnimusCommandRequest)
            },
            _hook_record {
                (LPVOID)0x1400fc8e0L,
                (LPVOID *)&CPlayerpc_AnimusInvenChange1591_user,
                (LPVOID *)&CPlayerpc_AnimusInvenChange1591_next,
                (LPVOID)cast_pointer_function(CPlayerpc_AnimusInvenChange1591_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _STORAGE_POS_INDIV*, uint16_t))&CPlayer::pc_AnimusInvenChange)
            },
            _hook_record {
                (LPVOID)0x1400d02e0L,
                (LPVOID *)&CPlayerpc_AnimusRecallRequest1593_user,
                (LPVOID *)&CPlayerpc_AnimusRecallRequest1593_next,
                (LPVOID)cast_pointer_function(CPlayerpc_AnimusRecallRequest1593_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t, uint16_t, uint16_t))&CPlayer::pc_AnimusRecallRequest)
            },
            _hook_record {
                (LPVOID)0x1400d0a50L,
                (LPVOID *)&CPlayerpc_AnimusReturnRequest1595_user,
                (LPVOID *)&CPlayerpc_AnimusReturnRequest1595_next,
                (LPVOID)cast_pointer_function(CPlayerpc_AnimusReturnRequest1595_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::pc_AnimusReturnRequest)
            },
            _hook_record {
                (LPVOID)0x1400d0b60L,
                (LPVOID *)&CPlayerpc_AnimusTargetRequest1597_user,
                (LPVOID *)&CPlayerpc_AnimusTargetRequest1597_next,
                (LPVOID)cast_pointer_function(CPlayerpc_AnimusTargetRequest1597_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, uint16_t, unsigned int))&CPlayer::pc_AnimusTargetRequest)
            },
            _hook_record {
                (LPVOID)0x1400c4130L,
                (LPVOID *)&CPlayerpc_AwayPartyJoinInvitationAnswer1599_user,
                (LPVOID *)&CPlayerpc_AwayPartyJoinInvitationAnswer1599_next,
                (LPVOID)cast_pointer_function(CPlayerpc_AwayPartyJoinInvitationAnswer1599_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _CLID*, char))&CPlayer::pc_AwayPartyJoinInvitationAnswer)
            },
            _hook_record {
                (LPVOID)0x1400c3d70L,
                (LPVOID *)&CPlayerpc_AwaypartyInvitationRequest1601_user,
                (LPVOID *)&CPlayerpc_AwaypartyInvitationRequest1601_next,
                (LPVOID)cast_pointer_function(CPlayerpc_AwaypartyInvitationRequest1601_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char*))&CPlayer::pc_AwaypartyInvitationRequest)
            },
            _hook_record {
                (LPVOID)0x14009d050L,
                (LPVOID *)&CPlayerpc_BackTowerRequest1603_user,
                (LPVOID *)&CPlayerpc_BackTowerRequest1603_next,
                (LPVOID)cast_pointer_function(CPlayerpc_BackTowerRequest1603_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int))&CPlayer::pc_BackTowerRequest)
            },
            _hook_record {
                (LPVOID)0x14009d8b0L,
                (LPVOID *)&CPlayerpc_BackTrapRequest1605_user,
                (LPVOID *)&CPlayerpc_BackTrapRequest1605_next,
                (LPVOID)cast_pointer_function(CPlayerpc_BackTrapRequest1605_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int, uint16_t))&CPlayer::pc_BackTrapRequest)
            },
            _hook_record {
                (LPVOID)0x14008f4d0L,
                (LPVOID *)&CPlayerpc_BillingInfoRequest1607_user,
                (LPVOID *)&CPlayerpc_BillingInfoRequest1607_next,
                (LPVOID)cast_pointer_function(CPlayerpc_BillingInfoRequest1607_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::pc_BillingInfoRequest)
            },
            _hook_record {
                (LPVOID)0x1400cc500L,
                (LPVOID *)&CPlayerpc_BriefPass1609_user,
                (LPVOID *)&CPlayerpc_BriefPass1609_next,
                (LPVOID)cast_pointer_function(CPlayerpc_BriefPass1609_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::pc_BriefPass)
            },
            _hook_record {
                (LPVOID)0x14008f750L,
                (LPVOID *)&CPlayerpc_BuddyAddAnswer1611_user,
                (LPVOID *)&CPlayerpc_BuddyAddAnswer1611_next,
                (LPVOID)cast_pointer_function(CPlayerpc_BuddyAddAnswer1611_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(bool, uint16_t, unsigned int))&CPlayer::pc_BuddyAddAnswer)
            },
            _hook_record {
                (LPVOID)0x14008f4e0L,
                (LPVOID *)&CPlayerpc_BuddyAddRequest1613_user,
                (LPVOID *)&CPlayerpc_BuddyAddRequest1613_next,
                (LPVOID)cast_pointer_function(CPlayerpc_BuddyAddRequest1613_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t, unsigned int, char*))&CPlayer::pc_BuddyAddRequest)
            },
            _hook_record {
                (LPVOID)0x14008fbc0L,
                (LPVOID *)&CPlayerpc_BuddyDelRequest1615_user,
                (LPVOID *)&CPlayerpc_BuddyDelRequest1615_next,
                (LPVOID)cast_pointer_function(CPlayerpc_BuddyDelRequest1615_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int))&CPlayer::pc_BuddyDelRequest)
            },
            _hook_record {
                (LPVOID)0x14008fc80L,
                (LPVOID *)&CPlayerpc_BuddyDownloadRequest1617_user,
                (LPVOID *)&CPlayerpc_BuddyDownloadRequest1617_next,
                (LPVOID)cast_pointer_function(CPlayerpc_BuddyDownloadRequest1617_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::pc_BuddyDownloadRequest)
            },
            _hook_record {
                (LPVOID)0x1400f1140L,
                (LPVOID *)&CPlayerpc_BuyItemStore1619_user,
                (LPVOID *)&CPlayerpc_BuyItemStore1619_next,
                (LPVOID)cast_pointer_function(CPlayerpc_BuyItemStore1619_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CItemStore*, char, struct _buy_store_request_clzo::_list*, int))&CPlayer::pc_BuyItemStore)
            },
            _hook_record {
                (LPVOID)0x140097770L,
                (LPVOID *)&CPlayerpc_CanSelectClassRequest1621_user,
                (LPVOID *)&CPlayerpc_CanSelectClassRequest1621_next,
                (LPVOID)cast_pointer_function(CPlayerpc_CanSelectClassRequest1621_wrapper),
                (LPVOID)cast_pointer_function((char(CPlayer::*)(char*))&CPlayer::pc_CanSelectClassRequest)
            },
            _hook_record {
                (LPVOID)0x140108590L,
                (LPVOID *)&CPlayerpc_CastVoteRequest1623_user,
                (LPVOID *)&CPlayerpc_CastVoteRequest1623_next,
                (LPVOID)cast_pointer_function(CPlayerpc_CastVoteRequest1623_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(int, char))&CPlayer::pc_CastVoteRequest)
            },
            _hook_record {
                (LPVOID)0x1400fd840L,
                (LPVOID *)&CPlayerpc_ChangeModeType1625_user,
                (LPVOID *)&CPlayerpc_ChangeModeType1625_next,
                (LPVOID)cast_pointer_function(CPlayerpc_ChangeModeType1625_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(int, int))&CPlayer::pc_ChangeModeType)
            },
            _hook_record {
                (LPVOID)0x1400b5770L,
                (LPVOID *)&CPlayerpc_CharacterRenameCash1627_user,
                (LPVOID *)&CPlayerpc_CharacterRenameCash1627_next,
                (LPVOID)cast_pointer_function(CPlayerpc_CharacterRenameCash1627_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(bool, struct _STORAGE_POS_INDIV*, char*))&CPlayer::pc_CharacterRenameCash)
            },
            _hook_record {
                (LPVOID)0x1400b5c40L,
                (LPVOID *)&CPlayerpc_CharacterRenameCheck1629_user,
                (LPVOID *)&CPlayerpc_CharacterRenameCheck1629_next,
                (LPVOID)cast_pointer_function(CPlayerpc_CharacterRenameCheck1629_wrapper),
                (LPVOID)cast_pointer_function((char(CPlayer::*)(char*))&CPlayer::pc_CharacterRenameCheck)
            },
            _hook_record {
                (LPVOID)0x140092860L,
                (LPVOID *)&CPlayerpc_ChatAllRequest1631_user,
                (LPVOID *)&CPlayerpc_ChatAllRequest1631_next,
                (LPVOID)cast_pointer_function(CPlayerpc_ChatAllRequest1631_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char*))&CPlayer::pc_ChatAllRequest)
            },
            _hook_record {
                (LPVOID)0x140090c20L,
                (LPVOID *)&CPlayerpc_ChatCircleRequest1633_user,
                (LPVOID *)&CPlayerpc_ChatCircleRequest1633_next,
                (LPVOID)cast_pointer_function(CPlayerpc_ChatCircleRequest1633_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char*))&CPlayer::pc_ChatCircleRequest)
            },
            _hook_record {
                (LPVOID)0x140091500L,
                (LPVOID *)&CPlayerpc_ChatFarRequest1635_user,
                (LPVOID *)&CPlayerpc_ChatFarRequest1635_next,
                (LPVOID)cast_pointer_function(CPlayerpc_ChatFarRequest1635_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char*, char*))&CPlayer::pc_ChatFarRequest)
            },
            _hook_record {
                (LPVOID)0x140092410L,
                (LPVOID *)&CPlayerpc_ChatGmNoticeRequest1637_user,
                (LPVOID *)&CPlayerpc_ChatGmNoticeRequest1637_next,
                (LPVOID)cast_pointer_function(CPlayerpc_ChatGmNoticeRequest1637_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char*))&CPlayer::pc_ChatGmNoticeRequest)
            },
            _hook_record {
                (LPVOID)0x1400936c0L,
                (LPVOID *)&CPlayerpc_ChatGuildEstSenRequest1639_user,
                (LPVOID *)&CPlayerpc_ChatGuildEstSenRequest1639_next,
                (LPVOID)cast_pointer_function(CPlayerpc_ChatGuildEstSenRequest1639_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char*))&CPlayer::pc_ChatGuildEstSenRequest)
            },
            _hook_record {
                (LPVOID)0x140091b30L,
                (LPVOID *)&CPlayerpc_ChatGuildRequest1641_user,
                (LPVOID *)&CPlayerpc_ChatGuildRequest1641_next,
                (LPVOID)cast_pointer_function(CPlayerpc_ChatGuildRequest1641_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int, char*))&CPlayer::pc_ChatGuildRequest)
            },
            _hook_record {
                (LPVOID)0x140092480L,
                (LPVOID *)&CPlayerpc_ChatMapRequest1643_user,
                (LPVOID *)&CPlayerpc_ChatMapRequest1643_next,
                (LPVOID)cast_pointer_function(CPlayerpc_ChatMapRequest1643_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char*))&CPlayer::pc_ChatMapRequest)
            },
            _hook_record {
                (LPVOID)0x140091ad0L,
                (LPVOID *)&CPlayerpc_ChatMgrWhisperRequest1645_user,
                (LPVOID *)&CPlayerpc_ChatMgrWhisperRequest1645_next,
                (LPVOID)cast_pointer_function(CPlayerpc_ChatMgrWhisperRequest1645_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char*))&CPlayer::pc_ChatMgrWhisperRequest)
            },
            _hook_record {
                (LPVOID)0x1400939e0L,
                (LPVOID *)&CPlayerpc_ChatMultiFarRequest1647_user,
                (LPVOID *)&CPlayerpc_ChatMultiFarRequest1647_next,
                (LPVOID)cast_pointer_function(CPlayerpc_ChatMultiFarRequest1647_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, struct _w_name*, char*))&CPlayer::pc_ChatMultiFarRequest)
            },
            _hook_record {
                (LPVOID)0x140090b00L,
                (LPVOID *)&CPlayerpc_ChatOperatorRequest1649_user,
                (LPVOID *)&CPlayerpc_ChatOperatorRequest1649_next,
                (LPVOID)cast_pointer_function(CPlayerpc_ChatOperatorRequest1649_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char*))&CPlayer::pc_ChatOperatorRequest)
            },
            _hook_record {
                (LPVOID)0x140091880L,
                (LPVOID *)&CPlayerpc_ChatPartyRequest1651_user,
                (LPVOID *)&CPlayerpc_ChatPartyRequest1651_next,
                (LPVOID)cast_pointer_function(CPlayerpc_ChatPartyRequest1651_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char*))&CPlayer::pc_ChatPartyRequest)
            },
            _hook_record {
                (LPVOID)0x140092150L,
                (LPVOID *)&CPlayerpc_ChatRaceBossCryRequest1653_user,
                (LPVOID *)&CPlayerpc_ChatRaceBossCryRequest1653_next,
                (LPVOID)cast_pointer_function(CPlayerpc_ChatRaceBossCryRequest1653_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char*))&CPlayer::pc_ChatRaceBossCryRequest)
            },
            _hook_record {
                (LPVOID)0x140092cd0L,
                (LPVOID *)&CPlayerpc_ChatRaceBossRequest1655_user,
                (LPVOID *)&CPlayerpc_ChatRaceBossRequest1655_next,
                (LPVOID)cast_pointer_function(CPlayerpc_ChatRaceBossRequest1655_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char*))&CPlayer::pc_ChatRaceBossRequest)
            },
            _hook_record {
                (LPVOID)0x140091e70L,
                (LPVOID *)&CPlayerpc_ChatRaceRequest1657_user,
                (LPVOID *)&CPlayerpc_ChatRaceRequest1657_next,
                (LPVOID)cast_pointer_function(CPlayerpc_ChatRaceRequest1657_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char*))&CPlayer::pc_ChatRaceRequest)
            },
            _hook_record {
                (LPVOID)0x140093380L,
                (LPVOID *)&CPlayerpc_ChatRePresentationRequest1659_user,
                (LPVOID *)&CPlayerpc_ChatRePresentationRequest1659_next,
                (LPVOID)cast_pointer_function(CPlayerpc_ChatRePresentationRequest1659_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char*))&CPlayer::pc_ChatRePresentationRequest)
            },
            _hook_record {
                (LPVOID)0x140093000L,
                (LPVOID *)&CPlayerpc_ChatTradeRequestMsg1661_user,
                (LPVOID *)&CPlayerpc_ChatTradeRequestMsg1661_next,
                (LPVOID)cast_pointer_function(CPlayerpc_ChatTradeRequestMsg1661_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char*))&CPlayer::pc_ChatTradeRequestMsg)
            },
            _hook_record {
                (LPVOID)0x14009a590L,
                (LPVOID *)&CPlayerpc_ClassSkillRequest1663_user,
                (LPVOID *)&CPlayerpc_ClassSkillRequest1663_next,
                (LPVOID)cast_pointer_function(CPlayerpc_ClassSkillRequest1663_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t, struct _CHRID*, uint16_t*))&CPlayer::pc_ClassSkillRequest)
            },
            _hook_record {
                (LPVOID)0x1400af6c0L,
                (LPVOID *)&CPlayerpc_CombineItem1665_user,
                (LPVOID *)&CPlayerpc_CombineItem1665_next,
                (LPVOID)cast_pointer_function(CPlayerpc_CombineItem1665_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t, char, struct _STORAGE_POS_INDIV*, uint16_t))&CPlayer::pc_CombineItem)
            },
            _hook_record {
                (LPVOID)0x1400b0560L,
                (LPVOID *)&CPlayerpc_CombineItemEx1667_user,
                (LPVOID *)&CPlayerpc_CombineItemEx1667_next,
                (LPVOID)cast_pointer_function(CPlayerpc_CombineItemEx1667_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _combine_ex_item_request_clzo*))&CPlayer::pc_CombineItemEx)
            },
            _hook_record {
                (LPVOID)0x1400b0600L,
                (LPVOID *)&CPlayerpc_CombineItemExAccept1669_user,
                (LPVOID *)&CPlayerpc_CombineItemExAccept1669_next,
                (LPVOID)cast_pointer_function(CPlayerpc_CombineItemExAccept1669_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _combine_ex_item_accept_request_clzo*))&CPlayer::pc_CombineItemExAccept)
            },
            _hook_record {
                (LPVOID)0x1400d32b0L,
                (LPVOID *)&CPlayerpc_CuttingComplete1671_user,
                (LPVOID *)&CPlayerpc_CuttingComplete1671_next,
                (LPVOID)cast_pointer_function(CPlayerpc_CuttingComplete1671_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::pc_CuttingComplete)
            },
            _hook_record {
                (LPVOID)0x1400f4080L,
                (LPVOID *)&CPlayerpc_DTradeAddRequest1673_user,
                (LPVOID *)&CPlayerpc_DTradeAddRequest1673_next,
                (LPVOID)cast_pointer_function(CPlayerpc_DTradeAddRequest1673_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, unsigned int, char))&CPlayer::pc_DTradeAddRequest)
            },
            _hook_record {
                (LPVOID)0x1400f3a20L,
                (LPVOID *)&CPlayerpc_DTradeAnswerRequest1675_user,
                (LPVOID *)&CPlayerpc_DTradeAnswerRequest1675_next,
                (LPVOID)cast_pointer_function(CPlayerpc_DTradeAnswerRequest1675_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _CLID*))&CPlayer::pc_DTradeAnswerRequest)
            },
            _hook_record {
                (LPVOID)0x1400f3790L,
                (LPVOID *)&CPlayerpc_DTradeAskRequest1677_user,
                (LPVOID *)&CPlayerpc_DTradeAskRequest1677_next,
                (LPVOID)cast_pointer_function(CPlayerpc_DTradeAskRequest1677_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t))&CPlayer::pc_DTradeAskRequest)
            },
            _hook_record {
                (LPVOID)0x1400f4670L,
                (LPVOID *)&CPlayerpc_DTradeBetRequest1679_user,
                (LPVOID *)&CPlayerpc_DTradeBetRequest1679_next,
                (LPVOID)cast_pointer_function(CPlayerpc_DTradeBetRequest1679_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, unsigned int))&CPlayer::pc_DTradeBetRequest)
            },
            _hook_record {
                (LPVOID)0x1400f3e60L,
                (LPVOID *)&CPlayerpc_DTradeCancleRequest1681_user,
                (LPVOID *)&CPlayerpc_DTradeCancleRequest1681_next,
                (LPVOID)cast_pointer_function(CPlayerpc_DTradeCancleRequest1681_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::pc_DTradeCancleRequest)
            },
            _hook_record {
                (LPVOID)0x1400f4420L,
                (LPVOID *)&CPlayerpc_DTradeDelRequest1683_user,
                (LPVOID *)&CPlayerpc_DTradeDelRequest1683_next,
                (LPVOID)cast_pointer_function(CPlayerpc_DTradeDelRequest1683_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::pc_DTradeDelRequest)
            },
            _hook_record {
                (LPVOID)0x1400f3f60L,
                (LPVOID *)&CPlayerpc_DTradeLockRequest1685_user,
                (LPVOID *)&CPlayerpc_DTradeLockRequest1685_next,
                (LPVOID)cast_pointer_function(CPlayerpc_DTradeLockRequest1685_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::pc_DTradeLockRequest)
            },
            _hook_record {
                (LPVOID)0x1400f4810L,
                (LPVOID *)&CPlayerpc_DTradeOKRequest1687_user,
                (LPVOID *)&CPlayerpc_DTradeOKRequest1687_next,
                (LPVOID)cast_pointer_function(CPlayerpc_DTradeOKRequest1687_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int*))&CPlayer::pc_DTradeOKRequest)
            },
            _hook_record {
                (LPVOID)0x140098da0L,
                (LPVOID *)&CPlayerpc_DarkHoleAnswerReenterRequest1689_user,
                (LPVOID *)&CPlayerpc_DarkHoleAnswerReenterRequest1689_next,
                (LPVOID)cast_pointer_function(CPlayerpc_DarkHoleAnswerReenterRequest1689_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(bool, uint16_t, unsigned int))&CPlayer::pc_DarkHoleAnswerReenterRequest)
            },
            _hook_record {
                (LPVOID)0x140098ca0L,
                (LPVOID *)&CPlayerpc_DarkHoleClearOutRequest1691_user,
                (LPVOID *)&CPlayerpc_DarkHoleClearOutRequest1691_next,
                (LPVOID)cast_pointer_function(CPlayerpc_DarkHoleClearOutRequest1691_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::pc_DarkHoleClearOutRequest)
            },
            _hook_record {
                (LPVOID)0x140098780L,
                (LPVOID *)&CPlayerpc_DarkHoleEnterRequest1693_user,
                (LPVOID *)&CPlayerpc_DarkHoleEnterRequest1693_next,
                (LPVOID)cast_pointer_function(CPlayerpc_DarkHoleEnterRequest1693_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t, unsigned int))&CPlayer::pc_DarkHoleEnterRequest)
            },
            _hook_record {
                (LPVOID)0x140098ba0L,
                (LPVOID *)&CPlayerpc_DarkHoleGiveupOutRequest1695_user,
                (LPVOID *)&CPlayerpc_DarkHoleGiveupOutRequest1695_next,
                (LPVOID)cast_pointer_function(CPlayerpc_DarkHoleGiveupOutRequest1695_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::pc_DarkHoleGiveupOutRequest)
            },
            _hook_record {
                (LPVOID)0x1400982c0L,
                (LPVOID *)&CPlayerpc_DarkHoleOpenRequest1697_user,
                (LPVOID *)&CPlayerpc_DarkHoleOpenRequest1697_next,
                (LPVOID)cast_pointer_function(CPlayerpc_DarkHoleOpenRequest1697_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int))&CPlayer::pc_DarkHoleOpenRequest)
            },
            _hook_record {
                (LPVOID)0x1400b2b70L,
                (LPVOID *)&CPlayerpc_DowngradeItem1699_user,
                (LPVOID *)&CPlayerpc_DowngradeItem1699_next,
                (LPVOID)cast_pointer_function(CPlayerpc_DowngradeItem1699_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _STORAGE_POS_INDIV*, struct _STORAGE_POS_INDIV*, struct _STORAGE_POS_INDIV*))&CPlayer::pc_DowngradeItem)
            },
            _hook_record {
                (LPVOID)0x1400ade20L,
                (LPVOID *)&CPlayerpc_EmbellishPart1701_user,
                (LPVOID *)&CPlayerpc_EmbellishPart1701_next,
                (LPVOID)cast_pointer_function(CPlayerpc_EmbellishPart1701_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _STORAGE_POS_INDIV*, uint16_t))&CPlayer::pc_EmbellishPart)
            },
            _hook_record {
                (LPVOID)0x1400ad960L,
                (LPVOID *)&CPlayerpc_EquipPart1703_user,
                (LPVOID *)&CPlayerpc_EquipPart1703_next,
                (LPVOID)cast_pointer_function(CPlayerpc_EquipPart1703_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _STORAGE_POS_INDIV*))&CPlayer::pc_EquipPart)
            },
            _hook_record {
                (LPVOID)0x1400f2ed0L,
                (LPVOID *)&CPlayerpc_ExchangeDalantForGold1705_user,
                (LPVOID *)&CPlayerpc_ExchangeDalantForGold1705_next,
                (LPVOID)cast_pointer_function(CPlayerpc_ExchangeDalantForGold1705_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int))&CPlayer::pc_ExchangeDalantForGold)
            },
            _hook_record {
                (LPVOID)0x1400f3190L,
                (LPVOID *)&CPlayerpc_ExchangeGoldForDalant1707_user,
                (LPVOID *)&CPlayerpc_ExchangeGoldForDalant1707_next,
                (LPVOID)cast_pointer_function(CPlayerpc_ExchangeGoldForDalant1707_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int))&CPlayer::pc_ExchangeGoldForDalant)
            },
            _hook_record {
                (LPVOID)0x1400f3420L,
                (LPVOID *)&CPlayerpc_ExchangeGoldForPvP1709_user,
                (LPVOID *)&CPlayerpc_ExchangeGoldForPvP1709_next,
                (LPVOID)cast_pointer_function(CPlayerpc_ExchangeGoldForPvP1709_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int))&CPlayer::pc_ExchangeGoldForPvP)
            },
            _hook_record {
                (LPVOID)0x1400b0690L,
                (LPVOID *)&CPlayerpc_ExchangeItem1711_user,
                (LPVOID *)&CPlayerpc_ExchangeItem1711_next,
                (LPVOID)cast_pointer_function(CPlayerpc_ExchangeItem1711_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t, uint16_t))&CPlayer::pc_ExchangeItem)
            },
            _hook_record {
                (LPVOID)0x14004e630L,
                (LPVOID *)&CPlayerpc_ExitWorldRequest1713_user,
                (LPVOID *)&CPlayerpc_ExitWorldRequest1713_next,
                (LPVOID)cast_pointer_function(CPlayerpc_ExitWorldRequest1713_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::pc_ExitWorldRequest)
            },
            _hook_record {
                (LPVOID)0x1400fc2f0L,
                (LPVOID *)&CPlayerpc_ForceInvenChange1715_user,
                (LPVOID *)&CPlayerpc_ForceInvenChange1715_next,
                (LPVOID)cast_pointer_function(CPlayerpc_ForceInvenChange1715_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _STORAGE_POS_INDIV*, uint16_t))&CPlayer::pc_ForceInvenChange)
            },
            _hook_record {
                (LPVOID)0x1400995b0L,
                (LPVOID *)&CPlayerpc_ForceRequest1717_user,
                (LPVOID *)&CPlayerpc_ForceRequest1717_next,
                (LPVOID)cast_pointer_function(CPlayerpc_ForceRequest1717_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t, struct _CHRID*, uint16_t*))&CPlayer::pc_ForceRequest)
            },
            _hook_record {
                (LPVOID)0x1400fd8b0L,
                (LPVOID *)&CPlayerpc_GestureRequest1719_user,
                (LPVOID *)&CPlayerpc_GestureRequest1719_next,
                (LPVOID)cast_pointer_function(CPlayerpc_GestureRequest1719_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::pc_GestureRequest)
            },
            _hook_record {
                (LPVOID)0x14004e750L,
                (LPVOID *)&CPlayerpc_GiveItem1721_user,
                (LPVOID *)&CPlayerpc_GiveItem1721_next,
                (LPVOID)cast_pointer_function(CPlayerpc_GiveItem1721_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct _STORAGE_LIST::_db_con*, char*, bool))&CPlayer::pc_GiveItem)
            },
            _hook_record {
                (LPVOID)0x1400c7440L,
                (LPVOID *)&CPlayerpc_GotoAvatorRequest1723_user,
                (LPVOID *)&CPlayerpc_GotoAvatorRequest1723_next,
                (LPVOID)cast_pointer_function(CPlayerpc_GotoAvatorRequest1723_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char*))&CPlayer::pc_GotoAvatorRequest)
            },
            _hook_record {
                (LPVOID)0x1400c6cf0L,
                (LPVOID *)&CPlayerpc_GotoBasePortalRequest1725_user,
                (LPVOID *)&CPlayerpc_GotoBasePortalRequest1725_next,
                (LPVOID)cast_pointer_function(CPlayerpc_GotoBasePortalRequest1725_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t))&CPlayer::pc_GotoBasePortalRequest)
            },
            _hook_record {
                (LPVOID)0x1400fef90L,
                (LPVOID *)&CPlayerpc_GuildBattleBlock1727_user,
                (LPVOID *)&CPlayerpc_GuildBattleBlock1727_next,
                (LPVOID)cast_pointer_function(CPlayerpc_GuildBattleBlock1727_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(bool))&CPlayer::pc_GuildBattleBlock)
            },
            _hook_record {
                (LPVOID)0x1400a8350L,
                (LPVOID *)&CPlayerpc_GuildCancelSuggestRequest1729_user,
                (LPVOID *)&CPlayerpc_GuildCancelSuggestRequest1729_next,
                (LPVOID)cast_pointer_function(CPlayerpc_GuildCancelSuggestRequest1729_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int))&CPlayer::pc_GuildCancelSuggestRequest)
            },
            _hook_record {
                (LPVOID)0x1400a7890L,
                (LPVOID *)&CPlayerpc_GuildDownLoadRequest1731_user,
                (LPVOID *)&CPlayerpc_GuildDownLoadRequest1731_next,
                (LPVOID)cast_pointer_function(CPlayerpc_GuildDownLoadRequest1731_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::pc_GuildDownLoadRequest)
            },
            _hook_record {
                (LPVOID)0x1400a6d10L,
                (LPVOID *)&CPlayerpc_GuildEstablishRequest1733_user,
                (LPVOID *)&CPlayerpc_GuildEstablishRequest1733_next,
                (LPVOID)cast_pointer_function(CPlayerpc_GuildEstablishRequest1733_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char*))&CPlayer::pc_GuildEstablishRequest)
            },
            _hook_record {
                (LPVOID)0x1400ab9e0L,
                (LPVOID *)&CPlayerpc_GuildHonorListRequest1735_user,
                (LPVOID *)&CPlayerpc_GuildHonorListRequest1735_next,
                (LPVOID)cast_pointer_function(CPlayerpc_GuildHonorListRequest1735_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::pc_GuildHonorListRequest)
            },
            _hook_record {
                (LPVOID)0x1400a7bf0L,
                (LPVOID *)&CPlayerpc_GuildJoinAcceptRequest1737_user,
                (LPVOID *)&CPlayerpc_GuildJoinAcceptRequest1737_next,
                (LPVOID)cast_pointer_function(CPlayerpc_GuildJoinAcceptRequest1737_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int, bool))&CPlayer::pc_GuildJoinAcceptRequest)
            },
            _hook_record {
                (LPVOID)0x1400a7af0L,
                (LPVOID *)&CPlayerpc_GuildJoinApplyCancelRequest1739_user,
                (LPVOID *)&CPlayerpc_GuildJoinApplyCancelRequest1739_next,
                (LPVOID)cast_pointer_function(CPlayerpc_GuildJoinApplyCancelRequest1739_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::pc_GuildJoinApplyCancelRequest)
            },
            _hook_record {
                (LPVOID)0x1400a7910L,
                (LPVOID *)&CPlayerpc_GuildJoinApplyRequest1741_user,
                (LPVOID *)&CPlayerpc_GuildJoinApplyRequest1741_next,
                (LPVOID)cast_pointer_function(CPlayerpc_GuildJoinApplyRequest1741_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char*))&CPlayer::pc_GuildJoinApplyRequest)
            },
            _hook_record {
                (LPVOID)0x1400ab850L,
                (LPVOID *)&CPlayerpc_GuildListRequest1743_user,
                (LPVOID *)&CPlayerpc_GuildListRequest1743_next,
                (LPVOID)cast_pointer_function(CPlayerpc_GuildListRequest1743_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::pc_GuildListRequest)
            },
            _hook_record {
                (LPVOID)0x1400abb10L,
                (LPVOID *)&CPlayerpc_GuildManageRequest1745_user,
                (LPVOID *)&CPlayerpc_GuildManageRequest1745_next,
                (LPVOID)cast_pointer_function(CPlayerpc_GuildManageRequest1745_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, unsigned int, unsigned int, unsigned int, unsigned int))&CPlayer::pc_GuildManageRequest)
            },
            _hook_record {
                (LPVOID)0x1400aba50L,
                (LPVOID *)&CPlayerpc_GuildNextHonorListRequest1747_user,
                (LPVOID *)&CPlayerpc_GuildNextHonorListRequest1747_next,
                (LPVOID)cast_pointer_function(CPlayerpc_GuildNextHonorListRequest1747_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::pc_GuildNextHonorListRequest)
            },
            _hook_record {
                (LPVOID)0x1400a8190L,
                (LPVOID *)&CPlayerpc_GuildOfferSuggestRequest1749_user,
                (LPVOID *)&CPlayerpc_GuildOfferSuggestRequest1749_next,
                (LPVOID)cast_pointer_function(CPlayerpc_GuildOfferSuggestRequest1749_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, unsigned int, char*, unsigned int, unsigned int, unsigned int))&CPlayer::pc_GuildOfferSuggestRequest)
            },
            _hook_record {
                (LPVOID)0x1400a8620L,
                (LPVOID *)&CPlayerpc_GuildPushMoneyRequest1751_user,
                (LPVOID *)&CPlayerpc_GuildPushMoneyRequest1751_next,
                (LPVOID)cast_pointer_function(CPlayerpc_GuildPushMoneyRequest1751_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int, unsigned int))&CPlayer::pc_GuildPushMoneyRequest)
            },
            _hook_record {
                (LPVOID)0x1400a8550L,
                (LPVOID *)&CPlayerpc_GuildQueryInfoRequest1753_user,
                (LPVOID *)&CPlayerpc_GuildQueryInfoRequest1753_next,
                (LPVOID)cast_pointer_function(CPlayerpc_GuildQueryInfoRequest1753_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int))&CPlayer::pc_GuildQueryInfoRequest)
            },
            _hook_record {
                (LPVOID)0x1400aaff0L,
                (LPVOID *)&CPlayerpc_GuildRoomEnterRequest1755_user,
                (LPVOID *)&CPlayerpc_GuildRoomEnterRequest1755_next,
                (LPVOID)cast_pointer_function(CPlayerpc_GuildRoomEnterRequest1755_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _guildroom_enter_request_clzo*))&CPlayer::pc_GuildRoomEnterRequest)
            },
            _hook_record {
                (LPVOID)0x1400ab560L,
                (LPVOID *)&CPlayerpc_GuildRoomOutRequest1757_user,
                (LPVOID *)&CPlayerpc_GuildRoomOutRequest1757_next,
                (LPVOID)cast_pointer_function(CPlayerpc_GuildRoomOutRequest1757_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _guildroom_out_request_clzo*))&CPlayer::pc_GuildRoomOutRequest)
            },
            _hook_record {
                (LPVOID)0x1400aaa60L,
                (LPVOID *)&CPlayerpc_GuildRoomRentRequest1759_user,
                (LPVOID *)&CPlayerpc_GuildRoomRentRequest1759_next,
                (LPVOID)cast_pointer_function(CPlayerpc_GuildRoomRentRequest1759_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _guildroom_rent_request_clzo*))&CPlayer::pc_GuildRoomRentRequest)
            },
            _hook_record {
                (LPVOID)0x1400ab780L,
                (LPVOID *)&CPlayerpc_GuildRoomRestTimeRequest1761_user,
                (LPVOID *)&CPlayerpc_GuildRoomRestTimeRequest1761_next,
                (LPVOID)cast_pointer_function(CPlayerpc_GuildRoomRestTimeRequest1761_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _guildroom_resttime_request_clzo*))&CPlayer::pc_GuildRoomRestTimeRequest)
            },
            _hook_record {
                (LPVOID)0x1400a7f50L,
                (LPVOID *)&CPlayerpc_GuildSelfLeaveRequest1763_user,
                (LPVOID *)&CPlayerpc_GuildSelfLeaveRequest1763_next,
                (LPVOID)cast_pointer_function(CPlayerpc_GuildSelfLeaveRequest1763_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::pc_GuildSelfLeaveRequest)
            },
            _hook_record {
                (LPVOID)0x1400ab910L,
                (LPVOID *)&CPlayerpc_GuildSetHonorRequest1765_user,
                (LPVOID *)&CPlayerpc_GuildSetHonorRequest1765_next,
                (LPVOID)cast_pointer_function(CPlayerpc_GuildSetHonorRequest1765_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _guild_honor_set_request_clzo*))&CPlayer::pc_GuildSetHonorRequest)
            },
            _hook_record {
                (LPVOID)0x1400a8410L,
                (LPVOID *)&CPlayerpc_GuildVoteRequest1767_user,
                (LPVOID *)&CPlayerpc_GuildVoteRequest1767_next,
                (LPVOID)cast_pointer_function(CPlayerpc_GuildVoteRequest1767_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int, char))&CPlayer::pc_GuildVoteRequest)
            },
            _hook_record {
                (LPVOID)0x1400972f0L,
                (LPVOID *)&CPlayerpc_InitClass1769_user,
                (LPVOID *)&CPlayerpc_InitClass1769_next,
                (LPVOID)cast_pointer_function(CPlayerpc_InitClass1769_wrapper),
                (LPVOID)cast_pointer_function((char(CPlayer::*)())&CPlayer::pc_InitClass)
            },
            _hook_record {
                (LPVOID)0x1400976c0L,
                (LPVOID *)&CPlayerpc_InitClassRequest1771_user,
                (LPVOID *)&CPlayerpc_InitClassRequest1771_next,
                (LPVOID)cast_pointer_function(CPlayerpc_InitClassRequest1771_wrapper),
                (LPVOID)cast_pointer_function((char(CPlayer::*)())&CPlayer::pc_InitClassRequest)
            },
            _hook_record {
                (LPVOID)0x1400f3580L,
                (LPVOID *)&CPlayerpc_LimitItemNumRequest1773_user,
                (LPVOID *)&CPlayerpc_LimitItemNumRequest1773_next,
                (LPVOID)cast_pointer_function(CPlayerpc_LimitItemNumRequest1773_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int))&CPlayer::pc_LimitItemNumRequest)
            },
            _hook_record {
                (LPVOID)0x1400fefc0L,
                (LPVOID *)&CPlayerpc_LinkBoardRequest1775_user,
                (LPVOID *)&CPlayerpc_LinkBoardRequest1775_next,
                (LPVOID)cast_pointer_function(CPlayerpc_LinkBoardRequest1775_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::pc_LinkBoardRequest)
            },
            _hook_record {
                (LPVOID)0x1400ff920L,
                (LPVOID *)&CPlayerpc_MacroUpdate1777_user,
                (LPVOID *)&CPlayerpc_MacroUpdate1777_next,
                (LPVOID)cast_pointer_function(CPlayerpc_MacroUpdate1777_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char*))&CPlayer::pc_MacroUpdate)
            },
            _hook_record {
                (LPVOID)0x1400ae750L,
                (LPVOID *)&CPlayerpc_MakeItem1779_user,
                (LPVOID *)&CPlayerpc_MakeItem1779_next,
                (LPVOID)cast_pointer_function(CPlayerpc_MakeItem1779_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _STORAGE_POS_INDIV*, uint16_t, char, struct _STORAGE_POS_INDIV*))&CPlayer::pc_MakeItem)
            },
            _hook_record {
                (LPVOID)0x14009c6e0L,
                (LPVOID *)&CPlayerpc_MakeTowerRequest1781_user,
                (LPVOID *)&CPlayerpc_MakeTowerRequest1781_next,
                (LPVOID)cast_pointer_function(CPlayerpc_MakeTowerRequest1781_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t, uint16_t, char, struct _make_tower_request_clzo::__material*, float*, uint16_t*))&CPlayer::pc_MakeTowerRequest)
            },
            _hook_record {
                (LPVOID)0x14009d1c0L,
                (LPVOID *)&CPlayerpc_MakeTrapRequest1783_user,
                (LPVOID *)&CPlayerpc_MakeTrapRequest1783_next,
                (LPVOID)cast_pointer_function(CPlayerpc_MakeTrapRequest1783_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t, uint16_t, float*, uint16_t*))&CPlayer::pc_MakeTrapRequest)
            },
            _hook_record {
                (LPVOID)0x1400d1ed0L,
                (LPVOID *)&CPlayerpc_MineCancle1785_user,
                (LPVOID *)&CPlayerpc_MineCancle1785_next,
                (LPVOID)cast_pointer_function(CPlayerpc_MineCancle1785_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::pc_MineCancle)
            },
            _hook_record {
                (LPVOID)0x1400d1f40L,
                (LPVOID *)&CPlayerpc_MineComplete1787_user,
                (LPVOID *)&CPlayerpc_MineComplete1787_next,
                (LPVOID)cast_pointer_function(CPlayerpc_MineComplete1787_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::pc_MineComplete)
            },
            _hook_record {
                (LPVOID)0x1400d18e0L,
                (LPVOID *)&CPlayerpc_MineStart1789_user,
                (LPVOID *)&CPlayerpc_MineStart1789_next,
                (LPVOID)cast_pointer_function(CPlayerpc_MineStart1789_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, uint16_t))&CPlayer::pc_MineStart)
            },
            _hook_record {
                (LPVOID)0x1400c7810L,
                (LPVOID *)&CPlayerpc_MoveModeChangeRequest1791_user,
                (LPVOID *)&CPlayerpc_MoveModeChangeRequest1791_next,
                (LPVOID)cast_pointer_function(CPlayerpc_MoveModeChangeRequest1791_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::pc_MoveModeChangeRequest)
            },
            _hook_record {
                (LPVOID)0x1400c6230L,
                (LPVOID *)&CPlayerpc_MoveNext1793_user,
                (LPVOID *)&CPlayerpc_MoveNext1793_next,
                (LPVOID)cast_pointer_function(CPlayerpc_MoveNext1793_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, float*, float*, char))&CPlayer::pc_MoveNext)
            },
            _hook_record {
                (LPVOID)0x1400c54a0L,
                (LPVOID *)&CPlayerpc_MovePortal1795_user,
                (LPVOID *)&CPlayerpc_MovePortal1795_next,
                (LPVOID)cast_pointer_function(CPlayerpc_MovePortal1795_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(int, uint16_t*))&CPlayer::pc_MovePortal)
            },
            _hook_record {
                (LPVOID)0x1400c6ab0L,
                (LPVOID *)&CPlayerpc_MoveStop1797_user,
                (LPVOID *)&CPlayerpc_MoveStop1797_next,
                (LPVOID)cast_pointer_function(CPlayerpc_MoveStop1797_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(float*))&CPlayer::pc_MoveStop)
            },
            _hook_record {
                (LPVOID)0x1400ce6d0L,
                (LPVOID *)&CPlayerpc_MoveToOwnStoneMapRequest1799_user,
                (LPVOID *)&CPlayerpc_MoveToOwnStoneMapRequest1799_next,
                (LPVOID)cast_pointer_function(CPlayerpc_MoveToOwnStoneMapRequest1799_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::pc_MoveToOwnStoneMapRequest)
            },
            _hook_record {
                (LPVOID)0x1400b5710L,
                (LPVOID *)&CPlayerpc_NPCLinkCheckItemRequest1801_user,
                (LPVOID *)&CPlayerpc_NPCLinkCheckItemRequest1801_next,
                (LPVOID)cast_pointer_function(CPlayerpc_NPCLinkCheckItemRequest1801_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct _STORAGE_POS_INDIV*))&CPlayer::pc_NPCLinkCheckItemRequest)
            },
            _hook_record {
                (LPVOID)0x1400b54e0L,
                (LPVOID *)&CPlayerpc_NPCLinkCheckItemRequest_Check1803_user,
                (LPVOID *)&CPlayerpc_NPCLinkCheckItemRequest_Check1803_next,
                (LPVOID)cast_pointer_function(CPlayerpc_NPCLinkCheckItemRequest_Check1803_wrapper),
                (LPVOID)cast_pointer_function((char(CPlayer::*)(struct _STORAGE_POS_INDIV*))&CPlayer::pc_NPCLinkCheckItemRequest_Check)
            },
            _hook_record {
                (LPVOID)0x1400b5340L,
                (LPVOID *)&CPlayerpc_NPCLinkCheckItemRequest_Use1805_user,
                (LPVOID *)&CPlayerpc_NPCLinkCheckItemRequest_Use1805_next,
                (LPVOID)cast_pointer_function(CPlayerpc_NPCLinkCheckItemRequest_Use1805_wrapper),
                (LPVOID)cast_pointer_function((char(CPlayer::*)(struct _STORAGE_POS_INDIV*))&CPlayer::pc_NPCLinkCheckItemRequest_Use)
            },
            _hook_record {
                (LPVOID)0x1400c4bc0L,
                (LPVOID *)&CPlayerpc_NewPosStart1807_user,
                (LPVOID *)&CPlayerpc_NewPosStart1807_next,
                (LPVOID)cast_pointer_function(CPlayerpc_NewPosStart1807_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::pc_NewPosStart)
            },
            _hook_record {
                (LPVOID)0x1400ffa30L,
                (LPVOID *)&CPlayerpc_NotifyRaceBossCryMsg1809_user,
                (LPVOID *)&CPlayerpc_NotifyRaceBossCryMsg1809_next,
                (LPVOID)cast_pointer_function(CPlayerpc_NotifyRaceBossCryMsg1809_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::pc_NotifyRaceBossCryMsg)
            },
            _hook_record {
                (LPVOID)0x1400c5160L,
                (LPVOID *)&CPlayerpc_NuclearAfterEffect1811_user,
                (LPVOID *)&CPlayerpc_NuclearAfterEffect1811_next,
                (LPVOID)cast_pointer_function(CPlayerpc_NuclearAfterEffect1811_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::pc_NuclearAfterEffect)
            },
            _hook_record {
                (LPVOID)0x1400ae4d0L,
                (LPVOID *)&CPlayerpc_OffPart1813_user,
                (LPVOID *)&CPlayerpc_OffPart1813_next,
                (LPVOID)cast_pointer_function(CPlayerpc_OffPart1813_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _STORAGE_POS_INDIV*))&CPlayer::pc_OffPart)
            },
            _hook_record {
                (LPVOID)0x1400d26b0L,
                (LPVOID *)&CPlayerpc_OreCutting1815_user,
                (LPVOID *)&CPlayerpc_OreCutting1815_next,
                (LPVOID)cast_pointer_function(CPlayerpc_OreCutting1815_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t, char))&CPlayer::pc_OreCutting)
            },
            _hook_record {
                (LPVOID)0x1400d2eb0L,
                (LPVOID *)&CPlayerpc_OreIntoBag1817_user,
                (LPVOID *)&CPlayerpc_OreIntoBag1817_next,
                (LPVOID)cast_pointer_function(CPlayerpc_OreIntoBag1817_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t, uint16_t, char))&CPlayer::pc_OreIntoBag)
            },
            _hook_record {
                (LPVOID)0x1400c3cf0L,
                (LPVOID *)&CPlayerpc_PartyAlterLootShareReqeuest1819_user,
                (LPVOID *)&CPlayerpc_PartyAlterLootShareReqeuest1819_next,
                (LPVOID)cast_pointer_function(CPlayerpc_PartyAlterLootShareReqeuest1819_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::pc_PartyAlterLootShareReqeuest)
            },
            _hook_record {
                (LPVOID)0x1400c3b30L,
                (LPVOID *)&CPlayerpc_PartyDisJointReqeuest1821_user,
                (LPVOID *)&CPlayerpc_PartyDisJointReqeuest1821_next,
                (LPVOID)cast_pointer_function(CPlayerpc_PartyDisJointReqeuest1821_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::pc_PartyDisJointReqeuest)
            },
            _hook_record {
                (LPVOID)0x1400c3580L,
                (LPVOID *)&CPlayerpc_PartyJoinApplication1823_user,
                (LPVOID *)&CPlayerpc_PartyJoinApplication1823_next,
                (LPVOID)cast_pointer_function(CPlayerpc_PartyJoinApplication1823_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t))&CPlayer::pc_PartyJoinApplication)
            },
            _hook_record {
                (LPVOID)0x1400c3800L,
                (LPVOID *)&CPlayerpc_PartyJoinApplicationAnswer1825_user,
                (LPVOID *)&CPlayerpc_PartyJoinApplicationAnswer1825_next,
                (LPVOID)cast_pointer_function(CPlayerpc_PartyJoinApplicationAnswer1825_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _CLID*))&CPlayer::pc_PartyJoinApplicationAnswer)
            },
            _hook_record {
                (LPVOID)0x1400c2fd0L,
                (LPVOID *)&CPlayerpc_PartyJoinInvitation1827_user,
                (LPVOID *)&CPlayerpc_PartyJoinInvitation1827_next,
                (LPVOID)cast_pointer_function(CPlayerpc_PartyJoinInvitation1827_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t))&CPlayer::pc_PartyJoinInvitation)
            },
            _hook_record {
                (LPVOID)0x1400c32c0L,
                (LPVOID *)&CPlayerpc_PartyJoinInvitationAnswer1829_user,
                (LPVOID *)&CPlayerpc_PartyJoinInvitationAnswer1829_next,
                (LPVOID)cast_pointer_function(CPlayerpc_PartyJoinInvitationAnswer1829_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _CLID*))&CPlayer::pc_PartyJoinInvitationAnswer)
            },
            _hook_record {
                (LPVOID)0x1400c3a80L,
                (LPVOID *)&CPlayerpc_PartyLeaveCompulsionReqeuest1831_user,
                (LPVOID *)&CPlayerpc_PartyLeaveCompulsionReqeuest1831_next,
                (LPVOID)cast_pointer_function(CPlayerpc_PartyLeaveCompulsionReqeuest1831_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int))&CPlayer::pc_PartyLeaveCompulsionReqeuest)
            },
            _hook_record {
                (LPVOID)0x1400c3a10L,
                (LPVOID *)&CPlayerpc_PartyLeaveSelfReqeuest1833_user,
                (LPVOID *)&CPlayerpc_PartyLeaveSelfReqeuest1833_next,
                (LPVOID)cast_pointer_function(CPlayerpc_PartyLeaveSelfReqeuest1833_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::pc_PartyLeaveSelfReqeuest)
            },
            _hook_record {
                (LPVOID)0x1400c3c50L,
                (LPVOID *)&CPlayerpc_PartyLockReqeuest1835_user,
                (LPVOID *)&CPlayerpc_PartyLockReqeuest1835_next,
                (LPVOID)cast_pointer_function(CPlayerpc_PartyLockReqeuest1835_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(bool))&CPlayer::pc_PartyLockReqeuest)
            },
            _hook_record {
                (LPVOID)0x1400feed0L,
                (LPVOID *)&CPlayerpc_PartyReqBlock1837_user,
                (LPVOID *)&CPlayerpc_PartyReqBlock1837_next,
                (LPVOID)cast_pointer_function(CPlayerpc_PartyReqBlock1837_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(bool))&CPlayer::pc_PartyReqBlock)
            },
            _hook_record {
                (LPVOID)0x1400c3ba0L,
                (LPVOID *)&CPlayerpc_PartySuccessionReqeuest1839_user,
                (LPVOID *)&CPlayerpc_PartySuccessionReqeuest1839_next,
                (LPVOID)cast_pointer_function(CPlayerpc_PartySuccessionReqeuest1839_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int))&CPlayer::pc_PartySuccessionReqeuest)
            },
            _hook_record {
                (LPVOID)0x140082210L,
                (LPVOID *)&CPlayerpc_PlayAttack_Force1841_user,
                (LPVOID *)&CPlayerpc_PlayAttack_Force1841_next,
                (LPVOID)cast_pointer_function(CPlayerpc_PlayAttack_Force1841_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CCharacter*, float*, uint16_t, uint16_t*, uint16_t))&CPlayer::pc_PlayAttack_Force)
            },
            _hook_record {
                (LPVOID)0x1400804d0L,
                (LPVOID *)&CPlayerpc_PlayAttack_Gen1843_user,
                (LPVOID *)&CPlayerpc_PlayAttack_Gen1843_next,
                (LPVOID)cast_pointer_function(CPlayerpc_PlayAttack_Gen1843_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CCharacter*, char, uint16_t, uint16_t, bool))&CPlayer::pc_PlayAttack_Gen)
            },
            _hook_record {
                (LPVOID)0x140084e10L,
                (LPVOID *)&CPlayerpc_PlayAttack_SelfDestruction1845_user,
                (LPVOID *)&CPlayerpc_PlayAttack_SelfDestruction1845_next,
                (LPVOID)cast_pointer_function(CPlayerpc_PlayAttack_SelfDestruction1845_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::pc_PlayAttack_SelfDestruction)
            },
            _hook_record {
                (LPVOID)0x140083a20L,
                (LPVOID *)&CPlayerpc_PlayAttack_Siege1847_user,
                (LPVOID *)&CPlayerpc_PlayAttack_Siege1847_next,
                (LPVOID)cast_pointer_function(CPlayerpc_PlayAttack_Siege1847_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CCharacter*, float*, char, uint16_t, uint16_t))&CPlayer::pc_PlayAttack_Siege)
            },
            _hook_record {
                (LPVOID)0x140081190L,
                (LPVOID *)&CPlayerpc_PlayAttack_Skill1849_user,
                (LPVOID *)&CPlayerpc_PlayAttack_Skill1849_next,
                (LPVOID)cast_pointer_function(CPlayerpc_PlayAttack_Skill1849_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CCharacter*, float*, char, uint16_t, uint16_t, uint16_t*, uint16_t))&CPlayer::pc_PlayAttack_Skill)
            },
            _hook_record {
                (LPVOID)0x1400835a0L,
                (LPVOID *)&CPlayerpc_PlayAttack_Test1851_user,
                (LPVOID *)&CPlayerpc_PlayAttack_Test1851_next,
                (LPVOID)cast_pointer_function(CPlayerpc_PlayAttack_Test1851_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, uint16_t, char, int16_t*))&CPlayer::pc_PlayAttack_Test)
            },
            _hook_record {
                (LPVOID)0x1400830d0L,
                (LPVOID *)&CPlayerpc_PlayAttack_Unit1853_user,
                (LPVOID *)&CPlayerpc_PlayAttack_Unit1853_next,
                (LPVOID)cast_pointer_function(CPlayerpc_PlayAttack_Unit1853_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CCharacter*, char))&CPlayer::pc_PlayAttack_Unit)
            },
            _hook_record {
                (LPVOID)0x1400c8db0L,
                (LPVOID *)&CPlayerpc_PostContentRequest1855_user,
                (LPVOID *)&CPlayerpc_PostContentRequest1855_next,
                (LPVOID)cast_pointer_function(CPlayerpc_PostContentRequest1855_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int))&CPlayer::pc_PostContentRequest)
            },
            _hook_record {
                (LPVOID)0x1400c9320L,
                (LPVOID *)&CPlayerpc_PostDeleteRequest1857_user,
                (LPVOID *)&CPlayerpc_PostDeleteRequest1857_next,
                (LPVOID)cast_pointer_function(CPlayerpc_PostDeleteRequest1857_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int))&CPlayer::pc_PostDeleteRequest)
            },
            _hook_record {
                (LPVOID)0x1400c8f90L,
                (LPVOID *)&CPlayerpc_PostItemGoldRequest1859_user,
                (LPVOID *)&CPlayerpc_PostItemGoldRequest1859_next,
                (LPVOID)cast_pointer_function(CPlayerpc_PostItemGoldRequest1859_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int))&CPlayer::pc_PostItemGoldRequest)
            },
            _hook_record {
                (LPVOID)0x1400c8cf0L,
                (LPVOID *)&CPlayerpc_PostListRequest1861_user,
                (LPVOID *)&CPlayerpc_PostListRequest1861_next,
                (LPVOID)cast_pointer_function(CPlayerpc_PostListRequest1861_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::pc_PostListRequest)
            },
            _hook_record {
                (LPVOID)0x1400c9450L,
                (LPVOID *)&CPlayerpc_PostReturnConfirmRequest1863_user,
                (LPVOID *)&CPlayerpc_PostReturnConfirmRequest1863_next,
                (LPVOID)cast_pointer_function(CPlayerpc_PostReturnConfirmRequest1863_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int))&CPlayer::pc_PostReturnConfirmRequest)
            },
            _hook_record {
                (LPVOID)0x1400fd0d0L,
                (LPVOID *)&CPlayerpc_PotionDivision1865_user,
                (LPVOID *)&CPlayerpc_PotionDivision1865_next,
                (LPVOID)cast_pointer_function(CPlayerpc_PotionDivision1865_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t, uint16_t, char))&CPlayer::pc_PotionDivision)
            },
            _hook_record {
                (LPVOID)0x1400fd060L,
                (LPVOID *)&CPlayerpc_PotionSeparation1867_user,
                (LPVOID *)&CPlayerpc_PotionSeparation1867_next,
                (LPVOID)cast_pointer_function(CPlayerpc_PotionSeparation1867_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t, char))&CPlayer::pc_PotionSeparation)
            },
            _hook_record {
                (LPVOID)0x1400fb310L,
                (LPVOID *)&CPlayerpc_PotionUseTrunkExtend1869_user,
                (LPVOID *)&CPlayerpc_PotionUseTrunkExtend1869_next,
                (LPVOID)cast_pointer_function(CPlayerpc_PotionUseTrunkExtend1869_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::pc_PotionUseTrunkExtend)
            },
            _hook_record {
                (LPVOID)0x140108450L,
                (LPVOID *)&CPlayerpc_ProposeVoteRequest1871_user,
                (LPVOID *)&CPlayerpc_ProposeVoteRequest1871_next,
                (LPVOID)cast_pointer_function(CPlayerpc_ProposeVoteRequest1871_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char*))&CPlayer::pc_ProposeVoteRequest)
            },
            _hook_record {
                (LPVOID)0x1400f5fd0L,
                (LPVOID *)&CPlayerpc_PvpCashRecorver1873_user,
                (LPVOID *)&CPlayerpc_PvpCashRecorver1873_next,
                (LPVOID)cast_pointer_function(CPlayerpc_PvpCashRecorver1873_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int, char))&CPlayer::pc_PvpCashRecorver)
            },
            _hook_record {
                (LPVOID)0x1400cc5b0L,
                (LPVOID *)&CPlayerpc_QuestGiveupRequest1875_user,
                (LPVOID *)&CPlayerpc_QuestGiveupRequest1875_next,
                (LPVOID)cast_pointer_function(CPlayerpc_QuestGiveupRequest1875_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::pc_QuestGiveupRequest)
            },
            _hook_record {
                (LPVOID)0x1400b5280L,
                (LPVOID *)&CPlayerpc_RadarCharInfo1877_user,
                (LPVOID *)&CPlayerpc_RadarCharInfo1877_next,
                (LPVOID)cast_pointer_function(CPlayerpc_RadarCharInfo1877_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)())&CPlayer::pc_RadarCharInfo)
            },
            _hook_record {
                (LPVOID)0x1400c6820L,
                (LPVOID *)&CPlayerpc_RealMovPos1879_user,
                (LPVOID *)&CPlayerpc_RealMovPos1879_next,
                (LPVOID)cast_pointer_function(CPlayerpc_RealMovPos1879_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(float*))&CPlayer::pc_RealMovPos)
            },
            _hook_record {
                (LPVOID)0x1400fe7d0L,
                (LPVOID *)&CPlayerpc_RefreshGroupTargetPosition1881_user,
                (LPVOID *)&CPlayerpc_RefreshGroupTargetPosition1881_next,
                (LPVOID)cast_pointer_function(CPlayerpc_RefreshGroupTargetPosition1881_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, struct CGameObject*))&CPlayer::pc_RefreshGroupTargetPosition)
            },
            _hook_record {
                (LPVOID)0x1400c7640L,
                (LPVOID *)&CPlayerpc_RegistBind1883_user,
                (LPVOID *)&CPlayerpc_RegistBind1883_next,
                (LPVOID)cast_pointer_function(CPlayerpc_RegistBind1883_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CItemStore*))&CPlayer::pc_RegistBind)
            },
            _hook_record {
                (LPVOID)0x1400fe3d0L,
                (LPVOID *)&CPlayerpc_ReleaseGroupTargetObjectRequest1885_user,
                (LPVOID *)&CPlayerpc_ReleaseGroupTargetObjectRequest1885_next,
                (LPVOID)cast_pointer_function(CPlayerpc_ReleaseGroupTargetObjectRequest1885_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::pc_ReleaseGroupTargetObjectRequest)
            },
            _hook_record {
                (LPVOID)0x1400f0b20L,
                (LPVOID *)&CPlayerpc_ReleaseSiegeModeRequest1887_user,
                (LPVOID *)&CPlayerpc_ReleaseSiegeModeRequest1887_next,
                (LPVOID)cast_pointer_function(CPlayerpc_ReleaseSiegeModeRequest1887_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::pc_ReleaseSiegeModeRequest)
            },
            _hook_record {
                (LPVOID)0x1400fdba0L,
                (LPVOID *)&CPlayerpc_ReleaseTargetObjectRequest1889_user,
                (LPVOID *)&CPlayerpc_ReleaseTargetObjectRequest1889_next,
                (LPVOID)cast_pointer_function(CPlayerpc_ReleaseTargetObjectRequest1889_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::pc_ReleaseTargetObjectRequest)
            },
            _hook_record {
                (LPVOID)0x1400b5d60L,
                (LPVOID *)&CPlayerpc_RenameItemNConditionCheck1891_user,
                (LPVOID *)&CPlayerpc_RenameItemNConditionCheck1891_next,
                (LPVOID)cast_pointer_function(CPlayerpc_RenameItemNConditionCheck1891_wrapper),
                (LPVOID)cast_pointer_function((char(CPlayer::*)(struct _STORAGE_POS_INDIV*, struct _STORAGE_LIST::_db_con**))&CPlayer::pc_RenameItemNConditionCheck)
            },
            _hook_record {
                (LPVOID)0x140100a00L,
                (LPVOID *)&CPlayerpc_RequestChangeTaxRate1893_user,
                (LPVOID *)&CPlayerpc_RequestChangeTaxRate1893_next,
                (LPVOID)cast_pointer_function(CPlayerpc_RequestChangeTaxRate1893_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::pc_RequestChangeTaxRate)
            },
            _hook_record {
                (LPVOID)0x1400cc410L,
                (LPVOID *)&CPlayerpc_RequestDialogWithNPC1895_user,
                (LPVOID *)&CPlayerpc_RequestDialogWithNPC1895_next,
                (LPVOID)cast_pointer_function(CPlayerpc_RequestDialogWithNPC1895_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CItemStore*))&CPlayer::pc_RequestDialogWithNPC)
            },
            _hook_record {
                (LPVOID)0x140100720L,
                (LPVOID *)&CPlayerpc_RequestPatriarchPunishment1897_user,
                (LPVOID *)&CPlayerpc_RequestPatriarchPunishment1897_next,
                (LPVOID)cast_pointer_function(CPlayerpc_RequestPatriarchPunishment1897_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char*, char*))&CPlayer::pc_RequestPatriarchPunishment)
            },
            _hook_record {
                (LPVOID)0x1400cc330L,
                (LPVOID *)&CPlayerpc_RequestQuestFromNPC1899_user,
                (LPVOID *)&CPlayerpc_RequestQuestFromNPC1899_next,
                (LPVOID)cast_pointer_function(CPlayerpc_RequestQuestFromNPC1899_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CItemStore*, unsigned int))&CPlayer::pc_RequestQuestFromNPC)
            },
            _hook_record {
                (LPVOID)0x1400cc720L,
                (LPVOID *)&CPlayerpc_RequestQuestListFromNPC1901_user,
                (LPVOID *)&CPlayerpc_RequestQuestListFromNPC1901_next,
                (LPVOID)cast_pointer_function(CPlayerpc_RequestQuestListFromNPC1901_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CItemStore*))&CPlayer::pc_RequestQuestListFromNPC)
            },
            _hook_record {
                (LPVOID)0x140100950L,
                (LPVOID *)&CPlayerpc_RequestTaxRate1903_user,
                (LPVOID *)&CPlayerpc_RequestTaxRate1903_next,
                (LPVOID)cast_pointer_function(CPlayerpc_RequestTaxRate1903_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::pc_RequestTaxRate)
            },
            _hook_record {
                (LPVOID)0x140100e20L,
                (LPVOID *)&CPlayerpc_RequestUILockCertify1905_user,
                (LPVOID *)&CPlayerpc_RequestUILockCertify1905_next,
                (LPVOID)cast_pointer_function(CPlayerpc_RequestUILockCertify1905_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CUserDB*, char*))&CPlayer::pc_RequestUILockCertify)
            },
            _hook_record {
                (LPVOID)0x140101300L,
                (LPVOID *)&CPlayerpc_RequestUILockFindPW1907_user,
                (LPVOID *)&CPlayerpc_RequestUILockFindPW1907_next,
                (LPVOID)cast_pointer_function(CPlayerpc_RequestUILockFindPW1907_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CUserDB*, char*))&CPlayer::pc_RequestUILockFindPW)
            },
            _hook_record {
                (LPVOID)0x140100ba0L,
                (LPVOID *)&CPlayerpc_RequestUILockInit1909_user,
                (LPVOID *)&CPlayerpc_RequestUILockInit1909_next,
                (LPVOID)cast_pointer_function(CPlayerpc_RequestUILockInit1909_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CUserDB*, char*, char*, char, char*))&CPlayer::pc_RequestUILockInit)
            },
            _hook_record {
                (LPVOID)0x140100fd0L,
                (LPVOID *)&CPlayerpc_RequestUILockUpdate1911_user,
                (LPVOID *)&CPlayerpc_RequestUILockUpdate1911_next,
                (LPVOID)cast_pointer_function(CPlayerpc_RequestUILockUpdate1911_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char*, char*, char*, char, char*))&CPlayer::pc_RequestUILockUpdate)
            },
            _hook_record {
                (LPVOID)0x1400cc650L,
                (LPVOID *)&CPlayerpc_RequestWatchingWithNPC1913_user,
                (LPVOID *)&CPlayerpc_RequestWatchingWithNPC1913_next,
                (LPVOID)cast_pointer_function(CPlayerpc_RequestWatchingWithNPC1913_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CItemStore*))&CPlayer::pc_RequestWatchingWithNPC)
            },
            _hook_record {
                (LPVOID)0x1400fd320L,
                (LPVOID *)&CPlayerpc_ResDivision1915_user,
                (LPVOID *)&CPlayerpc_ResDivision1915_next,
                (LPVOID)cast_pointer_function(CPlayerpc_ResDivision1915_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t, uint16_t, char))&CPlayer::pc_ResDivision)
            },
            _hook_record {
                (LPVOID)0x1400fd2d0L,
                (LPVOID *)&CPlayerpc_ResSeparation1917_user,
                (LPVOID *)&CPlayerpc_ResSeparation1917_next,
                (LPVOID)cast_pointer_function(CPlayerpc_ResSeparation1917_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t, char))&CPlayer::pc_ResSeparation)
            },
            _hook_record {
                (LPVOID)0x1400c7a80L,
                (LPVOID *)&CPlayerpc_Resurrect1919_user,
                (LPVOID *)&CPlayerpc_Resurrect1919_next,
                (LPVOID)cast_pointer_function(CPlayerpc_Resurrect1919_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(bool))&CPlayer::pc_Resurrect)
            },
            _hook_record {
                (LPVOID)0x1400c4e90L,
                (LPVOID *)&CPlayerpc_Revival1921_user,
                (LPVOID *)&CPlayerpc_Revival1921_next,
                (LPVOID)cast_pointer_function(CPlayerpc_Revival1921_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(bool))&CPlayer::pc_Revival)
            },
            _hook_record {
                (LPVOID)0x1400951c0L,
                (LPVOID *)&CPlayerpc_SelectClassRequest1923_user,
                (LPVOID *)&CPlayerpc_SelectClassRequest1923_next,
                (LPVOID)cast_pointer_function(CPlayerpc_SelectClassRequest1923_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t, char))&CPlayer::pc_SelectClassRequest)
            },
            _hook_record {
                (LPVOID)0x1400ca9b0L,
                (LPVOID *)&CPlayerpc_SelectQuestAfterHappenEvent1925_user,
                (LPVOID *)&CPlayerpc_SelectQuestAfterHappenEvent1925_next,
                (LPVOID)cast_pointer_function(CPlayerpc_SelectQuestAfterHappenEvent1925_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char))&CPlayer::pc_SelectQuestAfterHappenEvent)
            },
            _hook_record {
                (LPVOID)0x1400cbc80L,
                (LPVOID *)&CPlayerpc_SelectQuestReward1927_user,
                (LPVOID *)&CPlayerpc_SelectQuestReward1927_next,
                (LPVOID)cast_pointer_function(CPlayerpc_SelectQuestReward1927_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, char))&CPlayer::pc_SelectQuestReward)
            },
            _hook_record {
                (LPVOID)0x1400f2530L,
                (LPVOID *)&CPlayerpc_SellItemStore1929_user,
                (LPVOID *)&CPlayerpc_SellItemStore1929_next,
                (LPVOID)cast_pointer_function(CPlayerpc_SellItemStore1929_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CItemStore*, char, struct _sell_store_request_clzo::_list*, int))&CPlayer::pc_SellItemStore)
            },
            _hook_record {
                (LPVOID)0x1400ffd00L,
                (LPVOID *)&CPlayerpc_SetGroupMapPointRequest1931_user,
                (LPVOID *)&CPlayerpc_SetGroupMapPointRequest1931_next,
                (LPVOID)cast_pointer_function(CPlayerpc_SetGroupMapPointRequest1931_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, float*))&CPlayer::pc_SetGroupMapPointRequest)
            },
            _hook_record {
                (LPVOID)0x1400fdbc0L,
                (LPVOID *)&CPlayerpc_SetGroupTargetObjectRequest1933_user,
                (LPVOID *)&CPlayerpc_SetGroupTargetObjectRequest1933_next,
                (LPVOID)cast_pointer_function(CPlayerpc_SetGroupTargetObjectRequest1933_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CGameObject*, unsigned int, char))&CPlayer::pc_SetGroupTargetObjectRequest)
            },
            _hook_record {
                (LPVOID)0x1400aa8f0L,
                (LPVOID *)&CPlayerpc_SetInGuildBattle1935_user,
                (LPVOID *)&CPlayerpc_SetInGuildBattle1935_next,
                (LPVOID)cast_pointer_function(CPlayerpc_SetInGuildBattle1935_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(bool, char))&CPlayer::pc_SetInGuildBattle)
            },
            _hook_record {
                (LPVOID)0x1400b47f0L,
                (LPVOID *)&CPlayerpc_SetItemCheckRequest1937_user,
                (LPVOID *)&CPlayerpc_SetItemCheckRequest1937_next,
                (LPVOID)cast_pointer_function(CPlayerpc_SetItemCheckRequest1937_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(unsigned int, char, char, bool))&CPlayer::pc_SetItemCheckRequest)
            },
            _hook_record {
                (LPVOID)0x1400ff970L,
                (LPVOID *)&CPlayerpc_SetRaceBossCryMsg1939_user,
                (LPVOID *)&CPlayerpc_SetRaceBossCryMsg1939_next,
                (LPVOID)cast_pointer_function(CPlayerpc_SetRaceBossCryMsg1939_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char*))&CPlayer::pc_SetRaceBossCryMsg)
            },
            _hook_record {
                (LPVOID)0x1400fda40L,
                (LPVOID *)&CPlayerpc_SetTargetObjectRequest1941_user,
                (LPVOID *)&CPlayerpc_SetTargetObjectRequest1941_next,
                (LPVOID)cast_pointer_function(CPlayerpc_SetTargetObjectRequest1941_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CGameObject*, unsigned int, bool))&CPlayer::pc_SetTargetObjectRequest)
            },
            _hook_record {
                (LPVOID)0x14009a4b0L,
                (LPVOID *)&CPlayerpc_SkillRequest1943_user,
                (LPVOID *)&CPlayerpc_SkillRequest1943_next,
                (LPVOID)cast_pointer_function(CPlayerpc_SkillRequest1943_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, struct _CHRID*, uint16_t*))&CPlayer::pc_SkillRequest)
            },
            _hook_record {
                (LPVOID)0x1400c7bf0L,
                (LPVOID *)&CPlayerpc_Stop1945_user,
                (LPVOID *)&CPlayerpc_Stop1945_next,
                (LPVOID)cast_pointer_function(CPlayerpc_Stop1945_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::pc_Stop)
            },
            _hook_record {
                (LPVOID)0x1400b3240L,
                (LPVOID *)&CPlayerpc_TakeGroundingItem1947_user,
                (LPVOID *)&CPlayerpc_TakeGroundingItem1947_next,
                (LPVOID)cast_pointer_function(CPlayerpc_TakeGroundingItem1947_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CItemBox*, uint16_t))&CPlayer::pc_TakeGroundingItem)
            },
            _hook_record {
                (LPVOID)0x1400b5ee0L,
                (LPVOID *)&CPlayerpc_TalikCrystalExchange1949_user,
                (LPVOID *)&CPlayerpc_TalikCrystalExchange1949_next,
                (LPVOID)cast_pointer_function(CPlayerpc_TalikCrystalExchange1949_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, struct _talik_crystal_exchange_clzo::_list*))&CPlayer::pc_TalikCrystalExchange)
            },
            _hook_record {
                (LPVOID)0x14009a660L,
                (LPVOID *)&CPlayerpc_ThrowSkillRequest1951_user,
                (LPVOID *)&CPlayerpc_ThrowSkillRequest1951_next,
                (LPVOID)cast_pointer_function(CPlayerpc_ThrowSkillRequest1951_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t, struct _CHRID*, uint16_t*))&CPlayer::pc_ThrowSkillRequest)
            },
            _hook_record {
                (LPVOID)0x1400b3f10L,
                (LPVOID *)&CPlayerpc_ThrowStorageItem1953_user,
                (LPVOID *)&CPlayerpc_ThrowStorageItem1953_next,
                (LPVOID)cast_pointer_function(CPlayerpc_ThrowStorageItem1953_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _STORAGE_POS_INDIV*))&CPlayer::pc_ThrowStorageItem)
            },
            _hook_record {
                (LPVOID)0x14009b030L,
                (LPVOID *)&CPlayerpc_ThrowUnitRequest1955_user,
                (LPVOID *)&CPlayerpc_ThrowUnitRequest1955_next,
                (LPVOID)cast_pointer_function(CPlayerpc_ThrowUnitRequest1955_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _CHRID*, uint16_t*))&CPlayer::pc_ThrowUnitRequest)
            },
            _hook_record {
                (LPVOID)0x1400fef50L,
                (LPVOID *)&CPlayerpc_TradeBlock1957_user,
                (LPVOID *)&CPlayerpc_TradeBlock1957_next,
                (LPVOID)cast_pointer_function(CPlayerpc_TradeBlock1957_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(bool))&CPlayer::pc_TradeBlock)
            },
            _hook_record {
                (LPVOID)0x1400c7880L,
                (LPVOID *)&CPlayerpc_TransShipRenewTicketRequest1959_user,
                (LPVOID *)&CPlayerpc_TransShipRenewTicketRequest1959_next,
                (LPVOID)cast_pointer_function(CPlayerpc_TransShipRenewTicketRequest1959_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t))&CPlayer::pc_TransShipRenewTicketRequest)
            },
            _hook_record {
                (LPVOID)0x1400f0880L,
                (LPVOID *)&CPlayerpc_TransformSiegeModeRequest1961_user,
                (LPVOID *)&CPlayerpc_TransformSiegeModeRequest1961_next,
                (LPVOID)cast_pointer_function(CPlayerpc_TransformSiegeModeRequest1961_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t))&CPlayer::pc_TransformSiegeModeRequest)
            },
            _hook_record {
                (LPVOID)0x1400fa560L,
                (LPVOID *)&CPlayerpc_TrunkAlterItemSlotRequest1963_user,
                (LPVOID *)&CPlayerpc_TrunkAlterItemSlotRequest1963_next,
                (LPVOID)cast_pointer_function(CPlayerpc_TrunkAlterItemSlotRequest1963_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(unsigned int, char, char))&CPlayer::pc_TrunkAlterItemSlotRequest)
            },
            _hook_record {
                (LPVOID)0x1400f8240L,
                (LPVOID *)&CPlayerpc_TrunkChangePasswdRequest1965_user,
                (LPVOID *)&CPlayerpc_TrunkChangePasswdRequest1965_next,
                (LPVOID)cast_pointer_function(CPlayerpc_TrunkChangePasswdRequest1965_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char*, char*, char, char*))&CPlayer::pc_TrunkChangePasswdRequest)
            },
            _hook_record {
                (LPVOID)0x1400fb2a0L,
                (LPVOID *)&CPlayerpc_TrunkCreateCostIsFreeRequest1967_user,
                (LPVOID *)&CPlayerpc_TrunkCreateCostIsFreeRequest1967_next,
                (LPVOID)cast_pointer_function(CPlayerpc_TrunkCreateCostIsFreeRequest1967_wrapper),
                (LPVOID)cast_pointer_function((char(CPlayer::*)())&CPlayer::pc_TrunkCreateCostIsFreeRequest)
            },
            _hook_record {
                (LPVOID)0x1400f7c30L,
                (LPVOID *)&CPlayerpc_TrunkDownloadRequest1969_user,
                (LPVOID *)&CPlayerpc_TrunkDownloadRequest1969_next,
                (LPVOID)cast_pointer_function(CPlayerpc_TrunkDownloadRequest1969_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char*))&CPlayer::pc_TrunkDownloadRequest)
            },
            _hook_record {
                (LPVOID)0x1400f7d00L,
                (LPVOID *)&CPlayerpc_TrunkEstRequest1971_user,
                (LPVOID *)&CPlayerpc_TrunkEstRequest1971_next,
                (LPVOID)cast_pointer_function(CPlayerpc_TrunkEstRequest1971_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char*, char, char*))&CPlayer::pc_TrunkEstRequest)
            },
            _hook_record {
                (LPVOID)0x1400f84d0L,
                (LPVOID *)&CPlayerpc_TrunkExtendRequest1973_user,
                (LPVOID *)&CPlayerpc_TrunkExtendRequest1973_next,
                (LPVOID)cast_pointer_function(CPlayerpc_TrunkExtendRequest1973_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::pc_TrunkExtendRequest)
            },
            _hook_record {
                (LPVOID)0x1400fb170L,
                (LPVOID *)&CPlayerpc_TrunkHintAnswerRequest1975_user,
                (LPVOID *)&CPlayerpc_TrunkHintAnswerRequest1975_next,
                (LPVOID)cast_pointer_function(CPlayerpc_TrunkHintAnswerRequest1975_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char*))&CPlayer::pc_TrunkHintAnswerRequest)
            },
            _hook_record {
                (LPVOID)0x1400f9e70L,
                (LPVOID *)&CPlayerpc_TrunkIoMergeRequest1977_user,
                (LPVOID *)&CPlayerpc_TrunkIoMergeRequest1977_next,
                (LPVOID)cast_pointer_function(CPlayerpc_TrunkIoMergeRequest1977_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, uint16_t, uint16_t, uint16_t))&CPlayer::pc_TrunkIoMergeRequest)
            },
            _hook_record {
                (LPVOID)0x1400fab80L,
                (LPVOID *)&CPlayerpc_TrunkIoMoneyRequest1979_user,
                (LPVOID *)&CPlayerpc_TrunkIoMoneyRequest1979_next,
                (LPVOID)cast_pointer_function(CPlayerpc_TrunkIoMoneyRequest1979_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, unsigned int, unsigned int))&CPlayer::pc_TrunkIoMoneyRequest)
            },
            _hook_record {
                (LPVOID)0x1400f8830L,
                (LPVOID *)&CPlayerpc_TrunkIoMoveRequest1981_user,
                (LPVOID *)&CPlayerpc_TrunkIoMoveRequest1981_next,
                (LPVOID)cast_pointer_function(CPlayerpc_TrunkIoMoveRequest1981_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, uint16_t, char))&CPlayer::pc_TrunkIoMoveRequest)
            },
            _hook_record {
                (LPVOID)0x1400f9130L,
                (LPVOID *)&CPlayerpc_TrunkIoSwapRequest1983_user,
                (LPVOID *)&CPlayerpc_TrunkIoSwapRequest1983_next,
                (LPVOID)cast_pointer_function(CPlayerpc_TrunkIoSwapRequest1983_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, uint16_t, uint16_t))&CPlayer::pc_TrunkIoSwapRequest)
            },
            _hook_record {
                (LPVOID)0x1400fa920L,
                (LPVOID *)&CPlayerpc_TrunkPotionDivision1985_user,
                (LPVOID *)&CPlayerpc_TrunkPotionDivision1985_next,
                (LPVOID)cast_pointer_function(CPlayerpc_TrunkPotionDivision1985_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t, uint16_t, uint16_t, char))&CPlayer::pc_TrunkPotionDivision)
            },
            _hook_record {
                (LPVOID)0x1400fb0e0L,
                (LPVOID *)&CPlayerpc_TrunkPwHintIndexRequest1987_user,
                (LPVOID *)&CPlayerpc_TrunkPwHintIndexRequest1987_next,
                (LPVOID)cast_pointer_function(CPlayerpc_TrunkPwHintIndexRequest1987_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::pc_TrunkPwHintIndexRequest)
            },
            _hook_record {
                (LPVOID)0x1400fa610L,
                (LPVOID *)&CPlayerpc_TrunkResDivision1989_user,
                (LPVOID *)&CPlayerpc_TrunkResDivision1989_next,
                (LPVOID)cast_pointer_function(CPlayerpc_TrunkResDivision1989_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(uint16_t, uint16_t, uint16_t, char))&CPlayer::pc_TrunkResDivision)
            },
            _hook_record {
                (LPVOID)0x1401047e0L,
                (LPVOID *)&CPlayerpc_UnitBulletFillRequest1991_user,
                (LPVOID *)&CPlayerpc_UnitBulletFillRequest1991_next,
                (LPVOID)cast_pointer_function(CPlayerpc_UnitBulletFillRequest1991_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, uint16_t*, int))&CPlayer::pc_UnitBulletFillRequest)
            },
            _hook_record {
                (LPVOID)0x140105630L,
                (LPVOID *)&CPlayerpc_UnitBulletReplaceRequest1993_user,
                (LPVOID *)&CPlayerpc_UnitBulletReplaceRequest1993_next,
                (LPVOID)cast_pointer_function(CPlayerpc_UnitBulletReplaceRequest1993_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, char))&CPlayer::pc_UnitBulletReplaceRequest)
            },
            _hook_record {
                (LPVOID)0x140105750L,
                (LPVOID *)&CPlayerpc_UnitDeliveryRequest1995_user,
                (LPVOID *)&CPlayerpc_UnitDeliveryRequest1995_next,
                (LPVOID)cast_pointer_function(CPlayerpc_UnitDeliveryRequest1995_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, struct CItemStore*, bool, float*, int))&CPlayer::pc_UnitDeliveryRequest)
            },
            _hook_record {
                (LPVOID)0x140102920L,
                (LPVOID *)&CPlayerpc_UnitFrameBuyRequest1997_user,
                (LPVOID *)&CPlayerpc_UnitFrameBuyRequest1997_next,
                (LPVOID)cast_pointer_function(CPlayerpc_UnitFrameBuyRequest1997_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, int))&CPlayer::pc_UnitFrameBuyRequest)
            },
            _hook_record {
                (LPVOID)0x140104240L,
                (LPVOID *)&CPlayerpc_UnitFrameRepairRequest1999_user,
                (LPVOID *)&CPlayerpc_UnitFrameRepairRequest1999_next,
                (LPVOID)cast_pointer_function(CPlayerpc_UnitFrameRepairRequest1999_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, int))&CPlayer::pc_UnitFrameRepairRequest)
            },
            _hook_record {
                (LPVOID)0x140106310L,
                (LPVOID *)&CPlayerpc_UnitLeaveRequest2001_user,
                (LPVOID *)&CPlayerpc_UnitLeaveRequest2001_next,
                (LPVOID)cast_pointer_function(CPlayerpc_UnitLeaveRequest2001_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(float*))&CPlayer::pc_UnitLeaveRequest)
            },
            _hook_record {
                (LPVOID)0x140104f00L,
                (LPVOID *)&CPlayerpc_UnitPackFillRequest2003_user,
                (LPVOID *)&CPlayerpc_UnitPackFillRequest2003_next,
                (LPVOID)cast_pointer_function(CPlayerpc_UnitPackFillRequest2003_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, struct _unit_pack_fill_request_clzo::__list*, int))&CPlayer::pc_UnitPackFillRequest)
            },
            _hook_record {
                (LPVOID)0x140103740L,
                (LPVOID *)&CPlayerpc_UnitPartTuningRequest2005_user,
                (LPVOID *)&CPlayerpc_UnitPartTuningRequest2005_next,
                (LPVOID)cast_pointer_function(CPlayerpc_UnitPartTuningRequest2005_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, char, struct _tuning_data*, int))&CPlayer::pc_UnitPartTuningRequest)
            },
            _hook_record {
                (LPVOID)0x140105e20L,
                (LPVOID *)&CPlayerpc_UnitReturnRequest2007_user,
                (LPVOID *)&CPlayerpc_UnitReturnRequest2007_next,
                (LPVOID)cast_pointer_function(CPlayerpc_UnitReturnRequest2007_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::pc_UnitReturnRequest)
            },
            _hook_record {
                (LPVOID)0x140103140L,
                (LPVOID *)&CPlayerpc_UnitSellRequest2009_user,
                (LPVOID *)&CPlayerpc_UnitSellRequest2009_next,
                (LPVOID)cast_pointer_function(CPlayerpc_UnitSellRequest2009_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(char, int))&CPlayer::pc_UnitSellRequest)
            },
            _hook_record {
                (LPVOID)0x140105fc0L,
                (LPVOID *)&CPlayerpc_UnitTakeRequest2011_user,
                (LPVOID *)&CPlayerpc_UnitTakeRequest2011_next,
                (LPVOID)cast_pointer_function(CPlayerpc_UnitTakeRequest2011_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::pc_UnitTakeRequest)
            },
            _hook_record {
                (LPVOID)0x1400c9820L,
                (LPVOID *)&CPlayerpc_UpdateDataForPostSend2013_user,
                (LPVOID *)&CPlayerpc_UpdateDataForPostSend2013_next,
                (LPVOID)cast_pointer_function(CPlayerpc_UpdateDataForPostSend2013_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::pc_UpdateDataForPostSend)
            },
            _hook_record {
                (LPVOID)0x1400f5ba0L,
                (LPVOID *)&CPlayerpc_UpdateDataForTrade2015_user,
                (LPVOID *)&CPlayerpc_UpdateDataForTrade2015_next,
                (LPVOID)cast_pointer_function(CPlayerpc_UpdateDataForTrade2015_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CPlayer*))&CPlayer::pc_UpdateDataForTrade)
            },
            _hook_record {
                (LPVOID)0x1400b13e0L,
                (LPVOID *)&CPlayerpc_UpgradeItem2017_user,
                (LPVOID *)&CPlayerpc_UpgradeItem2017_next,
                (LPVOID)cast_pointer_function(CPlayerpc_UpgradeItem2017_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct _STORAGE_POS_INDIV*, struct _STORAGE_POS_INDIV*, struct _STORAGE_POS_INDIV*, char, struct _STORAGE_POS_INDIV*))&CPlayer::pc_UpgradeItem)
            },
            _hook_record {
                (LPVOID)0x1400b45e0L,
                (LPVOID *)&CPlayerpc_UseFireCracker2019_user,
                (LPVOID *)&CPlayerpc_UseFireCracker2019_next,
                (LPVOID)cast_pointer_function(CPlayerpc_UseFireCracker2019_wrapper),
                (LPVOID)cast_pointer_function((int(CPlayer::*)(uint16_t))&CPlayer::pc_UseFireCracker)
            },
            _hook_record {
                (LPVOID)0x1400ad4d0L,
                (LPVOID *)&CPlayerpc_UsePotionItem2021_user,
                (LPVOID *)&CPlayerpc_UsePotionItem2021_next,
                (LPVOID)cast_pointer_function(CPlayerpc_UsePotionItem2021_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(struct CPlayer*, struct _STORAGE_POS_INDIV*))&CPlayer::pc_UsePotionItem)
            },
            _hook_record {
                (LPVOID)0x1400b4e10L,
                (LPVOID *)&CPlayerpc_UseRadarItem2023_user,
                (LPVOID *)&CPlayerpc_UseRadarItem2023_next,
                (LPVOID)cast_pointer_function(CPlayerpc_UseRadarItem2023_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct _STORAGE_POS_INDIV*, uint16_t*))&CPlayer::pc_UseRadarItem)
            },
            _hook_record {
                (LPVOID)0x14004e910L,
                (LPVOID *)&CPlayerpc_UseRecoverLossExpItem2025_user,
                (LPVOID *)&CPlayerpc_UseRecoverLossExpItem2025_next,
                (LPVOID)cast_pointer_function(CPlayerpc_UseRecoverLossExpItem2025_wrapper),
                (LPVOID)cast_pointer_function((char(CPlayer::*)(uint16_t))&CPlayer::pc_UseRecoverLossExpItem)
            },
            _hook_record {
                (LPVOID)0x1400b4bd0L,
                (LPVOID *)&CPlayerpc_UserSoccerBall2027_user,
                (LPVOID *)&CPlayerpc_UserSoccerBall2027_next,
                (LPVOID)cast_pointer_function(CPlayerpc_UserSoccerBall2027_wrapper),
                (LPVOID)cast_pointer_function((char(CPlayer::*)(uint16_t, uint16_t*))&CPlayer::pc_UserSoccerBall)
            },
            _hook_record {
                (LPVOID)0x14008a6f0L,
                (LPVOID *)&CPlayerpc_WPActiveAttack_Force2029_user,
                (LPVOID *)&CPlayerpc_WPActiveAttack_Force2029_next,
                (LPVOID)cast_pointer_function(CPlayerpc_WPActiveAttack_Force2029_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct _be_damaged_char*, int*, struct _force_fld*))&CPlayer::pc_WPActiveAttack_Force)
            },
            _hook_record {
                (LPVOID)0x14008aa30L,
                (LPVOID *)&CPlayerpc_WPActiveAttack_Skill2031_user,
                (LPVOID *)&CPlayerpc_WPActiveAttack_Skill2031_next,
                (LPVOID)cast_pointer_function(CPlayerpc_WPActiveAttack_Skill2031_wrapper),
                (LPVOID)cast_pointer_function((bool(CPlayer::*)(struct _be_damaged_char*, int*, int*, struct _skill_fld*, char, uint16_t))&CPlayer::pc_WPActiveAttack_Skill)
            },
            _hook_record {
                (LPVOID)0x1400fef10L,
                (LPVOID *)&CPlayerpc_WhisperBlock2033_user,
                (LPVOID *)&CPlayerpc_WhisperBlock2033_next,
                (LPVOID)cast_pointer_function(CPlayerpc_WhisperBlock2033_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(bool))&CPlayer::pc_WhisperBlock)
            },
            _hook_record {
                (LPVOID)0x14009b750L,
                (LPVOID *)&CPlayerskill_process2035_user,
                (LPVOID *)&CPlayerskill_process2035_next,
                (LPVOID)cast_pointer_function(CPlayerskill_process2035_wrapper),
                (LPVOID)cast_pointer_function((char(CPlayer::*)(int, int, struct _CHRID*, uint16_t*, int*))&CPlayer::skill_process)
            },
            _hook_record {
                (LPVOID)0x14009c450L,
                (LPVOID *)&CPlayerskill_process_for_aura2037_user,
                (LPVOID *)&CPlayerskill_process_for_aura2037_next,
                (LPVOID)cast_pointer_function(CPlayerskill_process_for_aura2037_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)(int))&CPlayer::skill_process_for_aura)
            },
            _hook_record {
                (LPVOID)0x14009c430L,
                (LPVOID *)&CPlayerskill_process_for_item2039_user,
                (LPVOID *)&CPlayerskill_process_for_item2039_next,
                (LPVOID)cast_pointer_function(CPlayerskill_process_for_item2039_wrapper),
                (LPVOID)cast_pointer_function((char(CPlayer::*)(int, struct _CHRID*, int*))&CPlayer::skill_process_for_item)
            },
            _hook_record {
                (LPVOID)0x140048050L,
                (LPVOID *)&CPlayerdtor_CPlayer2041_user,
                (LPVOID *)&CPlayerdtor_CPlayer2041_next,
                (LPVOID)cast_pointer_function(CPlayerdtor_CPlayer2041_wrapper),
                (LPVOID)cast_pointer_function((void(CPlayer::*)())&CPlayer::dtor_CPlayer)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
