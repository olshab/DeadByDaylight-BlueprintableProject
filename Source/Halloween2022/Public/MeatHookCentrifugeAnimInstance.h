#pragma once

#include "CoreMinimal.h"
#include "HalloweenCentrifugeAnimInstance.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "MeatHookCentrifugeAnimInstance.generated.h"

class AMeatHook;

UCLASS(Blueprintable, NonTransient)
class UMeatHookCentrifugeAnimInstance : public UHalloweenCentrifugeAnimInstance
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _animationLength;

private:
	UFUNCTION()
	void PlayerNoLongerOnHook(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION()
	void PlayerHooked(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnPlayerNoLongerOnHook(AMeatHook* meatHook);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnPlayerHooked(AMeatHook* meatHook);

public:
	UMeatHookCentrifugeAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UMeatHookCentrifugeAnimInstance) { return 0; }
