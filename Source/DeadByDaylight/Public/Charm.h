#pragma once

#include "CoreMinimal.h"
#include "StandDisplayable.h"
#include "GameFramework/Actor.h"
#include "Charm.generated.h"

class UDBDSkeletalMeshComponentBudgeted;
class AItemVfx;

UCLASS(Blueprintable)
class ACharm : public AActor, public IStandDisplayable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDSkeletalMeshComponentBudgeted* _skeletalMeshComponent;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AItemVfx* _actorVfx;

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void BeginDestroySequence_Internal();

public:
	ACharm();
};

FORCEINLINE uint32 GetTypeHash(const ACharm) { return 0; }
