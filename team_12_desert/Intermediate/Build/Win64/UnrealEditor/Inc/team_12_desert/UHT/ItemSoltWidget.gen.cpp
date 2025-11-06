// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/ItemSoltWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemSoltWidget() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_UItemSoltWidget();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_UItemSoltWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin Class UItemSoltWidget
void UItemSoltWidget::StaticRegisterNativesUItemSoltWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemSoltWidget);
UClass* Z_Construct_UClass_UItemSoltWidget_NoRegister()
{
	return UItemSoltWidget::StaticClass();
}
struct Z_Construct_UClass_UItemSoltWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ItemSoltWidget.h" },
		{ "ModuleRelativePath", "Public/ItemSoltWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDataTable_MetaData[] = {
		{ "Category", "Inventory|Data" },
		{ "ModuleRelativePath", "Public/ItemSoltWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemDataTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemSoltWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemSoltWidget_Statics::NewProp_ItemDataTable = { "ItemDataTable", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemSoltWidget, ItemDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDataTable_MetaData), NewProp_ItemDataTable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemSoltWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemSoltWidget_Statics::NewProp_ItemDataTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemSoltWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemSoltWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemSoltWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemSoltWidget_Statics::ClassParams = {
	&UItemSoltWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UItemSoltWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemSoltWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemSoltWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemSoltWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemSoltWidget()
{
	if (!Z_Registration_Info_UClass_UItemSoltWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemSoltWidget.OuterSingleton, Z_Construct_UClass_UItemSoltWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemSoltWidget.OuterSingleton;
}
template<> TEAM_12_DESERT_API UClass* StaticClass<UItemSoltWidget>()
{
	return UItemSoltWidget::StaticClass();
}
UItemSoltWidget::UItemSoltWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemSoltWidget);
UItemSoltWidget::~UItemSoltWidget() {}
// End Class UItemSoltWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_team_12_desert_Source_team_12_desert_Public_ItemSoltWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemSoltWidget, UItemSoltWidget::StaticClass, TEXT("UItemSoltWidget"), &Z_Registration_Info_UClass_UItemSoltWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemSoltWidget), 2763925696U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_team_12_desert_Source_team_12_desert_Public_ItemSoltWidget_h_4000170118(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_team_12_desert_Source_team_12_desert_Public_ItemSoltWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_team_12_desert_Source_team_12_desert_Public_ItemSoltWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
