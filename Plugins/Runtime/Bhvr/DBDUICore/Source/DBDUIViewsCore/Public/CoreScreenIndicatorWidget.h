#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "ScreenIndicatorViewData.h"
#include "CoreScreenIndicatorWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCoreScreenIndicatorWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InactiveTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D IndicatorPadding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D DistanceClamping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinDistanceRatio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinDistanceAlpha;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetData(const FScreenIndicatorViewData& data);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ClearData();

public:
	UCoreScreenIndicatorWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreScreenIndicatorWidget) { return 0; }
