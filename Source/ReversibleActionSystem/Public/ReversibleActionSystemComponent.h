#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActionPredictionKey.h"
#include "PendingInstantActionList.h"
#include "InstantActionList.h"
#include "ReversibleActionSystemComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class REVERSIBLEACTIONSYSTEM_API UReversibleActionSystemComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<FActionPredictionKey, FPendingInstantActionList> _pendingInstantActionHandlers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<FActionPredictionKey, FInstantActionList> _predictedInstantActionHandlers;

public:
	UReversibleActionSystemComponent();
};

FORCEINLINE uint32 GetTypeHash(const UReversibleActionSystemComponent) { return 0; }
