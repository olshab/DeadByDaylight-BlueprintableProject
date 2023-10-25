#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGStalkingStatusEffectUI.generated.h"

class UMaterialInstanceDynamic;
class UCanvasPanel;
class UImage;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGStalkingStatusEffectUI : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* StalkedCanvas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* StalkingFillFull;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* StalkingFillLines;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* StalkingRedBackground;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName StalkingStartAnimationName;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UMaterialInstanceDynamic* _stalkingFillFullMI;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UMaterialInstanceDynamic* _stalkingFillLinesMI;

public:
	UUMGStalkingStatusEffectUI();
};

FORCEINLINE uint32 GetTypeHash(const UUMGStalkingStatusEffectUI) { return 0; }
