#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "DreamInducerComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UDreamInducerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UActorComponent> _generatorDreamworldClass;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnLevelReadyToPlay();

public:
	UDreamInducerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDreamInducerComponent) { return 0; }
