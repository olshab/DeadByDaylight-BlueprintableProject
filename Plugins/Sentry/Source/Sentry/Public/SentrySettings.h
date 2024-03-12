#pragma once

#include "CoreMinimal.h"
#include "EnableBuildTargets.h"
#include "Templates/SubclassOf.h"
#include "EnableBuildPlatforms.h"
#include "AutomaticBreadcrumbs.h"
#include "UObject/NoExportTypes.h"
#include "EnableBuildConfigurations.h"
#include "TagsPromotion.h"
#include "SentrySettings.generated.h"

class USentryBeforeSendHandler;

UCLASS(Blueprintable)
class SENTRY_API USentrySettings : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Dsn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Environment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool InitAutomatically;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Debug;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EnableForPromotedBuildsOnly;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FEnableBuildConfigurations EnableBuildConfigurations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FEnableBuildTargets EnableBuildTargets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FEnableBuildPlatforms EnableBuildPlatforms;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAutomaticBreadcrumbs AutomaticBreadcrumbs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTagsPromotion TagsPromotion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EnableAutoCrashCapturing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EnableAutoLogAttachment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AttachStacktrace;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseProxy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ProxyUrl;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SampleRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxBreadcrumbs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AttachScreenshot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> InAppInclude;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> InAppExclude;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool SendDefaultPii;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EnableAutoSessionTracking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SessionTimeout;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool OverrideReleaseName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Release;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UploadSymbolsAutomatically;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ProjectName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString OrgName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AuthToken;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IncludeSources;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CrashReporterUrl;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<USentryBeforeSendHandler> BeforeSendHandler;

public:
	USentrySettings();
};

FORCEINLINE uint32 GetTypeHash(const USentrySettings) { return 0; }
