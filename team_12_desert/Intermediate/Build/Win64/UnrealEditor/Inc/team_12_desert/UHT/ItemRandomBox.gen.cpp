// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/ItemRandomBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemRandomBox() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AItemRandomBox();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AItemRandomBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin Class AItemRandomBox
void AItemRandomBox::StaticRegisterNativesAItemRandomBox()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItemRandomBox);
UClass* Z_Construct_UClass_AItemRandomBox_NoRegister()
{
	return AItemRandomBox::StaticClass();
}
struct Z_Construct_UClass_AItemRandomBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ItemRandomBox.h" },
		{ "ModuleRelativePath", "Public/ItemRandomBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDataTable_MetaData[] = {
		{ "Category", "Random" },
		{ "ModuleRelativePath", "Public/ItemRandomBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpUpItem_MetaData[] = {
		{ "Category", "ExpItem" },
		{ "ModuleRelativePath", "Public/ItemRandomBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemDataTable;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ExpUpItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemRandomBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemRandomBox_Statics::NewProp_ItemDataTable = { "ItemDataTable", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemRandomBox, ItemDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDataTable_MetaData), NewProp_ItemDataTable_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AItemRandomBox_Statics::NewProp_ExpUpItem = { "ExpUpItem", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemRandomBox, ExpUpItem), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpUpItem_MetaData), NewProp_ExpUpItem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItemRandomBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemRandomBox_Statics::NewProp_ItemDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemRandomBox_Statics::NewProp_ExpUpItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemRandomBox_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AItemRandomBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemRandomBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AItemRandomBox_Statics::ClassParams = {
	&AItemRandomBox::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AItemRandomBox_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AItemRandomBox_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemRandomBox_Statics::Class_MetaDataParams), Z_Construct_UClass_AItemRandomBox_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AItemRandomBox()
{
	if (!Z_Registration_Info_UClass_AItemRandomBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItemRandomBox.OuterSingleton, Z_Construct_UClass_AItemRandomBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AItemRandomBox.OuterSingleton;
}
template<> TEAM_12_DESERT_API UClass* StaticClass<AItemRandomBox>()
{
	return AItemRandomBox::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AItemRandomBox);
AItemRandomBox::~AItemRandomBox() {}
// End Class AItemRandomBox

// Begin Registration
struct Z_CompiledInDeferFile_FID_team_12_desert_Source_team_12_desert_Public_ItemRandomBox_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AItemRandomBox, AItemRandomBox::StaticClass, TEXT("AItemRandomBox"), &Z_Registration_Info_UClass_AItemRandomBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItemRandomBox), 4194225154U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_team_12_desert_Source_team_12_desert_Public_ItemRandomBox_h_2222468896(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_team_12_desert_Source_team_12_desert_Public_ItemRandomBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_team_12_desert_Source_team_12_desert_Public_ItemRandomBox_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
