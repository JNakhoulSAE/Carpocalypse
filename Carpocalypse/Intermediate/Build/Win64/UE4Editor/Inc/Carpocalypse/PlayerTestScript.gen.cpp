// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/PlayerTestScript.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerTestScript() {}
// Cross Module References
	CARPOCALYPSE_API UClass* Z_Construct_UClass_UPlayerTestScript_NoRegister();
	CARPOCALYPSE_API UClass* Z_Construct_UClass_UPlayerTestScript();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Carpocalypse();
// End Cross Module References
	void UPlayerTestScript::StaticRegisterNativesUPlayerTestScript()
	{
	}
	UClass* Z_Construct_UClass_UPlayerTestScript_NoRegister()
	{
		return UPlayerTestScript::StaticClass();
	}
	UClass* Z_Construct_UClass_UPlayerTestScript()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Carpocalypse,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "PlayerTestScript.h" },
				{ "ModuleRelativePath", "Public/PlayerTestScript.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPlayerTestScript>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPlayerTestScript::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(UPlayerTestScript, 3026595395);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerTestScript(Z_Construct_UClass_UPlayerTestScript, &UPlayerTestScript::StaticClass, TEXT("/Script/Carpocalypse"), TEXT("UPlayerTestScript"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerTestScript);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
