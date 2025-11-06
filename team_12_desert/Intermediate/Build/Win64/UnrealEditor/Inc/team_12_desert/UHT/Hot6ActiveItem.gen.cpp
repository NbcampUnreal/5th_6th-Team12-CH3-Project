// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/Hot6ActiveItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHot6ActiveItem() {}

// Begin Cross Module References
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AActiveItemBase();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AHot6ActiveItem();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AHot6ActiveItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin Class AHot6ActiveItem
void AHot6ActiveItem::StaticRegisterNativesAHot6ActiveItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHot6ActiveItem);
UClass* Z_Construct_UClass_AHot6ActiveItem_NoRegister()
{
	return AHot6ActiveItem::StaticClass();
}
struct Z_Construct_UClass_AHot6ActiveItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Hot6ActiveItem.h" },
		{ "ModuleRelativePath", "Public/Hot6ActiveItem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHot6ActiveItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHot6ActiveItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActiveItemBase,
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHot6ActiveItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHot6ActiveItem_Statics::ClassParams = {
	&AHot6ActiveItem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHot6ActiveItem_Statics::Class_MetaDataParams), Z_Construct_UClass_AHot6ActiveItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHot6ActiveItem()
{
	if (!Z_Registration_Info_UClass_AHot6ActiveItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHot6ActiveItem.OuterSingleton, Z_Construct_UClass_AHot6ActiveItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHot6ActiveItem.OuterSingleton;
}
template<> TEAM_12_DESERT_API UClass* StaticClass<AHot6ActiveItem>()
{
	return AHot6ActiveItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHot6ActiveItem);
AHot6ActiveItem::~AHot6ActiveItem() {}
// End Class AHot6ActiveItem

// Begin Registration
<<<<<<< HEAD
struct Z_CompiledInDeferFile_FID_team_12_desert_Source_team_12_desert_Public_Hot6ActiveItem_h_Statics
=======
struct Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_Hot6ActiveItem_h_Statics
>>>>>>> uitemp
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHot6ActiveItem, AHot6ActiveItem::StaticClass, TEXT("AHot6ActiveItem"), &Z_Registration_Info_UClass_AHot6ActiveItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHot6ActiveItem), 3938489278U) },
	};
};
<<<<<<< HEAD
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_team_12_desert_Source_team_12_desert_Public_Hot6ActiveItem_h_3989012988(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_team_12_desert_Source_team_12_desert_Public_Hot6ActiveItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_team_12_desert_Source_team_12_desert_Public_Hot6ActiveItem_h_Statics::ClassInfo),
=======
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_Hot6ActiveItem_h_3989012988(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_Hot6ActiveItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_Hot6ActiveItem_h_Statics::ClassInfo),
>>>>>>> uitemp
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
