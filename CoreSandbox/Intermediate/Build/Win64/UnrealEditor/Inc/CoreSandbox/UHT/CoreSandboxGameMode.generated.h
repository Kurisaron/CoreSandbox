// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CoreSandboxGameMode.h"

#ifdef CORESANDBOX_CoreSandboxGameMode_generated_h
#error "CoreSandboxGameMode.generated.h already included, missing '#pragma once' in CoreSandboxGameMode.h"
#endif
#define CORESANDBOX_CoreSandboxGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACoreSandboxGameMode *****************************************************
CORESANDBOX_API UClass* Z_Construct_UClass_ACoreSandboxGameMode_NoRegister();

#define FID_Github_CoreSandbox_CoreSandbox_Source_CoreSandbox_CoreSandboxGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACoreSandboxGameMode(); \
	friend struct Z_Construct_UClass_ACoreSandboxGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CORESANDBOX_API UClass* Z_Construct_UClass_ACoreSandboxGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ACoreSandboxGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoreSandbox"), Z_Construct_UClass_ACoreSandboxGameMode_NoRegister) \
	DECLARE_SERIALIZER(ACoreSandboxGameMode)


#define FID_Github_CoreSandbox_CoreSandbox_Source_CoreSandbox_CoreSandboxGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACoreSandboxGameMode(ACoreSandboxGameMode&&) = delete; \
	ACoreSandboxGameMode(const ACoreSandboxGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoreSandboxGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoreSandboxGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ACoreSandboxGameMode) \
	NO_API virtual ~ACoreSandboxGameMode();


#define FID_Github_CoreSandbox_CoreSandbox_Source_CoreSandbox_CoreSandboxGameMode_h_12_PROLOG
#define FID_Github_CoreSandbox_CoreSandbox_Source_CoreSandbox_CoreSandboxGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_CoreSandbox_CoreSandbox_Source_CoreSandbox_CoreSandboxGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Github_CoreSandbox_CoreSandbox_Source_CoreSandbox_CoreSandboxGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACoreSandboxGameMode;

// ********** End Class ACoreSandboxGameMode *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_CoreSandbox_CoreSandbox_Source_CoreSandbox_CoreSandboxGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
