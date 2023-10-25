#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "WalesCypherParameters.generated.h"

UCLASS(Blueprintable)
class UWalesCypherParameters : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AUDIO_EVENT;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SLASHER_INDEX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CAMPER_INDEX;

public:
	UWalesCypherParameters();
};

FORCEINLINE uint32 GetTypeHash(const UWalesCypherParameters) { return 0; }
