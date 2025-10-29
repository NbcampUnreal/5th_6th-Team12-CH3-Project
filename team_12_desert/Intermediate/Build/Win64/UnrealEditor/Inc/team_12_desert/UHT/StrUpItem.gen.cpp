// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/StrUpItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStrUpItem() {}

// Begin Cross Module References
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AAItemBase();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AStrUpItem();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AStrUpItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin Class AStrUpItem
void AStrUpItem::StaticRegisterNativesAStrUpItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStrUpItem);
UClass* Z_Construct_UClass_AStrUpItem_NoRegister()
{
	return AStrUpItem::StaticClass();
}
struct Z_Construct_UClass_AStrUpItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StrUpItem.h" },
		{ "ModuleRelativePath", "Public/StrUpItem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStrUpItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AStrUpItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAItemBase,
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStrUpItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AStrUpItem_Statics::ClassParams = {
	&AStrUpItem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStrUpItem_Statics::Class_MetaDataParams), Z_Construct_UClass_AStrUpItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AStrUpItem()
{
	if (!Z_Registration_Info_UClass_AStrUpItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStrUpItem.OuterSingleton, Z_Construct_UClass_AStrUpItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AStrUpItem.OuterSingleton;
}
template<> TEAM_12_DESERT_API UClass* StaticClass<AStrUpItem>()
{
	return AStrUpItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AStrUpItem);
// End Class AStrUpItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_StrUpItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AStrUpItem, AStrUpItem::StaticClass, TEXT("AStrUpItem"), &Z_Registration_Info_UClass_AStrUpItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStrUpItem), 2028756827U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_StrUpItem_h_3259335081(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_StrUpItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_StrUpItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
