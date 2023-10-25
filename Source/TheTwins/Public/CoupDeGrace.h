#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "CoupDeGrace.generated.h"

class AGenerator;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UCoupDeGrace : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	uint8 _tokenGainOnRepair;

	UPROPERTY(EditAnywhere)
	float _lungeAttackAddDurationMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AGenerator*> _completedGenerators;

public:
	UCoupDeGrace();
};

FORCEINLINE uint32 GetTypeHash(const UCoupDeGrace) { return 0; }
