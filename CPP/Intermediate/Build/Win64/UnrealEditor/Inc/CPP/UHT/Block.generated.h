// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Block.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPP_Block_generated_h
#error "Block.generated.h already included, missing '#pragma once' in Block.h"
#endif
#define CPP_Block_generated_h

#define FID_CPP_Source_CPP_Block_h_12_SPARSE_DATA
#define FID_CPP_Source_CPP_Block_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_CPP_Source_CPP_Block_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_CPP_Source_CPP_Block_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_CPP_Source_CPP_Block_h_12_ACCESSORS
#define FID_CPP_Source_CPP_Block_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlock(); \
	friend struct Z_Construct_UClass_ABlock_Statics; \
public: \
	DECLARE_CLASS(ABlock, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPP"), NO_API) \
	DECLARE_SERIALIZER(ABlock)


#define FID_CPP_Source_CPP_Block_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlock(ABlock&&); \
	NO_API ABlock(const ABlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABlock) \
	NO_API virtual ~ABlock();


#define FID_CPP_Source_CPP_Block_h_9_PROLOG
#define FID_CPP_Source_CPP_Block_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CPP_Source_CPP_Block_h_12_SPARSE_DATA \
	FID_CPP_Source_CPP_Block_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_CPP_Source_CPP_Block_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_CPP_Source_CPP_Block_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CPP_Source_CPP_Block_h_12_ACCESSORS \
	FID_CPP_Source_CPP_Block_h_12_INCLASS_NO_PURE_DECLS \
	FID_CPP_Source_CPP_Block_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_API UClass* StaticClass<class ABlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CPP_Source_CPP_Block_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
