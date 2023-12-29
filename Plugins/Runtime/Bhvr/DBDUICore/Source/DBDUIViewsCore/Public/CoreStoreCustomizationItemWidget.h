#pragma once

#include "CoreMinimal.h"
#include "CoreStoreItemWidget.h"
#include "CoreStoreCustomizationItemWidget.generated.h"

class UStoreCustomizationItemViewData;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreCustomizationItemWidget : public UCoreStoreItemWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UStoreCustomizationItemViewData* _data;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetStoreCustomizationItemData(UStoreCustomizationItemViewData* data);

public:
	UCoreStoreCustomizationItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreCustomizationItemWidget) { return 0; }
