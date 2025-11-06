// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SkillBook.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef TEAM_12_DESERT_SkillBook_generated_h
#error "SkillBook.generated.h already included, missing '#pragma once' in SkillBook.h"
#endif
#define TEAM_12_DESERT_SkillBook_generated_h

#define FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_SkillBook_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnItemEndOverlap); \
	DECLARE_FUNCTION(execOnItemOverlap);


#define FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_SkillBook_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASkillBook(); \
	friend struct Z_Construct_UClass_ASkillBook_Statics; \
public: \
	DECLARE_CLASS(ASkillBook, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/team_12_desert"), NO_API) \
	DECLARE_SERIALIZER(ASkillBook) \
	virtual UObject* _getUObject() const override { return const_cast<ASkillBook*>(this); }


#define FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_SkillBook_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASkillBook(ASkillBook&&); \
	ASkillBook(const ASkillBook&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASkillBook); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASkillBook); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASkillBook) \
	NO_API virtual ~ASkillBook();


#define FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_SkillBook_h_10_PROLOG
#define FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_SkillBook_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_SkillBook_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_SkillBook_h_13_INCLASS_NO_PURE_DECLS \
	FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_SkillBook_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEAM_12_DESERT_API UClass* StaticClass<class ASkillBook>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProject_TeamProject_team_12_desert_Source_team_12_desert_Public_SkillBook_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
