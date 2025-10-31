// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/SkillBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkillBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_ASkillBase();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_ASkillBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin Class ASkillBase
void ASkillBase::StaticRegisterNativesASkillBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASkillBase);
UClass* Z_Construct_UClass_ASkillBase_NoRegister()
{
	return ASkillBase::StaticClass();
}
struct Z_Construct_UClass_ASkillBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SkillBase.h" },
		{ "ModuleRelativePath", "Public/SkillBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scene_MetaData[] = {
		{ "Category", "Skill" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraEffect_MetaData[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Public/SkillBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Delay_MetaData[] = {
		{ "Category", "Delay" },
		{ "ModuleRelativePath", "Public/SkillBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillName_MetaData[] = {
		{ "Category", "Skill" },
		{ "ModuleRelativePath", "Public/SkillBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillExplanation_MetaData[] = {
		{ "Category", "Skill" },
		{ "ModuleRelativePath", "Public/SkillBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Scene;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraEffect;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Delay;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SkillName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SkillExplanation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASkillBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASkillBase_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASkillBase, Scene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scene_MetaData), NewProp_Scene_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASkillBase_Statics::NewProp_NiagaraEffect = { "NiagaraEffect", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASkillBase, NiagaraEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraEffect_MetaData), NewProp_NiagaraEffect_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASkillBase_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASkillBase, Delay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Delay_MetaData), NewProp_Delay_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASkillBase_Statics::NewProp_SkillName = { "SkillName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASkillBase, SkillName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillName_MetaData), NewProp_SkillName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASkillBase_Statics::NewProp_SkillExplanation = { "SkillExplanation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASkillBase, SkillExplanation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillExplanation_MetaData), NewProp_SkillExplanation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASkillBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkillBase_Statics::NewProp_Scene,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkillBase_Statics::NewProp_NiagaraEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkillBase_Statics::NewProp_Delay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkillBase_Statics::NewProp_SkillName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkillBase_Statics::NewProp_SkillExplanation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASkillBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASkillBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASkillBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASkillBase_Statics::ClassParams = {
	&ASkillBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASkillBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASkillBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASkillBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ASkillBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASkillBase()
{
	if (!Z_Registration_Info_UClass_ASkillBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASkillBase.OuterSingleton, Z_Construct_UClass_ASkillBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASkillBase.OuterSingleton;
}
template<> TEAM_12_DESERT_API UClass* StaticClass<ASkillBase>()
{
	return ASkillBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASkillBase);
ASkillBase::~ASkillBase() {}
// End Class ASkillBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_SkillBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASkillBase, ASkillBase::StaticClass, TEXT("ASkillBase"), &Z_Registration_Info_UClass_ASkillBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASkillBase), 2033484648U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_SkillBase_h_276395714(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_SkillBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_SkillBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
