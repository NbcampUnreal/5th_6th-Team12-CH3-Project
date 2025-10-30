// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/SelectSkill.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelectSkill() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_USelectSkill();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_USelectSkill_NoRegister();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin Interface USelectSkill
void USelectSkill::StaticRegisterNativesUSelectSkill()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USelectSkill);
UClass* Z_Construct_UClass_USelectSkill_NoRegister()
{
	return USelectSkill::StaticClass();
}
struct Z_Construct_UClass_USelectSkill_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SelectSkill.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISelectSkill>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USelectSkill_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USelectSkill_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USelectSkill_Statics::ClassParams = {
	&USelectSkill::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USelectSkill_Statics::Class_MetaDataParams), Z_Construct_UClass_USelectSkill_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USelectSkill()
{
	if (!Z_Registration_Info_UClass_USelectSkill.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USelectSkill.OuterSingleton, Z_Construct_UClass_USelectSkill_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USelectSkill.OuterSingleton;
}
template<> TEAM_12_DESERT_API UClass* StaticClass<USelectSkill>()
{
	return USelectSkill::StaticClass();
}
USelectSkill::USelectSkill(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USelectSkill);
USelectSkill::~USelectSkill() {}
// End Interface USelectSkill

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_SelectSkill_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USelectSkill, USelectSkill::StaticClass, TEXT("USelectSkill"), &Z_Registration_Info_UClass_USelectSkill, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USelectSkill), 856482771U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_SelectSkill_h_1346816039(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_SelectSkill_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_SelectSkill_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
