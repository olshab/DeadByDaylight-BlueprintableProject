#pragma once

#include "CoreMinimal.h"
#include "SimpleSpawnEffectsOnAllSurvivorsAddon.h"
#include "CalmBaseAddon.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UCalmBaseAddon : public USimpleSpawnEffectsOnAllSurvivorsAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _terrorRadiusModification;

public:
	UCalmBaseAddon();
};

FORCEINLINE uint32 GetTypeHash(const UCalmBaseAddon) { return 0; }
