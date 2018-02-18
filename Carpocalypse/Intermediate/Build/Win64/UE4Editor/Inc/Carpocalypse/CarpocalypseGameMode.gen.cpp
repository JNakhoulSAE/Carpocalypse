// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "CarpocalypseGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCarpocalypseGameMode() {}
// Cross Module References
	CARPOCALYPSE_API UClass* Z_Construct_UClass_ACarpocalypseGameMode_NoRegister();
	CARPOCALYPSE_API UClass* Z_Construct_UClass_ACarpocalypseGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Carpocalypse();
// End Cross Module References
	void ACarpocalypseGameMode::StaticRegisterNativesACarpocalypseGameMode()
	{
	}
	UClass* Z_Construct_UClass_ACarpocalypseGameMode_NoRegister()
	{
		return ACarpocalypseGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ACarpocalypseGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Carpocalypse,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "CarpocalypseGameMode.h" },
				{ "ModuleRelativePath", "CarpocalypseGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ACarpocalypseGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ACarpocalypseGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACarpocalypseGameMode, 1116920807);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACarpocalypseGameMode(Z_Construct_UClass_ACarpocalypseGameMode, &ACarpocalypseGameMode::StaticClass, TEXT("/Script/Carpocalypse"), TEXT("ACarpocalypseGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACarpocalypseGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
