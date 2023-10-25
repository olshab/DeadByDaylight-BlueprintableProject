#pragma once

#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UMGAtlantaEventsTab.generated.h"

class UTextBlock;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGAtlantaEventsTab : public UUMGBaseButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString _eventId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* HotTagText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* NewTagText;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetSelectionVisuals(bool isSelected);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetNewTag();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetHotTag();

public:
	UUMGAtlantaEventsTab();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaEventsTab) { return 0; }
