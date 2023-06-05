// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/PBuilder/ConstructorBloqueFuego.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstructorBloqueFuego() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_AConstructorBloqueFuego_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_AConstructorBloqueFuego();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABloqueGeneral();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABloqueGeneral_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UConstructorBloque_NoRegister();
// End Cross Module References
	void AConstructorBloqueFuego::StaticRegisterNativesAConstructorBloqueFuego()
	{
	}
	UClass* Z_Construct_UClass_AConstructorBloqueFuego_NoRegister()
	{
		return AConstructorBloqueFuego::StaticClass();
	}
	struct Z_Construct_UClass_AConstructorBloqueFuego_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConstructorBloqueFuego_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABloqueGeneral,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConstructorBloqueFuego_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PBuilder/ConstructorBloqueFuego.h" },
		{ "ModuleRelativePath", "PBuilder/ConstructorBloqueFuego.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConstructorBloqueFuego_Statics::NewProp_BloqueGeneral_MetaData[] = {
		{ "Category", "El Bloque general" },
		{ "ModuleRelativePath", "PBuilder/ConstructorBloqueFuego.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConstructorBloqueFuego_Statics::NewProp_BloqueGeneral = { "BloqueGeneral", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConstructorBloqueFuego, BloqueGeneral), Z_Construct_UClass_ABloqueGeneral_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConstructorBloqueFuego_Statics::NewProp_BloqueGeneral_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConstructorBloqueFuego_Statics::NewProp_BloqueGeneral_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConstructorBloqueFuego_Statics::NewProp_Material1_MetaData[] = {
		{ "Category", "Materiales" },
		{ "ModuleRelativePath", "PBuilder/ConstructorBloqueFuego.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConstructorBloqueFuego_Statics::NewProp_Material1 = { "Material1", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConstructorBloqueFuego, Material1), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConstructorBloqueFuego_Statics::NewProp_Material1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConstructorBloqueFuego_Statics::NewProp_Material1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AConstructorBloqueFuego_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConstructorBloqueFuego_Statics::NewProp_BloqueGeneral,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConstructorBloqueFuego_Statics::NewProp_Material1,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AConstructorBloqueFuego_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UConstructorBloque_NoRegister, (int32)VTABLE_OFFSET(AConstructorBloqueFuego, IConstructorBloque), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConstructorBloqueFuego_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConstructorBloqueFuego>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AConstructorBloqueFuego_Statics::ClassParams = {
		&AConstructorBloqueFuego::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AConstructorBloqueFuego_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AConstructorBloqueFuego_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AConstructorBloqueFuego_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AConstructorBloqueFuego_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AConstructorBloqueFuego()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AConstructorBloqueFuego_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AConstructorBloqueFuego, 3334636591);
	template<> TETRISUSFX01_API UClass* StaticClass<AConstructorBloqueFuego>()
	{
		return AConstructorBloqueFuego::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AConstructorBloqueFuego(Z_Construct_UClass_AConstructorBloqueFuego, &AConstructorBloqueFuego::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("AConstructorBloqueFuego"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConstructorBloqueFuego);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
