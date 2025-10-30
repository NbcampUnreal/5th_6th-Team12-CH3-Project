// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/HealItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealItem() {}

// Begin Cross Module References
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AAItemBase();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AHealItem();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AHealItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin Class AHealItem
void AHealItem::StaticRegisterNativesAHealItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHealItem);
UClass* Z_Construct_UClass_AHealItem_NoRegister()
{
	return AHealItem::StaticClass();
}
struct Z_Construct_UClass_AHealItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HealItem.h" },
		{ "ModuleRelativePath", "Public/HealItem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHealItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHealItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAItemBase,
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHealItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHealItem_Statics::ClassParams = {
	&AHealItem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHealItem_Statics::Class_MetaDataParams), Z_Construct_UClass_AHealItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHealItem()
{
	if (!Z_Registration_Info_UClass_AHealItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHealItem.OuterSingleton, Z_Construct_UClass_AHealItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHealItem.OuterSingleton;
}
template<> TEAM_12_DESERT_API UClass* StaticClass<AHealItem>()
{
	return AHealItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHealItem);
// End Class AHealItem

// Begin Registration
<<<<<<< HEAD
struct Z_CompiledInDeferFile_FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_HealItem_h_Statics
=======
struct Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_HealItem_h_Statics
>>>>>>> UI
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHealItem, AHealItem::StaticClass, TEXT("AHealItem"), &Z_Registration_Info_UClass_AHealItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHealItem), 3668175809U) },
	};
};
<<<<<<< HEAD
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_HealItem_h_1350321939(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_HealItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_HealItem_h_Statics::ClassInfo),
=======
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_HealItem_h_1350321939(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_HealItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_HealItem_h_Statics::ClassInfo),
>>>>>>> UI
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
