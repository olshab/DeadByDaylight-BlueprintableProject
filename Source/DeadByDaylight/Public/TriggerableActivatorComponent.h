#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/SoftObjectPtr.h"
#include "TriggerableActivatorComponent.generated.h"

class UTriggerableWorldObjectComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UTriggerableActivatorComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSoftClassPtr<UTriggerableWorldObjectComponent> _triggerableClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UTriggerableWorldObjectComponent*> _triggerables;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnLevelReadyToPlay();

public:
	UTriggerableActivatorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTriggerableActivatorComponent) { return 0; }
