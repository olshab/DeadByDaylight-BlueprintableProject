#pragma once

#include "CoreMinimal.h"
#include "PlayerReadyStatusData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerReadyStatusData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 PlayerId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 SlotIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsReady;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsSlasher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsLocalPlayer;

public:
	DEADBYDAYLIGHT_API FPlayerReadyStatusData();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerReadyStatusData) { return 0; }
