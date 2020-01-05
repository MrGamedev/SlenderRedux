// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HammUEr/Classes/HammUErObjects.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHammUErObjects() {}
// Cross Module References
	HAMMUER_API UClass* Z_Construct_UClass_UHammuerPathComponent_NoRegister();
	HAMMUER_API UClass* Z_Construct_UClass_UHammuerPathComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_HammUEr();
	HAMMUER_API UClass* Z_Construct_UClass_AHammuerPathNode_NoRegister();
	HAMMUER_API UClass* Z_Construct_UClass_AHammuerPathNode();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	HAMMUER_API UFunction* Z_Construct_UFunction_AHammuerPathNode_CanDraw();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	void UHammuerPathComponent::StaticRegisterNativesUHammuerPathComponent()
	{
	}
	UClass* Z_Construct_UClass_UHammuerPathComponent_NoRegister()
	{
		return UHammuerPathComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHammuerPathComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHammuerPathComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HammUEr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHammuerPathComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "HammUErObjects.h" },
		{ "ModuleRelativePath", "Classes/HammUErObjects.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHammuerPathComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHammuerPathComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHammuerPathComponent_Statics::ClassParams = {
		&UHammuerPathComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHammuerPathComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHammuerPathComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHammuerPathComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHammuerPathComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHammuerPathComponent, 661751279);
	template<> HAMMUER_API UClass* StaticClass<UHammuerPathComponent>()
	{
		return UHammuerPathComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHammuerPathComponent(Z_Construct_UClass_UHammuerPathComponent, &UHammuerPathComponent::StaticClass, TEXT("/Script/HammUEr"), TEXT("UHammuerPathComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHammuerPathComponent);
	void AHammuerPathNode::StaticRegisterNativesAHammuerPathNode()
	{
		UClass* Class = AHammuerPathNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanDraw", &AHammuerPathNode::execCanDraw },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHammuerPathNode_CanDraw_Statics
	{
		struct HammuerPathNode_eventCanDraw_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AHammuerPathNode_CanDraw_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HammuerPathNode_eventCanDraw_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHammuerPathNode_CanDraw_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HammuerPathNode_eventCanDraw_Parms), &Z_Construct_UFunction_AHammuerPathNode_CanDraw_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHammuerPathNode_CanDraw_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHammuerPathNode_CanDraw_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHammuerPathNode_CanDraw_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/HammUErObjects.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHammuerPathNode_CanDraw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHammuerPathNode, nullptr, "CanDraw", nullptr, nullptr, sizeof(HammuerPathNode_eventCanDraw_Parms), Z_Construct_UFunction_AHammuerPathNode_CanDraw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHammuerPathNode_CanDraw_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHammuerPathNode_CanDraw_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHammuerPathNode_CanDraw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHammuerPathNode_CanDraw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHammuerPathNode_CanDraw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHammuerPathNode_NoRegister()
	{
		return AHammuerPathNode::StaticClass();
	}
	struct Z_Construct_UClass_AHammuerPathNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pathThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_pathThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pathColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pathColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nextTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_nextTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHammuerPathNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HammUEr,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHammuerPathNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHammuerPathNode_CanDraw, "CanDraw" }, // 973426436
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHammuerPathNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HammUErObjects.h" },
		{ "ModuleRelativePath", "Classes/HammUErObjects.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHammuerPathNode_Statics::NewProp_pathThickness_MetaData[] = {
		{ "Category", "HammUEr" },
		{ "ModuleRelativePath", "Classes/HammUErObjects.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHammuerPathNode_Statics::NewProp_pathThickness = { "pathThickness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHammuerPathNode, pathThickness), METADATA_PARAMS(Z_Construct_UClass_AHammuerPathNode_Statics::NewProp_pathThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHammuerPathNode_Statics::NewProp_pathThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHammuerPathNode_Statics::NewProp_pathColor_MetaData[] = {
		{ "Category", "HammUEr" },
		{ "ModuleRelativePath", "Classes/HammUErObjects.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHammuerPathNode_Statics::NewProp_pathColor = { "pathColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHammuerPathNode, pathColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AHammuerPathNode_Statics::NewProp_pathColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHammuerPathNode_Statics::NewProp_pathColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHammuerPathNode_Statics::NewProp_nextTarget_MetaData[] = {
		{ "Category", "HammUEr" },
		{ "ModuleRelativePath", "Classes/HammUErObjects.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHammuerPathNode_Statics::NewProp_nextTarget = { "nextTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHammuerPathNode, nextTarget), Z_Construct_UClass_AHammuerPathNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHammuerPathNode_Statics::NewProp_nextTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHammuerPathNode_Statics::NewProp_nextTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHammuerPathNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHammuerPathNode_Statics::NewProp_pathThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHammuerPathNode_Statics::NewProp_pathColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHammuerPathNode_Statics::NewProp_nextTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHammuerPathNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHammuerPathNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHammuerPathNode_Statics::ClassParams = {
		&AHammuerPathNode::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHammuerPathNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHammuerPathNode_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHammuerPathNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHammuerPathNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHammuerPathNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHammuerPathNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHammuerPathNode, 1387021216);
	template<> HAMMUER_API UClass* StaticClass<AHammuerPathNode>()
	{
		return AHammuerPathNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHammuerPathNode(Z_Construct_UClass_AHammuerPathNode, &AHammuerPathNode::StaticClass, TEXT("/Script/HammUEr"), TEXT("AHammuerPathNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHammuerPathNode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
