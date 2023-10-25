#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RespawningEventComponent.h"
#include "Lunar2022EventComponent.generated.h"

class ARedEnvelope;
class ADBDPlayerState;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class LUNAR2022_API ULunar2022EventComponent : public URespawningEventComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _eventTag;

	UPROPERTY(EditAnywhere, Transient)
	TArray<TWeakObjectPtr<ARedEnvelope>> _redEnvelopes;

	UPROPERTY(EditAnywhere)
	FGameplayTag _scoreNormal;

	UPROPERTY(EditAnywhere)
	FGameplayTag _scoreJackpot;

	UPROPERTY(EditAnywhere)
	FGameplayTag _scoreOwner;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnPlayerFinishPlaying(const ADBDPlayerState* playerState);

public:
	ULunar2022EventComponent();
};

FORCEINLINE uint32 GetTypeHash(const ULunar2022EventComponent) { return 0; }
