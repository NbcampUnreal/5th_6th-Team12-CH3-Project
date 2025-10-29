// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/MainCharacterAniminstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainCharacterAniminstance() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_UMainCharacterAniminstance();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_UMainCharacterAniminstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin Class UMainCharacterAniminstance Function AnimNotify_Attack
struct Z_Construct_UFunction_UMainCharacterAniminstance_AnimNotify_Attack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MainCharacterAniminstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainCharacterAniminstance_AnimNotify_Attack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainCharacterAniminstance, nullptr, "AnimNotify_Attack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMainCharacterAniminstance_AnimNotify_Attack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMainCharacterAniminstance_AnimNotify_Attack_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMainCharacterAniminstance_AnimNotify_Attack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainCharacterAniminstance_AnimNotify_Attack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMainCharacterAniminstance::execAnimNotify_Attack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AnimNotify_Attack();
	P_NATIVE_END;
}
// End Class UMainCharacterAniminstance Function AnimNotify_Attack

// Begin Class UMainCharacterAniminstance
void UMainCharacterAniminstance::StaticRegisterNativesUMainCharacterAniminstance()
{
	UClass* Class = UMainCharacterAniminstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AnimNotify_Attack", &UMainCharacterAniminstance::execAnimNotify_Attack },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainCharacterAniminstance);
UClass* Z_Construct_UClass_UMainCharacterAniminstance_NoRegister()
{
	return UMainCharacterAniminstance::StaticClass();
}
struct Z_Construct_UClass_UMainCharacterAniminstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "MainCharacterAniminstance.h" },
		{ "ModuleRelativePath", "Public/MainCharacterAniminstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainCharacterRef_MetaData[] = {
		{ "Category", "MainCharacterAniminstance" },
		{ "ModuleRelativePath", "Public/MainCharacterAniminstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMovementComp_MetaData[] = {
		{ "Category", "MainCharacterAniminstance" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainCharacterAniminstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlRot_MetaData[] = {
		{ "Category", "MainCharacterAniminstance" },
		{ "ModuleRelativePath", "Public/MainCharacterAniminstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorRot_MetaData[] = {
		{ "Category", "MainCharacterAniminstance" },
		{ "ModuleRelativePath", "Public/MainCharacterAniminstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[] = {
		{ "Category", "MainCharacterAniminstance" },
		{ "ModuleRelativePath", "Public/MainCharacterAniminstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeAttackCount_MetaData[] = {
		{ "Category", "MainCharacterAniminstance" },
		{ "ModuleRelativePath", "Public/MainCharacterAniminstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RangeAttackCount_MetaData[] = {
		{ "Category", "MainCharacterAniminstance" },
		{ "ModuleRelativePath", "Public/MainCharacterAniminstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainCharacterRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterMovementComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlRot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorRot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MeleeAttackCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RangeAttackCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainCharacterAniminstance_AnimNotify_Attack, "AnimNotify_Attack" }, // 3570374867
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainCharacterAniminstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainCharacterAniminstance_Statics::NewProp_MainCharacterRef = { "MainCharacterRef", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainCharacterAniminstance, MainCharacterRef), Z_Construct_UClass_AMainCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainCharacterRef_MetaData), NewProp_MainCharacterRef_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainCharacterAniminstance_Statics::NewProp_CharacterMovementComp = { "CharacterMovementComp", nullptr, (EPropertyFlags)0x011400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainCharacterAniminstance, CharacterMovementComp), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterMovementComp_MetaData), NewProp_CharacterMovementComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMainCharacterAniminstance_Statics::NewProp_ControlRot = { "ControlRot", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainCharacterAniminstance, ControlRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlRot_MetaData), NewProp_ControlRot_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMainCharacterAniminstance_Statics::NewProp_ActorRot = { "ActorRot", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainCharacterAniminstance, ActorRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorRot_MetaData), NewProp_ActorRot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMainCharacterAniminstance_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainCharacterAniminstance, speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_speed_MetaData), NewProp_speed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMainCharacterAniminstance_Statics::NewProp_MeleeAttackCount = { "MeleeAttackCount", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainCharacterAniminstance, MeleeAttackCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeAttackCount_MetaData), NewProp_MeleeAttackCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMainCharacterAniminstance_Statics::NewProp_RangeAttackCount = { "RangeAttackCount", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainCharacterAniminstance, RangeAttackCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RangeAttackCount_MetaData), NewProp_RangeAttackCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainCharacterAniminstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainCharacterAniminstance_Statics::NewProp_MainCharacterRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainCharacterAniminstance_Statics::NewProp_CharacterMovementComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainCharacterAniminstance_Statics::NewProp_ControlRot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainCharacterAniminstance_Statics::NewProp_ActorRot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainCharacterAniminstance_Statics::NewProp_speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainCharacterAniminstance_Statics::NewProp_MeleeAttackCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainCharacterAniminstance_Statics::NewProp_RangeAttackCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainCharacterAniminstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMainCharacterAniminstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainCharacterAniminstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainCharacterAniminstance_Statics::ClassParams = {
	&UMainCharacterAniminstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMainCharacterAniminstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMainCharacterAniminstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainCharacterAniminstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMainCharacterAniminstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMainCharacterAniminstance()
{
	if (!Z_Registration_Info_UClass_UMainCharacterAniminstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainCharacterAniminstance.OuterSingleton, Z_Construct_UClass_UMainCharacterAniminstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMainCharacterAniminstance.OuterSingleton;
}
template<> TEAM_12_DESERT_API UClass* StaticClass<UMainCharacterAniminstance>()
{
	return UMainCharacterAniminstance::StaticClass();
}
UMainCharacterAniminstance::UMainCharacterAniminstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMainCharacterAniminstance);
UMainCharacterAniminstance::~UMainCharacterAniminstance() {}
// End Class UMainCharacterAniminstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_team_12_desert_Source_team_12_desert_Public_MainCharacterAniminstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMainCharacterAniminstance, UMainCharacterAniminstance::StaticClass, TEXT("UMainCharacterAniminstance"), &Z_Registration_Info_UClass_UMainCharacterAniminstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainCharacterAniminstance), 2044811057U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_team_12_desert_Source_team_12_desert_Public_MainCharacterAniminstance_h_4271610913(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_team_12_desert_Source_team_12_desert_Public_MainCharacterAniminstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_team_12_desert_Source_team_12_desert_Public_MainCharacterAniminstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
