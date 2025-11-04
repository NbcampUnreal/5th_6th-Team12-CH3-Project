// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/LevelUpActiveItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelUpActiveItem() {}

// Begin Cross Module References
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AActiveItemBase();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_ALevelUpActiveItem();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_ALevelUpActiveItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin Class ALevelUpActiveItem
void ALevelUpActiveItem::StaticRegisterNativesALevelUpActiveItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALevelUpActiveItem);
UClass* Z_Construct_UClass_ALevelUpActiveItem_NoRegister()
{
	return ALevelUpActiveItem::StaticClass();
}
struct Z_Construct_UClass_ALevelUpActiveItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "LevelUpActiveItem.h" },
		{ "ModuleRelativePath", "Public/LevelUpActiveItem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelUpActiveItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALevelUpActiveItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActiveItemBase,
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelUpActiveItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALevelUpActiveItem_Statics::ClassParams = {
	&ALevelUpActiveItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelUpActiveItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ALevelUpActiveItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALevelUpActiveItem()
{
	if (!Z_Registration_Info_UClass_ALevelUpActiveItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALevelUpActiveItem.OuterSingleton, Z_Construct_UClass_ALevelUpActiveItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALevelUpActiveItem.OuterSingleton;
}
template<> TEAM_12_DESERT_API UClass* StaticClass<ALevelUpActiveItem>()
{
	return ALevelUpActiveItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelUpActiveItem);
ALevelUpActiveItem::~ALevelUpActiveItem() {}
// End Class ALevelUpActiveItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_LevelUpActiveItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALevelUpActiveItem, ALevelUpActiveItem::StaticClass, TEXT("ALevelUpActiveItem"), &Z_Registration_Info_UClass_ALevelUpActiveItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALevelUpActiveItem), 3098439222U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_LevelUpActiveItem_h_3950794073(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_LevelUpActiveItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_LevelUpActiveItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
