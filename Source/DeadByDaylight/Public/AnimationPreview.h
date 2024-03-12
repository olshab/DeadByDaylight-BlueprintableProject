#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnimationPreviewProp.h"
#include "AnimationPreviewCharacter.h"
#include "AnimationPreviewRequest.h"
#include "AnimationPreview.generated.h"

UCLASS(Blueprintable, Abstract)
class UAnimationPreview : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FAnimationPreviewCharacter> Characters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FAnimationPreviewProp> Props;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FAnimationPreviewRequest _request;

private:
	UFUNCTION(BlueprintCallable)
	void OnRequiredClassesLoaded();

	UFUNCTION(BlueprintCallable)
	void OnFadeOutForCompletionComplete(bool succeeded);

	UFUNCTION(BlueprintCallable)
	void OnFadeInComplete();

	UFUNCTION(BlueprintCallable)
	void OnAnimationStartFadeOutComplete();

public:
	UAnimationPreview();
};

FORCEINLINE uint32 GetTypeHash(const UAnimationPreview) { return 0; }
