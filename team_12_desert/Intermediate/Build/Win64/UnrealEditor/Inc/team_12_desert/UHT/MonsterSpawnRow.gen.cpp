// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/MonsterSpawnRow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonsterSpawnRow() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
TEAM_12_DESERT_API UScriptStruct* Z_Construct_UScriptStruct_FMonsterSpawnRow();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin ScriptStruct FMonsterSpawnRow
static_assert(std::is_polymorphic<FMonsterSpawnRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FMonsterSpawnRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MonsterSpawnRow;
class UScriptStruct* FMonsterSpawnRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MonsterSpawnRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MonsterSpawnRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMonsterSpawnRow, (UObject*)Z_Construct_UPackage__Script_team_12_desert(), TEXT("MonsterSpawnRow"));
	}
	return Z_Registration_Info_UScriptStruct_MonsterSpawnRow.OuterSingleton;
}
template<> TEAM_12_DESERT_API UScriptStruct* StaticStruct<FMonsterSpawnRow>()
{
	return FMonsterSpawnRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMonsterSpawnRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MonsterSpawnRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MonsterName_MetaData[] = {
		{ "Category", "MonsterSpawnRow" },
		{ "ModuleRelativePath", "Public/MonsterSpawnRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MonsterClass_MetaData[] = {
		{ "Category", "MonsterSpawnRow" },
		{ "ModuleRelativePath", "Public/MonsterSpawnRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnCount_MetaData[] = {
		{ "Category", "MonsterSpawnRow" },
		{ "ModuleRelativePath", "Public/MonsterSpawnRow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MonsterName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MonsterClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMonsterSpawnRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMonsterSpawnRow_Statics::NewProp_MonsterName = { "MonsterName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMonsterSpawnRow, MonsterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MonsterName_MetaData), NewProp_MonsterName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMonsterSpawnRow_Statics::NewProp_MonsterClass = { "MonsterClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMonsterSpawnRow, MonsterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MonsterClass_MetaData), NewProp_MonsterClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMonsterSpawnRow_Statics::NewProp_SpawnCount = { "SpawnCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMonsterSpawnRow, SpawnCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnCount_MetaData), NewProp_SpawnCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMonsterSpawnRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMonsterSpawnRow_Statics::NewProp_MonsterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMonsterSpawnRow_Statics::NewProp_MonsterClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMonsterSpawnRow_Statics::NewProp_SpawnCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMonsterSpawnRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMonsterSpawnRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"MonsterSpawnRow",
	Z_Construct_UScriptStruct_FMonsterSpawnRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMonsterSpawnRow_Statics::PropPointers),
	sizeof(FMonsterSpawnRow),
	alignof(FMonsterSpawnRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMonsterSpawnRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMonsterSpawnRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMonsterSpawnRow()
{
	if (!Z_Registration_Info_UScriptStruct_MonsterSpawnRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MonsterSpawnRow.InnerSingleton, Z_Construct_UScriptStruct_FMonsterSpawnRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MonsterSpawnRow.InnerSingleton;
}
// End ScriptStruct FMonsterSpawnRow

// Begin Registration
<<<<<<< HEAD
<<<<<<< HEAD
struct Z_CompiledInDeferFile_FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_MonsterSpawnRow_h_Statics
=======
struct Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_MonsterSpawnRow_h_Statics
>>>>>>> Monster
=======
struct Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_MonsterSpawnRow_h_Statics
>>>>>>> Item_pcy
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMonsterSpawnRow::StaticStruct, Z_Construct_UScriptStruct_FMonsterSpawnRow_Statics::NewStructOps, TEXT("MonsterSpawnRow"), &Z_Registration_Info_UScriptStruct_MonsterSpawnRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMonsterSpawnRow), 2557889733U) },
	};
};
<<<<<<< HEAD
<<<<<<< HEAD
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_MonsterSpawnRow_h_1093437286(TEXT("/Script/team_12_desert"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_MonsterSpawnRow_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_MonsterSpawnRow_h_Statics::ScriptStructInfo),
=======
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_MonsterSpawnRow_h_1093437286(TEXT("/Script/team_12_desert"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_MonsterSpawnRow_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_MonsterSpawnRow_h_Statics::ScriptStructInfo),
>>>>>>> Monster
=======
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_MonsterSpawnRow_h_1093437286(TEXT("/Script/team_12_desert"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_MonsterSpawnRow_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_MonsterSpawnRow_h_Statics::ScriptStructInfo),
>>>>>>> Item_pcy
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
