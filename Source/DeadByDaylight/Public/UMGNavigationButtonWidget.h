#pragma once

#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UMGNavigationButtonWidget.generated.h"

class UWidget;
class UTexture2D;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGNavigationButtonWidget : public UUMGBaseButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UWidget* NotificationPanel;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetIsSelected(bool isSelected);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetIcon(UTexture2D* Icon);

public:
	UUMGNavigationButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGNavigationButtonWidget) { return 0; }
