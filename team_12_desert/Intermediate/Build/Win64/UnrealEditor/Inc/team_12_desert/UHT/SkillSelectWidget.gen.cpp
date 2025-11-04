// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/SkillSelectWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkillSelectWidget() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_ASkillBook_NoRegister();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_USkillSelectWidget();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_USkillSelectWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin Class USkillSelectWidget
void USkillSelectWidget::StaticRegisterNativesUSkillSelectWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkillSelectWidget);
UClass* Z_Construct_UClass_USkillSelectWidget_NoRegister()
{
	return USkillSelectWidget::StaticClass();
}
struct Z_Construct_UClass_USkillSelectWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SkillSelectWidget.h" },
		{ "ModuleRelativePath", "Public/SkillSelectWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillDataTable_MetaData[] = {
		{ "Category", "SkillSelectWidget" },
		{ "ModuleRelativePath", "Public/SkillSelectWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainCharacter_MetaData[] = {
		{ "Category", "SkillSelectWidget" },
		{ "ModuleRelativePath", "Public/SkillSelectWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillBookClass_MetaData[] = {
		{ "Category", "SkillSelectWidget" },
		{ "ModuleRelativePath", "Public/SkillSelectWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkillDataTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkillBookClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkillSelectWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillSelectWidget_Statics::NewProp_SkillDataTable = { "SkillDataTable", nullptr, (EPropertyFlags)0x0124080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillSelectWidget, SkillDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillDataTable_MetaData), NewProp_SkillDataTable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillSelectWidget_Statics::NewProp_MainCharacter = { "MainCharacter", nullptr, (EPropertyFlags)0x0124080000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillSelectWidget, MainCharacter), Z_Construct_UClass_AMainCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainCharacter_MetaData), NewProp_MainCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkillSelectWidget_Statics::NewProp_SkillBookClass = { "SkillBookClass", nullptr, (EPropertyFlags)0x0124080000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USkillSelectWidget, SkillBookClass), Z_Construct_UClass_ASkillBook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillBookClass_MetaData), NewProp_SkillBookClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkillSelectWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillSelectWidget_Statics::NewProp_SkillDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillSelectWidget_Statics::NewProp_MainCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillSelectWidget_Statics::NewProp_SkillBookClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkillSelectWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USkillSelectWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USkillSelectWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USkillSelectWidget_Statics::ClassParams = {
	&USkillSelectWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USkillSelectWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USkillSelectWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USkillSelectWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_USkillSelectWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USkillSelectWidget()
{
	if (!Z_Registration_Info_UClass_USkillSelectWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkillSelectWidget.OuterSingleton, Z_Construct_UClass_USkillSelectWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USkillSelectWidget.OuterSingleton;
}
template<> TEAM_12_DESERT_API UClass* StaticClass<USkillSelectWidget>()
{
	return USkillSelectWidget::StaticClass();
}
USkillSelectWidget::USkillSelectWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USkillSelectWidget);
USkillSelectWidget::~USkillSelectWidget() {}
// End Class USkillSelectWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_SkillSelectWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USkillSelectWidget, USkillSelectWidget::StaticClass, TEXT("USkillSelectWidget"), &Z_Registration_Info_UClass_USkillSelectWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkillSelectWidget), 3122625655U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_SkillSelectWidget_h_2296512057(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_SkillSelectWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_SkillSelectWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
