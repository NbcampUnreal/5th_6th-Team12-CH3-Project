// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/SkillBook.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkillBook() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_ASkillBook();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_ASkillBook_NoRegister();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_UIItemInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin Class ASkillBook Function OnItemEndOverlap
struct Z_Construct_UFunction_ASkillBook_OnItemEndOverlap_Statics
{
	struct SkillBook_eventOnItemEndOverlap_Parms
	{
		UPrimitiveComponent* OverlapPendComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyInde;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillBook.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlapPendComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlapPendComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyInde;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASkillBook_OnItemEndOverlap_Statics::NewProp_OverlapPendComp = { "OverlapPendComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillBook_eventOnItemEndOverlap_Parms, OverlapPendComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlapPendComp_MetaData), NewProp_OverlapPendComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASkillBook_OnItemEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillBook_eventOnItemEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASkillBook_OnItemEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillBook_eventOnItemEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASkillBook_OnItemEndOverlap_Statics::NewProp_OtherBodyInde = { "OtherBodyInde", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillBook_eventOnItemEndOverlap_Parms, OtherBodyInde), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASkillBook_OnItemEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASkillBook_OnItemEndOverlap_Statics::NewProp_OverlapPendComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASkillBook_OnItemEndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASkillBook_OnItemEndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASkillBook_OnItemEndOverlap_Statics::NewProp_OtherBodyInde,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASkillBook_OnItemEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASkillBook_OnItemEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASkillBook, nullptr, "OnItemEndOverlap", nullptr, nullptr, Z_Construct_UFunction_ASkillBook_OnItemEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkillBook_OnItemEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASkillBook_OnItemEndOverlap_Statics::SkillBook_eventOnItemEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASkillBook_OnItemEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASkillBook_OnItemEndOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASkillBook_OnItemEndOverlap_Statics::SkillBook_eventOnItemEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASkillBook_OnItemEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASkillBook_OnItemEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASkillBook::execOnItemEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlapPendComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyInde);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnItemEndOverlap(Z_Param_OverlapPendComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyInde);
	P_NATIVE_END;
}
// End Class ASkillBook Function OnItemEndOverlap

// Begin Class ASkillBook Function OnItemOverlap
struct Z_Construct_UFunction_ASkillBook_OnItemOverlap_Statics
{
	struct SkillBook_eventOnItemOverlap_Parms
	{
		UPrimitiveComponent* OverlapPendComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillBook.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlapPendComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlapPendComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASkillBook_OnItemOverlap_Statics::NewProp_OverlapPendComp = { "OverlapPendComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillBook_eventOnItemOverlap_Parms, OverlapPendComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlapPendComp_MetaData), NewProp_OverlapPendComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASkillBook_OnItemOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillBook_eventOnItemOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASkillBook_OnItemOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillBook_eventOnItemOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASkillBook_OnItemOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillBook_eventOnItemOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ASkillBook_OnItemOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((SkillBook_eventOnItemOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASkillBook_OnItemOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SkillBook_eventOnItemOverlap_Parms), &Z_Construct_UFunction_ASkillBook_OnItemOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASkillBook_OnItemOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SkillBook_eventOnItemOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASkillBook_OnItemOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASkillBook_OnItemOverlap_Statics::NewProp_OverlapPendComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASkillBook_OnItemOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASkillBook_OnItemOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASkillBook_OnItemOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASkillBook_OnItemOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASkillBook_OnItemOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASkillBook_OnItemOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASkillBook_OnItemOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASkillBook, nullptr, "OnItemOverlap", nullptr, nullptr, Z_Construct_UFunction_ASkillBook_OnItemOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkillBook_OnItemOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASkillBook_OnItemOverlap_Statics::SkillBook_eventOnItemOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASkillBook_OnItemOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASkillBook_OnItemOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASkillBook_OnItemOverlap_Statics::SkillBook_eventOnItemOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASkillBook_OnItemOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASkillBook_OnItemOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASkillBook::execOnItemOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlapPendComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnItemOverlap(Z_Param_OverlapPendComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ASkillBook Function OnItemOverlap

// Begin Class ASkillBook
void ASkillBook::StaticRegisterNativesASkillBook()
{
	UClass* Class = ASkillBook::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnItemEndOverlap", &ASkillBook::execOnItemEndOverlap },
		{ "OnItemOverlap", &ASkillBook::execOnItemOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASkillBook);
UClass* Z_Construct_UClass_ASkillBook_NoRegister()
{
	return ASkillBook::StaticClass();
}
struct Z_Construct_UClass_ASkillBook_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SkillBook.h" },
		{ "ModuleRelativePath", "Public/SkillBook.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scene_MetaData[] = {
		{ "Category", "Item" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillBook.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Collision_MetaData[] = {
		{ "Category", "Item" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SkillBook.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Scene;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Collision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASkillBook_OnItemEndOverlap, "OnItemEndOverlap" }, // 1949313403
		{ &Z_Construct_UFunction_ASkillBook_OnItemOverlap, "OnItemOverlap" }, // 3712107483
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASkillBook>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASkillBook_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASkillBook, Scene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scene_MetaData), NewProp_Scene_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASkillBook_Statics::NewProp_Collision = { "Collision", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASkillBook, Collision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Collision_MetaData), NewProp_Collision_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASkillBook_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkillBook_Statics::NewProp_Scene,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkillBook_Statics::NewProp_Collision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASkillBook_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASkillBook_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASkillBook_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASkillBook_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIItemInterface_NoRegister, (int32)VTABLE_OFFSET(ASkillBook, IIItemInterface), false },  // 1626228477
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASkillBook_Statics::ClassParams = {
	&ASkillBook::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASkillBook_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASkillBook_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASkillBook_Statics::Class_MetaDataParams), Z_Construct_UClass_ASkillBook_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASkillBook()
{
	if (!Z_Registration_Info_UClass_ASkillBook.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASkillBook.OuterSingleton, Z_Construct_UClass_ASkillBook_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASkillBook.OuterSingleton;
}
template<> TEAM_12_DESERT_API UClass* StaticClass<ASkillBook>()
{
	return ASkillBook::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASkillBook);
ASkillBook::~ASkillBook() {}
// End Class ASkillBook

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_SkillBook_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASkillBook, ASkillBook::StaticClass, TEXT("ASkillBook"), &Z_Registration_Info_UClass_ASkillBook, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASkillBook), 1026465920U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_SkillBook_h_855012384(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_SkillBook_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_SkillBook_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
