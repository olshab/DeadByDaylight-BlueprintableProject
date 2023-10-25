#pragma once

#include "CoreMinimal.h"
#include "DBDAttackOpenSubstate.h"
#include "Templates/SubclassOf.h"
#include "PounceAttackOpenSubstate.generated.h"

class UPounceAttackOpenSubstateCosmetic;

UCLASS(Blueprintable)
class DBDATTACK_API UPounceAttackOpenSubstate : public UDBDAttackOpenSubstate
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UPounceAttackOpenSubstateCosmetic> _pounceOpenStateCosmeticBlueprintClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UPounceAttackOpenSubstateCosmetic* _pounceOpenStateCosmeticBlueprintObject;

public:
	UPounceAttackOpenSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UPounceAttackOpenSubstate) { return 0; }
