#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PlayerBlockData.generated.h"

class ADBDPlayer;

USTRUCT(BlueprintType)
struct FPlayerBlockData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ADBDPlayer* BlockedPlayer;

	UPROPERTY(EditAnywhere, Transient)
	FGameplayTag BlockStyle;

public:
	DEADBYDAYLIGHT_API FPlayerBlockData();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerBlockData) { return 0; }
