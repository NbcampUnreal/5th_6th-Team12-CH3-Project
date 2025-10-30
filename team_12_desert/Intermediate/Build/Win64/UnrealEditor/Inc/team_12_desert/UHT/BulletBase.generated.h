// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BulletBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef TEAM_12_DESERT_BulletBase_generated_h
#error "BulletBase.generated.h already included, missing '#pragma once' in BulletBase.h"
#endif
#define TEAM_12_DESERT_BulletBase_generated_h

#define FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_BulletBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_BulletBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABulletBase(); \
	friend struct Z_Construct_UClass_ABulletBase_Statics; \
public: \
	DECLARE_CLASS(ABulletBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/team_12_desert"), NO_API) \
	DECLARE_SERIALIZER(ABulletBase)


#define FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_BulletBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABulletBase(ABulletBase&&); \
	ABulletBase(const ABulletBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABulletBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABulletBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABulletBase) \
	NO_API virtual ~ABulletBase();


#define FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_BulletBase_h_9_PROLOG
#define FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_BulletBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_BulletBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_BulletBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_BulletBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAM_12_DESERT_API UClass* StaticClass<class ABulletBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_BulletBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
