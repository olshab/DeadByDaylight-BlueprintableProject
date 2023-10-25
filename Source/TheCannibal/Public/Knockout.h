#pragma once

#include "CoreMinimal.h"
#include "ForAllSurvivorsStatusEffectImposer.h"
#include "Perk.h"
#include "Knockout.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UKnockout : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, EditFixedSize)
	float _slowAndBlindDuration;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _crawlSpeedPenalty;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _auraDisruptionRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FForAllSurvivorsStatusEffectImposer _slowAndBlindEffectImposer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FForAllSurvivorsStatusEffectImposer _hideAuraEffectImposer;

public:
	UKnockout();
};

FORCEINLINE uint32 GetTypeHash(const UKnockout) { return 0; }
