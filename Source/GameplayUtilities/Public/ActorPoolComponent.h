#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "ActorPoolComponent.generated.h"

class AActor;

UCLASS(Blueprintable, Abstract, EditInlineNew, meta=(BlueprintSpawnableComponent))
class GAMEPLAYUTILITIES_API UActorPoolComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> _actorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _size;

protected:
	UFUNCTION(BlueprintCallable)
	void OnActorsInPoolAcquiredChanged(bool acquired);

private:
	UFUNCTION(BlueprintCallable)
	void OnActorDestroyed(AActor* destroyedActor);

public:
	UActorPoolComponent();
};

FORCEINLINE uint32 GetTypeHash(const UActorPoolComponent) { return 0; }
