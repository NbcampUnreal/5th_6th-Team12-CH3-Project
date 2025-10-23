// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/SpeedUpItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeedUpItem() {}

// Begin Cross Module References
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AAItemBase();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_ASpeedUpItem();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_ASpeedUpItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin Class ASpeedUpItem
void ASpeedUpItem::StaticRegisterNativesASpeedUpItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpeedUpItem);
UClass* Z_Construct_UClass_ASpeedUpItem_NoRegister()
{
	return ASpeedUpItem::StaticClass();
}
struct Z_Construct_UClass_ASpeedUpItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SpeedUpItem.h" },
		{ "ModuleRelativePath", "Public/SpeedUpItem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpeedUpItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASpeedUpItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAItemBase,
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpeedUpItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpeedUpItem_Statics::ClassParams = {
	&ASpeedUpItem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpeedUpItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpeedUpItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpeedUpItem()
{
	if (!Z_Registration_Info_UClass_ASpeedUpItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpeedUpItem.OuterSingleton, Z_Construct_UClass_ASpeedUpItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpeedUpItem.OuterSingleton;
}
template<> TEAM_12_DESERT_API UClass* StaticClass<ASpeedUpItem>()
{
	return ASpeedUpItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpeedUpItem);
// End Class ASpeedUpItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_SpeedUpItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpeedUpItem, ASpeedUpItem::StaticClass, TEXT("ASpeedUpItem"), &Z_Registration_Info_UClass_ASpeedUpItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpeedUpItem), 1581427635U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_SpeedUpItem_h_1175963871(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_SpeedUpItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_SpeedUpItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
