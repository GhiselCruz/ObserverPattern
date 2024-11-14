// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBSERVERPATTERN_IAccionEnemiga_generated_h
#error "IAccionEnemiga.generated.h already included, missing '#pragma once' in IAccionEnemiga.h"
#endif
#define OBSERVERPATTERN_IAccionEnemiga_generated_h

#define ObserverPattern_Source_ObserverPattern_IAccionEnemiga_h_13_SPARSE_DATA
#define ObserverPattern_Source_ObserverPattern_IAccionEnemiga_h_13_RPC_WRAPPERS
#define ObserverPattern_Source_ObserverPattern_IAccionEnemiga_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define ObserverPattern_Source_ObserverPattern_IAccionEnemiga_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OBSERVERPATTERN_API UIAccionEnemiga(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIAccionEnemiga) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OBSERVERPATTERN_API, UIAccionEnemiga); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIAccionEnemiga); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	OBSERVERPATTERN_API UIAccionEnemiga(UIAccionEnemiga&&); \
	OBSERVERPATTERN_API UIAccionEnemiga(const UIAccionEnemiga&); \
public:


#define ObserverPattern_Source_ObserverPattern_IAccionEnemiga_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OBSERVERPATTERN_API UIAccionEnemiga(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	OBSERVERPATTERN_API UIAccionEnemiga(UIAccionEnemiga&&); \
	OBSERVERPATTERN_API UIAccionEnemiga(const UIAccionEnemiga&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OBSERVERPATTERN_API, UIAccionEnemiga); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIAccionEnemiga); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIAccionEnemiga)


#define ObserverPattern_Source_ObserverPattern_IAccionEnemiga_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIAccionEnemiga(); \
	friend struct Z_Construct_UClass_UIAccionEnemiga_Statics; \
public: \
	DECLARE_CLASS(UIAccionEnemiga, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ObserverPattern"), OBSERVERPATTERN_API) \
	DECLARE_SERIALIZER(UIAccionEnemiga)


#define ObserverPattern_Source_ObserverPattern_IAccionEnemiga_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ObserverPattern_Source_ObserverPattern_IAccionEnemiga_h_13_GENERATED_UINTERFACE_BODY() \
	ObserverPattern_Source_ObserverPattern_IAccionEnemiga_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ObserverPattern_Source_ObserverPattern_IAccionEnemiga_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ObserverPattern_Source_ObserverPattern_IAccionEnemiga_h_13_GENERATED_UINTERFACE_BODY() \
	ObserverPattern_Source_ObserverPattern_IAccionEnemiga_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ObserverPattern_Source_ObserverPattern_IAccionEnemiga_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIAccionEnemiga() {} \
public: \
	typedef UIAccionEnemiga UClassType; \
	typedef IIAccionEnemiga ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ObserverPattern_Source_ObserverPattern_IAccionEnemiga_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IIAccionEnemiga() {} \
public: \
	typedef UIAccionEnemiga UClassType; \
	typedef IIAccionEnemiga ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ObserverPattern_Source_ObserverPattern_IAccionEnemiga_h_10_PROLOG
#define ObserverPattern_Source_ObserverPattern_IAccionEnemiga_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ObserverPattern_Source_ObserverPattern_IAccionEnemiga_h_13_SPARSE_DATA \
	ObserverPattern_Source_ObserverPattern_IAccionEnemiga_h_13_RPC_WRAPPERS \
	ObserverPattern_Source_ObserverPattern_IAccionEnemiga_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ObserverPattern_Source_ObserverPattern_IAccionEnemiga_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ObserverPattern_Source_ObserverPattern_IAccionEnemiga_h_13_SPARSE_DATA \
	ObserverPattern_Source_ObserverPattern_IAccionEnemiga_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ObserverPattern_Source_ObserverPattern_IAccionEnemiga_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBSERVERPATTERN_API UClass* StaticClass<class UIAccionEnemiga>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ObserverPattern_Source_ObserverPattern_IAccionEnemiga_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
