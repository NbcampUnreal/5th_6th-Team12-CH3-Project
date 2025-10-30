// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/SpiderMonster.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpiderMonster() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AMonsterAIController_NoRegister();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_ASpiderMonster();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_ASpiderMonster_NoRegister();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin Class ASpiderMonster
void ASpiderMonster::StaticRegisterNativesASpiderMonster()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpiderMonster);
UClass* Z_Construct_UClass_ASpiderMonster_NoRegister()
{
	return ASpiderMonster::StaticClass();
}
struct Z_Construct_UClass_ASpiderMonster_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SpiderMonster.h" },
		{ "ModuleRelativePath", "Public/SpiderMonster.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/SpiderMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/SpiderMonster.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/SpiderMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xcc\xb5\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationRateYaw_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/SpiderMonster.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/SpiderMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackCooldown_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/SpiderMonster.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackDamage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/SpiderMonster.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropItemClass_MetaData[] = {
		{ "Category", "Drop" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/SpiderMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIControllerClassToUse_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AIController \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/SpiderMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AIController \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallDetectDistance_MetaData[] = {
		{ "Category", "Climbing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xbf\xef\xbf\xbd: \xef\xbf\xbd\xef\xbf\xbd\xc5\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/SpiderMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xbf\xef\xbf\xbd: \xef\xbf\xbd\xef\xbf\xbd\xc5\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc5\xb8\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClimbSpeed_MetaData[] = {
		{ "Category", "Climbing" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/SpiderMonster.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd" },
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
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WallDetectDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClimbSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpiderMonster>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpiderMonster_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpiderMonster, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpiderMonster_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpiderMonster, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpiderMonster_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpiderMonster, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeed_MetaData), NewProp_WalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpiderMonster_Statics::NewProp_RotationRateYaw = { "RotationRateYaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpiderMonster, RotationRateYaw), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationRateYaw_MetaData), NewProp_RotationRateYaw_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpiderMonster_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpiderMonster, AttackRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRange_MetaData), NewProp_AttackRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpiderMonster_Statics::NewProp_AttackCooldown = { "AttackCooldown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpiderMonster, AttackCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackCooldown_MetaData), NewProp_AttackCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpiderMonster_Statics::NewProp_AttackDamage = { "AttackDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpiderMonster, AttackDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackDamage_MetaData), NewProp_AttackDamage_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpiderMonster_Statics::NewProp_DropItemClass = { "DropItemClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpiderMonster, DropItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropItemClass_MetaData), NewProp_DropItemClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpiderMonster_Statics::NewProp_AIControllerClassToUse = { "AIControllerClassToUse", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpiderMonster, AIControllerClassToUse), Z_Construct_UClass_UClass, Z_Construct_UClass_AMonsterAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIControllerClassToUse_MetaData), NewProp_AIControllerClassToUse_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpiderMonster_Statics::NewProp_WallDetectDistance = { "WallDetectDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpiderMonster, WallDetectDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallDetectDistance_MetaData), NewProp_WallDetectDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpiderMonster_Statics::NewProp_ClimbSpeed = { "ClimbSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpiderMonster, ClimbSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClimbSpeed_MetaData), NewProp_ClimbSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpiderMonster_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiderMonster_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiderMonster_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiderMonster_Statics::NewProp_WalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiderMonster_Statics::NewProp_RotationRateYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiderMonster_Statics::NewProp_AttackRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiderMonster_Statics::NewProp_AttackCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiderMonster_Statics::NewProp_AttackDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiderMonster_Statics::NewProp_DropItemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiderMonster_Statics::NewProp_AIControllerClassToUse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiderMonster_Statics::NewProp_WallDetectDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpiderMonster_Statics::NewProp_ClimbSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpiderMonster_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpiderMonster_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpiderMonster_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpiderMonster_Statics::ClassParams = {
	&ASpiderMonster::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASpiderMonster_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpiderMonster_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpiderMonster_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpiderMonster_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpiderMonster()
{
	if (!Z_Registration_Info_UClass_ASpiderMonster.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpiderMonster.OuterSingleton, Z_Construct_UClass_ASpiderMonster_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpiderMonster.OuterSingleton;
}
template<> TEAM_12_DESERT_API UClass* StaticClass<ASpiderMonster>()
{
	return ASpiderMonster::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpiderMonster);
ASpiderMonster::~ASpiderMonster() {}
// End Class ASpiderMonster

// Begin Registration
struct Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_SpiderMonster_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpiderMonster, ASpiderMonster::StaticClass, TEXT("ASpiderMonster"), &Z_Registration_Info_UClass_ASpiderMonster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpiderMonster), 1537829094U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_SpiderMonster_h_380170001(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_SpiderMonster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_SpiderMonster_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
