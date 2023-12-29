#pragma once

#include "CoreMinimal.h"
#include "HookSurvivorDefinition.h"
#include "Halloween2023VoidHookSurvivorDefinition.generated.h"

class ACamperPlayer;
class AMeatHook;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UHalloween2023VoidHookSurvivorDefinition : public UHookSurvivorDefinition
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHookEvent, ACamperPlayer*, survivor);

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnHookEvent Cosmetic_OnPlayerHooked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnHookEvent Cosmetic_OnPlayerTeleported;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _animationDuration;

protected:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_PlacePlayerOnHook(ACamperPlayer* survivorBeingHooked);

private:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_OnPlayerMovedToStandardHook(ACamperPlayer* player, AMeatHook* closestMeatHook);

	UFUNCTION(BlueprintCallable)
	void Authority_SetPlayerOnStandardHook(ACamperPlayer* player);

public:
	UHalloween2023VoidHookSurvivorDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UHalloween2023VoidHookSurvivorDefinition) { return 0; }
