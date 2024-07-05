// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterfaceCollectables.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPP_InterfaceCollectables_generated_h
#error "InterfaceCollectables.generated.h already included, missing '#pragma once' in InterfaceCollectables.h"
#endif
#define CPP_InterfaceCollectables_generated_h

#define FID_CPP_Source_CPP_InterfaceCollectables_h_13_SPARSE_DATA
#define FID_CPP_Source_CPP_InterfaceCollectables_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_CPP_Source_CPP_InterfaceCollectables_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_CPP_Source_CPP_InterfaceCollectables_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_CPP_Source_CPP_InterfaceCollectables_h_13_ACCESSORS
#define FID_CPP_Source_CPP_InterfaceCollectables_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CPP_API UInterfaceCollectables(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	CPP_API UInterfaceCollectables(UInterfaceCollectables&&); \
	CPP_API UInterfaceCollectables(const UInterfaceCollectables&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CPP_API, UInterfaceCollectables); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterfaceCollectables); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterfaceCollectables) \
	CPP_API virtual ~UInterfaceCollectables();


#define FID_CPP_Source_CPP_InterfaceCollectables_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInterfaceCollectables(); \
	friend struct Z_Construct_UClass_UInterfaceCollectables_Statics; \
public: \
	DECLARE_CLASS(UInterfaceCollectables, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CPP"), CPP_API) \
	DECLARE_SERIALIZER(UInterfaceCollectables)


#define FID_CPP_Source_CPP_InterfaceCollectables_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_CPP_Source_CPP_InterfaceCollectables_h_13_GENERATED_UINTERFACE_BODY() \
	FID_CPP_Source_CPP_InterfaceCollectables_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CPP_Source_CPP_InterfaceCollectables_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInterfaceCollectables() {} \
public: \
	typedef UInterfaceCollectables UClassType; \
	typedef IInterfaceCollectables ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_CPP_Source_CPP_InterfaceCollectables_h_10_PROLOG
#define FID_CPP_Source_CPP_InterfaceCollectables_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CPP_Source_CPP_InterfaceCollectables_h_13_SPARSE_DATA \
	FID_CPP_Source_CPP_InterfaceCollectables_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_CPP_Source_CPP_InterfaceCollectables_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_CPP_Source_CPP_InterfaceCollectables_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CPP_Source_CPP_InterfaceCollectables_h_13_ACCESSORS \
	FID_CPP_Source_CPP_InterfaceCollectables_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_API UClass* StaticClass<class UInterfaceCollectables>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CPP_Source_CPP_InterfaceCollectables_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
