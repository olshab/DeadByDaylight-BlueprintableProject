#pragma once

#include "CoreMinimal.h"
#include "PlayerLobbyOrderData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerLobbyOrderData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString playerId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 slotIndex;

public:
	DEADBYDAYLIGHT_API FPlayerLobbyOrderData();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerLobbyOrderData) { return 0; }
