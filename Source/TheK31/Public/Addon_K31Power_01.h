#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "Addon_K31Power_01.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK31_API UAddon_K31Power_01 : public UItemAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _modifySkillCheckDifficultyEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _skillCheckDifficultyModifier;

public:
	UAddon_K31Power_01();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K31Power_01) { return 0; }
