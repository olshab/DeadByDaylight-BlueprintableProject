#pragma once

#include "CoreMinimal.h"
#include "CoreStoreItemWidget.h"
#include "CoreStoreCharacterItemWidget.generated.h"

class UStoreCharacterItemViewData;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreCharacterItemWidget : public UCoreStoreItemWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UStoreCharacterItemViewData* _data;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetStoreCharacterItemData(UStoreCharacterItemViewData* data);

public:
	UCoreStoreCharacterItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreCharacterItemWidget) { return 0; }
