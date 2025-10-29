// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/MonsterAICharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonsterAICharacter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AMonsterAICharacter();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AMonsterAICharacter_NoRegister();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AMonsterAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin Class AMonsterAICharacter
void AMonsterAICharacter::StaticRegisterNativesAMonsterAICharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMonsterAICharacter);
UClass* Z_Construct_UClass_AMonsterAICharacter_NoRegister()
{
	return AMonsterAICharacter::StaticClass();
}
struct Z_Construct_UClass_AMonsterAICharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MonsterAICharacter.h" },
		{ "ModuleRelativePath", "Public/MonsterAICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MonsterAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/MonsterAICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MonsterAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xcc\xb5\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationRateYaw_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/MonsterAICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MonsterAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackCooldown_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/MonsterAICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackDamage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/MonsterAICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropItemClass_MetaData[] = {
		{ "Category", "Drop" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MonsterAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIControllerClassToUse_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AIController \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MonsterAICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AIController \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationRateYaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackDamage;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DropItemClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AIControllerClassToUse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonsterAICharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterAICharacter_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMonsterAICharacter, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterAICharacter_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMonsterAICharacter, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterAICharacter_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMonsterAICharacter, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeed_MetaData), NewProp_WalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterAICharacter_Statics::NewProp_RotationRateYaw = { "RotationRateYaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMonsterAICharacter, RotationRateYaw), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationRateYaw_MetaData), NewProp_RotationRateYaw_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterAICharacter_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMonsterAICharacter, AttackRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRange_MetaData), NewProp_AttackRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterAICharacter_Statics::NewProp_AttackCooldown = { "AttackCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMonsterAICharacter, AttackCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackCooldown_MetaData), NewProp_AttackCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterAICharacter_Statics::NewProp_AttackDamage = { "AttackDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMonsterAICharacter, AttackDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackDamage_MetaData), NewProp_AttackDamage_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMonsterAICharacter_Statics::NewProp_DropItemClass = { "DropItemClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMonsterAICharacter, DropItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropItemClass_MetaData), NewProp_DropItemClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMonsterAICharacter_Statics::NewProp_AIControllerClassToUse = { "AIControllerClassToUse", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMonsterAICharacter, AIControllerClassToUse), Z_Construct_UClass_UClass, Z_Construct_UClass_AMonsterAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIControllerClassToUse_MetaData), NewProp_AIControllerClassToUse_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMonsterAICharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterAICharacter_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterAICharacter_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterAICharacter_Statics::NewProp_WalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterAICharacter_Statics::NewProp_RotationRateYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterAICharacter_Statics::NewProp_AttackRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterAICharacter_Statics::NewProp_AttackCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterAICharacter_Statics::NewProp_AttackDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterAICharacter_Statics::NewProp_DropItemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterAICharacter_Statics::NewProp_AIControllerClassToUse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterAICharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMonsterAICharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterAICharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMonsterAICharacter_Statics::ClassParams = {
	&AMonsterAICharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMonsterAICharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterAICharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterAICharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMonsterAICharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMonsterAICharacter()
{
	if (!Z_Registration_Info_UClass_AMonsterAICharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMonsterAICharacter.OuterSingleton, Z_Construct_UClass_AMonsterAICharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMonsterAICharacter.OuterSingleton;
}
template<> TEAM_12_DESERT_API UClass* StaticClass<AMonsterAICharacter>()
{
	return AMonsterAICharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMonsterAICharacter);
AMonsterAICharacter::~AMonsterAICharacter() {}
// End Class AMonsterAICharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_MonsterAICharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMonsterAICharacter, AMonsterAICharacter::StaticClass, TEXT("AMonsterAICharacter"), &Z_Registration_Info_UClass_AMonsterAICharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMonsterAICharacter), 2171579583U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_MonsterAICharacter_h_3442987621(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_MonsterAICharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_MonsterAICharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
