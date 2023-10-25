#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "CalmSpirit.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UCalmSpirit : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _calmSpiritEffectClass;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _actionSpeed;

public:
	UCalmSpirit();
};

FORCEINLINE uint32 GetTypeHash(const UCalmSpirit) { return 0; }
