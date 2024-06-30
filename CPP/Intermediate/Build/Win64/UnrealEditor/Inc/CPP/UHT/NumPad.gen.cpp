// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP/NumPad.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNumPad() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CPP_API UClass* Z_Construct_UClass_ANPDoor_NoRegister();
	CPP_API UClass* Z_Construct_UClass_ANumPad();
	CPP_API UClass* Z_Construct_UClass_ANumPad_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CPP();
// End Cross Module References
	DEFINE_FUNCTION(ANumPad::execEnterCode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Code);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterCode(Z_Param_Code);
		P_NATIVE_END;
	}
	void ANumPad::StaticRegisterNativesANumPad()
	{
		UClass* Class = ANumPad::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnterCode", &ANumPad::execEnterCode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANumPad_EnterCode_Statics
	{
		struct NumPad_eventEnterCode_Parms
		{
			FString Code;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Code;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANumPad_EnterCode_Statics::NewProp_Code_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANumPad_EnterCode_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NumPad_eventEnterCode_Parms, Code), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANumPad_EnterCode_Statics::NewProp_Code_MetaData), Z_Construct_UFunction_ANumPad_EnterCode_Statics::NewProp_Code_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANumPad_EnterCode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANumPad_EnterCode_Statics::NewProp_Code,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANumPad_EnterCode_Statics::Function_MetaDataParams[] = {
		{ "Category", "NumPad" },
		{ "ModuleRelativePath", "NumPad.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANumPad_EnterCode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANumPad, nullptr, "EnterCode", nullptr, nullptr, Z_Construct_UFunction_ANumPad_EnterCode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANumPad_EnterCode_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANumPad_EnterCode_Statics::NumPad_eventEnterCode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANumPad_EnterCode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANumPad_EnterCode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANumPad_EnterCode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ANumPad_EnterCode_Statics::NumPad_eventEnterCode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ANumPad_EnterCode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANumPad_EnterCode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANumPad);
	UClass* Z_Construct_UClass_ANumPad_NoRegister()
	{
		return ANumPad::StaticClass();
	}
	struct Z_Construct_UClass_ANumPad_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumpadWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_NumpadWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CorrectCode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CorrectCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Door_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Door;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANumPad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CPP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANumPad_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ANumPad_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANumPad_EnterCode, "EnterCode" }, // 2170855010
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANumPad_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANumPad_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NumPad.h" },
		{ "ModuleRelativePath", "NumPad.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANumPad_Statics::NewProp_NumpadWidgetClass_MetaData[] = {
		{ "Category", "NumPad" },
		{ "ModuleRelativePath", "NumPad.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANumPad_Statics::NewProp_NumpadWidgetClass = { "NumpadWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANumPad, NumpadWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANumPad_Statics::NewProp_NumpadWidgetClass_MetaData), Z_Construct_UClass_ANumPad_Statics::NewProp_NumpadWidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANumPad_Statics::NewProp_CorrectCode_MetaData[] = {
		{ "Category", "NumPad" },
		{ "ModuleRelativePath", "NumPad.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ANumPad_Statics::NewProp_CorrectCode = { "CorrectCode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANumPad, CorrectCode), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANumPad_Statics::NewProp_CorrectCode_MetaData), Z_Construct_UClass_ANumPad_Statics::NewProp_CorrectCode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANumPad_Statics::NewProp_Door_MetaData[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "NumPad.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANumPad_Statics::NewProp_Door = { "Door", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANumPad, Door), Z_Construct_UClass_ANPDoor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANumPad_Statics::NewProp_Door_MetaData), Z_Construct_UClass_ANumPad_Statics::NewProp_Door_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANumPad_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumPad_Statics::NewProp_NumpadWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumPad_Statics::NewProp_CorrectCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANumPad_Statics::NewProp_Door,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANumPad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANumPad>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANumPad_Statics::ClassParams = {
		&ANumPad::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANumPad_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANumPad_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANumPad_Statics::Class_MetaDataParams), Z_Construct_UClass_ANumPad_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANumPad_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ANumPad()
	{
		if (!Z_Registration_Info_UClass_ANumPad.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANumPad.OuterSingleton, Z_Construct_UClass_ANumPad_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANumPad.OuterSingleton;
	}
	template<> CPP_API UClass* StaticClass<ANumPad>()
	{
		return ANumPad::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANumPad);
	ANumPad::~ANumPad() {}
	struct Z_CompiledInDeferFile_FID_CPP_Source_CPP_NumPad_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPP_Source_CPP_NumPad_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANumPad, ANumPad::StaticClass, TEXT("ANumPad"), &Z_Registration_Info_UClass_ANumPad, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANumPad), 1531706275U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CPP_Source_CPP_NumPad_h_3184009554(TEXT("/Script/CPP"),
		Z_CompiledInDeferFile_FID_CPP_Source_CPP_NumPad_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CPP_Source_CPP_NumPad_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
