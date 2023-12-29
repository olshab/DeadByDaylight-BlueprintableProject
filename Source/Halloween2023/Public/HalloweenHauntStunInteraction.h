#pragma once

#include "CoreMinimal.h"
#include "GenericStunInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "HalloweenHauntStunInteraction.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UHalloweenHauntStunInteraction : public UGenericStunInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _stunDuration;

public:
	UHalloweenHauntStunInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UHalloweenHauntStunInteraction) { return 0; }
