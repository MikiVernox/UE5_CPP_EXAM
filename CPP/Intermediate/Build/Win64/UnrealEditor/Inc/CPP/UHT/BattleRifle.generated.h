// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BattleRifle.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef CPP_BattleRifle_generated_h
#error "BattleRifle.generated.h already included, missing '#pragma once' in BattleRifle.h"
#endif
#define CPP_BattleRifle_generated_h

#define FID_CPP_Source_CPP_BattleRifle_h_12_SPARSE_DATA
#define FID_CPP_Source_CPP_BattleRifle_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_CPP_Source_CPP_BattleRifle_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_CPP_Source_CPP_BattleRifle_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_CPP_Source_CPP_BattleRifle_h_12_ACCESSORS
#define FID_CPP_Source_CPP_BattleRifle_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABattleRifle(); \
	friend struct Z_Construct_UClass_ABattleRifle_Statics; \
public: \
	DECLARE_CLASS(ABattleRifle, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPP"), NO_API) \
	DECLARE_SERIALIZER(ABattleRifle)


#define FID_CPP_Source_CPP_BattleRifle_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABattleRifle(ABattleRifle&&); \
	NO_API ABattleRifle(const ABattleRifle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABattleRifle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABattleRifle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABattleRifle) \
	NO_API virtual ~ABattleRifle();


#define FID_CPP_Source_CPP_BattleRifle_h_9_PROLOG
#define FID_CPP_Source_CPP_BattleRifle_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CPP_Source_CPP_BattleRifle_h_12_SPARSE_DATA \
	FID_CPP_Source_CPP_BattleRifle_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_CPP_Source_CPP_BattleRifle_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_CPP_Source_CPP_BattleRifle_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CPP_Source_CPP_BattleRifle_h_12_ACCESSORS \
	FID_CPP_Source_CPP_BattleRifle_h_12_INCLASS_NO_PURE_DECLS \
	FID_CPP_Source_CPP_BattleRifle_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_API UClass* StaticClass<class ABattleRifle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CPP_Source_CPP_BattleRifle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
