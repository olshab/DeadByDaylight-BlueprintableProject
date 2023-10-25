#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "EEmblemQuality.h"
#include "UMGTallyEmblemWidget.generated.h"

class UImage;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UUMGTallyEmblemWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EEmblemQuality, UTexture2D*> _emblemBackgrounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* BackgroundImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* IconImage;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void PlayFadeInAnimation();

public:
	UUMGTallyEmblemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGTallyEmblemWidget) { return 0; }
