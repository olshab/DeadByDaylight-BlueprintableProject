#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CoreMemoryPortalFXComponent.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UCoreMemoryPortalFXComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPortalCosmeticEvent, ADBDPlayer*, player);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FPortalCosmeticEvent Cosmetic_OnPortalSpawned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FPortalCosmeticEvent Cosmetic_OnPlayerStartedInteractingWithPortal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FPortalCosmeticEvent Cosmetic_OnPortalInteractionInterrupted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FPortalCosmeticEvent Cosmetic_OnPortalDeactivated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FPortalCosmeticEvent Cosmetic_OnInteractionComplete;

public:
	UCoreMemoryPortalFXComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryPortalFXComponent) { return 0; }
