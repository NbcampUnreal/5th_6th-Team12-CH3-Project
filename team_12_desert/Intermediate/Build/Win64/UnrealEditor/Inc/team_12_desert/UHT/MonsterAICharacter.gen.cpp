// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/MonsterAICharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonsterAICharacter() {}

// Begin Cross Module References
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AMonster();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AMonsterAICharacter();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AMonsterAICharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin Class AMonsterAICharacter
void AMonsterAICharacter::StaticRegisterNativesAMonsterAICharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMonsterAICharacter);
UClass* Z_Construct_UClass_AMonsterAICharacter_NoRegister()
{
	return AMonsterAICharacter::StaticClass();
}
struct Z_Construct_UClass_AMonsterAICharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MonsterAICharacter.h" },
		{ "ModuleRelativePath", "Public/MonsterAICharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonsterAICharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMonsterAICharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMonster,
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterAICharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMonsterAICharacter_Statics::ClassParams = {
	&AMonsterAICharacter::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterAICharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMonsterAICharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMonsterAICharacter()
{
	if (!Z_Registration_Info_UClass_AMonsterAICharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMonsterAICharacter.OuterSingleton, Z_Construct_UClass_AMonsterAICharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMonsterAICharacter.OuterSingleton;
}
template<> TEAM_12_DESERT_API UClass* StaticClass<AMonsterAICharacter>()
{
	return AMonsterAICharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMonsterAICharacter);
AMonsterAICharacter::~AMonsterAICharacter() {}
// End Class AMonsterAICharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_MonsterAICharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMonsterAICharacter, AMonsterAICharacter::StaticClass, TEXT("AMonsterAICharacter"), &Z_Registration_Info_UClass_AMonsterAICharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMonsterAICharacter), 2615452600U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_MonsterAICharacter_h_650326715(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_MonsterAICharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_MonsterAICharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
