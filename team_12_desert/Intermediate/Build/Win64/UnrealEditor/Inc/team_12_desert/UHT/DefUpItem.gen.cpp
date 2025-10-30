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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefUpItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
<<<<<<< HEAD
struct Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_DefUpItem_h_Statics
=======
struct Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_DefUpItem_h_Statics
>>>>>>> Monster
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADefUpItem, ADefUpItem::StaticClass, TEXT("ADefUpItem"), &Z_Registration_Info_UClass_ADefUpItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADefUpItem), 2192957900U) },
	};
};
<<<<<<< HEAD
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_DefUpItem_h_4024304485(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_DefUpItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_DefUpItem_h_Statics::ClassInfo),
=======
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_DefUpItem_h_4024304485(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_DefUpItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_DefUpItem_h_Statics::ClassInfo),
>>>>>>> Monster
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
