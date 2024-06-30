// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP/NPDoor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPDoor() {}
// Cross Module References
	CPP_API UClass* Z_Construct_UClass_ANPDoor();
	CPP_API UClass* Z_Construct_UClass_ANPDoor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CPP();
// End Cross Module References
	void ANPDoor::StaticRegisterNativesANPDoor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANPDoor);
	UClass* Z_Construct_UClass_ANPDoor_NoRegister()
	{
		return ANPDoor::StaticClass();
	}
	struct Z_Construct_UClass_ANPDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANPDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPDoor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPDoor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NPDoor.h" },
		{ "ModuleRelativePath", "NPDoor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPDoor_Statics::NewProp_DoorMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NPDoor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPDoor_Statics::NewProp_DoorMesh = { "DoorMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANPDoor, DoorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANPDoor_Statics::NewProp_DoorMesh_MetaData), Z_Construct_UClass_ANPDoor_Statics::NewProp_DoorMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANPDoor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPDoor_Statics::NewProp_DoorMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANPDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPDoor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANPDoor_Statics::ClassParams = {
		&ANPDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANPDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANPDoor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANPDoor_Statics::Class_MetaDataParams), Z_Construct_UClass_ANPDoor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANPDoor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ANPDoor()
	{
		if (!Z_Registration_Info_UClass_ANPDoor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANPDoor.OuterSingleton, Z_Construct_UClass_ANPDoor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANPDoor.OuterSingleton;
	}
	template<> CPP_API UClass* StaticClass<ANPDoor>()
	{
		return ANPDoor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPDoor);
	ANPDoor::~ANPDoor() {}
	struct Z_CompiledInDeferFile_FID_CPP_Source_CPP_NPDoor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPP_Source_CPP_NPDoor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANPDoor, ANPDoor::StaticClass, TEXT("ANPDoor"), &Z_Registration_Info_UClass_ANPDoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANPDoor), 704421584U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPP_Source_CPP_NPDoor_h_1483852604(TEXT("/Script/CPP"),
		Z_CompiledInDeferFile_FID_CPP_Source_CPP_NPDoor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPP_Source_CPP_NPDoor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
