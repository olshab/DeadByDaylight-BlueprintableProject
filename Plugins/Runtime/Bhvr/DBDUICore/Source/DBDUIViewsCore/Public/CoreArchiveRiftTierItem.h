#pragma once

#include "CoreMinimal.h"
#include "ArchiveRiftTierItemClicked.h"
#include "Blueprint/UserWidget.h"
#include "ArchiveRiftTierItemUnlockAnimationComplete.h"
#include "ArchiveRiftTierRewardsViewData.h"
#include "CoreArchiveRiftTierItem.generated.h"

class UGridPanel;
class UAkAudioEvent;
class UCoreRewardWrapperWidget;
class UCoreButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchiveRiftTierItem : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FArchiveRiftTierItemClicked _itemClickedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FArchiveRiftTierItemUnlockAnimationComplete _unlockAnimationCompleteDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UGridPanel* FreeRewardsContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UGridPanel* PremiumRewardsContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	TArray<UCoreRewardWrapperWidget*> _freeRewardWidgets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	TArray<UCoreRewardWrapperWidget*> _premiumRewardWidgets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* _unlockAnimationCompleteSound;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetLockedState(const bool isLocked, const bool hasPremium);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetGenericData(const FArchiveRiftTierRewardsViewData& data);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void PlayUnlockanimation(bool isPremiumUnlocked, float delay);

protected:
	UFUNCTION(BlueprintCallable)
	void OnRewardClicked(UCoreButtonWidget* button);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Clear();

public:
	UCoreArchiveRiftTierItem();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchiveRiftTierItem) { return 0; }
