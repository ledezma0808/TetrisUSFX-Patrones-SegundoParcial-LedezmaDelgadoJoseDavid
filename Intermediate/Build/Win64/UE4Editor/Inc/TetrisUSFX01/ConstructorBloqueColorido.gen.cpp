// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/PBuilder/ConstructorBloqueColorido.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstructorBloqueColorido() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AConstructorBloqueColorido_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AConstructorBloqueColorido();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABloqueGeneral();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABloqueGeneral_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UConstructorBloque_NoRegister();
// End Cross Module References
	void AConstructorBloqueColorido::StaticRegisterNativesAConstructorBloqueColorido()
	{
	}
	UClass* Z_Construct_UClass_AConstructorBloqueColorido_NoRegister()
	{
		return AConstructorBloqueColorido::StaticClass();
	}
	struct Z_Construct_UClass_AConstructorBloqueColorido_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloqueGeneral_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BloqueGeneral;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialColorido_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialColorido;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConstructorBloqueColorido_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABloqueGeneral,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConstructorBloqueColorido_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PBuilder/ConstructorBloqueColorido.h" },
		{ "ModuleRelativePath", "PBuilder/ConstructorBloqueColorido.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConstructorBloqueColorido_Statics::NewProp_BloqueGeneral_MetaData[] = {
		{ "Category", "El Bloque general" },
		{ "ModuleRelativePath", "PBuilder/ConstructorBloqueColorido.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConstructorBloqueColorido_Statics::NewProp_BloqueGeneral = { "BloqueGeneral", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConstructorBloqueColorido, BloqueGeneral), Z_Construct_UClass_ABloqueGeneral_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConstructorBloqueColorido_Statics::NewProp_BloqueGeneral_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConstructorBloqueColorido_Statics::NewProp_BloqueGeneral_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConstructorBloqueColorido_Statics::NewProp_MaterialColorido_MetaData[] = {
		{ "Category", "Materiales" },
		{ "ModuleRelativePath", "PBuilder/ConstructorBloqueColorido.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConstructorBloqueColorido_Statics::NewProp_MaterialColorido = { "MaterialColorido", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConstructorBloqueColorido, MaterialColorido), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConstructorBloqueColorido_Statics::NewProp_MaterialColorido_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConstructorBloqueColorido_Statics::NewProp_MaterialColorido_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AConstructorBloqueColorido_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConstructorBloqueColorido_Statics::NewProp_BloqueGeneral,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConstructorBloqueColorido_Statics::NewProp_MaterialColorido,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AConstructorBloqueColorido_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UConstructorBloque_NoRegister, (int32)VTABLE_OFFSET(AConstructorBloqueColorido, IConstructorBloque), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConstructorBloqueColorido_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConstructorBloqueColorido>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AConstructorBloqueColorido_Statics::ClassParams = {
		&AConstructorBloqueColorido::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AConstructorBloqueColorido_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AConstructorBloqueColorido_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AConstructorBloqueColorido_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AConstructorBloqueColorido_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AConstructorBloqueColorido()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AConstructorBloqueColorido_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AConstructorBloqueColorido, 3353343931);
	template<> TETRISUSFX01_API UClass* StaticClass<AConstructorBloqueColorido>()
	{
		return AConstructorBloqueColorido::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AConstructorBloqueColorido(Z_Construct_UClass_AConstructorBloqueColorido, &AConstructorBloqueColorido::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AConstructorBloqueColorido"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConstructorBloqueColorido);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
