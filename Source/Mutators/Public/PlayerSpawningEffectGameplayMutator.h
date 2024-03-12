#pragma once

#include "CoreMinimal.h"
#include "GameplayMutator.h"
#include "Templates/SubclassOf.h"
#include "PlayerSpawningEffectGameplayMutator.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class UPlayerSpawningEffectGameplayMutator : public UGameplayMutator
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _statusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _shouldDisplay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _lifetime;

public:
	UPlayerSpawningEffectGameplayMutator();
};

FORCEINLINE uint32 GetTypeHash(const UPlayerSpawningEffectGameplayMutator) { return 0; }
