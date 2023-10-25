#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "Addon_K27Power_18.generated.h"

class ACollectable;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UAddon_K27Power_18 : public UItemAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<ACollectable> _vhsCollectableBP;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_SpawnInVHSTape();

	UFUNCTION(BlueprintCallable)
	void Authority_OnIntroCompleted();

public:
	UAddon_K27Power_18();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K27Power_18) { return 0; }
