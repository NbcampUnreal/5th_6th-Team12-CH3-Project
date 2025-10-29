// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IItemInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEAM_12_DESERT_IItemInterface_generated_h
#error "IItemInterface.generated.h already included, missing '#pragma once' in IItemInterface.h"
#endif
#define TEAM_12_DESERT_IItemInterface_generated_h

#define FID_team_12_desert_Source_team_12_desert_Public_IItemInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEAM_12_DESERT_API UIItemInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIItemInterface(UIItemInterface&&); \
	UIItemInterface(const UIItemInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEAM_12_DESERT_API, UIItemInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIItemInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIItemInterface) \
	TEAM_12_DESERT_API virtual ~UIItemInterface();


#define FID_team_12_desert_Source_team_12_desert_Public_IItemInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIItemInterface(); \
	friend struct Z_Construct_UClass_UIItemInterface_Statics; \
public: \
	DECLARE_CLASS(UIItemInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/team_12_desert"), TEAM_12_DESERT_API) \
	DECLARE_SERIALIZER(UIItemInterface)


#define FID_team_12_desert_Source_team_12_desert_Public_IItemInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_team_12_desert_Source_team_12_desert_Public_IItemInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_team_12_desert_Source_team_12_desert_Public_IItemInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_team_12_desert_Source_team_12_desert_Public_IItemInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIItemInterface() {} \
public: \
	typedef UIItemInterface UClassType; \
	typedef IIItemInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_team_12_desert_Source_team_12_desert_Public_IItemInterface_h_10_PROLOG
#define FID_team_12_desert_Source_team_12_desert_Public_IItemInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_team_12_desert_Source_team_12_desert_Public_IItemInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAM_12_DESERT_API UClass* StaticClass<class UIItemInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_team_12_desert_Source_team_12_desert_Public_IItemInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
