#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MultipleLightsFader.generated.h"

class ULightComponent;

UCLASS(Blueprintable, Abstract)
class AMultipleLightsFader : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<ULightComponent*> _affectedLights;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> _lightOriginalIntensities;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _timeMultiplier;

public:
	UFUNCTION(BlueprintCallable)
	void SetAffectedLights(const TArray<ULightComponent*>& affectedLights);

public:
	AMultipleLightsFader();
};

FORCEINLINE uint32 GetTypeHash(const AMultipleLightsFader) { return 0; }
