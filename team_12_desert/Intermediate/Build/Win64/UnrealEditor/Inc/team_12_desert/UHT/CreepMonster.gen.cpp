// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/CreepMonster.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreepMonster() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_ACreepMonster();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_ACreepMonster_NoRegister();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AMonster();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin Class ACreepMonster
void ACreepMonster::StaticRegisterNativesACreepMonster()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACreepMonster);
UClass* Z_Construct_UClass_ACreepMonster_NoRegister()
{
	return ACreepMonster::StaticClass();
}
struct Z_Construct_UClass_ACreepMonster_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CreepMonster.h" },
		{ "ModuleRelativePath", "Public/CreepMonster.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniqueAttackMontage_MetaData[] = {
		{ "Category", "Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc4\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xa1\n// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/CreepMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc4\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xa1\n\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DissolveMaterialInstance0_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/// <summary>\n/// \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xde\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xad \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n/// </summary>\n" },
#endif
		{ "ModuleRelativePath", "Public/CreepMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "<summary>\n\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xde\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xad \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n</summary>" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DissolveMaterialInstance1_MetaData[] = {
		{ "ModuleRelativePath", "Public/CreepMonster.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DissolveMaterialInstance2_MetaData[] = {
		{ "ModuleRelativePath", "Public/CreepMonster.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DissolveMaterialInstance3_MetaData[] = {
		{ "ModuleRelativePath", "Public/CreepMonster.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UniqueAttackMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DissolveMaterialInstance0;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DissolveMaterialInstance1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DissolveMaterialInstance2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DissolveMaterialInstance3;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACreepMonster>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACreepMonster_Statics::NewProp_UniqueAttackMontage = { "UniqueAttackMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACreepMonster, UniqueAttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniqueAttackMontage_MetaData), NewProp_UniqueAttackMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACreepMonster_Statics::NewProp_DissolveMaterialInstance0 = { "DissolveMaterialInstance0", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACreepMonster, DissolveMaterialInstance0), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DissolveMaterialInstance0_MetaData), NewProp_DissolveMaterialInstance0_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACreepMonster_Statics::NewProp_DissolveMaterialInstance1 = { "DissolveMaterialInstance1", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACreepMonster, DissolveMaterialInstance1), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DissolveMaterialInstance1_MetaData), NewProp_DissolveMaterialInstance1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACreepMonster_Statics::NewProp_DissolveMaterialInstance2 = { "DissolveMaterialInstance2", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACreepMonster, DissolveMaterialInstance2), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DissolveMaterialInstance2_MetaData), NewProp_DissolveMaterialInstance2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACreepMonster_Statics::NewProp_DissolveMaterialInstance3 = { "DissolveMaterialInstance3", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACreepMonster, DissolveMaterialInstance3), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DissolveMaterialInstance3_MetaData), NewProp_DissolveMaterialInstance3_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACreepMonster_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreepMonster_Statics::NewProp_UniqueAttackMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreepMonster_Statics::NewProp_DissolveMaterialInstance0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreepMonster_Statics::NewProp_DissolveMaterialInstance1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreepMonster_Statics::NewProp_DissolveMaterialInstance2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreepMonster_Statics::NewProp_DissolveMaterialInstance3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACreepMonster_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACreepMonster_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMonster,
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACreepMonster_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACreepMonster_Statics::ClassParams = {
	&ACreepMonster::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACreepMonster_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACreepMonster_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACreepMonster_Statics::Class_MetaDataParams), Z_Construct_UClass_ACreepMonster_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACreepMonster()
{
	if (!Z_Registration_Info_UClass_ACreepMonster.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACreepMonster.OuterSingleton, Z_Construct_UClass_ACreepMonster_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACreepMonster.OuterSingleton;
}
template<> TEAM_12_DESERT_API UClass* StaticClass<ACreepMonster>()
{
	return ACreepMonster::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACreepMonster);
ACreepMonster::~ACreepMonster() {}
// End Class ACreepMonster

// Begin Registration
struct Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_CreepMonster_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACreepMonster, ACreepMonster::StaticClass, TEXT("ACreepMonster"), &Z_Registration_Info_UClass_ACreepMonster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACreepMonster), 4027294952U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_CreepMonster_h_4237460384(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_CreepMonster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_CreepMonster_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
