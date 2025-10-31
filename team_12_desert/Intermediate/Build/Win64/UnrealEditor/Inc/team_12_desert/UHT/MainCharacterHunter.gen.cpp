// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/MainCharacterHunter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainCharacterHunter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AMainCharacter();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AMainCharacterHunter();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AMainCharacterHunter_NoRegister();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin Class AMainCharacterHunter Function OnMeleeAttackMontageFinished
struct Z_Construct_UFunction_AMainCharacterHunter_OnMeleeAttackMontageFinished_Statics
{
	struct MainCharacterHunter_eventOnMeleeAttackMontageFinished_Parms
	{
		UAnimMontage* Montage;
		bool bInterrupted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainCharacterHunter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static void NewProp_bInterrupted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMainCharacterHunter_OnMeleeAttackMontageFinished_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainCharacterHunter_eventOnMeleeAttackMontageFinished_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMainCharacterHunter_OnMeleeAttackMontageFinished_Statics::NewProp_bInterrupted_SetBit(void* Obj)
{
	((MainCharacterHunter_eventOnMeleeAttackMontageFinished_Parms*)Obj)->bInterrupted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMainCharacterHunter_OnMeleeAttackMontageFinished_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MainCharacterHunter_eventOnMeleeAttackMontageFinished_Parms), &Z_Construct_UFunction_AMainCharacterHunter_OnMeleeAttackMontageFinished_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainCharacterHunter_OnMeleeAttackMontageFinished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainCharacterHunter_OnMeleeAttackMontageFinished_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainCharacterHunter_OnMeleeAttackMontageFinished_Statics::NewProp_bInterrupted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacterHunter_OnMeleeAttackMontageFinished_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacterHunter_OnMeleeAttackMontageFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacterHunter, nullptr, "OnMeleeAttackMontageFinished", nullptr, nullptr, Z_Construct_UFunction_AMainCharacterHunter_OnMeleeAttackMontageFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacterHunter_OnMeleeAttackMontageFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainCharacterHunter_OnMeleeAttackMontageFinished_Statics::MainCharacterHunter_eventOnMeleeAttackMontageFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacterHunter_OnMeleeAttackMontageFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacterHunter_OnMeleeAttackMontageFinished_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMainCharacterHunter_OnMeleeAttackMontageFinished_Statics::MainCharacterHunter_eventOnMeleeAttackMontageFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainCharacterHunter_OnMeleeAttackMontageFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacterHunter_OnMeleeAttackMontageFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainCharacterHunter::execOnMeleeAttackMontageFinished)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_UBOOL(Z_Param_bInterrupted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMeleeAttackMontageFinished(Z_Param_Montage,Z_Param_bInterrupted);
	P_NATIVE_END;
}
// End Class AMainCharacterHunter Function OnMeleeAttackMontageFinished

// Begin Class AMainCharacterHunter Function OnRangeAttackMontageFinished
struct Z_Construct_UFunction_AMainCharacterHunter_OnRangeAttackMontageFinished_Statics
{
	struct MainCharacterHunter_eventOnRangeAttackMontageFinished_Parms
	{
		UAnimMontage* Montage;
		bool bInterrupted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MainCharacterHunter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static void NewProp_bInterrupted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMainCharacterHunter_OnRangeAttackMontageFinished_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MainCharacterHunter_eventOnRangeAttackMontageFinished_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMainCharacterHunter_OnRangeAttackMontageFinished_Statics::NewProp_bInterrupted_SetBit(void* Obj)
{
	((MainCharacterHunter_eventOnRangeAttackMontageFinished_Parms*)Obj)->bInterrupted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMainCharacterHunter_OnRangeAttackMontageFinished_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MainCharacterHunter_eventOnRangeAttackMontageFinished_Parms), &Z_Construct_UFunction_AMainCharacterHunter_OnRangeAttackMontageFinished_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMainCharacterHunter_OnRangeAttackMontageFinished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainCharacterHunter_OnRangeAttackMontageFinished_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMainCharacterHunter_OnRangeAttackMontageFinished_Statics::NewProp_bInterrupted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacterHunter_OnRangeAttackMontageFinished_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacterHunter_OnRangeAttackMontageFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacterHunter, nullptr, "OnRangeAttackMontageFinished", nullptr, nullptr, Z_Construct_UFunction_AMainCharacterHunter_OnRangeAttackMontageFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacterHunter_OnRangeAttackMontageFinished_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMainCharacterHunter_OnRangeAttackMontageFinished_Statics::MainCharacterHunter_eventOnRangeAttackMontageFinished_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacterHunter_OnRangeAttackMontageFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacterHunter_OnRangeAttackMontageFinished_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMainCharacterHunter_OnRangeAttackMontageFinished_Statics::MainCharacterHunter_eventOnRangeAttackMontageFinished_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMainCharacterHunter_OnRangeAttackMontageFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacterHunter_OnRangeAttackMontageFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainCharacterHunter::execOnRangeAttackMontageFinished)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_UBOOL(Z_Param_bInterrupted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRangeAttackMontageFinished(Z_Param_Montage,Z_Param_bInterrupted);
	P_NATIVE_END;
}
// End Class AMainCharacterHunter Function OnRangeAttackMontageFinished

// Begin Class AMainCharacterHunter Function ShootProjectile
struct Z_Construct_UFunction_AMainCharacterHunter_ShootProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xbc\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdf\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n// '\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd' \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb0\xef\xbf\xbd \xef\xbf\xbd\xc6\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd!!!!!!\n" },
#endif
		{ "ModuleRelativePath", "Public/MainCharacterHunter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xbc\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdf\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n'\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd' \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb0\xef\xbf\xbd \xef\xbf\xbd\xc6\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd!!!!!!" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacterHunter_ShootProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacterHunter, nullptr, "ShootProjectile", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacterHunter_ShootProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacterHunter_ShootProjectile_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainCharacterHunter_ShootProjectile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacterHunter_ShootProjectile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainCharacterHunter::execShootProjectile)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShootProjectile();
	P_NATIVE_END;
}
// End Class AMainCharacterHunter Function ShootProjectile

// Begin Class AMainCharacterHunter Function SlashSword
struct Z_Construct_UFunction_AMainCharacterHunter_SlashSword_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/MainCharacterHunter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMainCharacterHunter_SlashSword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMainCharacterHunter, nullptr, "SlashSword", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMainCharacterHunter_SlashSword_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMainCharacterHunter_SlashSword_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMainCharacterHunter_SlashSword()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMainCharacterHunter_SlashSword_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMainCharacterHunter::execSlashSword)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SlashSword();
	P_NATIVE_END;
}
// End Class AMainCharacterHunter Function SlashSword

