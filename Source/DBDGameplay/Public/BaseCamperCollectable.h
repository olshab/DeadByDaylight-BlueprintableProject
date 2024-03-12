#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "BaseCamperCollectable.generated.h"

class USurvivorCollectableOutlineUpdateStrategy;
class UDropItemInteraction;
class USpherePlayerOverlapComponent;
class UDBDOutlineComponent;
class UInteractor;
class UCollectItemInteraction;
class UMaterialHelper;
class USphereComponent;

UCLASS(Blueprintable)
class DBDGAMEPLAY_API ABaseCamperCollectable : public ACollectable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	USpherePlayerOverlapComponent* _interactable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UInteractor* _collectableInteractor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDropItemInteraction* _dropInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCollectItemInteraction* _collectInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	USphereComponent* _infectablePrimitive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDOutlineComponent* _outlineComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UMaterialHelper* _materialHelper;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	USurvivorCollectableOutlineUpdateStrategy* _survivorCollectableOutlineUpdateStrategy;

public:
	ABaseCamperCollectable();
};

FORCEINLINE uint32 GetTypeHash(const ABaseCamperCollectable) { return 0; }
