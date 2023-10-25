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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	USpherePlayerOverlapComponent* _interactable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UInteractor* _collectableInteractor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDropItemInteraction* _dropInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCollectItemInteraction* _collectInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	USphereComponent* _infectablePrimitive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDOutlineComponent* _outlineComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UMaterialHelper* _materialHelper;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	USurvivorCollectableOutlineUpdateStrategy* _survivorCollectableOutlineUpdateStrategy;

public:
	ABaseCamperCollectable();
};

FORCEINLINE uint32 GetTypeHash(const ABaseCamperCollectable) { return 0; }
