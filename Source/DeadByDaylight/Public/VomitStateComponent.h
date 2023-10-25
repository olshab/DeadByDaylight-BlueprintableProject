#pragma once

#include "CoreMinimal.h"
#include "ELinkedVomitState.h"
#include "Components/ActorComponent.h"
#include "TagStateBool.h"
#include "VomitStateComponent.generated.h"

class UGameplayTagContainerComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UVomitStateComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTagStateBool _isCharging;

public:
	UFUNCTION(BlueprintCallable)
	void SetVomitState(ELinkedVomitState newVomitState);

	UFUNCTION(BlueprintCallable)
	void SetObjectState(UGameplayTagContainerComponent* objectState);

	UFUNCTION(BlueprintPure)
	bool IsVomiting() const;

	UFUNCTION(BlueprintPure)
	ELinkedVomitState getVomitState() const;

public:
	UVomitStateComponent();
};

FORCEINLINE uint32 GetTypeHash(const UVomitStateComponent) { return 0; }
