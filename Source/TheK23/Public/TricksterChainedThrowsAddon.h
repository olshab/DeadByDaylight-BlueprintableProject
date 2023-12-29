#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "TricksterChainedThrowsAddon.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UTricksterChainedThrowsAddon : public UItemAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient)
	int32 _consecutiveHits;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _resetOnEnteringFlurryInteraction;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UTricksterChainedThrowsAddon();
};

FORCEINLINE uint32 GetTypeHash(const UTricksterChainedThrowsAddon) { return 0; }
