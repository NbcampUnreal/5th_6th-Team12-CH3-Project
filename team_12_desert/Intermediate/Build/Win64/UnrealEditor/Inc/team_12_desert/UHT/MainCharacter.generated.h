// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MainCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEAM_12_DESERT_MainCharacter_generated_h
#error "MainCharacter.generated.h already included, missing '#pragma once' in MainCharacter.h"
#endif
#define TEAM_12_DESERT_MainCharacter_generated_h

#define FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_MainCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHealStamina); \
	DECLARE_FUNCTION(execHealHP);


#define FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_MainCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct Z_Construct_UClass_AMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/team_12_desert"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter)


#define FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_MainCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMainCharacter(AMainCharacter&&); \
	AMainCharacter(const AMainCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainCharacter) \
	NO_API virtual ~AMainCharacter();


#define FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_MainCharacter_h_15_PROLOG
#define FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_MainCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_MainCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_MainCharacter_h_18_INCLASS_NO_PURE_DECLS \
	FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_MainCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAM_12_DESERT_API UClass* StaticClass<class AMainCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_MainCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
