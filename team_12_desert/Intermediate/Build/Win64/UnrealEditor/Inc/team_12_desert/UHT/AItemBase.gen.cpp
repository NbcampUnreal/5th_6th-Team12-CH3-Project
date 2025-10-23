// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/AItemBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAItemBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AAItemBase();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AAItemBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin Class AAItemBase
void AAItemBase::StaticRegisterNativesAAItemBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAItemBase);
UClass* Z_Construct_UClass_AAItemBase_NoRegister()
{
	return AAItemBase::StaticClass();
}
struct Z_Construct_UClass_AAItemBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AItemBase.h" },
		{ "ModuleRelativePath", "Public/AItemBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAItemBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAItemBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAItemBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAItemBase_Statics::ClassParams = {
	&AAItemBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAItemBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AAItemBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAItemBase()
{
	if (!Z_Registration_Info_UClass_AAItemBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAItemBase.OuterSingleton, Z_Construct_UClass_AAItemBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAItemBase.OuterSingleton;
}
template<> TEAM_12_DESERT_API UClass* StaticClass<AAItemBase>()
{
	return AAItemBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAItemBase);
AAItemBase::~AAItemBase() {}
// End Class AAItemBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_AItemBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAItemBase, AAItemBase::StaticClass, TEXT("AAItemBase"), &Z_Registration_Info_UClass_AAItemBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAItemBase), 3003494779U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_AItemBase_h_4200453640(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_AItemBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_AItemBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
