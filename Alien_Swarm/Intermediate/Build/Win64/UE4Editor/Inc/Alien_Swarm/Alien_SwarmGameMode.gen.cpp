// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Alien_Swarm/Alien_SwarmGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlien_SwarmGameMode() {}
// Cross Module References
	ALIEN_SWARM_API UClass* Z_Construct_UClass_AAlien_SwarmGameMode_NoRegister();
	ALIEN_SWARM_API UClass* Z_Construct_UClass_AAlien_SwarmGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Alien_Swarm();
// End Cross Module References
	void AAlien_SwarmGameMode::StaticRegisterNativesAAlien_SwarmGameMode()
	{
	}
	UClass* Z_Construct_UClass_AAlien_SwarmGameMode_NoRegister()
	{
		return AAlien_SwarmGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAlien_SwarmGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAlien_SwarmGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Alien_Swarm,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAlien_SwarmGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Alien_SwarmGameMode.h" },
		{ "ModuleRelativePath", "Alien_SwarmGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAlien_SwarmGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAlien_SwarmGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAlien_SwarmGameMode_Statics::ClassParams = {
		&AAlien_SwarmGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAlien_SwarmGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAlien_SwarmGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAlien_SwarmGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAlien_SwarmGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAlien_SwarmGameMode, 1920919536);
	template<> ALIEN_SWARM_API UClass* StaticClass<AAlien_SwarmGameMode>()
	{
		return AAlien_SwarmGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAlien_SwarmGameMode(Z_Construct_UClass_AAlien_SwarmGameMode, &AAlien_SwarmGameMode::StaticClass, TEXT("/Script/Alien_Swarm"), TEXT("AAlien_SwarmGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAlien_SwarmGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
