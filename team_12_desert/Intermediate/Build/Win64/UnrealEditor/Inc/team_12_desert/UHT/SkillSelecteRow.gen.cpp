// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/SkillSelecteRow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkillSelecteRow() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_ASkillBase_NoRegister();
TEAM_12_DESERT_API UScriptStruct* Z_Construct_UScriptStruct_FSkillSelecteRow();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin ScriptStruct FSkillSelecteRow
static_assert(std::is_polymorphic<FSkillSelecteRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSkillSelecteRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkillSelecteRow;
class UScriptStruct* FSkillSelecteRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkillSelecteRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkillSelecteRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkillSelecteRow, (UObject*)Z_Construct_UPackage__Script_team_12_desert(), TEXT("SkillSelecteRow"));
	}
	return Z_Registration_Info_UScriptStruct_SkillSelecteRow.OuterSingleton;
}
template<> TEAM_12_DESERT_API UScriptStruct* StaticStruct<FSkillSelecteRow>()
{
	return FSkillSelecteRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSkillSelecteRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SkillSelecteRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillName_MetaData[] = {
		{ "Category", "SkillSelecteRow" },
		{ "ModuleRelativePath", "Public/SkillSelecteRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillClass_MetaData[] = {
		{ "Category", "SkillSelecteRow" },
		{ "ModuleRelativePath", "Public/SkillSelecteRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Chance_MetaData[] = {
		{ "Category", "SkillSelecteRow" },
		{ "ModuleRelativePath", "Public/SkillSelecteRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillExplanation_MetaData[] = {
		{ "Category", "SkillSelecteRow" },
		{ "ModuleRelativePath", "Public/SkillSelecteRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillImage_MetaData[] = {
		{ "Category", "SkillSelecteRow" },
		{ "ModuleRelativePath", "Public/SkillSelecteRow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SkillName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SkillClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Chance;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SkillExplanation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkillImage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkillSelecteRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSkillSelecteRow_Statics::NewProp_SkillName = { "SkillName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillSelecteRow, SkillName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillName_MetaData), NewProp_SkillName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSkillSelecteRow_Statics::NewProp_SkillClass = { "SkillClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillSelecteRow, SkillClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ASkillBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillClass_MetaData), NewProp_SkillClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkillSelecteRow_Statics::NewProp_Chance = { "Chance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillSelecteRow, Chance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Chance_MetaData), NewProp_Chance_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSkillSelecteRow_Statics::NewProp_SkillExplanation = { "SkillExplanation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillSelecteRow, SkillExplanation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillExplanation_MetaData), NewProp_SkillExplanation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSkillSelecteRow_Statics::NewProp_SkillImage = { "SkillImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSkillSelecteRow, SkillImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillImage_MetaData), NewProp_SkillImage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkillSelecteRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillSelecteRow_Statics::NewProp_SkillName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillSelecteRow_Statics::NewProp_SkillClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillSelecteRow_Statics::NewProp_Chance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillSelecteRow_Statics::NewProp_SkillExplanation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillSelecteRow_Statics::NewProp_SkillImage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillSelecteRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkillSelecteRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"SkillSelecteRow",
	Z_Construct_UScriptStruct_FSkillSelecteRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillSelecteRow_Statics::PropPointers),
	sizeof(FSkillSelecteRow),
	alignof(FSkillSelecteRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillSelecteRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSkillSelecteRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSkillSelecteRow()
{
	if (!Z_Registration_Info_UScriptStruct_SkillSelecteRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkillSelecteRow.InnerSingleton, Z_Construct_UScriptStruct_FSkillSelecteRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SkillSelecteRow.InnerSingleton;
}
// End ScriptStruct FSkillSelecteRow

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_SkillSelecteRow_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSkillSelecteRow::StaticStruct, Z_Construct_UScriptStruct_FSkillSelecteRow_Statics::NewStructOps, TEXT("SkillSelecteRow"), &Z_Registration_Info_UScriptStruct_SkillSelecteRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkillSelecteRow), 2474614050U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_SkillSelecteRow_h_2247201598(TEXT("/Script/team_12_desert"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_SkillSelecteRow_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_SkillSelecteRow_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
