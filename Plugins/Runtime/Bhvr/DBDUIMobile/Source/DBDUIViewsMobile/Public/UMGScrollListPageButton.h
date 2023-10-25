#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "OnScrollListPageButtonClicked.h"
#include "UMGScrollListPageButton.generated.h"

class UButton;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSMOBILE_API UUMGScrollListPageButton : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnScrollListPageButtonClicked OnClicked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 PageIndex;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UButton* ActionButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* SelectedImage;

public:
	UFUNCTION(BlueprintCallable)
	void SetIsSelected(bool selected);

	UFUNCTION(BlueprintCallable)
	void HandleActionButtonClick();

public:
	UUMGScrollListPageButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGScrollListPageButton) { return 0; }
