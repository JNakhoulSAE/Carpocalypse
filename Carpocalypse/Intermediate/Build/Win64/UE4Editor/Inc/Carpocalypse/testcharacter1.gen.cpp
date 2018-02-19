// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/testcharacter1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodetestcharacter1() {}
// Cross Module References
	CARPOCALYPSE_API UClass* Z_Construct_UClass_Atestcharacter1_NoRegister();
	CARPOCALYPSE_API UClass* Z_Construct_UClass_Atestcharacter1();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Carpocalypse();
// End Cross Module References
	void Atestcharacter1::StaticRegisterNativesAtestcharacter1()
	{
	}
	UClass* Z_Construct_UClass_Atestcharacter1_NoRegister()
	{
		return Atestcharacter1::StaticClass();
	}
	UClass* Z_Construct_UClass_Atestcharacter1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_Carpocalypse,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "testcharacter1.h" },
				{ "ModuleRelativePath", "Public/testcharacter1.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<Atestcharacter1>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&Atestcharacter1::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(Atestcharacter1, 1155027322);
	static FCompiledInDefer Z_CompiledInDefer_UClass_Atestcharacter1(Z_Construct_UClass_Atestcharacter1, &Atestcharacter1::StaticClass, TEXT("/Script/Carpocalypse"), TEXT("Atestcharacter1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Atestcharacter1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
