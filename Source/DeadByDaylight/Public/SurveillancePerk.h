#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "SurveillancePerk.generated.h"

class AGenerator;
class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class USurveillancePerk : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float generatorRegressionStopRevealTime;

private:
	UFUNCTION(BlueprintCallable)
	void HandleGeneratorIsDamagedChanged(AGenerator* generator, ADBDPlayer* player);

public:
	USurveillancePerk();
};

FORCEINLINE uint32 GetTypeHash(const USurveillancePerk) { return 0; }
