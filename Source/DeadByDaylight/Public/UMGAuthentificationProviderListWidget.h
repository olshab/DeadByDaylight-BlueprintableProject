#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGAuthentificationProviderListWidget.generated.h"

class UHorizontalBox;

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGAuthentificationProviderListWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UHorizontalBox* GuestButtonContainer;

public:
	UFUNCTION(BlueprintCallable)
	void HideGuestButton();

public:
	UUMGAuthentificationProviderListWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAuthentificationProviderListWidget) { return 0; }
