#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "WiggleWidget.generated.h"

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UWiggleWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeBetweenAnimationStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UMobileBaseUserWidget* WiggleButtonLeft;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UMobileBaseUserWidget* WiggleButtonRight;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void BecomeUnavailable();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void BecomeAvailable();

public:
	UWiggleWidget();
};

FORCEINLINE uint32 GetTypeHash(const UWiggleWidget) { return 0; }
