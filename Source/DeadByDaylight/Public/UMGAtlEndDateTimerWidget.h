#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGAtlEndDateTimerWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGAtlEndDateTimerWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UTextBlock* TextEndIn;

public:
	UUMGAtlEndDateTimerWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlEndDateTimerWidget) { return 0; }
