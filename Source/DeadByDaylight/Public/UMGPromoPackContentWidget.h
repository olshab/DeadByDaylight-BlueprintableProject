#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGPromoPackContentWidget.generated.h"

class UHorizontalBox;
class UVerticalBox;
class UPromoPackContentDataAsset;
class UScrollBox;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGPromoPackContentWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UHorizontalBox* Content;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UPromoPackContentDataAsset* WidgetPerContentType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UScrollBox* ScrollBox;

private:
	UPROPERTY(EditAnywhere, Transient, Export)
	TArray<TWeakObjectPtr<UVerticalBox>> _itemsContainer;

public:
	UUMGPromoPackContentWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGPromoPackContentWidget) { return 0; }
