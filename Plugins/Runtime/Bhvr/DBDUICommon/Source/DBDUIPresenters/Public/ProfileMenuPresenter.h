#pragma once

#include "CoreMinimal.h"
#include "Presenter.h"
#include "Templates/SubclassOf.h"
#include "EProfileMenuState.h"
#include "ProfileMenuPresenter.generated.h"

class UProfileMenuCustomizationSubPresenter;
class UUserWidget;
class UProfileMenuStatsSubPresenter;
class USubPresenter;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIPRESENTERS_API UProfileMenuPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> ProfileMenuWidgetClass;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UProfileMenuStatsSubPresenter* _statsSubPresenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UProfileMenuCustomizationSubPresenter* _badgeSubPresenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UProfileMenuCustomizationSubPresenter* _bannerSubPresenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	USubPresenter* _activeSubPresenter;

private:
	UFUNCTION(BlueprintCallable)
	void SetMenuState(EProfileMenuState menuState);

	UFUNCTION(BlueprintCallable)
	void OnSettingsButtonClicked();

	UFUNCTION(BlueprintCallable)
	void OnBackButtonClicked();

public:
	UProfileMenuPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UProfileMenuPresenter) { return 0; }
