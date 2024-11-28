// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DetentionDodger/DetentionDodgerGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDetentionDodgerGameMode() {}

// Begin Cross Module References
DETENTIONDODGER_API UClass* Z_Construct_UClass_ADetentionDodgerGameMode();
DETENTIONDODGER_API UClass* Z_Construct_UClass_ADetentionDodgerGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_DetentionDodger();
// End Cross Module References

// Begin Class ADetentionDodgerGameMode
void ADetentionDodgerGameMode::StaticRegisterNativesADetentionDodgerGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADetentionDodgerGameMode);
UClass* Z_Construct_UClass_ADetentionDodgerGameMode_NoRegister()
{
	return ADetentionDodgerGameMode::StaticClass();
}
struct Z_Construct_UClass_ADetentionDodgerGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "DetentionDodgerGameMode.h" },
		{ "ModuleRelativePath", "DetentionDodgerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADetentionDodgerGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADetentionDodgerGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DetentionDodger,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADetentionDodgerGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADetentionDodgerGameMode_Statics::ClassParams = {
	&ADetentionDodgerGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADetentionDodgerGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ADetentionDodgerGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADetentionDodgerGameMode()
{
	if (!Z_Registration_Info_UClass_ADetentionDodgerGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADetentionDodgerGameMode.OuterSingleton, Z_Construct_UClass_ADetentionDodgerGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADetentionDodgerGameMode.OuterSingleton;
}
template<> DETENTIONDODGER_API UClass* StaticClass<ADetentionDodgerGameMode>()
{
	return ADetentionDodgerGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADetentionDodgerGameMode);
ADetentionDodgerGameMode::~ADetentionDodgerGameMode() {}
// End Class ADetentionDodgerGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealSaves_DetentionDodger_Source_DetentionDodger_DetentionDodgerGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADetentionDodgerGameMode, ADetentionDodgerGameMode::StaticClass, TEXT("ADetentionDodgerGameMode"), &Z_Registration_Info_UClass_ADetentionDodgerGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADetentionDodgerGameMode), 2592379483U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealSaves_DetentionDodger_Source_DetentionDodger_DetentionDodgerGameMode_h_4175740626(TEXT("/Script/DetentionDodger"),
	Z_CompiledInDeferFile_FID_UnrealSaves_DetentionDodger_Source_DetentionDodger_DetentionDodgerGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealSaves_DetentionDodger_Source_DetentionDodger_DetentionDodgerGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
