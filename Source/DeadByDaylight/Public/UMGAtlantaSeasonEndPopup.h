#pragma once

#include "CoreMinimal.h"
#include "UMGGenericPopup.h"
#include "Engine/EngineTypes.h"
#include "UMGAtlantaSeasonEndPopup.generated.h"

class UUMGTallyRankBanner;
class UHorizontalBox;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGAtlantaSeasonEndPopup : public UUMGGenericPopup
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGTallyRankBanner* OldSurvivorRankBanner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGTallyRankBanner* NewSurvivorRankBanner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGTallyRankBanner* OldKillerRankBanner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGTallyRankBanner* NewKillerRankBanner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UHorizontalBox* NewRankHorizontalBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UHorizontalBox* OldRankHorizontalBox;

private:
	UPROPERTY(EditAnywhere, Transient)
	FTimerHandle _fadeOutTimerHandle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _timerBeforeFadeOutAnimation;

private:
	UFUNCTION(BlueprintCallable)
	void TriggerFadeOutAnimationTimer();

	UFUNCTION(BlueprintCallable)
	void PlayNewRankFadeInAnimation();

public:
	UUMGAtlantaSeasonEndPopup();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaSeasonEndPopup) { return 0; }
