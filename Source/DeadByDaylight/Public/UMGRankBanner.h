#pragma once

#include "CoreMinimal.h"
#include "OnTooltipTriggeredEvent.h"
#include "Highlightable.h"
#include "MobileBaseUserWidget.h"
#include "EPlayerRole.h"
#include "UMGRankBanner.generated.h"

class UAkAudioEvent;
class UUMGTallyRankFrame;
class UButton;
class UImage;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGRankBanner : public UMobileBaseUserWidget, public IHighlightable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGTallyRankFrame* RankFrameWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UButton* TooltipButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* HighlightImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* OnLongPressSound;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FOnTooltipTriggeredEvent _onLongPressRankTooltipEvent;

public:
	UFUNCTION(BlueprintCallable)
	void StopHighlight();

	UFUNCTION(BlueprintCallable)
	void StartHighlight();

	UFUNCTION(BlueprintCallable)
	void SetData(int32 rank, EPlayerRole playerRole);

private:
	UFUNCTION(BlueprintCallable)
	void HandleTooltipLongPressedEvent();

public:
	UUMGRankBanner();
};

FORCEINLINE uint32 GetTypeHash(const UUMGRankBanner) { return 0; }
