#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "EPalletSide.h"
#include "PalletPullUpInteraction.generated.h"

class APallet;

UCLASS(Blueprintable, Abstract, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UPalletPullUpInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPalletSide _side;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	APallet* _owningPallet;

public:
	UPalletPullUpInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UPalletPullUpInteraction) { return 0; }
