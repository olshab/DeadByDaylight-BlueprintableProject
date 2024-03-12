#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AnimationPreviewSubsystem.generated.h"

class UAnimationPreview;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UAnimationPreviewSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UAnimationPreview* _activePreview;

private:
	UFUNCTION(BlueprintCallable)
	void OnAnimationPreviewEnd(UAnimationPreview* preview, bool completedSuccessfully);

public:
	UFUNCTION(BlueprintPure)
	bool IsPreviewingAnimation() const;

public:
	UAnimationPreviewSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const UAnimationPreviewSubsystem) { return 0; }
