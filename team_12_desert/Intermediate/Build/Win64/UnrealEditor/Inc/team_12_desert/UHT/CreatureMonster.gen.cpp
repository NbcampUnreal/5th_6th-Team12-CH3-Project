// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/CreatureMonster.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreatureMonster() {}

// Begin Cross Module References
TEAM_12_DESERT_API UClass* Z_Construct_UClass_ACreatureMonster();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_ACreatureMonster_NoRegister();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AMonster();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin Class ACreatureMonster
void ACreatureMonster::StaticRegisterNativesACreatureMonster()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACreatureMonster);
UClass* Z_Construct_UClass_ACreatureMonster_NoRegister()
{
	return ACreatureMonster::StaticClass();
}
struct Z_Construct_UClass_ACreatureMonster_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CreatureMonster.h" },
		{ "ModuleRelativePath", "Public/CreatureMonster.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACreatureMonster>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACreatureMonster_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMonster,
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACreatureMonster_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACreatureMonster_Statics::ClassParams = {
	&ACreatureMonster::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACreatureMonster_Statics::Class_MetaDataParams), Z_Construct_UClass_ACreatureMonster_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACreatureMonster()
{
	if (!Z_Registration_Info_UClass_ACreatureMonster.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACreatureMonster.OuterSingleton, Z_Construct_UClass_ACreatureMonster_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACreatureMonster.OuterSingleton;
}
template<> TEAM_12_DESERT_API UClass* StaticClass<ACreatureMonster>()
{
	return ACreatureMonster::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACreatureMonster);
ACreatureMonster::~ACreatureMonster() {}
// End Class ACreatureMonster

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_CreatureMonster_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACreatureMonster, ACreatureMonster::StaticClass, TEXT("ACreatureMonster"), &Z_Registration_Info_UClass_ACreatureMonster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACreatureMonster), 3809442227U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_CreatureMonster_h_2321977446(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_CreatureMonster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_CreatureMonster_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
