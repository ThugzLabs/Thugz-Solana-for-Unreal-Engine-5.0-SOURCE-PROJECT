// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThugzBCPlugin/ThugzBCPluginGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThugzBCPluginGameModeBase() {}
// Cross Module References
	THUGZBCPLUGIN_API UClass* Z_Construct_UClass_AThugzBCPluginGameModeBase_NoRegister();
	THUGZBCPLUGIN_API UClass* Z_Construct_UClass_AThugzBCPluginGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ThugzBCPlugin();
// End Cross Module References
	void AThugzBCPluginGameModeBase::StaticRegisterNativesAThugzBCPluginGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThugzBCPluginGameModeBase);
	UClass* Z_Construct_UClass_AThugzBCPluginGameModeBase_NoRegister()
	{
		return AThugzBCPluginGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AThugzBCPluginGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThugzBCPluginGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ThugzBCPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThugzBCPluginGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ThugzBCPluginGameModeBase.h" },
		{ "ModuleRelativePath", "ThugzBCPluginGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThugzBCPluginGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThugzBCPluginGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AThugzBCPluginGameModeBase_Statics::ClassParams = {
		&AThugzBCPluginGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AThugzBCPluginGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AThugzBCPluginGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThugzBCPluginGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AThugzBCPluginGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThugzBCPluginGameModeBase.OuterSingleton, Z_Construct_UClass_AThugzBCPluginGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AThugzBCPluginGameModeBase.OuterSingleton;
	}
	template<> THUGZBCPLUGIN_API UClass* StaticClass<AThugzBCPluginGameModeBase>()
	{
		return AThugzBCPluginGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThugzBCPluginGameModeBase);
	struct Z_CompiledInDeferFile_FID_ThugzBCPlugin_Source_ThugzBCPlugin_ThugzBCPluginGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThugzBCPlugin_Source_ThugzBCPlugin_ThugzBCPluginGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AThugzBCPluginGameModeBase, AThugzBCPluginGameModeBase::StaticClass, TEXT("AThugzBCPluginGameModeBase"), &Z_Registration_Info_UClass_AThugzBCPluginGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThugzBCPluginGameModeBase), 799148895U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThugzBCPlugin_Source_ThugzBCPlugin_ThugzBCPluginGameModeBase_h_2935252168(TEXT("/Script/ThugzBCPlugin"),
		Z_CompiledInDeferFile_FID_ThugzBCPlugin_Source_ThugzBCPlugin_ThugzBCPluginGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThugzBCPlugin_Source_ThugzBCPlugin_ThugzBCPluginGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
