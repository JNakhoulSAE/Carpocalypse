// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef CARPOCALYPSE_CarpocalypseProjectile_generated_h
#error "CarpocalypseProjectile.generated.h already included, missing '#pragma once' in CarpocalypseProjectile.h"
#endif
#define CARPOCALYPSE_CarpocalypseProjectile_generated_h

#define Carpocalypse_Source_Carpocalypse_CarpocalypseProjectile_h_15_RPC_WRAPPERS \
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
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Carpocalypse_Source_Carpocalypse_CarpocalypseProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
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
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Carpocalypse_Source_Carpocalypse_CarpocalypseProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACarpocalypseProjectile(); \
	friend CARPOCALYPSE_API class UClass* Z_Construct_UClass_ACarpocalypseProjectile(); \
public: \
	DECLARE_CLASS(ACarpocalypseProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Carpocalypse"), NO_API) \
	DECLARE_SERIALIZER(ACarpocalypseProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Carpocalypse_Source_Carpocalypse_CarpocalypseProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACarpocalypseProjectile(); \
	friend CARPOCALYPSE_API class UClass* Z_Construct_UClass_ACarpocalypseProjectile(); \
public: \
	DECLARE_CLASS(ACarpocalypseProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Carpocalypse"), NO_API) \
	DECLARE_SERIALIZER(ACarpocalypseProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Carpocalypse_Source_Carpocalypse_CarpocalypseProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACarpocalypseProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACarpocalypseProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACarpocalypseProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACarpocalypseProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACarpocalypseProjectile(ACarpocalypseProjectile&&); \
	NO_API ACarpocalypseProjectile(const ACarpocalypseProjectile&); \
public:


#define Carpocalypse_Source_Carpocalypse_CarpocalypseProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACarpocalypseProjectile(ACarpocalypseProjectile&&); \
	NO_API ACarpocalypseProjectile(const ACarpocalypseProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACarpocalypseProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACarpocalypseProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACarpocalypseProjectile)


#define Carpocalypse_Source_Carpocalypse_CarpocalypseProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(ACarpocalypseProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ACarpocalypseProjectile, ProjectileMovement); }


#define Carpocalypse_Source_Carpocalypse_CarpocalypseProjectile_h_12_PROLOG
#define Carpocalypse_Source_Carpocalypse_CarpocalypseProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Carpocalypse_Source_Carpocalypse_CarpocalypseProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Carpocalypse_Source_Carpocalypse_CarpocalypseProjectile_h_15_RPC_WRAPPERS \
	Carpocalypse_Source_Carpocalypse_CarpocalypseProjectile_h_15_INCLASS \
	Carpocalypse_Source_Carpocalypse_CarpocalypseProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Carpocalypse_Source_Carpocalypse_CarpocalypseProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Carpocalypse_Source_Carpocalypse_CarpocalypseProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Carpocalypse_Source_Carpocalypse_CarpocalypseProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Carpocalypse_Source_Carpocalypse_CarpocalypseProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Carpocalypse_Source_Carpocalypse_CarpocalypseProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Carpocalypse_Source_Carpocalypse_CarpocalypseProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
