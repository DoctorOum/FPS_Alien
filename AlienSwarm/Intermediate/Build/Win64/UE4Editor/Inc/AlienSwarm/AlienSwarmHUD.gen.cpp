// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AlienSwarm/AlienSwarmHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlienSwarmHUD() {}
// Cross Module References
	ALIENSWARM_API UClass* Z_Construct_UClass_AAlienSwarmHUD_NoRegister();
	ALIENSWARM_API UClass* Z_Construct_UClass_AAlienSwarmHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_AlienSwarm();
// End Cross Module References
	void AAlienSwarmHUD::StaticRegisterNativesAAlienSwarmHUD()
	{
	}
	UClass* Z_Construct_UClass_AAlienSwarmHUD_NoRegister()
	{
		return AAlienSwarmHUD::StaticClass();
	}
	struct Z_Construct_UClass_AAlienSwarmHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAlienSwarmHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_AlienSwarm,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAlienSwarmHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "AlienSwarmHUD.h" },
		{ "ModuleRelativePath", "AlienSwarmHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAlienSwarmHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAlienSwarmHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAlienSwarmHUD_Statics::ClassParams = {
		&AAlienSwarmHUD::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAlienSwarmHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAlienSwarmHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAlienSwarmHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAlienSwarmHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAlienSwarmHUD, 1393198624);
	template<> ALIENSWARM_API UClass* StaticClass<AAlienSwarmHUD>()
	{
		return AAlienSwarmHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAlienSwarmHUD(Z_Construct_UClass_AAlienSwarmHUD, &AAlienSwarmHUD::StaticClass, TEXT("/Script/AlienSwarm"), TEXT("AAlienSwarmHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAlienSwarmHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
