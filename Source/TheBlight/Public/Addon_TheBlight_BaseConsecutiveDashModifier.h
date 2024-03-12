#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "GameplayTagContainer.h"
#include "Addon_TheBlight_BaseConsecutiveDashModifier.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UAddon_TheBlight_BaseConsecutiveDashModifier : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FGameplayTag _modifierTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _increasePerDash;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _defaultModifierValue;

public:
	UAddon_TheBlight_BaseConsecutiveDashModifier();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_TheBlight_BaseConsecutiveDashModifier) { return 0; }
