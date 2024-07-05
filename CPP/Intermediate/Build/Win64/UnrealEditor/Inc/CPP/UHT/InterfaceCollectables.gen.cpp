// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP/InterfaceCollectables.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterfaceCollectables() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	CPP_API UClass* Z_Construct_UClass_UInterfaceCollectables();
	CPP_API UClass* Z_Construct_UClass_UInterfaceCollectables_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CPP();
// End Cross Module References
	void UInterfaceCollectables::StaticRegisterNativesUInterfaceCollectables()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterfaceCollectables);
	UClass* Z_Construct_UClass_UInterfaceCollectables_NoRegister()
	{
		return UInterfaceCollectables::StaticClass();
	}
	struct Z_Construct_UClass_UInterfaceCollectables_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterfaceCollectables_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterfaceCollectables_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterfaceCollectables_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "InterfaceCollectables.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterfaceCollectables_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterfaceCollectables>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterfaceCollectables_Statics::ClassParams = {
		&UInterfaceCollectables::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterfaceCollectables_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterfaceCollectables_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UInterfaceCollectables()
	{
		if (!Z_Registration_Info_UClass_UInterfaceCollectables.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterfaceCollectables.OuterSingleton, Z_Construct_UClass_UInterfaceCollectables_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterfaceCollectables.OuterSingleton;
	}
	template<> CPP_API UClass* StaticClass<UInterfaceCollectables>()
	{
		return UInterfaceCollectables::StaticClass();
	}
	UInterfaceCollectables::UInterfaceCollectables(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterfaceCollectables);
	UInterfaceCollectables::~UInterfaceCollectables() {}
	struct Z_CompiledInDeferFile_FID_CPP_Source_CPP_InterfaceCollectables_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPP_Source_CPP_InterfaceCollectables_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterfaceCollectables, UInterfaceCollectables::StaticClass, TEXT("UInterfaceCollectables"), &Z_Registration_Info_UClass_UInterfaceCollectables, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterfaceCollectables), 2261230563U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPP_Source_CPP_InterfaceCollectables_h_4228598343(TEXT("/Script/CPP"),
		Z_CompiledInDeferFile_FID_CPP_Source_CPP_InterfaceCollectables_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPP_Source_CPP_InterfaceCollectables_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
