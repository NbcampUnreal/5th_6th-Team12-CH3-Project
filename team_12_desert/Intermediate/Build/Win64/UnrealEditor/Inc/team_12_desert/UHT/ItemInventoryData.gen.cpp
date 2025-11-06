// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/ItemInventoryData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemInventoryData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AActiveItemBase_NoRegister();
TEAM_12_DESERT_API UScriptStruct* Z_Construct_UScriptStruct_FItemInventoryData();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin ScriptStruct FItemInventoryData
static_assert(std::is_polymorphic<FItemInventoryData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FItemInventoryData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemInventoryData;
class UScriptStruct* FItemInventoryData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemInventoryData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemInventoryData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemInventoryData, (UObject*)Z_Construct_UPackage__Script_team_12_desert(), TEXT("ItemInventoryData"));
	}
	return Z_Registration_Info_UScriptStruct_ItemInventoryData.OuterSingleton;
}
template<> TEAM_12_DESERT_API UScriptStruct* StaticStruct<FItemInventoryData>()
{
	return FItemInventoryData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemInventoryData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/ItemInventoryData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[] = {
		{ "Category", "ItemInventoryData" },
		{ "ModuleRelativePath", "Public/ItemInventoryData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemClass_MetaData[] = {
		{ "Category", "ItemInventoryData" },
		{ "ModuleRelativePath", "Public/ItemInventoryData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemIcon_MetaData[] = {
		{ "Category", "ItemInventoryData" },
		{ "ModuleRelativePath", "Public/ItemInventoryData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDescription_MetaData[] = {
		{ "Category", "ItemInventoryData" },
		{ "ModuleRelativePath", "Public/ItemInventoryData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemIcon;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemDescription;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemInventoryData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FItemInventoryData_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemInventoryData, ItemName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemName_MetaData), NewProp_ItemName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FItemInventoryData_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemInventoryData, ItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActiveItemBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemClass_MetaData), NewProp_ItemClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemInventoryData_Statics::NewProp_ItemIcon = { "ItemIcon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemInventoryData, ItemIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemIcon_MetaData), NewProp_ItemIcon_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemInventoryData_Statics::NewProp_ItemDescription = { "ItemDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemInventoryData, ItemDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDescription_MetaData), NewProp_ItemDescription_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemInventoryData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInventoryData_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInventoryData_Statics::NewProp_ItemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInventoryData_Statics::NewProp_ItemIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemInventoryData_Statics::NewProp_ItemDescription,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInventoryData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemInventoryData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ItemInventoryData",
	Z_Construct_UScriptStruct_FItemInventoryData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInventoryData_Statics::PropPointers),
	sizeof(FItemInventoryData),
	alignof(FItemInventoryData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemInventoryData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemInventoryData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemInventoryData()
{
	if (!Z_Registration_Info_UScriptStruct_ItemInventoryData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemInventoryData.InnerSingleton, Z_Construct_UScriptStruct_FItemInventoryData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ItemInventoryData.InnerSingleton;
}
// End ScriptStruct FItemInventoryData

// Begin Registration
<<<<<<< HEAD
struct Z_CompiledInDeferFile_FID_team_12_desert_Source_team_12_desert_Public_ItemInventoryData_h_Statics
=======
struct Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_ItemInventoryData_h_Statics
>>>>>>> uitemp
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FItemInventoryData::StaticStruct, Z_Construct_UScriptStruct_FItemInventoryData_Statics::NewStructOps, TEXT("ItemInventoryData"), &Z_Registration_Info_UScriptStruct_ItemInventoryData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemInventoryData), 4047918521U) },
	};
};
<<<<<<< HEAD
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_team_12_desert_Source_team_12_desert_Public_ItemInventoryData_h_2743341150(TEXT("/Script/team_12_desert"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_team_12_desert_Source_team_12_desert_Public_ItemInventoryData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_team_12_desert_Source_team_12_desert_Public_ItemInventoryData_h_Statics::ScriptStructInfo),
=======
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_ItemInventoryData_h_2743341150(TEXT("/Script/team_12_desert"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_ItemInventoryData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_ItemInventoryData_h_Statics::ScriptStructInfo),
>>>>>>> uitemp
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
