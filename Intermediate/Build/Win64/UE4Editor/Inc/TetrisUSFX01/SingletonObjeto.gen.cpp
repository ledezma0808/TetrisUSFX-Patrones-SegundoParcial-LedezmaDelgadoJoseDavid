// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/PSingleton/SingletonObjeto.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSingletonObjeto() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ASingletonObjeto_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ASingletonObjeto();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ASingletonObjeto::StaticRegisterNativesASingletonObjeto()
	{
	}
	UClass* Z_Construct_UClass_ASingletonObjeto_NoRegister()
	{
		return ASingletonObjeto::StaticClass();
	}
	struct Z_Construct_UClass_ASingletonObjeto_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instancia_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instancia;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshObjeto_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshObjeto;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASingletonObjeto_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingletonObjeto_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PSingleton/SingletonObjeto.h" },
		{ "ModuleRelativePath", "PSingleton/SingletonObjeto.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingletonObjeto_Statics::NewProp_Instancia_MetaData[] = {
		{ "ModuleRelativePath", "PSingleton/SingletonObjeto.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingletonObjeto_Statics::NewProp_Instancia = { "Instancia", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingletonObjeto, Instancia), Z_Construct_UClass_ASingletonObjeto_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingletonObjeto_Statics::NewProp_Instancia_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingletonObjeto_Statics::NewProp_Instancia_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASingletonObjeto_Statics::NewProp_MeshObjeto_MetaData[] = {
		{ "Category", "SingletonObjeto" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PSingleton/SingletonObjeto.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASingletonObjeto_Statics::NewProp_MeshObjeto = { "MeshObjeto", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASingletonObjeto, MeshObjeto), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASingletonObjeto_Statics::NewProp_MeshObjeto_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASingletonObjeto_Statics::NewProp_MeshObjeto_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASingletonObjeto_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingletonObjeto_Statics::NewProp_Instancia,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASingletonObjeto_Statics::NewProp_MeshObjeto,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASingletonObjeto_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASingletonObjeto>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASingletonObjeto_Statics::ClassParams = {
		&ASingletonObjeto::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASingletonObjeto_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASingletonObjeto_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASingletonObjeto_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASingletonObjeto_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASingletonObjeto()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASingletonObjeto_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASingletonObjeto, 1611821204);
	template<> TETRISUSFX01_API UClass* StaticClass<ASingletonObjeto>()
	{
		return ASingletonObjeto::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASingletonObjeto(Z_Construct_UClass_ASingletonObjeto, &ASingletonObjeto::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ASingletonObjeto"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASingletonObjeto);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
