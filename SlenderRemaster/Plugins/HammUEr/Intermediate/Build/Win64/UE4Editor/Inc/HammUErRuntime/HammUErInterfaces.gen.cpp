// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HammUErRuntime/Public/HammUErInterfaces.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHammUErInterfaces() {}
// Cross Module References
	HAMMUERRUNTIME_API UClass* Z_Construct_UClass_UHammuerLogicInterface_NoRegister();
	HAMMUERRUNTIME_API UClass* Z_Construct_UClass_UHammuerLogicInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_HammUErRuntime();
// End Cross Module References
	void UHammuerLogicInterface::StaticRegisterNativesUHammuerLogicInterface()
	{
	}
	UClass* Z_Construct_UClass_UHammuerLogicInterface_NoRegister()
	{
		return UHammuerLogicInterface::StaticClass();
	}
	struct Z_Construct_UClass_UHammuerLogicInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHammuerLogicInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_HammUErRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHammuerLogicInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HammUErInterfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHammuerLogicInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IHammuerLogicInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHammuerLogicInterface_Statics::ClassParams = {
		&UHammuerLogicInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHammuerLogicInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHammuerLogicInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHammuerLogicInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHammuerLogicInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHammuerLogicInterface, 2439652294);
	template<> HAMMUERRUNTIME_API UClass* StaticClass<UHammuerLogicInterface>()
	{
		return UHammuerLogicInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHammuerLogicInterface(Z_Construct_UClass_UHammuerLogicInterface, &UHammuerLogicInterface::StaticClass, TEXT("/Script/HammUErRuntime"), TEXT("UHammuerLogicInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHammuerLogicInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
