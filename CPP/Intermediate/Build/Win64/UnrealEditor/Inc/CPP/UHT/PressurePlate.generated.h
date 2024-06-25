// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PressurePlate.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef CPP_PressurePlate_generated_h
#error "PressurePlate.generated.h already included, missing '#pragma once' in PressurePlate.h"
#endif
#define CPP_PressurePlate_generated_h

#define FID_CPP_Source_CPP_PressurePlate_h_13_SPARSE_DATA
#define FID_CPP_Source_CPP_PressurePlate_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_CPP_Source_CPP_PressurePlate_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_CPP_Source_CPP_PressurePlate_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_CPP_Source_CPP_PressurePlate_h_13_ACCESSORS
#define FID_CPP_Source_CPP_PressurePlate_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPressurePlate(); \
	friend struct Z_Construct_UClass_APressurePlate_Statics; \
public: \
	DECLARE_CLASS(APressurePlate, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPP"), NO_API) \
	DECLARE_SERIALIZER(APressurePlate)


#define FID_CPP_Source_CPP_PressurePlate_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APressurePlate(APressurePlate&&); \
	NO_API APressurePlate(const APressurePlate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APressurePlate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APressurePlate); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APressurePlate) \
	NO_API virtual ~APressurePlate();


#define FID_CPP_Source_CPP_PressurePlate_h_10_PROLOG
#define FID_CPP_Source_CPP_PressurePlate_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CPP_Source_CPP_PressurePlate_h_13_SPARSE_DATA \
	FID_CPP_Source_CPP_PressurePlate_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_CPP_Source_CPP_PressurePlate_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_CPP_Source_CPP_PressurePlate_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CPP_Source_CPP_PressurePlate_h_13_ACCESSORS \
	FID_CPP_Source_CPP_PressurePlate_h_13_INCLASS_NO_PURE_DECLS \
	FID_CPP_Source_CPP_PressurePlate_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_API UClass* StaticClass<class APressurePlate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CPP_Source_CPP_PressurePlate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
