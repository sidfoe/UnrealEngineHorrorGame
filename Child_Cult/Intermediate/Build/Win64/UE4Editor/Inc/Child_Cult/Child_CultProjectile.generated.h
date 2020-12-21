// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef CHILD_CULT_Child_CultProjectile_generated_h
#error "Child_CultProjectile.generated.h already included, missing '#pragma once' in Child_CultProjectile.h"
#endif
#define CHILD_CULT_Child_CultProjectile_generated_h

#define Child_Cult_Source_Child_Cult_Child_CultProjectile_h_15_SPARSE_DATA
#define Child_Cult_Source_Child_Cult_Child_CultProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Child_Cult_Source_Child_Cult_Child_CultProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Child_Cult_Source_Child_Cult_Child_CultProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChild_CultProjectile(); \
	friend struct Z_Construct_UClass_AChild_CultProjectile_Statics; \
public: \
	DECLARE_CLASS(AChild_CultProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Child_Cult"), NO_API) \
	DECLARE_SERIALIZER(AChild_CultProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Child_Cult_Source_Child_Cult_Child_CultProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAChild_CultProjectile(); \
	friend struct Z_Construct_UClass_AChild_CultProjectile_Statics; \
public: \
	DECLARE_CLASS(AChild_CultProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Child_Cult"), NO_API) \
	DECLARE_SERIALIZER(AChild_CultProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Child_Cult_Source_Child_Cult_Child_CultProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AChild_CultProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AChild_CultProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChild_CultProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChild_CultProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChild_CultProjectile(AChild_CultProjectile&&); \
	NO_API AChild_CultProjectile(const AChild_CultProjectile&); \
public:


#define Child_Cult_Source_Child_Cult_Child_CultProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChild_CultProjectile(AChild_CultProjectile&&); \
	NO_API AChild_CultProjectile(const AChild_CultProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChild_CultProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChild_CultProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AChild_CultProjectile)


#define Child_Cult_Source_Child_Cult_Child_CultProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AChild_CultProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AChild_CultProjectile, ProjectileMovement); }


#define Child_Cult_Source_Child_Cult_Child_CultProjectile_h_12_PROLOG
#define Child_Cult_Source_Child_Cult_Child_CultProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Child_Cult_Source_Child_Cult_Child_CultProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Child_Cult_Source_Child_Cult_Child_CultProjectile_h_15_SPARSE_DATA \
	Child_Cult_Source_Child_Cult_Child_CultProjectile_h_15_RPC_WRAPPERS \
	Child_Cult_Source_Child_Cult_Child_CultProjectile_h_15_INCLASS \
	Child_Cult_Source_Child_Cult_Child_CultProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Child_Cult_Source_Child_Cult_Child_CultProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Child_Cult_Source_Child_Cult_Child_CultProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Child_Cult_Source_Child_Cult_Child_CultProjectile_h_15_SPARSE_DATA \
	Child_Cult_Source_Child_Cult_Child_CultProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Child_Cult_Source_Child_Cult_Child_CultProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Child_Cult_Source_Child_Cult_Child_CultProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHILD_CULT_API UClass* StaticClass<class AChild_CultProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Child_Cult_Source_Child_Cult_Child_CultProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
