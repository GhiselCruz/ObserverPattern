// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBSERVERPATTERN_ISuscriptor_generated_h
#error "ISuscriptor.generated.h already included, missing '#pragma once' in ISuscriptor.h"
#endif
#define OBSERVERPATTERN_ISuscriptor_generated_h

#define ObserverPattern_Source_ObserverPattern_ISuscriptor_h_13_SPARSE_DATA
#define ObserverPattern_Source_ObserverPattern_ISuscriptor_h_13_RPC_WRAPPERS
#define ObserverPattern_Source_ObserverPattern_ISuscriptor_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define ObserverPattern_Source_ObserverPattern_ISuscriptor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OBSERVERPATTERN_API UISuscriptor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UISuscriptor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OBSERVERPATTERN_API, UISuscriptor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISuscriptor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	OBSERVERPATTERN_API UISuscriptor(UISuscriptor&&); \
	OBSERVERPATTERN_API UISuscriptor(const UISuscriptor&); \
public:


#define ObserverPattern_Source_ObserverPattern_ISuscriptor_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OBSERVERPATTERN_API UISuscriptor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	OBSERVERPATTERN_API UISuscriptor(UISuscriptor&&); \
	OBSERVERPATTERN_API UISuscriptor(const UISuscriptor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OBSERVERPATTERN_API, UISuscriptor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISuscriptor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UISuscriptor)


#define ObserverPattern_Source_ObserverPattern_ISuscriptor_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUISuscriptor(); \
	friend struct Z_Construct_UClass_UISuscriptor_Statics; \
public: \
	DECLARE_CLASS(UISuscriptor, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ObserverPattern"), OBSERVERPATTERN_API) \
	DECLARE_SERIALIZER(UISuscriptor)


#define ObserverPattern_Source_ObserverPattern_ISuscriptor_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ObserverPattern_Source_ObserverPattern_ISuscriptor_h_13_GENERATED_UINTERFACE_BODY() \
	ObserverPattern_Source_ObserverPattern_ISuscriptor_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ObserverPattern_Source_ObserverPattern_ISuscriptor_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ObserverPattern_Source_ObserverPattern_ISuscriptor_h_13_GENERATED_UINTERFACE_BODY() \
	ObserverPattern_Source_ObserverPattern_ISuscriptor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ObserverPattern_Source_ObserverPattern_ISuscriptor_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IISuscriptor() {} \
public: \
	typedef UISuscriptor UClassType; \
	typedef IISuscriptor ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ObserverPattern_Source_ObserverPattern_ISuscriptor_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IISuscriptor() {} \
public: \
	typedef UISuscriptor UClassType; \
	typedef IISuscriptor ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ObserverPattern_Source_ObserverPattern_ISuscriptor_h_10_PROLOG
#define ObserverPattern_Source_ObserverPattern_ISuscriptor_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ObserverPattern_Source_ObserverPattern_ISuscriptor_h_13_SPARSE_DATA \
	ObserverPattern_Source_ObserverPattern_ISuscriptor_h_13_RPC_WRAPPERS \
	ObserverPattern_Source_ObserverPattern_ISuscriptor_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ObserverPattern_Source_ObserverPattern_ISuscriptor_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ObserverPattern_Source_ObserverPattern_ISuscriptor_h_13_SPARSE_DATA \
	ObserverPattern_Source_ObserverPattern_ISuscriptor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ObserverPattern_Source_ObserverPattern_ISuscriptor_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBSERVERPATTERN_API UClass* StaticClass<class UISuscriptor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ObserverPattern_Source_ObserverPattern_ISuscriptor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
