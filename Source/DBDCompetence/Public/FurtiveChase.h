#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "FurtiveChase.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UFurtiveChase : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _undetectableStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _hasteStatusEffectClass;

	UPROPERTY(EditAnywhere)
	float _undetectableAndHasteStatusEffectDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _hasteStatusEffectPercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _hasteEffect;

public:
	UFUNCTION(BlueprintPure)
	float GetUndetectableAndHasteStatusEffectDurationAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetHasteStatusEffectPercent() const;

public:
	UFurtiveChase();
};

FORCEINLINE uint32 GetTypeHash(const UFurtiveChase) { return 0; }
