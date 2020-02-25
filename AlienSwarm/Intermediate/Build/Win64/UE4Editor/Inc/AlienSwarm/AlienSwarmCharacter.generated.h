// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ALIENSWARM_AlienSwarmCharacter_generated_h
#error "AlienSwarmCharacter.generated.h already included, missing '#pragma once' in AlienSwarmCharacter.h"
#endif
#define ALIENSWARM_AlienSwarmCharacter_generated_h

#define AlienSwarm_Source_AlienSwarm_AlienSwarmCharacter_h_14_SPARSE_DATA
#define AlienSwarm_Source_AlienSwarm_AlienSwarmCharacter_h_14_RPC_WRAPPERS
#define AlienSwarm_Source_AlienSwarm_AlienSwarmCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define AlienSwarm_Source_AlienSwarm_AlienSwarmCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAlienSwarmCharacter(); \
	friend struct Z_Construct_UClass_AAlienSwarmCharacter_Statics; \
public: \
	DECLARE_CLASS(AAlienSwarmCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AlienSwarm"), NO_API) \
	DECLARE_SERIALIZER(AAlienSwarmCharacter)


#define AlienSwarm_Source_AlienSwarm_AlienSwarmCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAAlienSwarmCharacter(); \
	friend struct Z_Construct_UClass_AAlienSwarmCharacter_Statics; \
public: \
	DECLARE_CLASS(AAlienSwarmCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AlienSwarm"), NO_API) \
	DECLARE_SERIALIZER(AAlienSwarmCharacter)


#define AlienSwarm_Source_AlienSwarm_AlienSwarmCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAlienSwarmCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAlienSwarmCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAlienSwarmCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAlienSwarmCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAlienSwarmCharacter(AAlienSwarmCharacter&&); \
	NO_API AAlienSwarmCharacter(const AAlienSwarmCharacter&); \
public:


#define AlienSwarm_Source_AlienSwarm_AlienSwarmCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAlienSwarmCharacter(AAlienSwarmCharacter&&); \
	NO_API AAlienSwarmCharacter(const AAlienSwarmCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAlienSwarmCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAlienSwarmCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAlienSwarmCharacter)


#define AlienSwarm_Source_AlienSwarm_AlienSwarmCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AAlienSwarmCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AAlienSwarmCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AAlienSwarmCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AAlienSwarmCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AAlienSwarmCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AAlienSwarmCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AAlienSwarmCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AAlienSwarmCharacter, L_MotionController); }


#define AlienSwarm_Source_AlienSwarm_AlienSwarmCharacter_h_11_PROLOG
#define AlienSwarm_Source_AlienSwarm_AlienSwarmCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AlienSwarm_Source_AlienSwarm_AlienSwarmCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	AlienSwarm_Source_AlienSwarm_AlienSwarmCharacter_h_14_SPARSE_DATA \
	AlienSwarm_Source_AlienSwarm_AlienSwarmCharacter_h_14_RPC_WRAPPERS \
	AlienSwarm_Source_AlienSwarm_AlienSwarmCharacter_h_14_INCLASS \
	AlienSwarm_Source_AlienSwarm_AlienSwarmCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AlienSwarm_Source_AlienSwarm_AlienSwarmCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AlienSwarm_Source_AlienSwarm_AlienSwarmCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	AlienSwarm_Source_AlienSwarm_AlienSwarmCharacter_h_14_SPARSE_DATA \
	AlienSwarm_Source_AlienSwarm_AlienSwarmCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AlienSwarm_Source_AlienSwarm_AlienSwarmCharacter_h_14_INCLASS_NO_PURE_DECLS \
	AlienSwarm_Source_AlienSwarm_AlienSwarmCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ALIENSWARM_API UClass* StaticClass<class AAlienSwarmCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AlienSwarm_Source_AlienSwarm_AlienSwarmCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
