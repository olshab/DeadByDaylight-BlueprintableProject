#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "AtlCookedMapDescription.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct FAtlCookedMapDescription
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ThemeName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UWorld> MapAsset;

public:
	DEADBYDAYLIGHT_API FAtlCookedMapDescription();
};

FORCEINLINE uint32 GetTypeHash(const FAtlCookedMapDescription) { return 0; }
