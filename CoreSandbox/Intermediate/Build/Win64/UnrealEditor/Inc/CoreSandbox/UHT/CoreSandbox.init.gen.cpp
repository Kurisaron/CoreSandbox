// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreSandbox_init() {}
	CORESANDBOX_API UFunction* Z_Construct_UDelegateFunction_CoreSandbox_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CoreSandbox;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CoreSandbox()
	{
		if (!Z_Registration_Info_UPackage__Script_CoreSandbox.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_CoreSandbox_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CoreSandbox",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xD2A5EB7C,
				0x40E4F68F,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CoreSandbox.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CoreSandbox.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CoreSandbox(Z_Construct_UPackage__Script_CoreSandbox, TEXT("/Script/CoreSandbox"), Z_Registration_Info_UPackage__Script_CoreSandbox, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD2A5EB7C, 0x40E4F68F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
