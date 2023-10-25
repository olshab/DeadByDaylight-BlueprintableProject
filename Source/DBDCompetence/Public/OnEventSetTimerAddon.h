#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "OnEventSetTimerAddon.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UOnEventSetTimerAddon : public UOnEventBaseAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _addonEffectTime;

public:
	UOnEventSetTimerAddon();
};

FORCEINLINE uint32 GetTypeHash(const UOnEventSetTimerAddon) { return 0; }
