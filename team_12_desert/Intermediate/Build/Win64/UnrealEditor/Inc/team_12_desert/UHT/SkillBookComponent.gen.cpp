// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/SkillBookComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkillBookComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_USkillBookComponent();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_USkillBookComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin Class USkillBookComponent
void USkillBookComponent::StaticRegisterNativesUSkillBookComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkillBookComponent);
UClass* Z_Construct_UClass_USkillBookComponent_NoRegister()
{
	return USkillBookComponent::StaticClass();
}
struct Z_Construct_UClass_USkillBookComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SkillBookComponent.h" },
		{ "ModuleRelativePath", "Public/SkillBookComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkillBookComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USkillBookComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkillBookComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USkillBookComponent_Statics::ClassParams = {
	&USkillBookComponent::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkillBookComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USkillBookComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USkillBookComponent()
{
	if (!Z_Registration_Info_UClass_USkillBookComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkillBookComponent.OuterSingleton, Z_Construct_UClass_USkillBookComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USkillBookComponent.OuterSingleton;
}
template<> TEAM_12_DESERT_API UClass* StaticClass<USkillBookComponent>()
{
	return USkillBookComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USkillBookComponent);
USkillBookComponent::~USkillBookComponent() {}
// End Class USkillBookComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_SkillBookComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USkillBookComponent, USkillBookComponent::StaticClass, TEXT("USkillBookComponent"), &Z_Registration_Info_UClass_USkillBookComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkillBookComponent), 3261049704U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_SkillBookComponent_h_2924929638(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_SkillBookComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_SkillBookComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
