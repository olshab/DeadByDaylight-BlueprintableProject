#pragma once

#include "CoreMinimal.h"
#include "ActorPoolComponent.h"
#include "LocalActorPoolComponent.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class GAMEPLAYUTILITIES_API ULocalActorPoolComponent : public UActorPoolComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AActor*> _pool;

public:
	ULocalActorPoolComponent();
};

FORCEINLINE uint32 GetTypeHash(const ULocalActorPoolComponent) { return 0; }
