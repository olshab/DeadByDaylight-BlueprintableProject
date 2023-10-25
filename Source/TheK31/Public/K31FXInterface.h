#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "K31FXInterface.generated.h"

UINTERFACE(Blueprintable)
class THEK31_API UK31FXInterface : public UInterface
{
	GENERATED_BODY()
};

class THEK31_API IK31FXInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerSurvivorAppearOnRadarEvent();

};
