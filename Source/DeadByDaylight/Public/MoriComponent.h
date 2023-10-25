#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "MoriComponent.generated.h"

class UStatusEffect;
class UInteractionDefinition;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UMoriComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<TSubclassOf<UInteractionDefinition>> _moriInteractionClasses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _disruptAuraReadingStatusEffect;

public:
	UFUNCTION(BlueprintCallable)
	void OnMoriUpdateStart();

	UFUNCTION(BlueprintCallable)
	void OnMoriFinished();

	UFUNCTION(BlueprintCallable)
	void OnMoriChargeCompleted();

public:
	UMoriComponent();
};

FORCEINLINE uint32 GetTypeHash(const UMoriComponent) { return 0; }
