// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/MyGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameState();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AMyGameState();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AMyGameState_NoRegister();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin Class AMyGameState Function LevelTest
struct Z_Construct_UFunction_AMyGameState_LevelTest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Public/MyGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyGameState_LevelTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyGameState, nullptr, "LevelTest", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyGameState_LevelTest_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyGameState_LevelTest_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyGameState_LevelTest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyGameState_LevelTest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyGameState::execLevelTest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LevelTest();
	P_NATIVE_END;
}
// End Class AMyGameState Function LevelTest

// Begin Class AMyGameState
void AMyGameState::StaticRegisterNativesAMyGameState()
{
	UClass* Class = AMyGameState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LevelTest", &AMyGameState::execLevelTest },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyGameState);
UClass* Z_Construct_UClass_AMyGameState_NoRegister()
{
	return AMyGameState::StaticClass();
}
struct Z_Construct_UClass_AMyGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyGameState.h" },
		{ "ModuleRelativePath", "Public/MyGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyGameState_LevelTest, "LevelTest" }, // 4044507034
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameState,
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyGameState_Statics::ClassParams = {
	&AMyGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyGameState()
{
	if (!Z_Registration_Info_UClass_AMyGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyGameState.OuterSingleton, Z_Construct_UClass_AMyGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyGameState.OuterSingleton;
}
template<> TEAM_12_DESERT_API UClass* StaticClass<AMyGameState>()
{
	return AMyGameState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyGameState);
AMyGameState::~AMyGameState() {}
// End Class AMyGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_MyGameState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyGameState, AMyGameState::StaticClass, TEXT("AMyGameState"), &Z_Registration_Info_UClass_AMyGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyGameState), 1129299417U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_MyGameState_h_3440190677(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_MyGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_MyGameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
