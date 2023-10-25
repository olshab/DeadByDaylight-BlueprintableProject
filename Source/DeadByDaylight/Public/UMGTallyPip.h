#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGTallyPip.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class UUMGTallyPip : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* Filling;

protected:
	UFUNCTION(BlueprintCallable)
	void HideFilling();

public:
	UUMGTallyPip();
};

FORCEINLINE uint32 GetTypeHash(const UUMGTallyPip) { return 0; }
