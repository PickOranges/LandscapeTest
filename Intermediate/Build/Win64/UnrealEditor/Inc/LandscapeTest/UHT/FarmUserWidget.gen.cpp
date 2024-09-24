// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LandscapeTest/FarmUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFarmUserWidget() {}

// Begin Cross Module References
LANDSCAPETEST_API UClass* Z_Construct_UClass_UFarmUserWidget();
LANDSCAPETEST_API UClass* Z_Construct_UClass_UFarmUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_LandscapeTest();
// End Cross Module References

// Begin Class UFarmUserWidget
void UFarmUserWidget::StaticRegisterNativesUFarmUserWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFarmUserWidget);
UClass* Z_Construct_UClass_UFarmUserWidget_NoRegister()
{
	return UFarmUserWidget::StaticClass();
}
struct Z_Construct_UClass_UFarmUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "FarmUserWidget.h" },
		{ "ModuleRelativePath", "FarmUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "FarmWidget" },
		{ "ModuleRelativePath", "FarmUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "FarmWidget" },
		{ "ModuleRelativePath", "FarmUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFarmUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFarmUserWidget_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFarmUserWidget, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFarmUserWidget_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFarmUserWidget, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFarmUserWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFarmUserWidget_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFarmUserWidget_Statics::NewProp_MaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFarmUserWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFarmUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_LandscapeTest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFarmUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFarmUserWidget_Statics::ClassParams = {
	&UFarmUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFarmUserWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFarmUserWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFarmUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UFarmUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFarmUserWidget()
{
	if (!Z_Registration_Info_UClass_UFarmUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFarmUserWidget.OuterSingleton, Z_Construct_UClass_UFarmUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFarmUserWidget.OuterSingleton;
}
template<> LANDSCAPETEST_API UClass* StaticClass<UFarmUserWidget>()
{
	return UFarmUserWidget::StaticClass();
}
UFarmUserWidget::UFarmUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFarmUserWidget);
UFarmUserWidget::~UFarmUserWidget() {}
// End Class UFarmUserWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_LandscapeTest_Source_LandscapeTest_FarmUserWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFarmUserWidget, UFarmUserWidget::StaticClass, TEXT("UFarmUserWidget"), &Z_Registration_Info_UClass_UFarmUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFarmUserWidget), 614705600U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_LandscapeTest_Source_LandscapeTest_FarmUserWidget_h_1035496448(TEXT("/Script/LandscapeTest"),
	Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_LandscapeTest_Source_LandscapeTest_FarmUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cheng_source_repos_UE5_LandscapeTest_Source_LandscapeTest_FarmUserWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
