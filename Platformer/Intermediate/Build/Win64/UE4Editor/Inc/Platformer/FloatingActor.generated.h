// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLATFORMER_FloatingActor_generated_h
#error "FloatingActor.generated.h already included, missing '#pragma once' in FloatingActor.h"
#endif
#define PLATFORMER_FloatingActor_generated_h

#define Platformer_Source_Platformer_FloatingActor_h_12_SPARSE_DATA
#define Platformer_Source_Platformer_FloatingActor_h_12_RPC_WRAPPERS
#define Platformer_Source_Platformer_FloatingActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Platformer_Source_Platformer_FloatingActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFloatingActor(); \
	friend struct Z_Construct_UClass_AFloatingActor_Statics; \
public: \
	DECLARE_CLASS(AFloatingActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer"), NO_API) \
	DECLARE_SERIALIZER(AFloatingActor)


#define Platformer_Source_Platformer_FloatingActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFloatingActor(); \
	friend struct Z_Construct_UClass_AFloatingActor_Statics; \
public: \
	DECLARE_CLASS(AFloatingActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer"), NO_API) \
	DECLARE_SERIALIZER(AFloatingActor)


#define Platformer_Source_Platformer_FloatingActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFloatingActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFloatingActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFloatingActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFloatingActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFloatingActor(AFloatingActor&&); \
	NO_API AFloatingActor(const AFloatingActor&); \
public:


#define Platformer_Source_Platformer_FloatingActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFloatingActor(AFloatingActor&&); \
	NO_API AFloatingActor(const AFloatingActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFloatingActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFloatingActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFloatingActor)


#define Platformer_Source_Platformer_FloatingActor_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VisualMesh() { return STRUCT_OFFSET(AFloatingActor, VisualMesh); }


#define Platformer_Source_Platformer_FloatingActor_h_9_PROLOG
#define Platformer_Source_Platformer_FloatingActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Platformer_Source_Platformer_FloatingActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Platformer_Source_Platformer_FloatingActor_h_12_SPARSE_DATA \
	Platformer_Source_Platformer_FloatingActor_h_12_RPC_WRAPPERS \
	Platformer_Source_Platformer_FloatingActor_h_12_INCLASS \
	Platformer_Source_Platformer_FloatingActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Platformer_Source_Platformer_FloatingActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Platformer_Source_Platformer_FloatingActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Platformer_Source_Platformer_FloatingActor_h_12_SPARSE_DATA \
	Platformer_Source_Platformer_FloatingActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Platformer_Source_Platformer_FloatingActor_h_12_INCLASS_NO_PURE_DECLS \
	Platformer_Source_Platformer_FloatingActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMER_API UClass* StaticClass<class AFloatingActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Platformer_Source_Platformer_FloatingActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
