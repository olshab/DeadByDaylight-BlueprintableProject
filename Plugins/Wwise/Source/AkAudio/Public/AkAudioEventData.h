#pragma once

#include "CoreMinimal.h"
#include "AkAssetDataSwitchContainer.h"
#include "AkAudioEventData.generated.h"

class UAkAudioEvent;
class UAkAuxBus;
class UAkGroupValue;
class UAkTrigger;

UCLASS(Blueprintable)
class AKAUDIO_API UAkAudioEventData : public UAkAssetDataSwitchContainer
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxAttenuationRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsInfinite;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinimumDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaximumDuration;

	UPROPERTY()
	TMap<FString, UAkAssetDataSwitchContainer*> LocalizedMedia_DEPRECATED;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<UAkAudioEvent*> PostedEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<UAkAuxBus*> UserDefinedSends;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<UAkTrigger*> PostedTriggers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<UAkGroupValue*> GroupValues;

public:
	UAkAudioEventData();
};

FORCEINLINE uint32 GetTypeHash(const UAkAudioEventData) { return 0; }
