// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoreSandboxGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCoreSandboxGameMode() {}

// ********** Begin Cross Module References ********************************************************
CORESANDBOX_API UClass* Z_Construct_UClass_ACoreSandboxGameMode();
CORESANDBOX_API UClass* Z_Construct_UClass_ACoreSandboxGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CoreSandbox();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACoreSandboxGameMode *****************************************************
void ACoreSandboxGameMode::StaticRegisterNativesACoreSandboxGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACoreSandboxGameMode;
UClass* ACoreSandboxGameMode::GetPrivateStaticClass()
{
	using TClass = ACoreSandboxGameMode;
	if (!Z_Registration_Info_UClass_ACoreSandboxGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CoreSandboxGameMode"),
			Z_Registration_Info_UClass_ACoreSandboxGameMode.InnerSingleton,
			StaticRegisterNativesACoreSandboxGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ACoreSandboxGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ACoreSandboxGameMode_NoRegister()
{
	return ACoreSandboxGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACoreSandboxGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CoreSandboxGameMode.h" },
		{ "ModuleRelativePath", "CoreSandboxGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoreSandboxGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACoreSandboxGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CoreSandbox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreSandboxGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoreSandboxGameMode_Statics::ClassParams = {
	&ACoreSandboxGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreSandboxGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACoreSandboxGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACoreSandboxGameMode()
{
	if (!Z_Registration_Info_UClass_ACoreSandboxGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACoreSandboxGameMode.OuterSingleton, Z_Construct_UClass_ACoreSandboxGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACoreSandboxGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACoreSandboxGameMode);
ACoreSandboxGameMode::~ACoreSandboxGameMode() {}
// ********** End Class ACoreSandboxGameMode *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Github_CoreSandbox_CoreSandbox_Source_CoreSandbox_CoreSandboxGameMode_h__Script_CoreSandbox_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACoreSandboxGameMode, ACoreSandboxGameMode::StaticClass, TEXT("ACoreSandboxGameMode"), &Z_Registration_Info_UClass_ACoreSandboxGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoreSandboxGameMode), 1737900311U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_CoreSandbox_CoreSandbox_Source_CoreSandbox_CoreSandboxGameMode_h__Script_CoreSandbox_3600145814(TEXT("/Script/CoreSandbox"),
	Z_CompiledInDeferFile_FID_Github_CoreSandbox_CoreSandbox_Source_CoreSandbox_CoreSandboxGameMode_h__Script_CoreSandbox_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_CoreSandbox_CoreSandbox_Source_CoreSandbox_CoreSandboxGameMode_h__Script_CoreSandbox_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
