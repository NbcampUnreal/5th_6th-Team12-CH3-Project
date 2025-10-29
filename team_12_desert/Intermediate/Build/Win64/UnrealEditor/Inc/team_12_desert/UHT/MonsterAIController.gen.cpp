// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/MonsterAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonsterAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AItemRandomBox_NoRegister();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AMonsterAIController();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AMonsterAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin Class AMonsterAIController Function ApplyDamage
struct Z_Construct_UFunction_AMonsterAIController_ApplyDamage_Statics
{
	struct MonsterAIController_eventApplyDamage_Parms
	{
		float DamageAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Damage" },
		{ "ModuleRelativePath", "Public/MonsterAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMonsterAIController_ApplyDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MonsterAIController_eventApplyDamage_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMonsterAIController_ApplyDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMonsterAIController_ApplyDamage_Statics::NewProp_DamageAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMonsterAIController_ApplyDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMonsterAIController_ApplyDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMonsterAIController, nullptr, "ApplyDamage", nullptr, nullptr, Z_Construct_UFunction_AMonsterAIController_ApplyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMonsterAIController_ApplyDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMonsterAIController_ApplyDamage_Statics::MonsterAIController_eventApplyDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMonsterAIController_ApplyDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMonsterAIController_ApplyDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMonsterAIController_ApplyDamage_Statics::MonsterAIController_eventApplyDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMonsterAIController_ApplyDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMonsterAIController_ApplyDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMonsterAIController::execApplyDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyDamage(Z_Param_DamageAmount);
	P_NATIVE_END;
}
// End Class AMonsterAIController Function ApplyDamage

// Begin Class AMonsterAIController
void AMonsterAIController::StaticRegisterNativesAMonsterAIController()
{
	UClass* Class = AMonsterAIController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyDamage", &AMonsterAIController::execApplyDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMonsterAIController);
UClass* Z_Construct_UClass_AMonsterAIController_NoRegister()
{
	return AMonsterAIController::StaticClass();
}
struct Z_Construct_UClass_AMonsterAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "MonsterAIController.h" },
		{ "ModuleRelativePath", "Public/MonsterAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[] = {
		{ "Category", "AI|Combat" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, meta = (ClampMin = \"0.0\") = \xef\xbf\xbd\xd6\xbc\xd2\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\n" },
#endif
		{ "ModuleRelativePath", "Public/MonsterAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, meta = (ClampMin = \"0.0\") = \xef\xbf\xbd\xd6\xbc\xd2\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackCooldown_MetaData[] = {
		{ "Category", "AI|Combat" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/MonsterAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackDamage_MetaData[] = {
		{ "Category", "AI|Combat" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/MonsterAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "AI|Stats" },
		{ "ClampMin", "1.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd/\xef\xbf\xbd\xcc\xb5\xef\xbf\xbd/\xc8\xb8\xef\xbf\xbd\xef\xbf\xbd/\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MonsterAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd/\xef\xbf\xbd\xcc\xb5\xef\xbf\xbd/\xc8\xb8\xef\xbf\xbd\xef\xbf\xbd/\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "AI|Stats" },
		{ "ModuleRelativePath", "Public/MonsterAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "AI|Movement" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/MonsterAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationRateYaw_MetaData[] = {
		{ "Category", "AI|Movement" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/MonsterAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemRandomBoxClass_MetaData[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ItemRandomBox \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MonsterAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ItemRandomBox \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DropItemClass_MetaData[] = {
		{ "Category", "AI|Drop" },
		{ "ModuleRelativePath", "Public/MonsterAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackCooldown;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationRateYaw;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemRandomBoxClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DropItemClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMonsterAIController_ApplyDamage, "ApplyDamage" }, // 823523969
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonsterAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterAIController_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMonsterAIController, AttackRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRange_MetaData), NewProp_AttackRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterAIController_Statics::NewProp_AttackCooldown = { "AttackCooldown", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMonsterAIController, AttackCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackCooldown_MetaData), NewProp_AttackCooldown_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterAIController_Statics::NewProp_AttackDamage = { "AttackDamage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMonsterAIController, AttackDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackDamage_MetaData), NewProp_AttackDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterAIController_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMonsterAIController, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterAIController_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0020080000020801, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMonsterAIController, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterAIController_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMonsterAIController, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeed_MetaData), NewProp_WalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterAIController_Statics::NewProp_RotationRateYaw = { "RotationRateYaw", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMonsterAIController, RotationRateYaw), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationRateYaw_MetaData), NewProp_RotationRateYaw_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMonsterAIController_Statics::NewProp_ItemRandomBoxClass = { "ItemRandomBoxClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMonsterAIController, ItemRandomBoxClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AItemRandomBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemRandomBoxClass_MetaData), NewProp_ItemRandomBoxClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMonsterAIController_Statics::NewProp_DropItemClass = { "DropItemClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMonsterAIController, DropItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DropItemClass_MetaData), NewProp_DropItemClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMonsterAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterAIController_Statics::NewProp_AttackRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterAIController_Statics::NewProp_AttackCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterAIController_Statics::NewProp_AttackDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterAIController_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterAIController_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterAIController_Statics::NewProp_WalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterAIController_Statics::NewProp_RotationRateYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterAIController_Statics::NewProp_ItemRandomBoxClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterAIController_Statics::NewProp_DropItemClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterAIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMonsterAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMonsterAIController_Statics::ClassParams = {
	&AMonsterAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMonsterAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterAIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMonsterAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMonsterAIController()
{
	if (!Z_Registration_Info_UClass_AMonsterAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMonsterAIController.OuterSingleton, Z_Construct_UClass_AMonsterAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMonsterAIController.OuterSingleton;
}
template<> TEAM_12_DESERT_API UClass* StaticClass<AMonsterAIController>()
{
	return AMonsterAIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMonsterAIController);
AMonsterAIController::~AMonsterAIController() {}
// End Class AMonsterAIController

// Begin Registration
<<<<<<< HEAD
struct Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_MonsterAIController_h_Statics
=======
struct Z_CompiledInDeferFile_FID_team_12_desert_Source_team_12_desert_Public_MonsterAIController_h_Statics
>>>>>>> Level-Design
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMonsterAIController, AMonsterAIController::StaticClass, TEXT("AMonsterAIController"), &Z_Registration_Info_UClass_AMonsterAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMonsterAIController), 3928593776U) },
	};
};
<<<<<<< HEAD
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_MonsterAIController_h_1358574851(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_MonsterAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_MonsterAIController_h_Statics::ClassInfo),
=======
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_team_12_desert_Source_team_12_desert_Public_MonsterAIController_h_1576997629(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_team_12_desert_Source_team_12_desert_Public_MonsterAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_team_12_desert_Source_team_12_desert_Public_MonsterAIController_h_Statics::ClassInfo),
>>>>>>> Level-Design
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
