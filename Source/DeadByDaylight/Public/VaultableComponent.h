#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnVaultEvent.h"
#include "VaultableComponent.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UVaultableComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnVaultEvent OnVault;

public:
	UFUNCTION(BlueprintCallable)
	void SignalVault(ADBDPlayer* survivor, float interactionTime);

private:
	UFUNCTION(BlueprintCallable)
	void OnChaseEnded(ADBDPlayer* survivor, float chaseTimer);

public:
	UVaultableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UVaultableComponent) { return 0; }
