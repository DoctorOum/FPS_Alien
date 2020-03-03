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
#ifdef ALIEN_SWARM_Alien_SwarmProjectile_generated_h
#error "Alien_SwarmProjectile.generated.h already included, missing '#pragma once' in Alien_SwarmProjectile.h"
#endif
#define ALIEN_SWARM_Alien_SwarmProjectile_generated_h

#define Alien_Swarm_Source_Alien_Swarm_Alien_SwarmProjectile_h_12_SPARSE_DATA
#define Alien_Swarm_Source_Alien_Swarm_Alien_SwarmProjectile_h_12_RPC_WRAPPERS \
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


#define Alien_Swarm_Source_Alien_Swarm_Alien_SwarmProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define Alien_Swarm_Source_Alien_Swarm_Alien_SwarmProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAlien_SwarmProjectile(); \
	friend struct Z_Construct_UClass_AAlien_SwarmProjectile_Statics; \
public: \
	DECLARE_CLASS(AAlien_SwarmProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Alien_Swarm"), NO_API) \
	DECLARE_SERIALIZER(AAlien_SwarmProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Alien_Swarm_Source_Alien_Swarm_Alien_SwarmProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAAlien_SwarmProjectile(); \
	friend struct Z_Construct_UClass_AAlien_SwarmProjectile_Statics; \
public: \
	DECLARE_CLASS(AAlien_SwarmProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Alien_Swarm"), NO_API) \
	DECLARE_SERIALIZER(AAlien_SwarmProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Alien_Swarm_Source_Alien_Swarm_Alien_SwarmProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAlien_SwarmProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAlien_SwarmProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAlien_SwarmProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAlien_SwarmProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAlien_SwarmProjectile(AAlien_SwarmProjectile&&); \
	NO_API AAlien_SwarmProjectile(const AAlien_SwarmProjectile&); \
public:


#define Alien_Swarm_Source_Alien_Swarm_Alien_SwarmProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAlien_SwarmProjectile(AAlien_SwarmProjectile&&); \
	NO_API AAlien_SwarmProjectile(const AAlien_SwarmProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAlien_SwarmProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAlien_SwarmProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAlien_SwarmProjectile)


#define Alien_Swarm_Source_Alien_Swarm_Alien_SwarmProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AAlien_SwarmProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AAlien_SwarmProjectile, ProjectileMovement); }


#define Alien_Swarm_Source_Alien_Swarm_Alien_SwarmProjectile_h_9_PROLOG
#define Alien_Swarm_Source_Alien_Swarm_Alien_SwarmProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Alien_Swarm_Source_Alien_Swarm_Alien_SwarmProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Alien_Swarm_Source_Alien_Swarm_Alien_SwarmProjectile_h_12_SPARSE_DATA \
	Alien_Swarm_Source_Alien_Swarm_Alien_SwarmProjectile_h_12_RPC_WRAPPERS \
	Alien_Swarm_Source_Alien_Swarm_Alien_SwarmProjectile_h_12_INCLASS \
	Alien_Swarm_Source_Alien_Swarm_Alien_SwarmProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Alien_Swarm_Source_Alien_Swarm_Alien_SwarmProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Alien_Swarm_Source_Alien_Swarm_Alien_SwarmProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Alien_Swarm_Source_Alien_Swarm_Alien_SwarmProjectile_h_12_SPARSE_DATA \
	Alien_Swarm_Source_Alien_Swarm_Alien_SwarmProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Alien_Swarm_Source_Alien_Swarm_Alien_SwarmProjectile_h_12_INCLASS_NO_PURE_DECLS \
	Alien_Swarm_Source_Alien_Swarm_Alien_SwarmProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ALIEN_SWARM_API UClass* StaticClass<class AAlien_SwarmProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Alien_Swarm_Source_Alien_Swarm_Alien_SwarmProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
