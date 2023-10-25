#pragma once

#include "CoreMinimal.h"
#include "AkPluginInfo.generated.h"

USTRUCT(BlueprintType)
struct FAkPluginInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;

	UPROPERTY(EditAnywhere)
	uint32 PluginID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DLL;

public:
	AKAUDIO_API FAkPluginInfo();
};

FORCEINLINE uint32 GetTypeHash(const FAkPluginInfo) { return 0; }
