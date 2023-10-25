#pragma once

#include "CoreMinimal.h"
#include "BaseLockerInteraction.h"
#include "K28KillerEnterLockerInteraction.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK28KillerEnterLockerInteraction : public UBaseLockerInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _hideKillerTimePercentage;

public:
	UFUNCTION(BlueprintPure)
	bool IsKillerAllowedToEnterLocker(const ADBDPlayer* player) const;

public:
	UK28KillerEnterLockerInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK28KillerEnterLockerInteraction) { return 0; }
