// Copyright Epic Games, Inc. All Rights Reserved.
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
#ifdef EJEMPLO1NAVES_Ejemplo1NavesProjectile_generated_h
#error "Ejemplo1NavesProjectile.generated.h already included, missing '#pragma once' in Ejemplo1NavesProjectile.h"
#endif
#define EJEMPLO1NAVES_Ejemplo1NavesProjectile_generated_h

#define Ejemplo1Naves_Source_Ejemplo1Naves_Ejemplo1NavesProjectile_h_15_SPARSE_DATA
#define Ejemplo1Naves_Source_Ejemplo1Naves_Ejemplo1NavesProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Ejemplo1Naves_Source_Ejemplo1Naves_Ejemplo1NavesProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Ejemplo1Naves_Source_Ejemplo1Naves_Ejemplo1NavesProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEjemplo1NavesProjectile(); \
	friend struct Z_Construct_UClass_AEjemplo1NavesProjectile_Statics; \
public: \
	DECLARE_CLASS(AEjemplo1NavesProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Ejemplo1Naves"), NO_API) \
	DECLARE_SERIALIZER(AEjemplo1NavesProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Ejemplo1Naves_Source_Ejemplo1Naves_Ejemplo1NavesProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAEjemplo1NavesProjectile(); \
	friend struct Z_Construct_UClass_AEjemplo1NavesProjectile_Statics; \
public: \
	DECLARE_CLASS(AEjemplo1NavesProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Ejemplo1Naves"), NO_API) \
	DECLARE_SERIALIZER(AEjemplo1NavesProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Ejemplo1Naves_Source_Ejemplo1Naves_Ejemplo1NavesProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEjemplo1NavesProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEjemplo1NavesProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEjemplo1NavesProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEjemplo1NavesProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEjemplo1NavesProjectile(AEjemplo1NavesProjectile&&); \
	NO_API AEjemplo1NavesProjectile(const AEjemplo1NavesProjectile&); \
public:


#define Ejemplo1Naves_Source_Ejemplo1Naves_Ejemplo1NavesProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEjemplo1NavesProjectile(AEjemplo1NavesProjectile&&); \
	NO_API AEjemplo1NavesProjectile(const AEjemplo1NavesProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEjemplo1NavesProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEjemplo1NavesProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEjemplo1NavesProjectile)


#define Ejemplo1Naves_Source_Ejemplo1Naves_Ejemplo1NavesProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(AEjemplo1NavesProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AEjemplo1NavesProjectile, ProjectileMovement); }


#define Ejemplo1Naves_Source_Ejemplo1Naves_Ejemplo1NavesProjectile_h_12_PROLOG
#define Ejemplo1Naves_Source_Ejemplo1Naves_Ejemplo1NavesProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Ejemplo1Naves_Source_Ejemplo1Naves_Ejemplo1NavesProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Ejemplo1Naves_Source_Ejemplo1Naves_Ejemplo1NavesProjectile_h_15_SPARSE_DATA \
	Ejemplo1Naves_Source_Ejemplo1Naves_Ejemplo1NavesProjectile_h_15_RPC_WRAPPERS \
	Ejemplo1Naves_Source_Ejemplo1Naves_Ejemplo1NavesProjectile_h_15_INCLASS \
	Ejemplo1Naves_Source_Ejemplo1Naves_Ejemplo1NavesProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Ejemplo1Naves_Source_Ejemplo1Naves_Ejemplo1NavesProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Ejemplo1Naves_Source_Ejemplo1Naves_Ejemplo1NavesProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Ejemplo1Naves_Source_Ejemplo1Naves_Ejemplo1NavesProjectile_h_15_SPARSE_DATA \
	Ejemplo1Naves_Source_Ejemplo1Naves_Ejemplo1NavesProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Ejemplo1Naves_Source_Ejemplo1Naves_Ejemplo1NavesProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Ejemplo1Naves_Source_Ejemplo1Naves_Ejemplo1NavesProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EJEMPLO1NAVES_API UClass* StaticClass<class AEjemplo1NavesProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Ejemplo1Naves_Source_Ejemplo1Naves_Ejemplo1NavesProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
