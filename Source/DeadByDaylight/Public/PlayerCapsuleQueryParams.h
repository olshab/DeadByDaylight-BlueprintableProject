#pragma once

#include "CoreMinimal.h"
#include "PlayerCapsuleQueryParams.generated.h"

class ADBDPlayer;
class AActor;

USTRUCT(BlueprintType)
struct FPlayerCapsuleQueryParams
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ADBDPlayer* Player;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<AActor*> IgnoreActors;

public:
	DEADBYDAYLIGHT_API FPlayerCapsuleQueryParams();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerCapsuleQueryParams) { return 0; }
