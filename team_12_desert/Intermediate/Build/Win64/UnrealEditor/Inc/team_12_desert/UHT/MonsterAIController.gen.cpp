// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/MonsterAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonsterAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AMonsterAIController();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AMonsterAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin Class AMonsterAIController Function AttackPlayer
struct Z_Construct_UFunction_AMonsterAIController_AttackPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MonsterAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMonsterAIController_AttackPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMonsterAIController, nullptr, "AttackPlayer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMonsterAIController_AttackPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMonsterAIController_AttackPlayer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMonsterAIController_AttackPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMonsterAIController_AttackPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMonsterAIController::execAttackPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttackPlayer();
	P_NATIVE_END;
}
// End Class AMonsterAIController Function AttackPlayer

// Begin Class AMonsterAIController
void AMonsterAIController::StaticRegisterNativesAMonsterAIController()
{
	UClass* Class = AMonsterAIController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AttackPlayer", &AMonsterAIController::execAttackPlayer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMonsterAIController);
UClass* Z_Construct_UClass_AMonsterAIController_NoRegister()
{
	return AMonsterAIController::StaticClass();
}
struct Z_Construct_UClass_AMonsterAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MonsterAIController.h" },
		{ "ModuleRelativePath", "Public/MonsterAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerPawn_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------\n// AI \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n//-----------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/MonsterAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcceptanceRadius_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/MonsterAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerPawn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMonsterAIController_AttackPlayer, "AttackPlayer" }, // 4179078220
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonsterAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonsterAIController_Statics::NewProp_PlayerPawn = { "PlayerPawn", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMonsterAIController, PlayerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerPawn_MetaData), NewProp_PlayerPawn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterAIController_Statics::NewProp_AcceptanceRadius = { "AcceptanceRadius", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMonsterAIController, AcceptanceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcceptanceRadius_MetaData), NewProp_AcceptanceRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMonsterAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterAIController_Statics::NewProp_PlayerPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterAIController_Statics::NewProp_AcceptanceRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterAIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMonsterAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMonsterAIController_Statics::ClassParams = {
	&AMonsterAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMonsterAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterAIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMonsterAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMonsterAIController()
{
	if (!Z_Registration_Info_UClass_AMonsterAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMonsterAIController.OuterSingleton, Z_Construct_UClass_AMonsterAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMonsterAIController.OuterSingleton;
}
template<> TEAM_12_DESERT_API UClass* StaticClass<AMonsterAIController>()
{
	return AMonsterAIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMonsterAIController);
AMonsterAIController::~AMonsterAIController() {}
// End Class AMonsterAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_MonsterAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMonsterAIController, AMonsterAIController::StaticClass, TEXT("AMonsterAIController"), &Z_Registration_Info_UClass_AMonsterAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMonsterAIController), 3940658813U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_MonsterAIController_h_3496941213(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_MonsterAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_MonsterAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
