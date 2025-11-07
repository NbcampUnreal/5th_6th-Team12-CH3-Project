// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEAM_12_DESERT_InventoryComponent_generated_h
#error "InventoryComponent.generated.h already included, missing '#pragma once' in InventoryComponent.h"
#endif
#define TEAM_12_DESERT_InventoryComponent_generated_h

#define FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_InventoryComponent_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemInventory_Statics; \
	TEAM_12_DESERT_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> TEAM_12_DESERT_API UScriptStruct* StaticStruct<struct FItemInventory>();

#define FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_InventoryComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddItem);


#define FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_InventoryComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/team_12_desert"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_InventoryComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventoryComponent(UInventoryComponent&&); \
	UInventoryComponent(const UInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryComponent) \
	NO_API virtual ~UInventoryComponent();


#define FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_InventoryComponent_h_19_PROLOG
#define FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_InventoryComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_InventoryComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_InventoryComponent_h_22_INCLASS_NO_PURE_DECLS \
	FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_InventoryComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAM_12_DESERT_API UClass* StaticClass<class UInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_InventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
