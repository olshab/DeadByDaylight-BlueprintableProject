#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CoreMemoryPortalComponent.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UCoreMemoryPortalComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ADBDPlayer*> _playersWithActivePortal;

public:
	UFUNCTION(BlueprintPure)
	TArray<ADBDPlayer*> GetPlayersWithActivePortal() const;

public:
	UCoreMemoryPortalComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryPortalComponent) { return 0; }
