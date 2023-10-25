#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "OniPounceInteraction.generated.h"

class ASlasherPlayer;
class UOniDemonModeAttackStateComponent;
class UDemonModeComponent;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UOniPounceInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UOniDemonModeAttackStateComponent* _chargedAttackState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UDemonModeComponent* _demonModeComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ASlasherPlayer* _owningSlasher;

public:
	UOniPounceInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UOniPounceInteraction) { return 0; }
