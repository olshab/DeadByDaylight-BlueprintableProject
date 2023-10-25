#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "UMGTallyListElementWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UUMGTallyListElementWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 ElementIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FVector2D WidgetSize;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnPlayInAnimation();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnPageVisibilityChanged(bool isVisible, bool wasInAnimationPlayed);

	UFUNCTION(BlueprintCallable)
	void OnInAnimationFinished();

public:
	UUMGTallyListElementWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGTallyListElementWidget) { return 0; }
