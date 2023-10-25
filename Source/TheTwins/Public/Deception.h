#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "Deception.generated.h"

class UStatusEffect;
class UManualIconStrategy;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UDeception : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _noScratchMarksDuration;

	UPROPERTY(EditAnywhere)
	float _perkCooldownDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _deceptionStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _statusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UManualIconStrategy* _iconStrategy;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnOwningPlayerFakedEnteringLockerCosmetic();

public:
	UDeception();
};

FORCEINLINE uint32 GetTypeHash(const UDeception) { return 0; }
