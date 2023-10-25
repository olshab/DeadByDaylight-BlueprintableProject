#pragma once

#include "CoreMinimal.h"
#include "AtlantaSubRitualUIData.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaSubRitualUIData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TargetNumber;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CurrentNumber;

public:
	DEADBYDAYLIGHT_API FAtlantaSubRitualUIData();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaSubRitualUIData) { return 0; }
