#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ObjectStateProvider.h"
#include "TestObjectStateProviderComponent.generated.h"

class UGameplayTagContainerComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UTestObjectStateProviderComponent : public UActorComponent, public IObjectStateProvider
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UGameplayTagContainerComponent* GameplayTagContainerComponent;

public:
	UTestObjectStateProviderComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTestObjectStateProviderComponent) { return 0; }
