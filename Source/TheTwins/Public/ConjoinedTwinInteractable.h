#pragma once

#include "CoreMinimal.h"
#include "PlayerInteractable.h"
#include "ConjoinedTwinInteractable.generated.h"

class UChargeableComponent;

UCLASS(Blueprintable)
class AConjoinedTwinInteractable : public APlayerInteractable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidgetOptional))
	UChargeableComponent* _possessKillerChargeable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidgetOptional))
	UChargeableComponent* _twinBeingPossessedChargeable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidgetOptional))
	UChargeableComponent* _chargeTwinJumpChargeable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidgetOptional))
	UChargeableComponent* _removeTwinChargeable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidgetOptional))
	UChargeableComponent* _destroyTwinChargeable;

public:
	AConjoinedTwinInteractable();
};

FORCEINLINE uint32 GetTypeHash(const AConjoinedTwinInteractable) { return 0; }
