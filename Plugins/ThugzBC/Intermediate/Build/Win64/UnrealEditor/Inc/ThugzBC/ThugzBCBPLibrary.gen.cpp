// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThugzBC/Public/ThugzBCBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThugzBCBPLibrary() {}
// Cross Module References
	THUGZBC_API UScriptStruct* Z_Construct_UScriptStruct_FCreator();
	UPackage* Z_Construct_UPackage__Script_ThugzBC();
	THUGZBC_API UScriptStruct* Z_Construct_UScriptStruct_FMetadataJson();
	THUGZBC_API UScriptStruct* Z_Construct_UScriptStruct_FNFTData();
	THUGZBC_API UScriptStruct* Z_Construct_UScriptStruct_FRootJson();
	THUGZBC_API UClass* Z_Construct_UClass_UThugzBCBPLibrary_NoRegister();
	THUGZBC_API UClass* Z_Construct_UClass_UThugzBCBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Creator;
class UScriptStruct* FCreator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Creator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Creator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreator, Z_Construct_UPackage__Script_ThugzBC(), TEXT("Creator"));
	}
	return Z_Registration_Info_UScriptStruct_Creator.OuterSingleton;
}
template<> THUGZBC_API UScriptStruct* StaticStruct<FCreator>()
{
	return FCreator::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCreator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Address;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Verified_MetaData[];
#endif
		static void NewProp_Verified_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Verified;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Share_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Share;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/ThugzBCBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCreator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreator>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreator_Statics::NewProp_Address_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCreator_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCreator, Address), METADATA_PARAMS(Z_Construct_UScriptStruct_FCreator_Statics::NewProp_Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreator_Statics::NewProp_Address_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreator_Statics::NewProp_Verified_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCBPLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCreator_Statics::NewProp_Verified_SetBit(void* Obj)
	{
		((FCreator*)Obj)->Verified = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreator_Statics::NewProp_Verified = { "Verified", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCreator), &Z_Construct_UScriptStruct_FCreator_Statics::NewProp_Verified_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreator_Statics::NewProp_Verified_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreator_Statics::NewProp_Verified_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreator_Statics::NewProp_Share_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCreator_Statics::NewProp_Share = { "Share", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCreator, Share), METADATA_PARAMS(Z_Construct_UScriptStruct_FCreator_Statics::NewProp_Share_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreator_Statics::NewProp_Share_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreator_Statics::NewProp_Address,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreator_Statics::NewProp_Verified,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreator_Statics::NewProp_Share,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThugzBC,
		nullptr,
		&NewStructOps,
		"Creator",
		sizeof(FCreator),
		alignof(FCreator),
		Z_Construct_UScriptStruct_FCreator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCreator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCreator()
	{
		if (!Z_Registration_Info_UScriptStruct_Creator.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Creator.InnerSingleton, Z_Construct_UScriptStruct_FCreator_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Creator.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetadataJson;
class UScriptStruct* FMetadataJson::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetadataJson.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetadataJson.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetadataJson, Z_Construct_UPackage__Script_ThugzBC(), TEXT("MetadataJson"));
	}
	return Z_Registration_Info_UScriptStruct_MetadataJson.OuterSingleton;
}
template<> THUGZBC_API UScriptStruct* StaticStruct<FMetadataJson>()
{
	return FMetadataJson::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMetadataJson_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Symbol_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Symbol;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Uri_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Uri;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SellerFeeBasisPoints_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SellerFeeBasisPoints;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Creators_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Creators_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Creators;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetadataJson_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ThugzBCBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMetadataJson_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetadataJson>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMetadataJson, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Symbol_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Symbol = { "Symbol", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMetadataJson, Symbol), METADATA_PARAMS(Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Symbol_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Symbol_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Uri_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Uri = { "Uri", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMetadataJson, Uri), METADATA_PARAMS(Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Uri_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Uri_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_SellerFeeBasisPoints_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_SellerFeeBasisPoints = { "SellerFeeBasisPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMetadataJson, SellerFeeBasisPoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_SellerFeeBasisPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_SellerFeeBasisPoints_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Creators_Inner = { "Creators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCreator, METADATA_PARAMS(nullptr, 0) }; // 1693873781
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Creators_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Creators = { "Creators", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMetadataJson, Creators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Creators_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Creators_MetaData)) }; // 1693873781
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetadataJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Symbol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Uri,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_SellerFeeBasisPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Creators_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetadataJson_Statics::NewProp_Creators,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetadataJson_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThugzBC,
		nullptr,
		&NewStructOps,
		"MetadataJson",
		sizeof(FMetadataJson),
		alignof(FMetadataJson),
		Z_Construct_UScriptStruct_FMetadataJson_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetadataJson_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMetadataJson_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetadataJson_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMetadataJson()
	{
		if (!Z_Registration_Info_UScriptStruct_MetadataJson.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetadataJson.InnerSingleton, Z_Construct_UScriptStruct_FMetadataJson_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MetadataJson.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NFTData;
class UScriptStruct* FNFTData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NFTData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NFTData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNFTData, Z_Construct_UPackage__Script_ThugzBC(), TEXT("NFTData"));
	}
	return Z_Registration_Info_UScriptStruct_NFTData.OuterSingleton;
}
template<> THUGZBC_API UScriptStruct* StaticStruct<FNFTData>()
{
	return FNFTData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNFTData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NftMint_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NftMint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerAccount_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OwnerAccount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetadataAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MetadataAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetadataJson_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MetadataJson;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNFTData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ThugzBCBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNFTData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNFTData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_NftMint_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_NftMint = { "NftMint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNFTData, NftMint), METADATA_PARAMS(Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_NftMint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_NftMint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_OwnerAccount_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_OwnerAccount = { "OwnerAccount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNFTData, OwnerAccount), METADATA_PARAMS(Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_OwnerAccount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_OwnerAccount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_MetadataAddress_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_MetadataAddress = { "MetadataAddress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNFTData, MetadataAddress), METADATA_PARAMS(Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_MetadataAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_MetadataAddress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_MetadataJson_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_MetadataJson = { "MetadataJson", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNFTData, MetadataJson), Z_Construct_UScriptStruct_FMetadataJson, METADATA_PARAMS(Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_MetadataJson_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_MetadataJson_MetaData)) }; // 3375404689
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNFTData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_NftMint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_OwnerAccount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_MetadataAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNFTData_Statics::NewProp_MetadataJson,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNFTData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThugzBC,
		nullptr,
		&NewStructOps,
		"NFTData",
		sizeof(FNFTData),
		alignof(FNFTData),
		Z_Construct_UScriptStruct_FNFTData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNFTData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNFTData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNFTData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNFTData()
	{
		if (!Z_Registration_Info_UScriptStruct_NFTData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NFTData.InnerSingleton, Z_Construct_UScriptStruct_FNFTData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NFTData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RootJson;
class UScriptStruct* FRootJson::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RootJson.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RootJson.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRootJson, Z_Construct_UPackage__Script_ThugzBC(), TEXT("RootJson"));
	}
	return Z_Registration_Info_UScriptStruct_RootJson.OuterSingleton;
}
template<> THUGZBC_API UScriptStruct* StaticStruct<FRootJson>()
{
	return FRootJson::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRootJson_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootJson_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ThugzBCBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRootJson_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRootJson>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRootJson_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNFTData, METADATA_PARAMS(nullptr, 0) }; // 3123636442
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRootJson_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Thugz Labs JSON" },
		{ "ModuleRelativePath", "Public/ThugzBCBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRootJson_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRootJson, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRootJson_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootJson_Statics::NewProp_Data_MetaData)) }; // 3123636442
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRootJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootJson_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRootJson_Statics::NewProp_Data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRootJson_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ThugzBC,
		nullptr,
		&NewStructOps,
		"RootJson",
		sizeof(FRootJson),
		alignof(FRootJson),
		Z_Construct_UScriptStruct_FRootJson_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootJson_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRootJson_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRootJson_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRootJson()
	{
		if (!Z_Registration_Info_UScriptStruct_RootJson.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RootJson.InnerSingleton, Z_Construct_UScriptStruct_FRootJson_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RootJson.InnerSingleton;
	}
	DEFINE_FUNCTION(UThugzBCBPLibrary::execConvertJSONtoStruct)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JsonString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRootJson*)Z_Param__Result=UThugzBCBPLibrary::ConvertJSONtoStruct(Z_Param_JsonString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UThugzBCBPLibrary::execGetLastJsonResponse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UThugzBCBPLibrary::GetLastJsonResponse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UThugzBCBPLibrary::execMakeHelloMoonAPIRequest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Account);
		P_GET_PROPERTY(FStrProperty,Z_Param_Barear);
		P_FINISH;
		P_NATIVE_BEGIN;
		UThugzBCBPLibrary::MakeHelloMoonAPIRequest(Z_Param_Account,Z_Param_Barear);
		P_NATIVE_END;
	}
	void UThugzBCBPLibrary::StaticRegisterNativesUThugzBCBPLibrary()
	{
		UClass* Class = UThugzBCBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertJSONtoStruct", &UThugzBCBPLibrary::execConvertJSONtoStruct },
			{ "GetLastJsonResponse", &UThugzBCBPLibrary::execGetLastJsonResponse },
			{ "MakeHelloMoonAPIRequest", &UThugzBCBPLibrary::execMakeHelloMoonAPIRequest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UThugzBCBPLibrary_ConvertJSONtoStruct_Statics
	{
		struct ThugzBCBPLibrary_eventConvertJSONtoStruct_Parms
		{
			FString JsonString;
			FRootJson ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_ConvertJSONtoStruct_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventConvertJSONtoStruct_Parms, JsonString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_ConvertJSONtoStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventConvertJSONtoStruct_Parms, ReturnValue), Z_Construct_UScriptStruct_FRootJson, METADATA_PARAMS(nullptr, 0) }; // 188705232
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThugzBCBPLibrary_ConvertJSONtoStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_ConvertJSONtoStruct_Statics::NewProp_JsonString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_ConvertJSONtoStruct_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_ConvertJSONtoStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web3 Thugz Labs Plugin" },
		{ "ModuleRelativePath", "Public/ThugzBCBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThugzBCBPLibrary_ConvertJSONtoStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThugzBCBPLibrary, nullptr, "ConvertJSONtoStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_ConvertJSONtoStruct_Statics::ThugzBCBPLibrary_eventConvertJSONtoStruct_Parms), Z_Construct_UFunction_UThugzBCBPLibrary_ConvertJSONtoStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_ConvertJSONtoStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UThugzBCBPLibrary_ConvertJSONtoStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_ConvertJSONtoStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UThugzBCBPLibrary_ConvertJSONtoStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThugzBCBPLibrary_ConvertJSONtoStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UThugzBCBPLibrary_GetLastJsonResponse_Statics
	{
		struct ThugzBCBPLibrary_eventGetLastJsonResponse_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_GetLastJsonResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventGetLastJsonResponse_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThugzBCBPLibrary_GetLastJsonResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_GetLastJsonResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_GetLastJsonResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web3 Thugz Labs Plugin" },
		{ "ModuleRelativePath", "Public/ThugzBCBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThugzBCBPLibrary_GetLastJsonResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThugzBCBPLibrary, nullptr, "GetLastJsonResponse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_GetLastJsonResponse_Statics::ThugzBCBPLibrary_eventGetLastJsonResponse_Parms), Z_Construct_UFunction_UThugzBCBPLibrary_GetLastJsonResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_GetLastJsonResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UThugzBCBPLibrary_GetLastJsonResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_GetLastJsonResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UThugzBCBPLibrary_GetLastJsonResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThugzBCBPLibrary_GetLastJsonResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics
	{
		struct ThugzBCBPLibrary_eventMakeHelloMoonAPIRequest_Parms
		{
			FString Account;
			FString Barear;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Account_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Account;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Barear_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Barear;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::NewProp_Account_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::NewProp_Account = { "Account", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventMakeHelloMoonAPIRequest_Parms, Account), METADATA_PARAMS(Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::NewProp_Account_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::NewProp_Account_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::NewProp_Barear_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::NewProp_Barear = { "Barear", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThugzBCBPLibrary_eventMakeHelloMoonAPIRequest_Parms, Barear), METADATA_PARAMS(Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::NewProp_Barear_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::NewProp_Barear_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::NewProp_Account,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::NewProp_Barear,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web3 Thugz Labs Plugin" },
		{ "ModuleRelativePath", "Public/ThugzBCBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThugzBCBPLibrary, nullptr, "MakeHelloMoonAPIRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::ThugzBCBPLibrary_eventMakeHelloMoonAPIRequest_Parms), Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UThugzBCBPLibrary);
	UClass* Z_Construct_UClass_UThugzBCBPLibrary_NoRegister()
	{
		return UThugzBCBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UThugzBCBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UThugzBCBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ThugzBC,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UThugzBCBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UThugzBCBPLibrary_ConvertJSONtoStruct, "ConvertJSONtoStruct" }, // 1188141375
		{ &Z_Construct_UFunction_UThugzBCBPLibrary_GetLastJsonResponse, "GetLastJsonResponse" }, // 3505967145
		{ &Z_Construct_UFunction_UThugzBCBPLibrary_MakeHelloMoonAPIRequest, "MakeHelloMoonAPIRequest" }, // 3779166968
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThugzBCBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ThugzBCBPLibrary.h" },
		{ "ModuleRelativePath", "Public/ThugzBCBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UThugzBCBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UThugzBCBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UThugzBCBPLibrary_Statics::ClassParams = {
		&UThugzBCBPLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UThugzBCBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UThugzBCBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UThugzBCBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UThugzBCBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UThugzBCBPLibrary.OuterSingleton, Z_Construct_UClass_UThugzBCBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UThugzBCBPLibrary.OuterSingleton;
	}
	template<> THUGZBC_API UClass* StaticClass<UThugzBCBPLibrary>()
	{
		return UThugzBCBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UThugzBCBPLibrary);
	struct Z_CompiledInDeferFile_FID_ThugzBCPlugin_Plugins_ThugzBC_Source_ThugzBC_Public_ThugzBCBPLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThugzBCPlugin_Plugins_ThugzBC_Source_ThugzBC_Public_ThugzBCBPLibrary_h_Statics::ScriptStructInfo[] = {
		{ FCreator::StaticStruct, Z_Construct_UScriptStruct_FCreator_Statics::NewStructOps, TEXT("Creator"), &Z_Registration_Info_UScriptStruct_Creator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreator), 1693873781U) },
		{ FMetadataJson::StaticStruct, Z_Construct_UScriptStruct_FMetadataJson_Statics::NewStructOps, TEXT("MetadataJson"), &Z_Registration_Info_UScriptStruct_MetadataJson, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetadataJson), 3375404689U) },
		{ FNFTData::StaticStruct, Z_Construct_UScriptStruct_FNFTData_Statics::NewStructOps, TEXT("NFTData"), &Z_Registration_Info_UScriptStruct_NFTData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNFTData), 3123636442U) },
		{ FRootJson::StaticStruct, Z_Construct_UScriptStruct_FRootJson_Statics::NewStructOps, TEXT("RootJson"), &Z_Registration_Info_UScriptStruct_RootJson, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRootJson), 188705232U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThugzBCPlugin_Plugins_ThugzBC_Source_ThugzBC_Public_ThugzBCBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UThugzBCBPLibrary, UThugzBCBPLibrary::StaticClass, TEXT("UThugzBCBPLibrary"), &Z_Registration_Info_UClass_UThugzBCBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UThugzBCBPLibrary), 2706996280U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ThugzBCPlugin_Plugins_ThugzBC_Source_ThugzBC_Public_ThugzBCBPLibrary_h_2643624303(TEXT("/Script/ThugzBC"),
		Z_CompiledInDeferFile_FID_ThugzBCPlugin_Plugins_ThugzBC_Source_ThugzBC_Public_ThugzBCBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThugzBCPlugin_Plugins_ThugzBC_Source_ThugzBC_Public_ThugzBCBPLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ThugzBCPlugin_Plugins_ThugzBC_Source_ThugzBC_Public_ThugzBCBPLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ThugzBCPlugin_Plugins_ThugzBC_Source_ThugzBC_Public_ThugzBCBPLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
