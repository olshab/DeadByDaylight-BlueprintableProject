#pragma once

#include "CoreMinimal.h"
#include "ActorsInRangeBool.generated.h"

class UActorPairQueryEvaluatorComponent;
class AActor;

USTRUCT(BlueprintType)
struct FActorsInRangeBool
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UActorPairQueryEvaluatorComponent* _actorPairQueryComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	AActor* _sourceActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	AActor* _otherActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _range;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _inRange;

public:
	QUERYSERVICE_API FActorsInRangeBool();
};

FORCEINLINE uint32 GetTypeHash(const FActorsInRangeBool) { return 0; }
