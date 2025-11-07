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
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DissolveMaterialInstance0_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xde\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xad \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/DarkMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xde\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xad \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DissolveMaterialInstance1_MetaData[] = {
		{ "ModuleRelativePath", "Public/DarkMonster.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DissolveMaterialInstance0;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DissolveMaterialInstance1;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADarkMonster>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADarkMonster_Statics::NewProp_DissolveMaterialInstance0 = { "DissolveMaterialInstance0", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADarkMonster, DissolveMaterialInstance0), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DissolveMaterialInstance0_MetaData), NewProp_DissolveMaterialInstance0_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADarkMonster_Statics::NewProp_DissolveMaterialInstance1 = { "DissolveMaterialInstance1", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADarkMonster, DissolveMaterialInstance1), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DissolveMaterialInstance1_MetaData), NewProp_DissolveMaterialInstance1_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADarkMonster_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADarkMonster_Statics::NewProp_DissolveMaterialInstance0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADarkMonster_Statics::NewProp_DissolveMaterialInstance1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADarkMonster_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_ADarkMonster_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADarkMonster_Statics::PropPointers),
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
struct Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_DarkMonster_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADarkMonster, ADarkMonster::StaticClass, TEXT("ADarkMonster"), &Z_Registration_Info_UClass_ADarkMonster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADarkMonster), 2033030093U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_DarkMonster_h_3967765272(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_DarkMonster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_DarkMonster_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
