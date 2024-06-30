// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP/CollectibleItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollectibleItem() {}
// Cross Module References
	CPP_API UClass* Z_Construct_UClass_ACollectibleItem();
	CPP_API UClass* Z_Construct_UClass_ACollectibleItem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CPP();
// End Cross Module References
	void ACollectibleItem::StaticRegisterNativesACollectibleItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACollectibleItem);
	UClass* Z_Construct_UClass_ACollectibleItem_NoRegister()
	{
		return ACollectibleItem::StaticClass();
	}
	struct Z_Construct_UClass_ACollectibleItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACollectibleItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACollectibleItem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectibleItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CollectibleItem.h" },
		{ "ModuleRelativePath", "CollectibleItem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACollectibleItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACollectibleItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACollectibleItem_Statics::ClassParams = {
		&ACollectibleItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACollectibleItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ACollectibleItem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACollectibleItem()
	{
		if (!Z_Registration_Info_UClass_ACollectibleItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACollectibleItem.OuterSingleton, Z_Construct_UClass_ACollectibleItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACollectibleItem.OuterSingleton;
	}
	template<> CPP_API UClass* StaticClass<ACollectibleItem>()
	{
		return ACollectibleItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACollectibleItem);
	ACollectibleItem::~ACollectibleItem() {}
	struct Z_CompiledInDeferFile_FID_CPP_Source_CPP_CollectibleItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPP_Source_CPP_CollectibleItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACollectibleItem, ACollectibleItem::StaticClass, TEXT("ACollectibleItem"), &Z_Registration_Info_UClass_ACollectibleItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACollectibleItem), 2212450147U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPP_Source_CPP_CollectibleItem_h_299583372(TEXT("/Script/CPP"),
		Z_CompiledInDeferFile_FID_CPP_Source_CPP_CollectibleItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPP_Source_CPP_CollectibleItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
