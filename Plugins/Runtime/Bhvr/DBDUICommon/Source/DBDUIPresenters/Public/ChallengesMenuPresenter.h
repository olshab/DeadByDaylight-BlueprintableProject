#pragma once

#include "CoreMinimal.h"
#include "EChallengesMenuState.h"
#include "UObject/SoftObjectPtr.h"
#include "Presenter.h"
#include "ChallengesMenuPresenter.generated.h"

class UChallengesMenuDailyRitualsSubPresenter;
class UChallengesMenuEventRitualsSubPresenter;
class UUserWidget;
class USubPresenter;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIPRESENTERS_API UChallengesMenuPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UUserWidget> ChallengesMenuWidgetClass;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UChallengesMenuDailyRitualsSubPresenter* _dailyRitualsSubPresenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UChallengesMenuEventRitualsSubPresenter* _eventRitualsSubPresenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	USubPresenter* _activeSubPresenter;

private:
	UFUNCTION(BlueprintCallable)
	void SetMenuState(const EChallengesMenuState menuState);

	UFUNCTION(BlueprintCallable)
	void OnSettingsButtonClicked();

	UFUNCTION(BlueprintCallable)
	void OnBackButtonClicked();

public:
	UChallengesMenuPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UChallengesMenuPresenter) { return 0; }
