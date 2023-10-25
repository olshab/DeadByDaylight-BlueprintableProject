#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "BaseFrenzyMixtapeAddon.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UBaseFrenzyMixtapeAddon : public UItemAddon
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> _audioSwitchGroups;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _audioSwitchState;

public:
	UBaseFrenzyMixtapeAddon();
};

FORCEINLINE uint32 GetTypeHash(const UBaseFrenzyMixtapeAddon) { return 0; }
