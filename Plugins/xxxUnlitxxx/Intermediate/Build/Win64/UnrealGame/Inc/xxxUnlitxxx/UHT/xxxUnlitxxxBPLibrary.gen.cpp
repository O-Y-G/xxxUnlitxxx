// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "xxxUnlitxxx/Public/xxxUnlitxxxBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodexxxUnlitxxxBPLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_xxxUnlitxxx();
	XXXUNLITXXX_API UClass* Z_Construct_UClass_UxxxUnlitxxxBPLibrary();
	XXXUNLITXXX_API UClass* Z_Construct_UClass_UxxxUnlitxxxBPLibrary_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UxxxUnlitxxxBPLibrary::execApplyLitViewMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UxxxUnlitxxxBPLibrary::ApplyLitViewMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UxxxUnlitxxxBPLibrary::execApplyUnlitViewMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UxxxUnlitxxxBPLibrary::ApplyUnlitViewMode();
		P_NATIVE_END;
	}
	void UxxxUnlitxxxBPLibrary::StaticRegisterNativesUxxxUnlitxxxBPLibrary()
	{
		UClass* Class = UxxxUnlitxxxBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyLitViewMode", &UxxxUnlitxxxBPLibrary::execApplyLitViewMode },
			{ "ApplyUnlitViewMode", &UxxxUnlitxxxBPLibrary::execApplyUnlitViewMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UxxxUnlitxxxBPLibrary_ApplyLitViewMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UxxxUnlitxxxBPLibrary_ApplyLitViewMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unlit" },
		{ "DisplayName", "Apply Lit View Mode" },
		{ "Keywords", "xxxUnlitxxx Apply Lit View Mode" },
		{ "ModuleRelativePath", "Public/xxxUnlitxxxBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UxxxUnlitxxxBPLibrary_ApplyLitViewMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UxxxUnlitxxxBPLibrary, nullptr, "ApplyLitViewMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UxxxUnlitxxxBPLibrary_ApplyLitViewMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UxxxUnlitxxxBPLibrary_ApplyLitViewMode_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UxxxUnlitxxxBPLibrary_ApplyLitViewMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UxxxUnlitxxxBPLibrary_ApplyLitViewMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UxxxUnlitxxxBPLibrary_ApplyUnlitViewMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UxxxUnlitxxxBPLibrary_ApplyUnlitViewMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Unlit" },
		{ "DisplayName", "Apply Unlit View Mode" },
		{ "Keywords", "xxxUnlitxxx Apply Unlit View Mode" },
		{ "ModuleRelativePath", "Public/xxxUnlitxxxBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UxxxUnlitxxxBPLibrary_ApplyUnlitViewMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UxxxUnlitxxxBPLibrary, nullptr, "ApplyUnlitViewMode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UxxxUnlitxxxBPLibrary_ApplyUnlitViewMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UxxxUnlitxxxBPLibrary_ApplyUnlitViewMode_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UxxxUnlitxxxBPLibrary_ApplyUnlitViewMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UxxxUnlitxxxBPLibrary_ApplyUnlitViewMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UxxxUnlitxxxBPLibrary);
	UClass* Z_Construct_UClass_UxxxUnlitxxxBPLibrary_NoRegister()
	{
		return UxxxUnlitxxxBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UxxxUnlitxxxBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UxxxUnlitxxxBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_xxxUnlitxxx,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UxxxUnlitxxxBPLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UxxxUnlitxxxBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UxxxUnlitxxxBPLibrary_ApplyLitViewMode, "ApplyLitViewMode" }, // 1890202286
		{ &Z_Construct_UFunction_UxxxUnlitxxxBPLibrary_ApplyUnlitViewMode, "ApplyUnlitViewMode" }, // 2498596648
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UxxxUnlitxxxBPLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UxxxUnlitxxxBPLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
#endif
		{ "IncludePath", "xxxUnlitxxxBPLibrary.h" },
		{ "ModuleRelativePath", "Public/xxxUnlitxxxBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UxxxUnlitxxxBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UxxxUnlitxxxBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UxxxUnlitxxxBPLibrary_Statics::ClassParams = {
		&UxxxUnlitxxxBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UxxxUnlitxxxBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UxxxUnlitxxxBPLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UxxxUnlitxxxBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UxxxUnlitxxxBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UxxxUnlitxxxBPLibrary.OuterSingleton, Z_Construct_UClass_UxxxUnlitxxxBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UxxxUnlitxxxBPLibrary.OuterSingleton;
	}
	template<> XXXUNLITXXX_API UClass* StaticClass<UxxxUnlitxxxBPLibrary>()
	{
		return UxxxUnlitxxxBPLibrary::StaticClass();
	}
	UxxxUnlitxxxBPLibrary::UxxxUnlitxxxBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UxxxUnlitxxxBPLibrary);
	UxxxUnlitxxxBPLibrary::~UxxxUnlitxxxBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_MyProject_Plugins_xxxUnlitxxx_Source_xxxUnlitxxx_Public_xxxUnlitxxxBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Plugins_xxxUnlitxxx_Source_xxxUnlitxxx_Public_xxxUnlitxxxBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UxxxUnlitxxxBPLibrary, UxxxUnlitxxxBPLibrary::StaticClass, TEXT("UxxxUnlitxxxBPLibrary"), &Z_Registration_Info_UClass_UxxxUnlitxxxBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UxxxUnlitxxxBPLibrary), 1348412881U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject_Plugins_xxxUnlitxxx_Source_xxxUnlitxxx_Public_xxxUnlitxxxBPLibrary_h_1129298797(TEXT("/Script/xxxUnlitxxx"),
		Z_CompiledInDeferFile_FID_MyProject_Plugins_xxxUnlitxxx_Source_xxxUnlitxxx_Public_xxxUnlitxxxBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject_Plugins_xxxUnlitxxx_Source_xxxUnlitxxx_Public_xxxUnlitxxxBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
