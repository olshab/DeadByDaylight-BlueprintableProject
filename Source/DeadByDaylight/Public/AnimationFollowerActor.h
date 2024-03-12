#pragma once

#include "CoreMinimal.h"
#include "AnimationMontageDescriptor.h"
#include "GameFramework/Actor.h"
#include "AnimationFollowerActor.generated.h"

class UMontagePlayer;
class UDBDSkeletalMeshComponentBudgeted;
class UAnimationMontageSlave;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API AAnimationFollowerActor : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDSkeletalMeshComponentBudgeted* _skeletalMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UAnimationMontageSlave* _montageFollower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UMontagePlayer* _montagePlayer;

private:
	UFUNCTION(BlueprintCallable)
	void OnMontageStopped(const FAnimationMontageDescriptor id);

	UFUNCTION(BlueprintCallable)
	void OnMontageStarted(const FAnimationMontageDescriptor id, const float rate);

	UFUNCTION(BlueprintCallable)
	void OnMontageEnd(const FAnimationMontageDescriptor montage, bool interrupted);

protected:
	UFUNCTION(BlueprintCallable)
	void NativeOnMontageStopped(const FAnimationMontageDescriptor id);

	UFUNCTION(BlueprintCallable)
	void NativeOnMontageStarted(const FAnimationMontageDescriptor id, const float rate);

	UFUNCTION(BlueprintCallable)
	void NativeOnMontageEnded(const FAnimationMontageDescriptor montage, bool interrupted);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnMontageStopped();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnMontageStarted();

public:
	AAnimationFollowerActor();
};

FORCEINLINE uint32 GetTypeHash(const AAnimationFollowerActor) { return 0; }
