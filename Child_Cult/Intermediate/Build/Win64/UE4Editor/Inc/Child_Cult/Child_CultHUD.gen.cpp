// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Child_Cult/Child_CultHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChild_CultHUD() {}
// Cross Module References
	CHILD_CULT_API UClass* Z_Construct_UClass_AChild_CultHUD_NoRegister();
	CHILD_CULT_API UClass* Z_Construct_UClass_AChild_CultHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Child_Cult();
// End Cross Module References
	void AChild_CultHUD::StaticRegisterNativesAChild_CultHUD()
	{
	}
	UClass* Z_Construct_UClass_AChild_CultHUD_NoRegister()
	{
		return AChild_CultHUD::StaticClass();
	}
	struct Z_Construct_UClass_AChild_CultHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChild_CultHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Child_Cult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChild_CultHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Child_CultHUD.h" },
		{ "ModuleRelativePath", "Child_CultHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChild_CultHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChild_CultHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChild_CultHUD_Statics::ClassParams = {
		&AChild_CultHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AChild_CultHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChild_CultHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChild_CultHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChild_CultHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChild_CultHUD, 3691346286);
	template<> CHILD_CULT_API UClass* StaticClass<AChild_CultHUD>()
	{
		return AChild_CultHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChild_CultHUD(Z_Construct_UClass_AChild_CultHUD, &AChild_CultHUD::StaticClass, TEXT("/Script/Child_Cult"), TEXT("AChild_CultHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChild_CultHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
