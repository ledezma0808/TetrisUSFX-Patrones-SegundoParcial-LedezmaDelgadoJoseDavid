// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetrisUSFX01/PBuilder/BloqueGeneral.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueGeneral() {}
// Cross Module References
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABloqueGeneral_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_ABloqueGeneral();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TetrisUSFX01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	TETRISUSFX01_API UClass* Z_Construct_UClass_UPlanoBloque_NoRegister();
// End Cross Module References
	void ABloqueGeneral::StaticRegisterNativesABloqueGeneral()
	{
	}
	UClass* Z_Construct_UClass_ABloqueGeneral_NoRegister()
	{
		return ABloqueGeneral::StaticClass();
	}
	struct Z_Construct_UClass_ABloqueGeneral_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshBloqueGeneral_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshBloqueGeneral;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABloqueGeneral_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TetrisUSFX01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloqueGeneral_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PBuilder/BloqueGeneral.h" },
		{ "ModuleRelativePath", "PBuilder/BloqueGeneral.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABloqueGeneral_Statics::NewProp_MeshBloqueGeneral_MetaData[] = {
		{ "Category", "BloqueGeneral" },
		{ "Comment", "//UStaticMeshComponent* Mesh;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PBuilder/BloqueGeneral.h" },
		{ "ToolTip", "UStaticMeshComponent* Mesh;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloqueGeneral_Statics::NewProp_MeshBloqueGeneral = { "MeshBloqueGeneral", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABloqueGeneral, MeshBloqueGeneral), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABloqueGeneral_Statics::NewProp_MeshBloqueGeneral_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueGeneral_Statics::NewProp_MeshBloqueGeneral_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloqueGeneral_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueGeneral_Statics::NewProp_MeshBloqueGeneral,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABloqueGeneral_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPlanoBloque_NoRegister, (int32)VTABLE_OFFSET(ABloqueGeneral, IPlanoBloque), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABloqueGeneral_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueGeneral>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABloqueGeneral_Statics::ClassParams = {
		&ABloqueGeneral::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABloqueGeneral_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueGeneral_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABloqueGeneral_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueGeneral_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABloqueGeneral()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABloqueGeneral_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABloqueGeneral, 3030872504);
	template<> TETRISUSFX01_API UClass* StaticClass<ABloqueGeneral>()
	{
		return ABloqueGeneral::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABloqueGeneral(Z_Construct_UClass_ABloqueGeneral, &ABloqueGeneral::StaticClass, TEXT("/Script/TetrisUSFX01"), TEXT("ABloqueGeneral"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueGeneral);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
