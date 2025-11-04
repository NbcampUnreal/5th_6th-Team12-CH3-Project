// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/SpiderMonster.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpiderMonster() {}

// Begin Cross Module References
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AMonster();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_ASpiderMonster();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_ASpiderMonster_NoRegister();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin Class ASpiderMonster
void ASpiderMonster::StaticRegisterNativesASpiderMonster()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpiderMonster);
UClass* Z_Construct_UClass_ASpiderMonster_NoRegister()
{
	return ASpiderMonster::StaticClass();
}
struct Z_Construct_UClass_ASpiderMonster_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SpiderMonster.h" },
		{ "ModuleRelativePath", "Public/SpiderMonster.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpiderMonster>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASpiderMonster_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMonster,
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpiderMonster_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpiderMonster_Statics::ClassParams = {
	&ASpiderMonster::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpiderMonster_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpiderMonster_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpiderMonster()
{
	if (!Z_Registration_Info_UClass_ASpiderMonster.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpiderMonster.OuterSingleton, Z_Construct_UClass_ASpiderMonster_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpiderMonster.OuterSingleton;
}
template<> TEAM_12_DESERT_API UClass* StaticClass<ASpiderMonster>()
{
	return ASpiderMonster::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpiderMonster);
ASpiderMonster::~ASpiderMonster() {}
// End Class ASpiderMonster

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_SpiderMonster_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpiderMonster, ASpiderMonster::StaticClass, TEXT("ASpiderMonster"), &Z_Registration_Info_UClass_ASpiderMonster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpiderMonster), 1861803046U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_SpiderMonster_h_3399253862(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_SpiderMonster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_SpiderMonster_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
