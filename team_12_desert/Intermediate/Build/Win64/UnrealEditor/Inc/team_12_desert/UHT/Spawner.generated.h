// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Spawner.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEAM_12_DESERT_Spawner_generated_h
#error "Spawner.generated.h already included, missing '#pragma once' in Spawner.h"
#endif
#define TEAM_12_DESERT_Spawner_generated_h

#define FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_Spawner_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawnEnemy);


#define FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_Spawner_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawner(); \
	friend struct Z_Construct_UClass_ASpawner_Statics; \
public: \
	DECLARE_CLASS(ASpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/team_12_desert"), NO_API) \
	DECLARE_SERIALIZER(ASpawner)


#define FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_Spawner_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASpawner(ASpawner&&); \
	ASpawner(const ASpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawner) \
	NO_API virtual ~ASpawner();


#define FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_Spawner_h_13_PROLOG
#define FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_Spawner_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_Spawner_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_Spawner_h_16_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_Spawner_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAM_12_DESERT_API UClass* StaticClass<class ASpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_Spawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
