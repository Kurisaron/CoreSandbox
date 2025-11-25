// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CoreSandboxPlayerController.h"

#ifdef CORESANDBOX_CoreSandboxPlayerController_generated_h
#error "CoreSandboxPlayerController.generated.h already included, missing '#pragma once' in CoreSandboxPlayerController.h"
#endif
#define CORESANDBOX_CoreSandboxPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACoreSandboxPlayerController *********************************************
CORESANDBOX_API UClass* Z_Construct_UClass_ACoreSandboxPlayerController_NoRegister();

#define FID_Github_CoreSandbox_CoreSandbox_Source_CoreSandbox_CoreSandboxPlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACoreSandboxPlayerController(); \
	friend struct Z_Construct_UClass_ACoreSandboxPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CORESANDBOX_API UClass* Z_Construct_UClass_ACoreSandboxPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ACoreSandboxPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoreSandbox"), Z_Construct_UClass_ACoreSandboxPlayerController_NoRegister) \
	DECLARE_SERIALIZER(ACoreSandboxPlayerController)


#define FID_Github_CoreSandbox_CoreSandbox_Source_CoreSandbox_CoreSandboxPlayerController_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACoreSandboxPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACoreSandboxPlayerController(ACoreSandboxPlayerController&&) = delete; \
	ACoreSandboxPlayerController(const ACoreSandboxPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoreSandboxPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoreSandboxPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACoreSandboxPlayerController) \
	NO_API virtual ~ACoreSandboxPlayerController();


#define FID_Github_CoreSandbox_CoreSandbox_Source_CoreSandbox_CoreSandboxPlayerController_h_16_PROLOG
#define FID_Github_CoreSandbox_CoreSandbox_Source_CoreSandbox_CoreSandboxPlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_CoreSandbox_CoreSandbox_Source_CoreSandbox_CoreSandboxPlayerController_h_19_INCLASS_NO_PURE_DECLS \
	FID_Github_CoreSandbox_CoreSandbox_Source_CoreSandbox_CoreSandboxPlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACoreSandboxPlayerController;

// ********** End Class ACoreSandboxPlayerController ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_CoreSandbox_CoreSandbox_Source_CoreSandbox_CoreSandboxPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
