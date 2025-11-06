// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/ArmorActiveItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArmorActiveItem() {}

// Begin Cross Module References
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AActiveItemBase();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AArmorActiveItem();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AArmorActiveItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin Class AArmorActiveItem
void AArmorActiveItem::StaticRegisterNativesAArmorActiveItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArmorActiveItem);
UClass* Z_Construct_UClass_AArmorActiveItem_NoRegister()
{
	return AArmorActiveItem::StaticClass();
}
struct Z_Construct_UClass_AArmorActiveItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ArmorActiveItem.h" },
		{ "ModuleRelativePath", "Public/ArmorActiveItem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArmorActiveItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AArmorActiveItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActiveItemBase,
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AArmorActiveItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AArmorActiveItem_Statics::ClassParams = {
	&AArmorActiveItem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AArmorActiveItem_Statics::Class_MetaDataParams), Z_Construct_UClass_AArmorActiveItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AArmorActiveItem()
{
	if (!Z_Registration_Info_UClass_AArmorActiveItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArmorActiveItem.OuterSingleton, Z_Construct_UClass_AArmorActiveItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AArmorActiveItem.OuterSingleton;
}
template<> TEAM_12_DESERT_API UClass* StaticClass<AArmorActiveItem>()
{
	return AArmorActiveItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AArmorActiveItem);
AArmorActiveItem::~AArmorActiveItem() {}
// End Class AArmorActiveItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_team_12_desert_Source_team_12_desert_Public_ArmorActiveItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AArmorActiveItem, AArmorActiveItem::StaticClass, TEXT("AArmorActiveItem"), &Z_Registration_Info_UClass_AArmorActiveItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArmorActiveItem), 377032495U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_team_12_desert_Source_team_12_desert_Public_ArmorActiveItem_h_2364010860(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_team_12_desert_Source_team_12_desert_Public_ArmorActiveItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_team_12_desert_Source_team_12_desert_Public_ArmorActiveItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
