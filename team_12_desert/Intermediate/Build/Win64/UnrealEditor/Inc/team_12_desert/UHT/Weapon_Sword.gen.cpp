// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/Weapon_Sword.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon_Sword() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AWeapon_Sword();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AWeapon_Sword_NoRegister();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AWeaponBase();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin Class AWeapon_Sword Function OnMeleeOverlap
struct Z_Construct_UFunction_AWeapon_Sword_OnMeleeOverlap_Statics
{
	struct Weapon_Sword_eventOnMeleeOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xda\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Public/Weapon_Sword.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xda\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeapon_Sword_OnMeleeOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Weapon_Sword_eventOnMeleeOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeapon_Sword_OnMeleeOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Weapon_Sword_eventOnMeleeOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeapon_Sword_OnMeleeOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Weapon_Sword_eventOnMeleeOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWeapon_Sword_OnMeleeOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Weapon_Sword_eventOnMeleeOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AWeapon_Sword_OnMeleeOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((Weapon_Sword_eventOnMeleeOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeapon_Sword_OnMeleeOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Weapon_Sword_eventOnMeleeOverlap_Parms), &Z_Construct_UFunction_AWeapon_Sword_OnMeleeOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeapon_Sword_OnMeleeOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Weapon_Sword_eventOnMeleeOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeapon_Sword_OnMeleeOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_Sword_OnMeleeOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_Sword_OnMeleeOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_Sword_OnMeleeOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_Sword_OnMeleeOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_Sword_OnMeleeOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_Sword_OnMeleeOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_Sword_OnMeleeOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_Sword_OnMeleeOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon_Sword, nullptr, "OnMeleeOverlap", nullptr, nullptr, Z_Construct_UFunction_AWeapon_Sword_OnMeleeOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_Sword_OnMeleeOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeapon_Sword_OnMeleeOverlap_Statics::Weapon_Sword_eventOnMeleeOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_Sword_OnMeleeOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeapon_Sword_OnMeleeOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWeapon_Sword_OnMeleeOverlap_Statics::Weapon_Sword_eventOnMeleeOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeapon_Sword_OnMeleeOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_Sword_OnMeleeOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeapon_Sword::execOnMeleeOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMeleeOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AWeapon_Sword Function OnMeleeOverlap

// Begin Class AWeapon_Sword
void AWeapon_Sword::StaticRegisterNativesAWeapon_Sword()
{
	UClass* Class = AWeapon_Sword::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnMeleeOverlap", &AWeapon_Sword::execOnMeleeOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeapon_Sword);
UClass* Z_Construct_UClass_AWeapon_Sword_NoRegister()
{
	return AWeapon_Sword::StaticClass();
}
struct Z_Construct_UClass_AWeapon_Sword_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Weapon_Sword.h" },
		{ "ModuleRelativePath", "Public/Weapon_Sword.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwordMesh_MetaData[] = {
		{ "Category", "Weapon_Sword" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon_Sword.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeleeCollisionBox_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon_Sword.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SwordMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeleeCollisionBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeapon_Sword_OnMeleeOverlap, "OnMeleeOverlap" }, // 4148493724
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon_Sword>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Sword_Statics::NewProp_SwordMesh = { "SwordMesh", nullptr, (EPropertyFlags)0x0144000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon_Sword, SwordMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwordMesh_MetaData), NewProp_SwordMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Sword_Statics::NewProp_MeleeCollisionBox = { "MeleeCollisionBox", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon_Sword, MeleeCollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeleeCollisionBox_MetaData), NewProp_MeleeCollisionBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeapon_Sword_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Sword_Statics::NewProp_SwordMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Sword_Statics::NewProp_MeleeCollisionBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Sword_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWeapon_Sword_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWeaponBase,
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Sword_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_Sword_Statics::ClassParams = {
	&AWeapon_Sword::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWeapon_Sword_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Sword_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Sword_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeapon_Sword_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWeapon_Sword()
{
	if (!Z_Registration_Info_UClass_AWeapon_Sword.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeapon_Sword.OuterSingleton, Z_Construct_UClass_AWeapon_Sword_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWeapon_Sword.OuterSingleton;
}
template<> TEAM_12_DESERT_API UClass* StaticClass<AWeapon_Sword>()
{
	return AWeapon_Sword::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon_Sword);
AWeapon_Sword::~AWeapon_Sword() {}
// End Class AWeapon_Sword

// Begin Registration
<<<<<<< HEAD
<<<<<<< HEAD
struct Z_CompiledInDeferFile_FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_Weapon_Sword_h_Statics
=======
struct Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_Weapon_Sword_h_Statics
>>>>>>> Monster
=======
struct Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_Weapon_Sword_h_Statics
>>>>>>> Item_pcy
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWeapon_Sword, AWeapon_Sword::StaticClass, TEXT("AWeapon_Sword"), &Z_Registration_Info_UClass_AWeapon_Sword, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeapon_Sword), 2715134994U) },
	};
};
<<<<<<< HEAD
<<<<<<< HEAD
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_Weapon_Sword_h_3817694773(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_Weapon_Sword_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_Weapon_Sword_h_Statics::ClassInfo),
=======
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_Weapon_Sword_h_3817694773(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_Weapon_Sword_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_Weapon_Sword_h_Statics::ClassInfo),
>>>>>>> Monster
=======
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_Weapon_Sword_h_3817694773(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_Weapon_Sword_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lod21_Documents_Unreal_Projects_5th_6th_Team12_CH3_Project_team_12_desert_Source_team_12_desert_Public_Weapon_Sword_h_Statics::ClassInfo),
>>>>>>> Item_pcy
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
