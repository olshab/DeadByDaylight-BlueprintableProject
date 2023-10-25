#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PhaseWalkInfo.generated.h"

USTRUCT(BlueprintType)
struct FPhaseWalkInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsActivePhaseWalking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsPassivePhaseWalking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsInteractionPhaseWalking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector HuskLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator HuskRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool TeleportToHusk;

public:
	THESPIRIT_API FPhaseWalkInfo();
};

FORCEINLINE uint32 GetTypeHash(const FPhaseWalkInfo) { return 0; }
