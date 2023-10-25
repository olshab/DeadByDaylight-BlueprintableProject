#pragma once

#include "CoreMinimal.h"
#include "ESkillCheckCustomType.h"
#include "ItemAddon.h"
#include "GameplayTagContainer.h"
#include "Addon_TheBlight_SoulChemical.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UAddon_TheBlight_SoulChemical : public UItemAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _triggerDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ESkillCheckCustomType _skillCheckType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer _interactionSemantics;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer _blightPowerStateTag;

public:
	UAddon_TheBlight_SoulChemical();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_TheBlight_SoulChemical) { return 0; }
