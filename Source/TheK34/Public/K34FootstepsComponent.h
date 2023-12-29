#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "K34FootstepsComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK34FootstepsComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _footstepFrequency;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _footstepsShouldOnlySpawnWhenMoving;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _showFootstepsInTipToeMode;

	UPROPERTY(EditAnywhere)
	FGameplayTagQuery _normalFootfallSpawningStateTagQuery;

public:
	UK34FootstepsComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK34FootstepsComponent) { return 0; }
