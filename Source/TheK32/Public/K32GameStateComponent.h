#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "K32GameStateComponent.generated.h"

class AK32ItemBox;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK32_API UK32GameStateComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AK32ItemBox*> _k32ItemBox;

public:
	UK32GameStateComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK32GameStateComponent) { return 0; }
