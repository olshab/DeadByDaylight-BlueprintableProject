#pragma once

#include "CoreMinimal.h"
#include "GameplayMutator.h"
#include "CosmeticGameplayMutator.generated.h"

class AActor;
class ADBDPlayer;

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class UCosmeticGameplayMutator : public UGameplayMutator
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsInitialized, Transient, meta=(AllowPrivateAccess=true))
	bool _isInitialized;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsEnabled, meta=(AllowPrivateAccess=true))
	bool _isEnabled;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_IsInitialized();

	UFUNCTION(BlueprintCallable)
	void OnRep_IsEnabled();

	UFUNCTION(BlueprintCallable)
	void OnLocallyObservedChanged();

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_ShowCosmeticMutators(const bool isVisible, const FString& localPlayerId);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnViewTargetChanged(AActor* viewTarget);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnInitialized(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnEnabled(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnDisabled(ADBDPlayer* player);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UCosmeticGameplayMutator();
};

FORCEINLINE uint32 GetTypeHash(const UCosmeticGameplayMutator) { return 0; }
