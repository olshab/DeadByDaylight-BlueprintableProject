#pragma once

#include "CoreMinimal.h"
#include "SearchLockerInteraction.h"
#include "Templates/SubclassOf.h"
#include "LockerGrabInteraction.generated.h"

class ACamperPlayer;
class UStatusEffect;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class ULockerGrabInteraction : public USearchLockerInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _lockerGrabBlindImmunity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ACamperPlayer* _survivorInLocker;

public:
	ULockerGrabInteraction();
};

FORCEINLINE uint32 GetTypeHash(const ULockerGrabInteraction) { return 0; }
