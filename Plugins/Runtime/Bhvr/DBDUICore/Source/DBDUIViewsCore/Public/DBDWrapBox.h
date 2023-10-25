#pragma once

#include "CoreMinimal.h"
#include "Components/PanelWidget.h"
#include "Types/SlateEnums.h"
#include "UObject/NoExportTypes.h"
#include "DBDWrapBox.generated.h"

class UDBDWrapBoxSlot;
class UWidget;

UCLASS(Blueprintable)
class DBDUIVIEWSCORE_API UDBDWrapBox : public UPanelWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D InnerSlotPadding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WrapWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bExplicitWrapWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;

public:
	UFUNCTION(BlueprintCallable)
	void SetInnerSlotPadding(FVector2D InPadding);

	UFUNCTION(BlueprintCallable)
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);

	UFUNCTION(BlueprintCallable)
	UDBDWrapBoxSlot* AddChildToWrapBox(UWidget* Content);

public:
	UDBDWrapBox();
};

FORCEINLINE uint32 GetTypeHash(const UDBDWrapBox) { return 0; }
