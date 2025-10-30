// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "team_12_desert/Public/Weapon_FlareGun.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon_FlareGun() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_ABulletBase_NoRegister();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AWeapon_FlareGun();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AWeapon_FlareGun_NoRegister();
TEAM_12_DESERT_API UClass* Z_Construct_UClass_AWeaponBase();
UPackage* Z_Construct_UPackage__Script_team_12_desert();
// End Cross Module References

// Begin Class AWeapon_FlareGun
void AWeapon_FlareGun::StaticRegisterNativesAWeapon_FlareGun()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeapon_FlareGun);
UClass* Z_Construct_UClass_AWeapon_FlareGun_NoRegister()
{
	return AWeapon_FlareGun::StaticClass();
}
struct Z_Construct_UClass_AWeapon_FlareGun_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Weapon_FlareGun.h" },
		{ "ModuleRelativePath", "Public/Weapon_FlareGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleLocation_MetaData[] = {
		{ "Category", "WeaponSetting" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon_FlareGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireMontage_MetaData[] = {
		{ "Category", "WeaponSetting" },
		{ "ModuleRelativePath", "Public/Weapon_FlareGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bullet_MetaData[] = {
		{ "Category", "WeaponSetting" },
		{ "ModuleRelativePath", "Public/Weapon_FlareGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlareGunMesh_0_MetaData[] = {
		{ "Category", "Weapon_FlareGun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon_FlareGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlareGunMesh_1_MetaData[] = {
		{ "Category", "Weapon_FlareGun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon_FlareGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlareGunMesh_2_MetaData[] = {
		{ "Category", "Weapon_FlareGun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon_FlareGun.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlareGunMesh_3_MetaData[] = {
		{ "Category", "Weapon_FlareGun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Weapon_FlareGun.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireMontage;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Bullet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlareGunMesh_0;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlareGunMesh_1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlareGunMesh_2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlareGunMesh_3;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon_FlareGun>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_FlareGun_Statics::NewProp_MuzzleLocation = { "MuzzleLocation", nullptr, (EPropertyFlags)0x01140000000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon_FlareGun, MuzzleLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleLocation_MetaData), NewProp_MuzzleLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_FlareGun_Statics::NewProp_FireMontage = { "FireMontage", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon_FlareGun, FireMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireMontage_MetaData), NewProp_FireMontage_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWeapon_FlareGun_Statics::NewProp_Bullet = { "Bullet", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon_FlareGun, Bullet), Z_Construct_UClass_UClass, Z_Construct_UClass_ABulletBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bullet_MetaData), NewProp_Bullet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_FlareGun_Statics::NewProp_FlareGunMesh_0 = { "FlareGunMesh_0", nullptr, (EPropertyFlags)0x0144000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon_FlareGun, FlareGunMesh_0), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlareGunMesh_0_MetaData), NewProp_FlareGunMesh_0_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_FlareGun_Statics::NewProp_FlareGunMesh_1 = { "FlareGunMesh_1", nullptr, (EPropertyFlags)0x0144000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon_FlareGun, FlareGunMesh_1), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlareGunMesh_1_MetaData), NewProp_FlareGunMesh_1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_FlareGun_Statics::NewProp_FlareGunMesh_2 = { "FlareGunMesh_2", nullptr, (EPropertyFlags)0x0144000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon_FlareGun, FlareGunMesh_2), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlareGunMesh_2_MetaData), NewProp_FlareGunMesh_2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_FlareGun_Statics::NewProp_FlareGunMesh_3 = { "FlareGunMesh_3", nullptr, (EPropertyFlags)0x0144000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon_FlareGun, FlareGunMesh_3), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlareGunMesh_3_MetaData), NewProp_FlareGunMesh_3_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeapon_FlareGun_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_FlareGun_Statics::NewProp_MuzzleLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_FlareGun_Statics::NewProp_FireMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_FlareGun_Statics::NewProp_Bullet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_FlareGun_Statics::NewProp_FlareGunMesh_0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_FlareGun_Statics::NewProp_FlareGunMesh_1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_FlareGun_Statics::NewProp_FlareGunMesh_2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_FlareGun_Statics::NewProp_FlareGunMesh_3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_FlareGun_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWeapon_FlareGun_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWeaponBase,
	(UObject* (*)())Z_Construct_UPackage__Script_team_12_desert,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_FlareGun_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_FlareGun_Statics::ClassParams = {
	&AWeapon_FlareGun::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWeapon_FlareGun_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_FlareGun_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_FlareGun_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeapon_FlareGun_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWeapon_FlareGun()
{
	if (!Z_Registration_Info_UClass_AWeapon_FlareGun.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeapon_FlareGun.OuterSingleton, Z_Construct_UClass_AWeapon_FlareGun_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWeapon_FlareGun.OuterSingleton;
}
template<> TEAM_12_DESERT_API UClass* StaticClass<AWeapon_FlareGun>()
{
	return AWeapon_FlareGun::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon_FlareGun);
AWeapon_FlareGun::~AWeapon_FlareGun() {}
// End Class AWeapon_FlareGun

// Begin Registration
<<<<<<< HEAD
struct Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_Weapon_FlareGun_h_Statics
=======
struct Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_Weapon_FlareGun_h_Statics
>>>>>>> Monster
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWeapon_FlareGun, AWeapon_FlareGun::StaticClass, TEXT("AWeapon_FlareGun"), &Z_Registration_Info_UClass_AWeapon_FlareGun, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeapon_FlareGun), 2626067571U) },
	};
};
<<<<<<< HEAD
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_Weapon_FlareGun_h_975817741(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_Weapon_FlareGun_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_Weapon_FlareGun_h_Statics::ClassInfo),
=======
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_Weapon_FlareGun_h_975817741(TEXT("/Script/team_12_desert"),
	Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_Weapon_FlareGun_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_Weapon_FlareGun_h_Statics::ClassInfo),
>>>>>>> Monster
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
