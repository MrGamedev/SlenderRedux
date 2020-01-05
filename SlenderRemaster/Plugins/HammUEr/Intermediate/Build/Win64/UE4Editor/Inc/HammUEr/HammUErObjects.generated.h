// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HAMMUER_HammUErObjects_generated_h
#error "HammUErObjects.generated.h already included, missing '#pragma once' in HammUErObjects.h"
#endif
#define HAMMUER_HammUErObjects_generated_h

#define PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_16_SPARSE_DATA
#define PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_16_RPC_WRAPPERS
#define PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHammuerPathComponent(); \
	friend struct Z_Construct_UClass_UHammuerPathComponent_Statics; \
public: \
	DECLARE_CLASS(UHammuerPathComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HammUEr"), NO_API) \
	DECLARE_SERIALIZER(UHammuerPathComponent)


#define PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUHammuerPathComponent(); \
	friend struct Z_Construct_UClass_UHammuerPathComponent_Statics; \
public: \
	DECLARE_CLASS(UHammuerPathComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HammUEr"), NO_API) \
	DECLARE_SERIALIZER(UHammuerPathComponent)


#define PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHammuerPathComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHammuerPathComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHammuerPathComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHammuerPathComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHammuerPathComponent(UHammuerPathComponent&&); \
	NO_API UHammuerPathComponent(const UHammuerPathComponent&); \
public:


#define PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHammuerPathComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHammuerPathComponent(UHammuerPathComponent&&); \
	NO_API UHammuerPathComponent(const UHammuerPathComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHammuerPathComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHammuerPathComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHammuerPathComponent)


#define PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_16_PRIVATE_PROPERTY_OFFSET
#define PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_13_PROLOG
#define PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_16_PRIVATE_PROPERTY_OFFSET \
	PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_16_SPARSE_DATA \
	PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_16_RPC_WRAPPERS \
	PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_16_INCLASS \
	PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_16_PRIVATE_PROPERTY_OFFSET \
	PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_16_SPARSE_DATA \
	PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_16_INCLASS_NO_PURE_DECLS \
	PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_16_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class HammuerPathComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HAMMUER_API UClass* StaticClass<class UHammuerPathComponent>();

#define PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_24_SPARSE_DATA
#define PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanDraw) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanDraw(); \
		P_NATIVE_END; \
	}


#define PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanDraw) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanDraw(); \
		P_NATIVE_END; \
	}


#define PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHammuerPathNode(); \
	friend struct Z_Construct_UClass_AHammuerPathNode_Statics; \
public: \
	DECLARE_CLASS(AHammuerPathNode, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HammUEr"), NO_API) \
	DECLARE_SERIALIZER(AHammuerPathNode)


#define PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAHammuerPathNode(); \
	friend struct Z_Construct_UClass_AHammuerPathNode_Statics; \
public: \
	DECLARE_CLASS(AHammuerPathNode, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HammUEr"), NO_API) \
	DECLARE_SERIALIZER(AHammuerPathNode)


#define PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHammuerPathNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHammuerPathNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHammuerPathNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHammuerPathNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHammuerPathNode(AHammuerPathNode&&); \
	NO_API AHammuerPathNode(const AHammuerPathNode&); \
public:


#define PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHammuerPathNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHammuerPathNode(AHammuerPathNode&&); \
	NO_API AHammuerPathNode(const AHammuerPathNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHammuerPathNode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHammuerPathNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHammuerPathNode)


#define PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_24_PRIVATE_PROPERTY_OFFSET
#define PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_21_PROLOG
#define PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_24_PRIVATE_PROPERTY_OFFSET \
	PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_24_SPARSE_DATA \
	PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_24_RPC_WRAPPERS \
	PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_24_INCLASS \
	PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_24_PRIVATE_PROPERTY_OFFSET \
	PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_24_SPARSE_DATA \
	PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_24_INCLASS_NO_PURE_DECLS \
	PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h_24_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class HammuerPathNode."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HAMMUER_API UClass* StaticClass<class AHammuerPathNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginUpgrade_Plugins_HammUEr_Source_HammUEr_Classes_HammUErObjects_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
