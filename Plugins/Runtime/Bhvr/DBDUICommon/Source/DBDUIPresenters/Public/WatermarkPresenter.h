#pragma once

#include "CoreMinimal.h"
#include "Presenter.h"
#include "Templates/SubclassOf.h"
#include "WatermarkPresenter.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIPRESENTERS_API UWatermarkPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> WatermarkWidgetClass;

protected:
	UFUNCTION(BlueprintCallable)
	bool IsUsingCommandLineArgument();

	UFUNCTION(BlueprintCallable)
	bool IsSteamBuild();

	UFUNCTION(BlueprintCallable)
	bool IsNonShippingBuild();

public:
	UWatermarkPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UWatermarkPresenter) { return 0; }
