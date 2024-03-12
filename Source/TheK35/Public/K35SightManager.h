#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "K35SurvivorLookStatus.h"
#include "K35SightManager.generated.h"

class UCharacterSightComponent;
class ACharacter;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK35SightManager : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _maximumSightDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _sightingDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _discerningDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _undiscerningDelay;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	TArray<FK35SurvivorLookStatus> _survivorLookStatus;

private:
	UFUNCTION(BlueprintCallable)
	void OnIntroCompleted();

	UFUNCTION(BlueprintCallable)
	void Authority_OnCharacterSightChanged(ACharacter* sightedCharacter, UCharacterSightComponent* sightComponent);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK35SightManager();
};

FORCEINLINE uint32 GetTypeHash(const UK35SightManager) { return 0; }
