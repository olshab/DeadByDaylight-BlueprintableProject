#pragma once

#include "CoreMinimal.h"
#include "ForAllSurvivorsStatusEffectImposer.h"
#include "Perk.h"
#include "NurseCalling.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UNurseCalling : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _auraRevealDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FForAllSurvivorsStatusEffectImposer _nurseCallingEffectImposer;

public:
	UNurseCalling();
};

FORCEINLINE uint32 GetTypeHash(const UNurseCalling) { return 0; }
