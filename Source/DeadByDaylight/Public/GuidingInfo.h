#pragma once

#include "CoreMinimal.h"
#include "EGuidedState.h"
#include "GuidingInfo.generated.h"

class ADBDPlayer;

USTRUCT(BlueprintType)
struct FGuidingInfo
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<ADBDPlayer*> _guidingPlayers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EGuidedState _guidedState;

public:
	DEADBYDAYLIGHT_API FGuidingInfo();
};

FORCEINLINE uint32 GetTypeHash(const FGuidingInfo) { return 0; }
