// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Child_Cult/Child_CultGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChild_CultGameMode() {}
// Cross Module References
	CHILD_CULT_API UClass* Z_Construct_UClass_AChild_CultGameMode_NoRegister();
	CHILD_CULT_API UClass* Z_Construct_UClass_AChild_CultGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Child_Cult();
// End Cross Module References
	void AChild_CultGameMode::StaticRegisterNativesAChild_CultGameMode()
	{
	}
	UClass* Z_Construct_UClass_AChild_CultGameMode_NoRegister()
	{
		return AChild_CultGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AChild_CultGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChild_CultGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Child_Cult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChild_CultGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Child_CultGameMode.h" },
		{ "ModuleRelativePath", "Child_CultGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChild_CultGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChild_CultGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChild_CultGameMode_Statics::ClassParams = {
		&AChild_CultGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AChild_CultGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChild_CultGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChild_CultGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChild_CultGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChild_CultGameMode, 592344149);
	template<> CHILD_CULT_API UClass* StaticClass<AChild_CultGameMode>()
	{
		return AChild_CultGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChild_CultGameMode(Z_Construct_UClass_AChild_CultGameMode, &AChild_CultGameMode::StaticClass, TEXT("/Script/Child_Cult"), TEXT("AChild_CultGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChild_CultGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
