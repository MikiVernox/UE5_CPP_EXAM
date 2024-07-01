// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CPP;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CPP()
	{
		if (!Z_Registration_Info_UPackage__Script_CPP.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CPP",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xBF1BFA3C,
				0x20AFF0D7,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CPP.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CPP.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CPP(Z_Construct_UPackage__Script_CPP, TEXT("/Script/CPP"), Z_Registration_Info_UPackage__Script_CPP, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xBF1BFA3C, 0x20AFF0D7));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
