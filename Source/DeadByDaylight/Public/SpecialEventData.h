#pragma once

#include "CoreMinimal.h"
#include "ESpecialEventDependency.h"
#include "DBDTableRowBase.h"
#include "SpecialBehaviourSpawnableComponent.h"
#include "SpecialEventObjectiveData.h"
#include "SpecialEventSplashScreenData.h"
#include "SpecialEventOfferingSequenceData.h"
#include "ECurrencyType.h"
#include "UObject/NoExportTypes.h"
#include "ESpecialEventGameMode.h"
#include "SpecialEventEntryPopupData.h"
#include "SpecialEventBloodwebData.h"
#include "SpecialEventUiTakeoverData.h"
#include "SpecialEventData.generated.h"

class UCommentatorAudioData;

USTRUCT(BlueprintType)
struct FSpecialEventData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName EventId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECurrencyType CurrencyType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText EventName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString EventBannerLabel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString EventThemeLabel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsTrackedOnline;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseSpecialEventLoadingScreen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FSpecialEventObjectiveData> Objectives;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FColor ObjectOutlineColour;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LobbyName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ShopName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> AdditionalLobbyNames;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName AudioStateSpecialEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FSpecialBehaviourSpawnableComponent> SpawnableComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ESpecialEventGameMode GameMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseEventEntryScreen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSpecialEventEntryPopupData EventEntryData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ESpecialEventDependency EventDependency;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseMarketDiscount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSpecialEventBloodwebData Bloodweb;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSpecialEventOfferingSequenceData OfferingSequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSpecialEventSplashScreenData SplashScreen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSpecialEventUiTakeoverData UiTakeoverData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCommentatorAudioData* CommentatorAudioData;

public:
	DEADBYDAYLIGHT_API FSpecialEventData();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialEventData) { return 0; }
