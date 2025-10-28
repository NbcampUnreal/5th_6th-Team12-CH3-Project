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
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AMainCharacter();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AMainCharacterHunter();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AMainCharacterHunter_NoRegister();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin Class AMainCharacterHunter
void AMainCharacterHunter::StaticRegisterNativesAMainCharacterHunter()
{
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
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainCharacterHunter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	Z_Construct_UClass_AMainCharacterHunter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
struct Z_CompiledInDeferFile_FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_MainCharacterHunter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainCharacterHunter, AMainCharacterHunter::StaticClass, TEXT("AMainCharacterHunter"), &Z_Registration_Info_UClass_AMainCharacterHunter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainCharacterHunter), 228610910U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_MainCharacterHunter_h_1112374781(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_MainCharacterHunter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_MainCharacterHunter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
