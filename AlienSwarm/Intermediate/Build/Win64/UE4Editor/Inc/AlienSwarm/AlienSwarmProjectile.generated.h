// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef ALIENSWARM_AlienSwarmProjectile_generated_h
#error "AlienSwarmProjectile.generated.h already included, missing '#pragma once' in AlienSwarmProjectile.h"
#endif
#define ALIENSWARM_AlienSwarmProjectile_generated_h

#define AlienSwarm_Source_AlienSwarm_AlienSwarmProjectile_h_12_SPARSE_DATA
#define AlienSwarm_Source_AlienSwarm_AlienSwarmProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define AlienSwarm_Source_AlienSwarm_AlienSwarmProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define AlienSwarm_Source_AlienSwarm_AlienSwarmProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAlienSwarmProjectile(); \
	friend struct Z_Construct_UClass_AAlienSwarmProjectile_Statics; \
public: \
	DECLARE_CLASS(AAlienSwarmProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AlienSwarm"), NO_API) \
	DECLARE_SERIALIZER(AAlienSwarmProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define AlienSwarm_Source_AlienSwarm_AlienSwarmProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAAlienSwarmProjectile(); \
	friend struct Z_Construct_UClass_AAlienSwarmProjectile_Statics; \
public: \
	DECLARE_CLASS(AAlienSwarmProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AlienSwarm"), NO_API) \
	DECLARE_SERIALIZER(AAlienSwarmProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define AlienSwarm_Source_AlienSwarm_AlienSwarmProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAlienSwarmProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAlienSwarmProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAlienSwarmProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAlienSwarmProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAlienSwarmProjectile(AAlienSwarmProjectile&&); \
	NO_API AAlienSwarmProjectile(const AAlienSwarmProjectile&); \
public:


#define AlienSwarm_Source_AlienSwarm_AlienSwarmProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAlienSwarmProjectile(AAlienSwarmProjectile&&); \
	NO_API AAlienSwarmProjectile(const AAlienSwarmProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAlienSwarmProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAlienSwarmProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAlienSwarmProjectile)


#define AlienSwarm_Source_AlienSwarm_AlienSwarmProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AAlienSwarmProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AAlienSwarmProjectile, ProjectileMovement); }


#define AlienSwarm_Source_AlienSwarm_AlienSwarmProjectile_h_9_PROLOG
#define AlienSwarm_Source_AlienSwarm_AlienSwarmProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AlienSwarm_Source_AlienSwarm_AlienSwarmProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	AlienSwarm_Source_AlienSwarm_AlienSwarmProjectile_h_12_SPARSE_DATA \
	AlienSwarm_Source_AlienSwarm_AlienSwarmProjectile_h_12_RPC_WRAPPERS \
	AlienSwarm_Source_AlienSwarm_AlienSwarmProjectile_h_12_INCLASS \
	AlienSwarm_Source_AlienSwarm_AlienSwarmProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AlienSwarm_Source_AlienSwarm_AlienSwarmProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AlienSwarm_Source_AlienSwarm_AlienSwarmProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	AlienSwarm_Source_AlienSwarm_AlienSwarmProjectile_h_12_SPARSE_DATA \
	AlienSwarm_Source_AlienSwarm_AlienSwarmProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AlienSwarm_Source_AlienSwarm_AlienSwarmProjectile_h_12_INCLASS_NO_PURE_DECLS \
	AlienSwarm_Source_AlienSwarm_AlienSwarmProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ALIENSWARM_API UClass* StaticClass<class AAlienSwarmProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AlienSwarm_Source_AlienSwarm_AlienSwarmProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
