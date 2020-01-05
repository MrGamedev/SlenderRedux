// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AHammuerLogicActorBase;
struct FHammuerOutput;
#ifdef HAMMUERRUNTIME_HammUErRuntimeClasses_generated_h
#error "HammUErRuntimeClasses.generated.h already included, missing '#pragma once' in HammUErRuntimeClasses.h"
#endif
#define HAMMUERRUNTIME_HammUErRuntimeClasses_generated_h

#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHammuerOutput_Statics; \
	static class UScriptStruct* StaticStruct();


template<> HAMMUERRUNTIME_API UScriptStruct* StaticStruct<struct FHammuerOutput>();

#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_39_SPARSE_DATA
#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_39_RPC_WRAPPERS \
	virtual void DoExecute_Implementation(AHammuerLogicActorBase* myTarget, int32 index); \
 \
	DECLARE_FUNCTION(execGetFriendlyName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetFriendlyName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoExecute) \
	{ \
		P_GET_OBJECT(AHammuerLogicActorBase,Z_Param_myTarget); \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DoExecute_Implementation(Z_Param_myTarget,Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExecuteOutput) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExecuteOutput(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExecuteAll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExecuteAll(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindTargetEntities) \
	{ \
		P_GET_STRUCT(FHammuerOutput,Z_Param_inputOutput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->FindTargetEntities(Z_Param_inputOutput); \
		P_NATIVE_END; \
	}


#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void DoExecute_Implementation(AHammuerLogicActorBase* myTarget, int32 index); \
 \
	DECLARE_FUNCTION(execGetFriendlyName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetFriendlyName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoExecute) \
	{ \
		P_GET_OBJECT(AHammuerLogicActorBase,Z_Param_myTarget); \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DoExecute_Implementation(Z_Param_myTarget,Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExecuteOutput) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExecuteOutput(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExecuteAll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ExecuteAll(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindTargetEntities) \
	{ \
		P_GET_STRUCT(FHammuerOutput,Z_Param_inputOutput); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->FindTargetEntities(Z_Param_inputOutput); \
		P_NATIVE_END; \
	}


#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_39_EVENT_PARMS \
	struct HammuerLogicActorBase_eventDoExecute_Parms \
	{ \
		AHammuerLogicActorBase* myTarget; \
		int32 index; \
	};


#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_39_CALLBACK_WRAPPERS
#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHammuerLogicActorBase(); \
	friend struct Z_Construct_UClass_AHammuerLogicActorBase_Statics; \
public: \
	DECLARE_CLASS(AHammuerLogicActorBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HammUErRuntime"), NO_API) \
	DECLARE_SERIALIZER(AHammuerLogicActorBase) \
	virtual UObject* _getUObject() const override { return const_cast<AHammuerLogicActorBase*>(this); }


#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_39_INCLASS \
private: \
	static void StaticRegisterNativesAHammuerLogicActorBase(); \
	friend struct Z_Construct_UClass_AHammuerLogicActorBase_Statics; \
public: \
	DECLARE_CLASS(AHammuerLogicActorBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HammUErRuntime"), NO_API) \
	DECLARE_SERIALIZER(AHammuerLogicActorBase) \
	virtual UObject* _getUObject() const override { return const_cast<AHammuerLogicActorBase*>(this); }


#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHammuerLogicActorBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHammuerLogicActorBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHammuerLogicActorBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHammuerLogicActorBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHammuerLogicActorBase(AHammuerLogicActorBase&&); \
	NO_API AHammuerLogicActorBase(const AHammuerLogicActorBase&); \
public:


#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHammuerLogicActorBase(AHammuerLogicActorBase&&); \
	NO_API AHammuerLogicActorBase(const AHammuerLogicActorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHammuerLogicActorBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHammuerLogicActorBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHammuerLogicActorBase)


#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_39_PRIVATE_PROPERTY_OFFSET
#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_36_PROLOG \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_39_EVENT_PARMS


#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_39_PRIVATE_PROPERTY_OFFSET \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_39_SPARSE_DATA \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_39_RPC_WRAPPERS \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_39_CALLBACK_WRAPPERS \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_39_INCLASS \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_39_PRIVATE_PROPERTY_OFFSET \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_39_SPARSE_DATA \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_39_CALLBACK_WRAPPERS \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_39_INCLASS_NO_PURE_DECLS \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HAMMUERRUNTIME_API UClass* StaticClass<class AHammuerLogicActorBase>();

#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_78_SPARSE_DATA
#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_78_RPC_WRAPPERS
#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_78_RPC_WRAPPERS_NO_PURE_DECLS
#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHammuerLogicAuto(); \
	friend struct Z_Construct_UClass_AHammuerLogicAuto_Statics; \
public: \
	DECLARE_CLASS(AHammuerLogicAuto, AHammuerLogicActorBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HammUErRuntime"), NO_API) \
	DECLARE_SERIALIZER(AHammuerLogicAuto)


#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_78_INCLASS \
private: \
	static void StaticRegisterNativesAHammuerLogicAuto(); \
	friend struct Z_Construct_UClass_AHammuerLogicAuto_Statics; \
public: \
	DECLARE_CLASS(AHammuerLogicAuto, AHammuerLogicActorBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HammUErRuntime"), NO_API) \
	DECLARE_SERIALIZER(AHammuerLogicAuto)


#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_78_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHammuerLogicAuto(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHammuerLogicAuto) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHammuerLogicAuto); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHammuerLogicAuto); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHammuerLogicAuto(AHammuerLogicAuto&&); \
	NO_API AHammuerLogicAuto(const AHammuerLogicAuto&); \
public:


#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_78_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHammuerLogicAuto(AHammuerLogicAuto&&); \
	NO_API AHammuerLogicAuto(const AHammuerLogicAuto&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHammuerLogicAuto); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHammuerLogicAuto); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHammuerLogicAuto)


#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_78_PRIVATE_PROPERTY_OFFSET
#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_75_PROLOG
#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_78_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_78_PRIVATE_PROPERTY_OFFSET \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_78_SPARSE_DATA \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_78_RPC_WRAPPERS \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_78_INCLASS \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_78_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_78_PRIVATE_PROPERTY_OFFSET \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_78_SPARSE_DATA \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_78_INCLASS_NO_PURE_DECLS \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HAMMUERRUNTIME_API UClass* StaticClass<class AHammuerLogicAuto>();

#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_88_SPARSE_DATA
#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_88_RPC_WRAPPERS \
	virtual void Trigger_Implementation(); \
 \
	DECLARE_FUNCTION(execTrigger) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Trigger_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Disable(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Enable(); \
		P_NATIVE_END; \
	}


#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Trigger_Implementation(); \
 \
	DECLARE_FUNCTION(execTrigger) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Trigger_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Disable(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Enable(); \
		P_NATIVE_END; \
	}


#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_88_EVENT_PARMS
#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_88_CALLBACK_WRAPPERS
#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHammuerLogicRelay(); \
	friend struct Z_Construct_UClass_AHammuerLogicRelay_Statics; \
public: \
	DECLARE_CLASS(AHammuerLogicRelay, AHammuerLogicActorBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HammUErRuntime"), NO_API) \
	DECLARE_SERIALIZER(AHammuerLogicRelay)


#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_88_INCLASS \
private: \
	static void StaticRegisterNativesAHammuerLogicRelay(); \
	friend struct Z_Construct_UClass_AHammuerLogicRelay_Statics; \
public: \
	DECLARE_CLASS(AHammuerLogicRelay, AHammuerLogicActorBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HammUErRuntime"), NO_API) \
	DECLARE_SERIALIZER(AHammuerLogicRelay)


#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_88_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHammuerLogicRelay(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHammuerLogicRelay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHammuerLogicRelay); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHammuerLogicRelay); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHammuerLogicRelay(AHammuerLogicRelay&&); \
	NO_API AHammuerLogicRelay(const AHammuerLogicRelay&); \
public:


#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_88_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHammuerLogicRelay(AHammuerLogicRelay&&); \
	NO_API AHammuerLogicRelay(const AHammuerLogicRelay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHammuerLogicRelay); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHammuerLogicRelay); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHammuerLogicRelay)


#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_88_PRIVATE_PROPERTY_OFFSET
#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_85_PROLOG \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_88_EVENT_PARMS


#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_88_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_88_PRIVATE_PROPERTY_OFFSET \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_88_SPARSE_DATA \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_88_RPC_WRAPPERS \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_88_CALLBACK_WRAPPERS \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_88_INCLASS \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_88_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_88_PRIVATE_PROPERTY_OFFSET \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_88_SPARSE_DATA \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_88_CALLBACK_WRAPPERS \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_88_INCLASS_NO_PURE_DECLS \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HAMMUERRUNTIME_API UClass* StaticClass<class AHammuerLogicRelay>();

#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_114_SPARSE_DATA
#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_114_RPC_WRAPPERS
#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_114_RPC_WRAPPERS_NO_PURE_DECLS
#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_114_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHammuerFuncBrushActor(); \
	friend struct Z_Construct_UClass_AHammuerFuncBrushActor_Statics; \
public: \
	DECLARE_CLASS(AHammuerFuncBrushActor, AHammuerLogicActorBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HammUErRuntime"), NO_API) \
	DECLARE_SERIALIZER(AHammuerFuncBrushActor)


#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_114_INCLASS \
private: \
	static void StaticRegisterNativesAHammuerFuncBrushActor(); \
	friend struct Z_Construct_UClass_AHammuerFuncBrushActor_Statics; \
public: \
	DECLARE_CLASS(AHammuerFuncBrushActor, AHammuerLogicActorBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HammUErRuntime"), NO_API) \
	DECLARE_SERIALIZER(AHammuerFuncBrushActor)


#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_114_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHammuerFuncBrushActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHammuerFuncBrushActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHammuerFuncBrushActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHammuerFuncBrushActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHammuerFuncBrushActor(AHammuerFuncBrushActor&&); \
	NO_API AHammuerFuncBrushActor(const AHammuerFuncBrushActor&); \
public:


#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_114_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHammuerFuncBrushActor(AHammuerFuncBrushActor&&); \
	NO_API AHammuerFuncBrushActor(const AHammuerFuncBrushActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHammuerFuncBrushActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHammuerFuncBrushActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHammuerFuncBrushActor)


#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_114_PRIVATE_PROPERTY_OFFSET
#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_111_PROLOG
#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_114_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_114_PRIVATE_PROPERTY_OFFSET \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_114_SPARSE_DATA \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_114_RPC_WRAPPERS \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_114_INCLASS \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_114_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_114_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_114_PRIVATE_PROPERTY_OFFSET \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_114_SPARSE_DATA \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_114_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_114_INCLASS_NO_PURE_DECLS \
	PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h_114_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HAMMUERRUNTIME_API UClass* StaticClass<class AHammuerFuncBrushActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginUpgrade_Plugins_HammUEr_Source_HammUErRuntime_Public_HammUErRuntimeClasses_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
