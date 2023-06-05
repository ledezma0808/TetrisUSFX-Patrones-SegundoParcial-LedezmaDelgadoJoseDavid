// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/Piece.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePiece() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_APiece_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_APiece();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UAdaptadorMovimientoAleatorio_CA_NoRegister();
// End Cross Module References
	void APiece::StaticRegisterNativesAPiece()
	{
	}
	UClass* Z_Construct_UClass_APiece_NoRegister()
	{
		return APiece::StaticClass();
	}
	struct Z_Construct_UClass_APiece_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Colors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Colors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdaptadorMovimientoAleatorio_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdaptadorMovimientoAleatorio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APiece_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APiece_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Piece.h" },
		{ "ModuleRelativePath", "Piece.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APiece_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Piece.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APiece_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APiece, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APiece_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APiece_Statics::NewProp_SceneComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APiece_Statics::NewProp_Colors_Inner = { "Colors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APiece_Statics::NewProp_Colors_MetaData[] = {
		{ "Category", "Piece" },
		{ "ModuleRelativePath", "Piece.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APiece_Statics::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APiece, Colors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APiece_Statics::NewProp_Colors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APiece_Statics::NewProp_Colors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APiece_Statics::NewProp_AdaptadorMovimientoAleatorio_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Piece.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APiece_Statics::NewProp_AdaptadorMovimientoAleatorio = { "AdaptadorMovimientoAleatorio", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APiece, AdaptadorMovimientoAleatorio), Z_Construct_UClass_UAdaptadorMovimientoAleatorio_CA_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APiece_Statics::NewProp_AdaptadorMovimientoAleatorio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APiece_Statics::NewProp_AdaptadorMovimientoAleatorio_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APiece_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APiece_Statics::NewProp_SceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APiece_Statics::NewProp_Colors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APiece_Statics::NewProp_Colors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APiece_Statics::NewProp_AdaptadorMovimientoAleatorio,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APiece_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APiece>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APiece_Statics::ClassParams = {
		&APiece::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APiece_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APiece_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APiece_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APiece_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APiece()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APiece_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APiece, 2684511094);
	template<> TETRISUSFX01_API UClass* StaticClass<APiece>()
	{
		return APiece::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APiece(Z_Construct_UClass_APiece, &APiece::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("APiece"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APiece);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
