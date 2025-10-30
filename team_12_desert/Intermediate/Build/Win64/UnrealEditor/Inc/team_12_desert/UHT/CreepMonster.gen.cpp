// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/CreepMonster.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreepMonster() {}

// Begin Cross Module References
TEAM_12_DESERT_API UClass* Z_Construct_UClass_ACreepMonster();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_ACreepMonster_NoRegister();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AMonster();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin Class ACreepMonster
void ACreepMonster::StaticRegisterNativesACreepMonster()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACreepMonster);
UClass* Z_Construct_UClass_ACreepMonster_NoRegister()
{
	return ACreepMonster::StaticClass();
}
struct Z_Construct_UClass_ACreepMonster_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CreepMonster.h" },
		{ "ModuleRelativePath", "Public/CreepMonster.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACreepMonster>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACreepMonster_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMonster,
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACreepMonster_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACreepMonster_Statics::ClassParams = {
	&ACreepMonster::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACreepMonster_Statics::Class_MetaDataParams), Z_Construct_UClass_ACreepMonster_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACreepMonster()
{
	if (!Z_Registration_Info_UClass_ACreepMonster.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACreepMonster.OuterSingleton, Z_Construct_UClass_ACreepMonster_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACreepMonster.OuterSingleton;
}
template<> TEAM_12_DESERT_API UClass* StaticClass<ACreepMonster>()
{
	return ACreepMonster::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACreepMonster);
ACreepMonster::~ACreepMonster() {}
// End Class ACreepMonster

// Begin Registration
<<<<<<< HEAD
struct Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_CreepMonster_h_Statics
=======
struct Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_CreepMonster_h_Statics
>>>>>>> Monster
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACreepMonster, ACreepMonster::StaticClass, TEXT("ACreepMonster"), &Z_Registration_Info_UClass_ACreepMonster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACreepMonster), 2599124264U) },
	};
};
<<<<<<< HEAD
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_CreepMonster_h_3153828107(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_CreepMonster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_CreepMonster_h_Statics::ClassInfo),
=======
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_CreepMonster_h_3147513622(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_CreepMonster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_CreepMonster_h_Statics::ClassInfo),
>>>>>>> Monster
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
