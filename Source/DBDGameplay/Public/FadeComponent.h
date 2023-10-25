#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnFadePercentChangedDelegate.h"
#include "FadeComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UFadeComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnFadePercentChangedDelegate OnFadePercentChanged;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _fadeDuration;

public:
	UFUNCTION(BlueprintPure)
	float GetFadePercent() const;

public:
	UFadeComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFadeComponent) { return 0; }
