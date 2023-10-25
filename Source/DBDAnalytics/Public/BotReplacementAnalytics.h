#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "EPlayerRole.h"
#include "EAIDifficultyLevel.h"
#include "BotReplacementAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FBotReplacementAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString KrakenMatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerRole Role;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MatchTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CharacterName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ReplacedCharacterMirrorsId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAIDifficultyLevel BotDifficultyLevel;

public:
	DBDANALYTICS_API FBotReplacementAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FBotReplacementAnalytics) { return 0; }
