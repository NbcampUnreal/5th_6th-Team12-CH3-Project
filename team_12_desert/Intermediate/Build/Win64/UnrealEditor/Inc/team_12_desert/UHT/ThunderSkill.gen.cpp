// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/ThunderSkill.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThunderSkill() {}

// Begin Cross Module References
TEAM_12_DESERT_API UClass* Z_Construct_UClass_ASkillBase();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AThunderSkill();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AThunderSkill_NoRegister();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin Class AThunderSkill
void AThunderSkill::StaticRegisterNativesAThunderSkill()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThunderSkill);
UClass* Z_Construct_UClass_AThunderSkill_NoRegister()
{
	return AThunderSkill::StaticClass();
}
struct Z_Construct_UClass_AThunderSkill_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ThunderSkill.h" },
		{ "ModuleRelativePath", "Public/ThunderSkill.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThunderSkill>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AThunderSkill_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASkillBase,
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThunderSkill_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AThunderSkill_Statics::ClassParams = {
	&AThunderSkill::StaticClass,
	"Engine",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThunderSkill_Statics::Class_MetaDataParams), Z_Construct_UClass_AThunderSkill_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AThunderSkill()
{
	if (!Z_Registration_Info_UClass_AThunderSkill.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThunderSkill.OuterSingleton, Z_Construct_UClass_AThunderSkill_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AThunderSkill.OuterSingleton;
}
template<> TEAM_12_DESERT_API UClass* StaticClass<AThunderSkill>()
{
	return AThunderSkill::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AThunderSkill);
AThunderSkill::~AThunderSkill() {}
// End Class AThunderSkill

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_ThunderSkill_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AThunderSkill, AThunderSkill::StaticClass, TEXT("AThunderSkill"), &Z_Registration_Info_UClass_AThunderSkill, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThunderSkill), 3568263068U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_ThunderSkill_h_3491656921(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_ThunderSkill_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_ThunderSkill_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
