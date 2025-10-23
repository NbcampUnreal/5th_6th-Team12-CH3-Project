// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/MyAItemBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyAItemBase() {}

// Begin Cross Module References
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AAItemBase();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AMyAItemBase();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AMyAItemBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin Class AMyAItemBase
void AMyAItemBase::StaticRegisterNativesAMyAItemBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyAItemBase);
UClass* Z_Construct_UClass_AMyAItemBase_NoRegister()
{
	return AMyAItemBase::StaticClass();
}
struct Z_Construct_UClass_AMyAItemBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyAItemBase.h" },
		{ "ModuleRelativePath", "Public/MyAItemBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyAItemBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyAItemBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAItemBase,
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyAItemBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyAItemBase_Statics::ClassParams = {
	&AMyAItemBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyAItemBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyAItemBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyAItemBase()
{
	if (!Z_Registration_Info_UClass_AMyAItemBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyAItemBase.OuterSingleton, Z_Construct_UClass_AMyAItemBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyAItemBase.OuterSingleton;
}
template<> TEAM_12_DESERT_API UClass* StaticClass<AMyAItemBase>()
{
	return AMyAItemBase::StaticClass();
}
AMyAItemBase::AMyAItemBase() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyAItemBase);
AMyAItemBase::~AMyAItemBase() {}
// End Class AMyAItemBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_MyAItemBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyAItemBase, AMyAItemBase::StaticClass, TEXT("AMyAItemBase"), &Z_Registration_Info_UClass_AMyAItemBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyAItemBase), 2320239176U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_MyAItemBase_h_3338778740(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_MyAItemBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_MyAItemBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
