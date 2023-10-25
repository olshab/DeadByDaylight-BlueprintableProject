#pragma once

#include "CoreMinimal.h"
#include "TallyPlayerResultData.h"
#include "OnTallyScoreboardAddFriendEvent.h"
#include "UMGLoadoutBaseWidget.h"
#include "OnTallyScoreboardReportEvent.h"
#include "UMGTallyScoreboardPlayerInfoWidget.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class UUMGTallyScoreboardPlayerInfoWidget : public UUMGLoadoutBaseWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnTallyScoreboardAddFriendEvent OnTallyScoreboardAddFriendEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnTallyScoreboardReportEvent OnTallyScoreboardReportEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UImage* ImageHorizontalSeparation;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FTallyPlayerResultData PlayerResultData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool LoadoutIsBlocked;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateWidget();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateReported();

	UFUNCTION(BlueprintCallable)
	void UpdateLoadout();

public:
	UFUNCTION(BlueprintCallable)
	void SetPlayerScoreData(const FTallyPlayerResultData& resultData);

	UFUNCTION(BlueprintCallable)
	void SetPlayerReported(bool isReport);

	UFUNCTION(BlueprintCallable)
	void SetPlayerLoadoutBlocked(bool isBlock);

	UFUNCTION(BlueprintCallable)
	void HandleReportEvent(FName buttonID);

	UFUNCTION(BlueprintCallable)
	void HandleAddFriendEvent(FName buttonID);

public:
	UUMGTallyScoreboardPlayerInfoWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGTallyScoreboardPlayerInfoWidget) { return 0; }
