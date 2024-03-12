#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "BaseReplicatedState.generated.h"

class UStateController;

UCLASS(Blueprintable, Abstract)
class GAMEPLAYUTILITIES_API UBaseReplicatedState : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	FGameplayTag _id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidgetOptional))
	UStateController* _stateController;

public:
	UBaseReplicatedState();
};

FORCEINLINE uint32 GetTypeHash(const UBaseReplicatedState) { return 0; }
