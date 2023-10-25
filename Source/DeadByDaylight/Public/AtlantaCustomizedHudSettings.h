#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "AtlantaCustomizedHudSettings.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaCustomizedHudSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FGameplayTag Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D NormalizedOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Scale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RenderOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Version;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer OverlapWrapperIds;

public:
	DEADBYDAYLIGHT_API FAtlantaCustomizedHudSettings();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaCustomizedHudSettings) { return 0; }
