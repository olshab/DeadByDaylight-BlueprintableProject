#pragma once

#include "CoreMinimal.h"
#include "GameplayMutator.h"
#include "DisableTerrorRadiusAudioGameplayMutator.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UDisableTerrorRadiusAudioGameplayMutator : public UGameplayMutator
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsInitialized, Transient, meta=(AllowPrivateAccess=true))
	bool _isInitialized;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_IsInitialized();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UDisableTerrorRadiusAudioGameplayMutator();
};

FORCEINLINE uint32 GetTypeHash(const UDisableTerrorRadiusAudioGameplayMutator) { return 0; }
