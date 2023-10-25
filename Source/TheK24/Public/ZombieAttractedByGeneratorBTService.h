#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlueprintBase.h"
#include "ZombieAttractedByGeneratorBTService.generated.h"

class AGenerator;

UCLASS(Blueprintable)
class UZombieAttractedByGeneratorBTService : public UBTService_BlueprintBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _genRepairingHearingRange;

private:
	UFUNCTION(BlueprintCallable)
	void OnInRangeChanged(const bool inRange, AGenerator* generator);

public:
	UZombieAttractedByGeneratorBTService();
};

FORCEINLINE uint32 GetTypeHash(const UZombieAttractedByGeneratorBTService) { return 0; }
