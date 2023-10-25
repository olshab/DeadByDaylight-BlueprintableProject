#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "TerrorRadiusVisualIndicatorHeartStateRange.h"
#include "TerrorRadiusVisualFeedbackComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UTerrorRadiusVisualFeedbackComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHeartStateChanged, FGameplayTag, heartState);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHeartBeat, float, bpmIntensityPercentage);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnHeartStateChanged OnHeartStateChanged;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FTerrorRadiusVisualIndicatorHeartStateRange> _heartStateRanges;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _hideHeartStateTags;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable, meta=(AllowPrivateAccess=true))
	FOnHeartBeat OnHeartBeat;

public:
	UTerrorRadiusVisualFeedbackComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTerrorRadiusVisualFeedbackComponent) { return 0; }
