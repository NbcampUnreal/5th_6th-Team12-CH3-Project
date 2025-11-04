// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/DefUpItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefUpItem() {}

// Begin Cross Module References
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AAItemBase();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_ADefUpItem();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_ADefUpItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin Class ADefUpItem
void ADefUpItem::StaticRegisterNativesADefUpItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADefUpItem);
UClass* Z_Construct_UClass_ADefUpItem_NoRegister()
{
	return ADefUpItem::StaticClass();
}
struct Z_Construct_UClass_ADefUpItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DefUpItem.h" },
		{ "ModuleRelativePath", "Public/DefUpItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/DefUpItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefUpItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADefUpItem_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADefUpItem, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADefUpItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefUpItem_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADefUpItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADefUpItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAItemBase,
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADefUpItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADefUpItem_Statics::ClassParams = {
	&ADefUpItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADefUpItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADefUpItem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADefUpItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ADefUpItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADefUpItem()
{
	if (!Z_Registration_Info_UClass_ADefUpItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADefUpItem.OuterSingleton, Z_Construct_UClass_ADefUpItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADefUpItem.OuterSingleton;
}
template<> TEAM_12_DESERT_API UClass* StaticClass<ADefUpItem>()
{
	return ADefUpItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADefUpItem);
// End Class ADefUpItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_DefUpItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADefUpItem, ADefUpItem::StaticClass, TEXT("ADefUpItem"), &Z_Registration_Info_UClass_ADefUpItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADefUpItem), 691561298U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_DefUpItem_h_2866389721(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_DefUpItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_DefUpItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
