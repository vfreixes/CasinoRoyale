// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CARDDEALER_CardDealerCharacter_generated_h
#error "CardDealerCharacter.generated.h already included, missing '#pragma once' in CardDealerCharacter.h"
#endif
#define CARDDEALER_CardDealerCharacter_generated_h

#define CardDealer_Source_CardDealer_CardDealerCharacter_h_12_RPC_WRAPPERS
#define CardDealer_Source_CardDealer_CardDealerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define CardDealer_Source_CardDealer_CardDealerCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACardDealerCharacter(); \
	friend CARDDEALER_API class UClass* Z_Construct_UClass_ACardDealerCharacter(); \
public: \
	DECLARE_CLASS(ACardDealerCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CardDealer"), NO_API) \
	DECLARE_SERIALIZER(ACardDealerCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CardDealer_Source_CardDealer_CardDealerCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACardDealerCharacter(); \
	friend CARDDEALER_API class UClass* Z_Construct_UClass_ACardDealerCharacter(); \
public: \
	DECLARE_CLASS(ACardDealerCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CardDealer"), NO_API) \
	DECLARE_SERIALIZER(ACardDealerCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CardDealer_Source_CardDealer_CardDealerCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACardDealerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACardDealerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACardDealerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACardDealerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACardDealerCharacter(ACardDealerCharacter&&); \
	NO_API ACardDealerCharacter(const ACardDealerCharacter&); \
public:


#define CardDealer_Source_CardDealer_CardDealerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACardDealerCharacter(ACardDealerCharacter&&); \
	NO_API ACardDealerCharacter(const ACardDealerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACardDealerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACardDealerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACardDealerCharacter)


#define CardDealer_Source_CardDealer_CardDealerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(ACardDealerCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ACardDealerCharacter, CameraBoom); }


#define CardDealer_Source_CardDealer_CardDealerCharacter_h_9_PROLOG
#define CardDealer_Source_CardDealer_CardDealerCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CardDealer_Source_CardDealer_CardDealerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	CardDealer_Source_CardDealer_CardDealerCharacter_h_12_RPC_WRAPPERS \
	CardDealer_Source_CardDealer_CardDealerCharacter_h_12_INCLASS \
	CardDealer_Source_CardDealer_CardDealerCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CardDealer_Source_CardDealer_CardDealerCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CardDealer_Source_CardDealer_CardDealerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	CardDealer_Source_CardDealer_CardDealerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CardDealer_Source_CardDealer_CardDealerCharacter_h_12_INCLASS_NO_PURE_DECLS \
	CardDealer_Source_CardDealer_CardDealerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CardDealer_Source_CardDealer_CardDealerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
