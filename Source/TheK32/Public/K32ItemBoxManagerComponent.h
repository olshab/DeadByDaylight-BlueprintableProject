#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "GameEventData.h"
#include "K32ItemBoxManagerComponent.generated.h"

class AK32ItemBox;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK32ItemBoxManagerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _initialNumberOfInProgressBoxes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AK32ItemBox*> _itemBoxes;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnLevelReadyToPlay();

	UFUNCTION()
	void Authority_OnItemBoxDeactivated(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

public:
	UK32ItemBoxManagerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK32ItemBoxManagerComponent) { return 0; }
