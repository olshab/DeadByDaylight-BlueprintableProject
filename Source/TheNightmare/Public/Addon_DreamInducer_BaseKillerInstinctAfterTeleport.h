#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "Addon_DreamInducer_BaseKillerInstinctAfterTeleport.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UAddon_DreamInducer_BaseKillerInstinctAfterTeleport : public UItemAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _killerInstinctDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _survivorDistanceFromGeneratorTriggerRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _killerInstinctStatusClass;

public:
	UAddon_DreamInducer_BaseKillerInstinctAfterTeleport();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_DreamInducer_BaseKillerInstinctAfterTeleport) { return 0; }
