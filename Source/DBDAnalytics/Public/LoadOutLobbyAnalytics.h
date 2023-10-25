#pragma once

#include "CoreMinimal.h"
#include "LoadoutBaseAnalytics.h"
#include "LoadOutLobbyAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FLoadOutLobbyAnalytics: public FLoadoutBaseAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Prestige;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CharacterName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LobbyId;

public:
	DBDANALYTICS_API FLoadOutLobbyAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FLoadOutLobbyAnalytics) { return 0; }
