// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/ActiveItemBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActiveItemBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AActiveItemBase();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AActiveItemBase_NoRegister();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_UIItemInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin Class AActiveItemBase
void AActiveItemBase::StaticRegisterNativesAActiveItemBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AActiveItemBase);
UClass* Z_Construct_UClass_AActiveItemBase_NoRegister()
{
	return AActiveItemBase::StaticClass();
}
struct Z_Construct_UClass_AActiveItemBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ActiveItemBase.h" },
		{ "ModuleRelativePath", "Public/ActiveItemBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActiveItemBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AActiveItemBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AActiveItemBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AActiveItemBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIItemInterface_NoRegister, (int32)VTABLE_OFFSET(AActiveItemBase, IIItemInterface), false },  // 1626228477
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AActiveItemBase_Statics::ClassParams = {
	&AActiveItemBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AActiveItemBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AActiveItemBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AActiveItemBase()
{
	if (!Z_Registration_Info_UClass_AActiveItemBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AActiveItemBase.OuterSingleton, Z_Construct_UClass_AActiveItemBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AActiveItemBase.OuterSingleton;
}
template<> TEAM_12_DESERT_API UClass* StaticClass<AActiveItemBase>()
{
	return AActiveItemBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AActiveItemBase);
AActiveItemBase::~AActiveItemBase() {}
// End Class AActiveItemBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_ActiveItemBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AActiveItemBase, AActiveItemBase::StaticClass, TEXT("AActiveItemBase"), &Z_Registration_Info_UClass_AActiveItemBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AActiveItemBase), 1693740050U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_ActiveItemBase_h_76546672(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_ActiveItemBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_ActiveItemBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
