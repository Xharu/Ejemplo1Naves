// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ejemplo1Naves/Ejemplo1NavesGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEjemplo1NavesGameMode() {}
// Cross Module References
	EJEMPLO1NAVES_API UClass* Z_Construct_UClass_AEjemplo1NavesGameMode_NoRegister();
	EJEMPLO1NAVES_API UClass* Z_Construct_UClass_AEjemplo1NavesGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Ejemplo1Naves();
// End Cross Module References
	void AEjemplo1NavesGameMode::StaticRegisterNativesAEjemplo1NavesGameMode()
	{
	}
	UClass* Z_Construct_UClass_AEjemplo1NavesGameMode_NoRegister()
	{
		return AEjemplo1NavesGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AEjemplo1NavesGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEjemplo1NavesGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Ejemplo1Naves,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEjemplo1NavesGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Ejemplo1NavesGameMode.h" },
		{ "ModuleRelativePath", "Ejemplo1NavesGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEjemplo1NavesGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEjemplo1NavesGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEjemplo1NavesGameMode_Statics::ClassParams = {
		&AEjemplo1NavesGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEjemplo1NavesGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEjemplo1NavesGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEjemplo1NavesGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEjemplo1NavesGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEjemplo1NavesGameMode, 919126492);
	template<> EJEMPLO1NAVES_API UClass* StaticClass<AEjemplo1NavesGameMode>()
	{
		return AEjemplo1NavesGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEjemplo1NavesGameMode(Z_Construct_UClass_AEjemplo1NavesGameMode, &AEjemplo1NavesGameMode::StaticClass, TEXT("/Script/Ejemplo1Naves"), TEXT("AEjemplo1NavesGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEjemplo1NavesGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
