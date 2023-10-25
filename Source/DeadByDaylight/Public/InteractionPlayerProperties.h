#pragma once

#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "UObject/NoExportTypes.h"
#include "InteractionPlayerProperties.generated.h"

class ADBDPlayer;

USTRUCT(BlueprintType)
struct FInteractionPlayerProperties
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector_NetQuantize AverageVelocityAtStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector_NetQuantize PlayerPositionAtStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator PlayerRotationAtStart;

	UPROPERTY(EditAnywhere)
	TWeakObjectPtr<ADBDPlayer> Requester;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector_NetQuantize SnapPositionAtStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator SnapRotationAtStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SnapDistanceAtStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SnapTimeAtStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShouldSnapPosition;

public:
	DEADBYDAYLIGHT_API FInteractionPlayerProperties();
};

FORCEINLINE uint32 GetTypeHash(const FInteractionPlayerProperties) { return 0; }
