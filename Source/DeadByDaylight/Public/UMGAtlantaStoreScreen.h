#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "ECurrencyType.h"
#include "UMGAtlantaStoreScreen.generated.h"

class UScaleBox;
class UUniformGridPanel;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGAtlantaStoreScreen : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UScaleBox* AuricCellsWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUniformGridPanel* AuricCellsGridPanel;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetBank(ECurrencyType currencyType, int32 bank);

	UFUNCTION(BlueprintCallable)
	void HandleOnStoreLeft();

	UFUNCTION(BlueprintCallable)
	void HandleOnClickedBuyAuricCell(int32 cellIndex);

public:
	UUMGAtlantaStoreScreen();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaStoreScreen) { return 0; }
