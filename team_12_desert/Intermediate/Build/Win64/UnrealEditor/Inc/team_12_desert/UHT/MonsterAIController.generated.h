// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MonsterAIController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEAM_12_DESERT_MonsterAIController_generated_h
#error "MonsterAIController.generated.h already included, missing '#pragma once' in MonsterAIController.h"
#endif
#define TEAM_12_DESERT_MonsterAIController_generated_h

#define FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_MonsterAIController_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAttackPlayer);


#define FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_MonsterAIController_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMonsterAIController(); \
	friend struct Z_Construct_UClass_AMonsterAIController_Statics; \
public: \
	DECLARE_CLASS(AMonsterAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/team_12_desert"), NO_API) \
	DECLARE_SERIALIZER(AMonsterAIController)


#define FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_MonsterAIController_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMonsterAIController(AMonsterAIController&&); \
	AMonsterAIController(const AMonsterAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonsterAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonsterAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMonsterAIController) \
	NO_API virtual ~AMonsterAIController();


#define FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_MonsterAIController_h_7_PROLOG
#define FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_MonsterAIController_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_MonsterAIController_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_MonsterAIController_h_10_INCLASS_NO_PURE_DECLS \
	FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_MonsterAIController_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAM_12_DESERT_API UClass* StaticClass<class AMonsterAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Sourcetree_team_12_desert_Source_team_12_desert_Public_MonsterAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
