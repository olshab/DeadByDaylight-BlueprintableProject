#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "BaseSnowmanEventComponent.generated.h"

class UStatusEffect;
class USnowmanSpawnPlacementStrategy;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class SNOWMANWINTEREVENT_API UBaseSnowmanEventComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle _numSnowmenToSpawnAtStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<USnowmanSpawnPlacementStrategy> _snowmanSpawnPlacementStrategyClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidget))
	USnowmanSpawnPlacementStrategy* _snowmanSpawnPlacementStrategy;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<TSubclassOf<UStatusEffect>> _survivorInSnowmanEffectClasses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<TSubclassOf<UStatusEffect>> _killerInSnowmanEffectClasses;

public:
	UBaseSnowmanEventComponent();
};

FORCEINLINE uint32 GetTypeHash(const UBaseSnowmanEventComponent) { return 0; }
