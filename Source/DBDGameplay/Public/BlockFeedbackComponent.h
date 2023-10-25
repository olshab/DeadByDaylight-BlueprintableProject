#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BlockFeedbackStyleOverride.h"
#include "Templates/SubclassOf.h"
#include "BlockFeedbackComponent.generated.h"

class ULocalPlayerTrackerComponent;
class ABlockFeedbackBase;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UBlockFeedbackComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	ULocalPlayerTrackerComponent* _localPlayerTracker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ABlockFeedbackBase*> _defaultBlockSelfFeedbacks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ABlockFeedbackBase*> _defaultBlockOtherFeedbacks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<TSubclassOf<ABlockFeedbackBase>> _defaultBlockSelfFeedbackClasses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<TSubclassOf<ABlockFeedbackBase>> _defaultBlockOtherFeedbackClasses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FBlockFeedbackStyleOverride> _styleOverrides;

private:
	UFUNCTION(BlueprintCallable)
	void OnLocallyObservedChanged();

public:
	UBlockFeedbackComponent();
};

FORCEINLINE uint32 GetTypeHash(const UBlockFeedbackComponent) { return 0; }
