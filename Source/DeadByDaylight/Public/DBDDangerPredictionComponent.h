#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPlayerRole.h"
#include "ESurvivorFleePathStrategy.h"
#include "DBDDangerPredictionComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDDangerPredictionComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ApplyAdditionalCostInDangerArea;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ESurvivorFleePathStrategy SurvivorFleePathStrategy;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RelevantHorizontalDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RelevantVerticalDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerRole RelevantRole;

public:
	UDBDDangerPredictionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDDangerPredictionComponent) { return 0; }
