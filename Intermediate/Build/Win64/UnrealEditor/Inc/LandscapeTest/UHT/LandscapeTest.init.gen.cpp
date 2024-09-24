// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeTest_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LandscapeTest;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LandscapeTest()
	{
		if (!Z_Registration_Info_UPackage__Script_LandscapeTest.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/LandscapeTest",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x90743E59,
				0xFE5D83BB,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LandscapeTest.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_LandscapeTest.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LandscapeTest(Z_Construct_UPackage__Script_LandscapeTest, TEXT("/Script/LandscapeTest"), Z_Registration_Info_UPackage__Script_LandscapeTest, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x90743E59, 0xFE5D83BB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
