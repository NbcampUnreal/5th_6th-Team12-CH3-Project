// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/ExpUpItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExpUpItem() {}

// Begin Cross Module References
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AAItemBase();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AExpUpItem();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AExpUpItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin Class AExpUpItem
void AExpUpItem::StaticRegisterNativesAExpUpItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AExpUpItem);
UClass* Z_Construct_UClass_AExpUpItem_NoRegister()
{
	return AExpUpItem::StaticClass();
}
struct Z_Construct_UClass_AExpUpItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ExpUpItem.h" },
		{ "ModuleRelativePath", "Public/ExpUpItem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExpUpItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AExpUpItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAItemBase,
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AExpUpItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AExpUpItem_Statics::ClassParams = {
	&AExpUpItem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AExpUpItem_Statics::Class_MetaDataParams), Z_Construct_UClass_AExpUpItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AExpUpItem()
{
	if (!Z_Registration_Info_UClass_AExpUpItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AExpUpItem.OuterSingleton, Z_Construct_UClass_AExpUpItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AExpUpItem.OuterSingleton;
}
template<> TEAM_12_DESERT_API UClass* StaticClass<AExpUpItem>()
{
	return AExpUpItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AExpUpItem);
// End Class AExpUpItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_ExpUpItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AExpUpItem, AExpUpItem::StaticClass, TEXT("AExpUpItem"), &Z_Registration_Info_UClass_AExpUpItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AExpUpItem), 301304858U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_ExpUpItem_h_3554712932(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_ExpUpItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_ExpUpItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
