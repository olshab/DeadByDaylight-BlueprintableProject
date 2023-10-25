#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "StoreCharactersCustomizationsViewInterface.h"
#include "StoreCustomizationCategorySelectedDelegate.h"
#include "StoreCustomizationSelectedDelegate.h"
#include "CoreStoreCharactersCustomizationsWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreCharactersCustomizationsWidget : public UCoreBaseUserWidget, public IStoreCharactersCustomizationsViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FStoreCustomizationSelectedDelegate _customizationSelectedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FStoreCustomizationCategorySelectedDelegate _customizationCategorySelectedDelegate;

public:
	UCoreStoreCharactersCustomizationsWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreCharactersCustomizationsWidget) { return 0; }
