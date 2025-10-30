// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/QuakeSkill.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuakeSkill() {}

// Begin Cross Module References
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AQuakeSkill();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AQuakeSkill_NoRegister();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_ASkillBase();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin Class AQuakeSkill
void AQuakeSkill::StaticRegisterNativesAQuakeSkill()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AQuakeSkill);
UClass* Z_Construct_UClass_AQuakeSkill_NoRegister()
{
	return AQuakeSkill::StaticClass();
}
struct Z_Construct_UClass_AQuakeSkill_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "QuakeSkill.h" },
		{ "ModuleRelativePath", "Public/QuakeSkill.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQuakeSkill>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AQuakeSkill_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASkillBase,
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AQuakeSkill_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AQuakeSkill_Statics::ClassParams = {
	&AQuakeSkill::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AQuakeSkill_Statics::Class_MetaDataParams), Z_Construct_UClass_AQuakeSkill_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AQuakeSkill()
{
	if (!Z_Registration_Info_UClass_AQuakeSkill.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AQuakeSkill.OuterSingleton, Z_Construct_UClass_AQuakeSkill_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AQuakeSkill.OuterSingleton;
}
template<> TEAM_12_DESERT_API UClass* StaticClass<AQuakeSkill>()
{
	return AQuakeSkill::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AQuakeSkill);
AQuakeSkill::~AQuakeSkill() {}
// End Class AQuakeSkill

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_QuakeSkill_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AQuakeSkill, AQuakeSkill::StaticClass, TEXT("AQuakeSkill"), &Z_Registration_Info_UClass_AQuakeSkill, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AQuakeSkill), 1276675247U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_QuakeSkill_h_3367174894(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_QuakeSkill_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_QuakeSkill_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