// Begin Class AMainCharacterHunter
void AMainCharacterHunter::StaticRegisterNativesAMainCharacterHunter()
{
	UClass* Class = AMainCharacterHunter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnMeleeAttackMontageFinished", &AMainCharacterHunter::execOnMeleeAttackMontageFinished },
		{ "OnRangeAttackMontageFinished", &AMainCharacterHunter::execOnRangeAttackMontageFinished },
		{ "ShootProjectile", &AMainCharacterHunter::execShootProjectile },
		{ "SlashSword", &AMainCharacterHunter::execSlashSword },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainCharacterHunter);
UClass* Z_Construct_UClass_AMainCharacterHunter_NoRegister()
{
	return AMainCharacterHunter::StaticClass();
}
struct Z_Construct_UClass_AMainCharacterHunter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MainCharacterHunter.h" },
		{ "ModuleRelativePath", "Public/MainCharacterHunter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAttacking_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "Public/MainCharacterHunter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeAttackMontage_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xcf\xb8\xef\xbf\xbd\xef\xbf\xbd\xcc\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/MainCharacterHunter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xcf\xb8\xef\xbf\xbd\xef\xbf\xbd\xcc\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xbc\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeAttackMontage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/MainCharacterHunter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "Category", "MainCharacterHunter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainCharacterHunter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "Category", "MainCharacterHunter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainCharacterHunter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveInput_MetaData[] = {
		{ "Category", "MainCharacterHunter" },
		{ "ModuleRelativePath", "Public/MainCharacterHunter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookInput_MetaData[] = {
		{ "Category", "MainCharacterHunter" },
		{ "ModuleRelativePath", "Public/MainCharacterHunter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpInput_MetaData[] = {
		{ "Category", "MainCharacterHunter" },
		{ "ModuleRelativePath", "Public/MainCharacterHunter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeInput_MetaData[] = {
		{ "Category", "MainCharacterHunter" },
		{ "ModuleRelativePath", "Public/MainCharacterHunter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeInput_MetaData[] = {
		{ "Category", "MainCharacterHunter" },
		{ "ModuleRelativePath", "Public/MainCharacterHunter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DashInput_MetaData[] = {
		{ "Category", "MainCharacterHunter" },
		{ "ModuleRelativePath", "Public/MainCharacterHunter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "MainCharacterHunter" },
		{ "ModuleRelativePath", "Public/MainCharacterHunter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDashSpeed_MetaData[] = {
		{ "Category", "Hunter_Property" },
		{ "ModuleRelativePath", "Public/MainCharacterHunter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsAttacking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAttacking;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RangeAttackMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeleeAttackMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveInput;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookInput;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpInput;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeleeInput;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RangeInput;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DashInput;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDashSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMainCharacterHunter_OnMeleeAttackMontageFinished, "OnMeleeAttackMontageFinished" }, // 1155536317
		{ &Z_Construct_UFunction_AMainCharacterHunter_OnRangeAttackMontageFinished, "OnRangeAttackMontageFinished" }, // 4278920169
		{ &Z_Construct_UFunction_AMainCharacterHunter_ShootProjectile, "ShootProjectile" }, // 2473614942
		{ &Z_Construct_UFunction_AMainCharacterHunter_SlashSword, "SlashSword" }, // 1419647452
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainCharacterHunter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AMainCharacterHunter_Statics::NewProp_bIsAttacking_SetBit(void* Obj)
{
	((AMainCharacterHunter*)Obj)->bIsAttacking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMainCharacterHunter_Statics::NewProp_bIsAttacking = { "bIsAttacking", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMainCharacterHunter), &Z_Construct_UClass_AMainCharacterHunter_Statics::NewProp_bIsAttacking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAttacking_MetaData), NewProp_bIsAttacking_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacterHunter_Statics::NewProp_RangeAttackMontage = { "RangeAttackMontage", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacterHunter, RangeAttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeAttackMontage_MetaData), NewProp_RangeAttackMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacterHunter_Statics::NewProp_MeleeAttackMontage = { "MeleeAttackMontage", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacterHunter, MeleeAttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeAttackMontage_MetaData), NewProp_MeleeAttackMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacterHunter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x01440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacterHunter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacterHunter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x01440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacterHunter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacterHunter_Statics::NewProp_MoveInput = { "MoveInput", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacterHunter, MoveInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveInput_MetaData), NewProp_MoveInput_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacterHunter_Statics::NewProp_LookInput = { "LookInput", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacterHunter, LookInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookInput_MetaData), NewProp_LookInput_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacterHunter_Statics::NewProp_JumpInput = { "JumpInput", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacterHunter, JumpInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpInput_MetaData), NewProp_JumpInput_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacterHunter_Statics::NewProp_MeleeInput = { "MeleeInput", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacterHunter, MeleeInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeInput_MetaData), NewProp_MeleeInput_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacterHunter_Statics::NewProp_RangeInput = { "RangeInput", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacterHunter, RangeInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeInput_MetaData), NewProp_RangeInput_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacterHunter_Statics::NewProp_DashInput = { "DashInput", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacterHunter, DashInput), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DashInput_MetaData), NewProp_DashInput_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacterHunter_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacterHunter, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMainCharacterHunter_Statics::NewProp_MaxDashSpeed = { "MaxDashSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainCharacterHunter, MaxDashSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDashSpeed_MetaData), NewProp_MaxDashSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainCharacterHunter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacterHunter_Statics::NewProp_bIsAttacking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacterHunter_Statics::NewProp_RangeAttackMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacterHunter_Statics::NewProp_MeleeAttackMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacterHunter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacterHunter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacterHunter_Statics::NewProp_MoveInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacterHunter_Statics::NewProp_LookInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacterHunter_Statics::NewProp_JumpInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacterHunter_Statics::NewProp_MeleeInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacterHunter_Statics::NewProp_RangeInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacterHunter_Statics::NewProp_DashInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacterHunter_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacterHunter_Statics::NewProp_MaxDashSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacterHunter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMainCharacterHunter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMainCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacterHunter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainCharacterHunter_Statics::ClassParams = {
	&AMainCharacterHunter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMainCharacterHunter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacterHunter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacterHunter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainCharacterHunter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainCharacterHunter()
{
	if (!Z_Registration_Info_UClass_AMainCharacterHunter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainCharacterHunter.OuterSingleton, Z_Construct_UClass_AMainCharacterHunter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainCharacterHunter.OuterSingleton;
}
template<> TEAM_12_DESERT_API UClass* StaticClass<AMainCharacterHunter>()
{
	return AMainCharacterHunter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainCharacterHunter);
AMainCharacterHunter::~AMainCharacterHunter() {}
// End Class AMainCharacterHunter

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_MainCharacterHunter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainCharacterHunter, AMainCharacterHunter::StaticClass, TEXT("AMainCharacterHunter"), &Z_Registration_Info_UClass_AMainCharacterHunter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainCharacterHunter), 1043019012U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_MainCharacterHunter_h_2256597312(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_MainCharacterHunter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_MainCharacterHunter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
