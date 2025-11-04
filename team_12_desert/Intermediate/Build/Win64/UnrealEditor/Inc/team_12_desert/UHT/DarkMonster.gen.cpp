// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/DarkMonster.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDarkMonster() {}

// Begin Cross Module References
TEAM_12_DESERT_API UClass* Z_Construct_UClass_ADarkMonster();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_ADarkMonster_NoRegister();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AMonster();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin Class ADarkMonster
void ADarkMonster::StaticRegisterNativesADarkMonster()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADarkMonster);
UClass* Z_Construct_UClass_ADarkMonster_NoRegister()
{
	return ADarkMonster::StaticClass();
}
struct Z_Construct_UClass_ADarkMonster_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DarkMonster.h" },
		{ "ModuleRelativePath", "Public/DarkMonster.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADarkMonster>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADarkMonster_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMonster,
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADarkMonster_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADarkMonster_Statics::ClassParams = {
	&ADarkMonster::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADarkMonster_Statics::Class_MetaDataParams), Z_Construct_UClass_ADarkMonster_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADarkMonster()
{
	if (!Z_Registration_Info_UClass_ADarkMonster.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADarkMonster.OuterSingleton, Z_Construct_UClass_ADarkMonster_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADarkMonster.OuterSingleton;
}
template<> TEAM_12_DESERT_API UClass* StaticClass<ADarkMonster>()
{
	return ADarkMonster::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADarkMonster);
ADarkMonster::~ADarkMonster() {}
// End Class ADarkMonster

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_DarkMonster_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADarkMonster, ADarkMonster::StaticClass, TEXT("ADarkMonster"), &Z_Registration_Info_UClass_ADarkMonster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADarkMonster), 361339020U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_DarkMonster_h_374780882(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_DarkMonster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_DarkMonster_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
