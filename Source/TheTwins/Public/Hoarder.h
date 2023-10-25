#pragma once

#include "CoreMinimal.h"
#include "EPerkInteractionObjectType.h"
#include "Perk.h"
#include "EInventoryType.h"
#include "Hoarder.generated.h"

class ASearchable;
class AActor;
class ACollectable;
class ACamperPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UHoarder : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ASearchable*> _chests;

	UPROPERTY(EditAnywhere)
	float _camperInteractItemPickupRevealRange;

	UPROPERTY(EditAnywhere)
	int32 _extraChestsSpawned;

	UPROPERTY(EditAnywhere)
	float _bubbleIndicatorLifetime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _showUniqueChestVisualPerState;

private:
	UFUNCTION(BlueprintCallable)
	void OnItemRemovedFromPlayer(ACollectable* item, EInventoryType inventoryType);

	UFUNCTION(BlueprintCallable)
	void OnItemAddedToPlayer(ACollectable* item, EInventoryType inventoryType, ACamperPlayer* player);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Local_ThrowBubbleIndicator(const EPerkInteractionObjectType camperInteractionType, const AActor* objectActor, const ACamperPlayer* interactingCamperPlayer);

	UFUNCTION(BlueprintPure)
	float GetBubbleIndicatorLifetime() const;

public:
	UHoarder();
};

FORCEINLINE uint32 GetTypeHash(const UHoarder) { return 0; }
