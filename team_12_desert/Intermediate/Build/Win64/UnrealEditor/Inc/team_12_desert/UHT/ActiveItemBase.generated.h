// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActiveItemBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef TEAM_12_DESERT_ActiveItemBase_generated_h
#error "ActiveItemBase.generated.h already included, missing '#pragma once' in ActiveItemBase.h"
#endif
#define TEAM_12_DESERT_ActiveItemBase_generated_h

#define FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_ActiveItemBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnItemOverlap);


#define FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_ActiveItemBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAActiveItemBase(); \
	friend struct Z_Construct_UClass_AActiveItemBase_Statics; \
public: \
	DECLARE_CLASS(AActiveItemBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/team_12_desert"), NO_API) \
	DECLARE_SERIALIZER(AActiveItemBase) \
	virtual UObject* _getUObject() const override { return const_cast<AActiveItemBase*>(this); }


#define FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_ActiveItemBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AActiveItemBase(AActiveItemBase&&); \
	AActiveItemBase(const AActiveItemBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActiveItemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActiveItemBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AActiveItemBase) \
	NO_API virtual ~AActiveItemBase();


#define FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_ActiveItemBase_h_12_PROLOG
#define FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_ActiveItemBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_ActiveItemBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_ActiveItemBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_ActiveItemBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAM_12_DESERT_API UClass* StaticClass<class AActiveItemBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Project_git_team_12_girl_nono_team_12_desert_Source_team_12_desert_Public_ActiveItemBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
