#pragma once

#include "CoreMinimal.h"
#include "OnTallyScoreboardAddFriendEvent.h"
#include "UMGTallyListElementWidget.h"
#include "OnTallyScoreboardReportEvent.h"
#include "UMGTallyScoreboardWidget.generated.h"

class UUMGTallyScoreboardPlayerInfoWidget;

UCLASS(Blueprintable, EditInlineNew)
class UUMGTallyScoreboardWidget : public UUMGTallyListElementWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnTallyScoreboardAddFriendEvent OnTallyScoreboardAddFriendEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnTallyScoreboardReportEvent OnTallyScoreboardReportEvent;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText LabelTextRank;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText LabelTextScore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText LabelTextStatus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGTallyScoreboardPlayerInfoWidget* KillerWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGTallyScoreboardPlayerInfoWidget* FirstSurvivorWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGTallyScoreboardPlayerInfoWidget* SecondSurvivorWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGTallyScoreboardPlayerInfoWidget* ThirdSurvivorWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGTallyScoreboardPlayerInfoWidget* FourthSurvivorWidget;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UUMGTallyScoreboardPlayerInfoWidget*> SurvivorWidgets;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetFadeOut();

public:
	UFUNCTION(BlueprintCallable)
	void HandleReportEvent(const FString& playerID);

	UFUNCTION(BlueprintCallable)
	void HandleAddFriendEvent(const FString& playerID);

public:
	UUMGTallyScoreboardWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGTallyScoreboardWidget) { return 0; }
