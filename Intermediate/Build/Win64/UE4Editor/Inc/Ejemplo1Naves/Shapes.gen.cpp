// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ejemplo1Naves/Shapes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShapes() {}
// Cross Module References
	EJEMPLO1NAVES_API UClass* Z_Construct_UClass_AShapes_NoRegister();
	EJEMPLO1NAVES_API UClass* Z_Construct_UClass_AShapes();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Ejemplo1Naves();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AShapes::StaticRegisterNativesAShapes()
	{
	}
	UClass* Z_Construct_UClass_AShapes_NoRegister()
	{
		return AShapes::StaticClass();
	}
	struct Z_Construct_UClass_AShapes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mallaShapes_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mallaShapes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShapes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Ejemplo1Naves,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShapes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Shapes.h" },
		{ "ModuleRelativePath", "Shapes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShapes_Statics::NewProp_mallaShapes_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Shapes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShapes_Statics::NewProp_mallaShapes = { "mallaShapes", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AShapes, mallaShapes), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShapes_Statics::NewProp_mallaShapes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShapes_Statics::NewProp_mallaShapes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShapes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShapes_Statics::NewProp_mallaShapes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShapes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShapes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShapes_Statics::ClassParams = {
		&AShapes::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShapes_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShapes_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShapes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShapes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShapes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShapes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShapes, 2187016882);
	template<> EJEMPLO1NAVES_API UClass* StaticClass<AShapes>()
	{
		return AShapes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShapes(Z_Construct_UClass_AShapes, &AShapes::StaticClass, TEXT("/Script/Ejemplo1Naves"), TEXT("AShapes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShapes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
