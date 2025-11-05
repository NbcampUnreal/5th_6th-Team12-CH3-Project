// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActiveItemInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEAM_12_DESERT_ActiveItemInterface_generated_h
#error "ActiveItemInterface.generated.h already included, missing '#pragma once' in ActiveItemInterface.h"
#endif
#define TEAM_12_DESERT_ActiveItemInterface_generated_h

#define FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_ActiveItemInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEAM_12_DESERT_API UActiveItemInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UActiveItemInterface(UActiveItemInterface&&); \
	UActiveItemInterface(const UActiveItemInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEAM_12_DESERT_API, UActiveItemInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActiveItemInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActiveItemInterface) \
	TEAM_12_DESERT_API virtual ~UActiveItemInterface();


#define FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_ActiveItemInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUActiveItemInterface(); \
	friend struct Z_Construct_UClass_UActiveItemInterface_Statics; \
public: \
	DECLARE_CLASS(UActiveItemInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/team_12_desert"), TEAM_12_DESERT_API) \
	DECLARE_SERIALIZER(UActiveItemInterface)


#define FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_ActiveItemInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_ActiveItemInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_ActiveItemInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_ActiveItemInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IActiveItemInterface() {} \
public: \
	typedef UActiveItemInterface UClassType; \
	typedef IActiveItemInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_ActiveItemInterface_h_10_PROLOG
#define FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_ActiveItemInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_ActiveItemInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAM_12_DESERT_API UClass* StaticClass<class UActiveItemInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_ActiveItemInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
