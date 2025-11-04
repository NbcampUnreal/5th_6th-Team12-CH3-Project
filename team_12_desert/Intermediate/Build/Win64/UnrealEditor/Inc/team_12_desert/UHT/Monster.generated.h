// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Monster.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEAM_12_DESERT_Monster_generated_h
#error "Monster.generated.h already included, missing '#pragma once' in Monster.h"
#endif
#define TEAM_12_DESERT_Monster_generated_h

#define FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_Monster_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDropItem); \
	DECLARE_FUNCTION(execAttack); \
	DECLARE_FUNCTION(execApplyDamage);


#define FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_Monster_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMonster(); \
	friend struct Z_Construct_UClass_AMonster_Statics; \
public: \
	DECLARE_CLASS(AMonster, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/team_12_desert"), NO_API) \
	DECLARE_SERIALIZER(AMonster)


#define FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_Monster_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMonster(AMonster&&); \
	AMonster(const AMonster&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonster); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonster); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMonster) \
	NO_API virtual ~AMonster();


#define FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_Monster_h_7_PROLOG
#define FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_Monster_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_Monster_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_Monster_h_10_INCLASS_NO_PURE_DECLS \
	FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_Monster_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAM_12_DESERT_API UClass* StaticClass<class AMonster>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_Monster_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
