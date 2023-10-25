#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/NoExportTypes.h"
#include "BloodDecalEffectIntensity.generated.h"

UCLASS(Blueprintable)
class UBloodDecalEffectIntensity : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FColor IntensifyBloodColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FColor IntensifyBloodColor2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FColor IntensifyBloodColorEmissive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float IntensifyBloodColorEmissiveMinimumIntensity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float IntensifyBloodColorEmissiveMaximumIntensity;

public:
	UBloodDecalEffectIntensity();
};

FORCEINLINE uint32 GetTypeHash(const UBloodDecalEffectIntensity) { return 0; }
