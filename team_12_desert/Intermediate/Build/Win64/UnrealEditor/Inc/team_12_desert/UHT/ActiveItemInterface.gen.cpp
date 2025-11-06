// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/ActiveItemInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActiveItemInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_UActiveItemInterface();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_UActiveItemInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin Interface UActiveItemInterface
void UActiveItemInterface::StaticRegisterNativesUActiveItemInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActiveItemInterface);
UClass* Z_Construct_UClass_UActiveItemInterface_NoRegister()
{
	return UActiveItemInterface::StaticClass();
}
struct Z_Construct_UClass_UActiveItemInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActiveItemInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IActiveItemInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UActiveItemInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActiveItemInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActiveItemInterface_Statics::ClassParams = {
	&UActiveItemInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActiveItemInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UActiveItemInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActiveItemInterface()
{
	if (!Z_Registration_Info_UClass_UActiveItemInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActiveItemInterface.OuterSingleton, Z_Construct_UClass_UActiveItemInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActiveItemInterface.OuterSingleton;
}
template<> TEAM_12_DESERT_API UClass* StaticClass<UActiveItemInterface>()
{
	return UActiveItemInterface::StaticClass();
}
UActiveItemInterface::UActiveItemInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActiveItemInterface);
UActiveItemInterface::~UActiveItemInterface() {}
// End Interface UActiveItemInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_team_12_desert_Source_team_12_desert_Public_ActiveItemInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActiveItemInterface, UActiveItemInterface::StaticClass, TEXT("UActiveItemInterface"), &Z_Registration_Info_UClass_UActiveItemInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActiveItemInterface), 989436878U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_team_12_desert_Source_team_12_desert_Public_ActiveItemInterface_h_147875879(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_team_12_desert_Source_team_12_desert_Public_ActiveItemInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_team_12_desert_Source_team_12_desert_Public_ActiveItemInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
