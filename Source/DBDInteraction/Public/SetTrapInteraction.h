#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "SocketOrBoneCache.h"
#include "SetTrapInteraction.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API USetTrapInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FSocketOrBoneCache _dropSocket;

public:
	USetTrapInteraction();
};

FORCEINLINE uint32 GetTypeHash(const USetTrapInteraction) { return 0; }
