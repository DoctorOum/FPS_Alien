// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AlienSwarm/AlienSwarmGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlienSwarmGameMode() {}
// Cross Module References
	ALIENSWARM_API UClass* Z_Construct_UClass_AAlienSwarmGameMode_NoRegister();
	ALIENSWARM_API UClass* Z_Construct_UClass_AAlienSwarmGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AlienSwarm();
// End Cross Module References
	void AAlienSwarmGameMode::StaticRegisterNativesAAlienSwarmGameMode()
	{
	}
	UClass* Z_Construct_UClass_AAlienSwarmGameMode_NoRegister()
	{
		return AAlienSwarmGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAlienSwarmGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAlienSwarmGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AlienSwarm,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAlienSwarmGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AlienSwarmGameMode.h" },
		{ "ModuleRelativePath", "AlienSwarmGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAlienSwarmGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAlienSwarmGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAlienSwarmGameMode_Statics::ClassParams = {
		&AAlienSwarmGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAlienSwarmGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAlienSwarmGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAlienSwarmGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAlienSwarmGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAlienSwarmGameMode, 1674388691);
	template<> ALIENSWARM_API UClass* StaticClass<AAlienSwarmGameMode>()
	{
		return AAlienSwarmGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAlienSwarmGameMode(Z_Construct_UClass_AAlienSwarmGameMode, &AAlienSwarmGameMode::StaticClass, TEXT("/Script/AlienSwarm"), TEXT("AAlienSwarmGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAlienSwarmGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
