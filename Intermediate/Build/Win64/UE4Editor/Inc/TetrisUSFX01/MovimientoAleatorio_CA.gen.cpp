// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/PAdapter/MovimientoAleatorio_CA.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovimientoAleatorio_CA() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_UMovimientoAleatorio_CA_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UMovimientoAleatorio_CA();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
// End Cross Module References
	void UMovimientoAleatorio_CA::StaticRegisterNativesUMovimientoAleatorio_CA()
	{
	}
	UClass* Z_Construct_UClass_UMovimientoAleatorio_CA_NoRegister()
	{
		return UMovimientoAleatorio_CA::StaticClass();
	}
	struct Z_Construct_UClass_UMovimientoAleatorio_CA_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadioMovimiento_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RadioMovimiento;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovimientoAleatorio_CA_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovimientoAleatorio_CA_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PAdapter/MovimientoAleatorio_CA.h" },
		{ "ModuleRelativePath", "PAdapter/MovimientoAleatorio_CA.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovimientoAleatorio_CA_Statics::NewProp_RadioMovimiento_MetaData[] = {
		{ "ModuleRelativePath", "PAdapter/MovimientoAleatorio_CA.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovimientoAleatorio_CA_Statics::NewProp_RadioMovimiento = { "RadioMovimiento", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovimientoAleatorio_CA, RadioMovimiento), METADATA_PARAMS(Z_Construct_UClass_UMovimientoAleatorio_CA_Statics::NewProp_RadioMovimiento_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovimientoAleatorio_CA_Statics::NewProp_RadioMovimiento_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovimientoAleatorio_CA_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovimientoAleatorio_CA_Statics::NewProp_RadioMovimiento,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovimientoAleatorio_CA_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovimientoAleatorio_CA>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovimientoAleatorio_CA_Statics::ClassParams = {
		&UMovimientoAleatorio_CA::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovimientoAleatorio_CA_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovimientoAleatorio_CA_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMovimientoAleatorio_CA_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovimientoAleatorio_CA_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovimientoAleatorio_CA()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovimientoAleatorio_CA_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovimientoAleatorio_CA, 746885109);
	template<> TETRISUSFX01_API UClass* StaticClass<UMovimientoAleatorio_CA>()
	{
		return UMovimientoAleatorio_CA::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovimientoAleatorio_CA(Z_Construct_UClass_UMovimientoAleatorio_CA, &UMovimientoAleatorio_CA::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("UMovimientoAleatorio_CA"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovimientoAleatorio_CA);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
