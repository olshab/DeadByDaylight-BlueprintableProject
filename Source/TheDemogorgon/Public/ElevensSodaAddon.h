#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "ElevensSodaAddon.generated.h"

class AGenerator;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UElevensSodaAddon : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AGenerator*> _generatorsBeingRepaired;

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_UnhighlightGenerator(const AGenerator* generator) const;

	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_HighlightGenerator(const AGenerator* generator) const;

public:
	UElevensSodaAddon();
};

FORCEINLINE uint32 GetTypeHash(const UElevensSodaAddon) { return 0; }
