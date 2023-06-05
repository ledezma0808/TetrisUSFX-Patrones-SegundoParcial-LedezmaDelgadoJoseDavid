// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/PBuilder/ConstructorBloque.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstructorBloque() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_UConstructorBloque_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UConstructorBloque();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void UConstructorBloque::StaticRegisterNativesUConstructorBloque()
	{
	}
	UClass* Z_Construct_UClass_UConstructorBloque_NoRegister()
	{
		return UConstructorBloque::StaticClass();
	}
	struct Z_Construct_UClass_UConstructorBloque_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConstructorBloque_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstructorBloque_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "PBuilder/ConstructorBloque.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConstructorBloque_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IConstructorBloque>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConstructorBloque_Statics::ClassParams = {
		&UConstructorBloque::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UConstructorBloque_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConstructorBloque_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConstructorBloque()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConstructorBloque_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConstructorBloque, 2669399648);
	template<> TETRISUSFX01_API UClass* StaticClass<UConstructorBloque>()
	{
		return UConstructorBloque::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConstructorBloque(Z_Construct_UClass_UConstructorBloque, &UConstructorBloque::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("UConstructorBloque"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConstructorBloque);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
