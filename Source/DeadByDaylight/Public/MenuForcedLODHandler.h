#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "EGameFlowStep.h"
#include "ECustomizationCategory.h"
#include "MenuForcedLODHandler.generated.h"

class ADBDMenuPlayer;
class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UMenuForcedLODHandler : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<EGameFlowStep> _forcedLOD0GameFlowSteps;

private:
	UFUNCTION(BlueprintCallable)
	void OnMenuPlayerEndPlay(AActor* menuPlayerActor, TEnumAsByte<EEndPlayReason::Type> endPlayReason);

	UFUNCTION(BlueprintCallable)
	void OnCustomizationChanged(ECustomizationCategory category, const FName& itemId, ADBDMenuPlayer* menuPlayer);

public:
	UMenuForcedLODHandler();
};

FORCEINLINE uint32 GetTypeHash(const UMenuForcedLODHandler) { return 0; }
