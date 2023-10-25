#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "FragilePalletTrackerVisibilityComponent.generated.h"

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class UFragilePalletTrackerVisibilityComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _visibilityDistance;

private:
	UFUNCTION(BlueprintCallable)
	void OnLocallyObservedChanged();

public:
	UFragilePalletTrackerVisibilityComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFragilePalletTrackerVisibilityComponent) { return 0; }
