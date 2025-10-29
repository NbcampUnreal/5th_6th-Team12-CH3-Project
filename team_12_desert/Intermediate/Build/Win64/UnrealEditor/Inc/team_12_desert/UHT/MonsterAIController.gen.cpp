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
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AMonsterAIController();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AMonsterAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin Class AMonsterAIController
void AMonsterAIController::StaticRegisterNativesAMonsterAIController()
{
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MonsterAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackCooldown_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xe2\xba\xbb \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MonsterAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xe2\xba\xbb \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc5\xb8\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackDamage_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xe2\xba\xbb \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "Public/MonsterAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xe2\xba\xbb \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonsterAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterAIController_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMonsterAIController, AttackRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRange_MetaData), NewProp_AttackRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterAIController_Statics::NewProp_AttackCooldown = { "AttackCooldown", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMonsterAIController, AttackCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackCooldown_MetaData), NewProp_AttackCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterAIController_Statics::NewProp_AttackDamage = { "AttackDamage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMonsterAIController, AttackDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackDamage_MetaData), NewProp_AttackDamage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMonsterAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterAIController_Statics::NewProp_AttackRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterAIController_Statics::NewProp_AttackCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterAIController_Statics::NewProp_AttackDamage,
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
	nullptr,
	Z_Construct_UClass_AMonsterAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
<<<<<<< HEAD
struct Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_MonsterAIController_h_Statics
=======
struct Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_MonsterAIController_h_Statics
>>>>>>> UI
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMonsterAIController, AMonsterAIController::StaticClass, TEXT("AMonsterAIController"), &Z_Registration_Info_UClass_AMonsterAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMonsterAIController), 3493927017U) },
	};
};
<<<<<<< HEAD
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_MonsterAIController_h_1576997629(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_MonsterAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_MonsterAIController_h_Statics::ClassInfo),
=======
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_MonsterAIController_h_2639464080(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_MonsterAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_MonsterAIController_h_Statics::ClassInfo),
>>>>>>> UI
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
