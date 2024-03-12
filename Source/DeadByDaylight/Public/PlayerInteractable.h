#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "PlayerInteractable.generated.h"

class USceneComponent;
class ADBDPlayer;
class UPrimitiveComponent;
class UInteractor;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API APlayerInteractable : public AInteractable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UPrimitiveComponent* _mainInteractionZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UInteractor* _selfInteractionsInteractor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidgetOptional))
	USceneComponent* _rootComponent;

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void InitInteractable(ADBDPlayer* player);

public:
	APlayerInteractable();
};

FORCEINLINE uint32 GetTypeHash(const APlayerInteractable) { return 0; }
