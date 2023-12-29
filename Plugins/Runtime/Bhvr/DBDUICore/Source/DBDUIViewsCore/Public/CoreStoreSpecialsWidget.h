#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StoreSpecialsViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "CoreStoreSpecialsWidget.generated.h"

class UCoreAuricCellsSpecialOfferWidget;
class UCorePreConstructableList;
class UCoreSelectableButtonWidget;
class UDBDWrapBox;

UCLASS(Blueprintable, EditInlineNew)
class UCoreStoreSpecialsWidget : public UCoreBaseUserWidget, public IStoreSpecialsViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreSelectableButtonWidget> _itemWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreAuricCellsSpecialOfferWidget* AuricCellSpecialOffer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDWrapBox* Container;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	int32 _preConstructedItemsCount;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCorePreConstructableList* _itemList;

public:
	UCoreStoreSpecialsWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreSpecialsWidget) { return 0; }
