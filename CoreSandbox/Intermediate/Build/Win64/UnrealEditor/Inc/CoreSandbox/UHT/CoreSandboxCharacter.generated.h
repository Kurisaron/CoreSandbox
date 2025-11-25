// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CoreSandboxCharacter.h"

#ifdef CORESANDBOX_CoreSandboxCharacter_generated_h
#error "CoreSandboxCharacter.generated.h already included, missing '#pragma once' in CoreSandboxCharacter.h"
#endif
#define CORESANDBOX_CoreSandboxCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACoreSandboxCharacter ****************************************************
#define FID_Github_CoreSandbox_CoreSandbox_Source_CoreSandbox_CoreSandboxCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


CORESANDBOX_API UClass* Z_Construct_UClass_ACoreSandboxCharacter_NoRegister();

#define FID_Github_CoreSandbox_CoreSandbox_Source_CoreSandbox_CoreSandboxCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACoreSandboxCharacter(); \
	friend struct Z_Construct_UClass_ACoreSandboxCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CORESANDBOX_API UClass* Z_Construct_UClass_ACoreSandboxCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ACoreSandboxCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoreSandbox"), Z_Construct_UClass_ACoreSandboxCharacter_NoRegister) \
	DECLARE_SERIALIZER(ACoreSandboxCharacter)


#define FID_Github_CoreSandbox_CoreSandbox_Source_CoreSandbox_CoreSandboxCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACoreSandboxCharacter(ACoreSandboxCharacter&&) = delete; \
	ACoreSandboxCharacter(const ACoreSandboxCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoreSandboxCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoreSandboxCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ACoreSandboxCharacter) \
	NO_API virtual ~ACoreSandboxCharacter();


#define FID_Github_CoreSandbox_CoreSandbox_Source_CoreSandbox_CoreSandboxCharacter_h_21_PROLOG
#define FID_Github_CoreSandbox_CoreSandbox_Source_CoreSandbox_CoreSandboxCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_CoreSandbox_CoreSandbox_Source_CoreSandbox_CoreSandboxCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_CoreSandbox_CoreSandbox_Source_CoreSandbox_CoreSandboxCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Github_CoreSandbox_CoreSandbox_Source_CoreSandbox_CoreSandboxCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACoreSandboxCharacter;

// ********** End Class ACoreSandboxCharacter ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_CoreSandbox_CoreSandbox_Source_CoreSandbox_CoreSandboxCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
