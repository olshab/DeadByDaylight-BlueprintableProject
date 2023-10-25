#pragma once

#include "CoreMinimal.h"
#include "UMGMenuBaseBanner.h"
#include "UMGMenuEventsBanner.generated.h"

class UImage;
class UTextBlock;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGMenuEventsBanner : public UUMGMenuBaseBanner
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* EventsIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* FallbackTitle;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetDefaultWidgetLayout();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetCustomWidgetLayout();

public:
	UUMGMenuEventsBanner();
};

FORCEINLINE uint32 GetTypeHash(const UUMGMenuEventsBanner) { return 0; }
