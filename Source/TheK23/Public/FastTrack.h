#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "FastTrack.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UFastTrack : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	int32 _tokensToAdd;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTokenCountDecreased();

public:
	UFastTrack();
};

FORCEINLINE uint32 GetTypeHash(const UFastTrack) { return 0; }
