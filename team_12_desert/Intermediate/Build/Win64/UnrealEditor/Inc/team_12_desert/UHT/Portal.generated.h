// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Portal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef TEAM_12_DESERT_Portal_generated_h
#error "Portal.generated.h already included, missing '#pragma once' in Portal.h"
#endif
#define TEAM_12_DESERT_Portal_generated_h

#define FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_Portal_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnComponentBeginOverlap);


#define FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_Portal_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPortal(); \
	friend struct Z_Construct_UClass_APortal_Statics; \
public: \
	DECLARE_CLASS(APortal, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/team_12_desert"), NO_API) \
	DECLARE_SERIALIZER(APortal)


#define FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_Portal_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APortal(APortal&&); \
	APortal(const APortal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APortal); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APortal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APortal) \
	NO_API virtual ~APortal();


#define FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_Portal_h_9_PROLOG
#define FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_Portal_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_Portal_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_Portal_h_12_INCLASS_NO_PURE_DECLS \
	FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_Portal_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAM_12_DESERT_API UClass* StaticClass<class APortal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_Portal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
