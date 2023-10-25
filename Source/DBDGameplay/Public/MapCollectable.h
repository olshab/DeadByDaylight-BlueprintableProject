#pragma once

#include "CoreMinimal.h"
#include "BaseCamperCollectable.h"
#include "MapCollectable.generated.h"

class UChargerComponent;
class UChargeableComponent;
class UActorKnowledgeCollection;

UCLASS(Blueprintable)
class DBDGAMEPLAY_API AMapCollectable : public ABaseCamperCollectable
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	UChargerComponent* GetChargerComponent() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	UChargeableComponent* GetChargeableComponent() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	UActorKnowledgeCollection* GetActorKnowledgeCollection() const;

public:
	AMapCollectable();
};

FORCEINLINE uint32 GetTypeHash(const AMapCollectable) { return 0; }
