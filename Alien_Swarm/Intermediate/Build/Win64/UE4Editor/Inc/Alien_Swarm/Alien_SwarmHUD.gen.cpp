// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Alien_Swarm/Alien_SwarmHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlien_SwarmHUD() {}
// Cross Module References
	ALIEN_SWARM_API UClass* Z_Construct_UClass_AAlien_SwarmHUD_NoRegister();
	ALIEN_SWARM_API UClass* Z_Construct_UClass_AAlien_SwarmHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Alien_Swarm();
// End Cross Module References
	void AAlien_SwarmHUD::StaticRegisterNativesAAlien_SwarmHUD()
	{
	}
	UClass* Z_Construct_UClass_AAlien_SwarmHUD_NoRegister()
	{
		return AAlien_SwarmHUD::StaticClass();
	}
	struct Z_Construct_UClass_AAlien_SwarmHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAlien_SwarmHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Alien_Swarm,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAlien_SwarmHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Alien_SwarmHUD.h" },
		{ "ModuleRelativePath", "Alien_SwarmHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAlien_SwarmHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAlien_SwarmHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAlien_SwarmHUD_Statics::ClassParams = {
		&AAlien_SwarmHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAlien_SwarmHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAlien_SwarmHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAlien_SwarmHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAlien_SwarmHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAlien_SwarmHUD, 4085295271);
	template<> ALIEN_SWARM_API UClass* StaticClass<AAlien_SwarmHUD>()
	{
		return AAlien_SwarmHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAlien_SwarmHUD(Z_Construct_UClass_AAlien_SwarmHUD, &AAlien_SwarmHUD::StaticClass, TEXT("/Script/Alien_Swarm"), TEXT("AAlien_SwarmHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAlien_SwarmHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
