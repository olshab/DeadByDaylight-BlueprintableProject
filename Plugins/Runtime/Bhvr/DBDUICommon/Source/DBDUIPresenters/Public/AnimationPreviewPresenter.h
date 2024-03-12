#pragma once

#include "CoreMinimal.h"
#include "EContext.h"
#include "UObject/SoftObjectPtr.h"
#include "Presenter.h"
#include "AnimationPreviewRequest.h"
#include "InputCoreTypes.h"
#include "AnimationPreviewPresenter.generated.h"

class UUserWidget;
class UAnimationPreviewSubsystem;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIPRESENTERS_API UAnimationPreviewPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UUserWidget> AnimationPreviewWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EContext ObservedContext;

private:
	UFUNCTION()
	void OnKeyPressed(FKey key) const;

	UFUNCTION(BlueprintCallable)
	void OnContextLeave(EContext context);

	UFUNCTION(BlueprintCallable)
	void OnContextEnter(EContext context);

	UFUNCTION(BlueprintCallable)
	void OnAnimationPreviewRequested(UAnimationPreviewSubsystem* animationPreviewSubsystem, FAnimationPreviewRequest& request);

	UFUNCTION(BlueprintCallable)
	void OnAnimationPreviewCompleted(UAnimationPreviewSubsystem* animationPreviewSubsystem, const FAnimationPreviewRequest& request, bool completedSuccessfully) const;

	UFUNCTION(BlueprintCallable)
	bool IsContextEntered() const;

public:
	UAnimationPreviewPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UAnimationPreviewPresenter) { return 0; }
