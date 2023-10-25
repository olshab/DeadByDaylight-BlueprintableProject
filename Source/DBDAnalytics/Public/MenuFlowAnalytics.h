#pragma once

#include "CoreMinimal.h"
#include "MenuFlowTabData.h"
#include "MenuFlowButtonPressData.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "MenuFlowAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FMenuFlowAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CurrentContext;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PreviousContext;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeOnPreviousContext;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ContextChangeTimetamp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LobbyId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FMenuFlowTabData> Tabs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FMenuFlowButtonPressData> Buttons;

public:
	DBDANALYTICS_API FMenuFlowAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FMenuFlowAnalytics) { return 0; }
