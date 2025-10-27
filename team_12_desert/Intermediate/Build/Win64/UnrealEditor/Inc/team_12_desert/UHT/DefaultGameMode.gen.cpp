// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/DefaultGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_ADefaultGameMode();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_ADefaultGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin Class ADefaultGameMode
void ADefaultGameMode::StaticRegisterNativesADefaultGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADefaultGameMode);
UClass* Z_Construct_UClass_ADefaultGameMode_NoRegister()
{
	return ADefaultGameMode::StaticClass();
}
struct Z_Construct_UClass_ADefaultGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DefaultGameMode.h" },
		{ "ModuleRelativePath", "Public/DefaultGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefaultGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADefaultGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADefaultGameMode_Statics::ClassParams = {
	&ADefaultGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ADefaultGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADefaultGameMode()
{
	if (!Z_Registration_Info_UClass_ADefaultGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADefaultGameMode.OuterSingleton, Z_Construct_UClass_ADefaultGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADefaultGameMode.OuterSingleton;
}
template<> TEAM_12_DESERT_API UClass* StaticClass<ADefaultGameMode>()
{
	return ADefaultGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADefaultGameMode);
ADefaultGameMode::~ADefaultGameMode() {}
// End Class ADefaultGameMode

// Begin Registration
<<<<<<< HEAD
struct Z_CompiledInDeferFile_FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_DefaultGameMode_h_Statics
=======
struct Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_DefaultGameMode_h_Statics
>>>>>>> Item_pcy
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADefaultGameMode, ADefaultGameMode::StaticClass, TEXT("ADefaultGameMode"), &Z_Registration_Info_UClass_ADefaultGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADefaultGameMode), 2603775193U) },
	};
};
<<<<<<< HEAD
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_DefaultGameMode_h_3936470389(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_DefaultGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_DefaultGameMode_h_Statics::ClassInfo),
=======
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_DefaultGameMode_h_3936470389(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_DefaultGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_DefaultGameMode_h_Statics::ClassInfo),
>>>>>>> Item_pcy
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
