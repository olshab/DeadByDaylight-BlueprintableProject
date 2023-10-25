#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActivatorComponent.generated.h"

class UGameplayTagContainerComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class ACTIVATION_API UActivatorComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _searchForActivatableSubAnimInstances;

public:
	UFUNCTION(BlueprintCallable)
	void SetObjectState(UGameplayTagContainerComponent* objectState);

public:
	UActivatorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UActivatorComponent) { return 0; }
