#pragma once

#include "CoreMinimal.h"
#include "EPlayerStateChangeType.h"
#include "PlayerStatusViewInterface.h"
#include "ESleepingUIState.h"
#include "CoreBaseHudWidget.h"
#include "PlayerStatusAssets.h"
#include "EPlayerStatus.h"
#include "PlayerStatusViewData.h"
#include "EObsessionUIState.h"
#include "CorePlayerStatusWidget.generated.h"

class UCorePlayerStatusKillerEffectWidget;
class UDBDTextBlock;
class UAkAudioEvent;
class UOverlay;
class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCorePlayerStatusWidget : public UCoreBaseHudWidget, public IPlayerStatusViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxNameLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EPlayerStatus, FPlayerStatusAssets> PlayerStatusAssets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* ObsessionSfx;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* PlayerNameTextfield;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UOverlay* KillerStatusContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FPlayerStatusViewData _cachedViewData;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UCorePlayerStatusKillerEffectWidget* _killerStatusEffectWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UDataTable* _killerStatusDataMappingDB;

protected:
	UFUNCTION(BlueprintPure)
	bool ShouldPlaySleepAnimation(ESleepingUIState newSleepState) const;

	UFUNCTION(BlueprintPure)
	bool HasTimerProgressChanged(float newTimerProgress) const;

	UFUNCTION(BlueprintPure)
	bool HasPlayerStatusDataChanged(const FPlayerStatusViewData& newViewData) const;

	UFUNCTION(BlueprintPure)
	bool HasPlayerStateChanged(EPlayerStatus newPlayerState) const;

	UFUNCTION(BlueprintPure)
	bool HasObsessionStateChanged(EObsessionUIState newObsessionState) const;

	UFUNCTION(BlueprintPure)
	bool HasKillerStatusDataChanged(const FPlayerStatusViewData& newViewData) const;

	UFUNCTION(BlueprintPure)
	EPlayerStateChangeType GetPlayerStateChangeType(const FPlayerStatusViewData& newViewData) const;

	UFUNCTION(BlueprintPure)
	UCorePlayerStatusKillerEffectWidget* GetKillerStatusEffectWidget() const;

public:
	UFUNCTION(BlueprintPure)
	UDataTable* GetKillerStatusDataMappingDB() const;

protected:
	UFUNCTION(BlueprintCallable)
	FPlayerStatusViewData CacheViewData(FPlayerStatusViewData data);

public:
	UCorePlayerStatusWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCorePlayerStatusWidget) { return 0; }
