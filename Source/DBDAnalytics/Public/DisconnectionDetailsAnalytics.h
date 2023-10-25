#pragma once

#include "CoreMinimal.h"
#include "EGameState.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "ECharacterStatus.h"
#include "EPlayerRole.h"
#include "EHealthStatus.h"
#include "EHatchStatus.h"
#include "EDoorStatus.h"
#include "DisconnectionDetailsAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FDisconnectionDetailsAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PlayerPlatform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InGameTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerRole Role;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Reason;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EHealthStatus Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<ECharacterStatus> CharacterStatus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 GeneratorActivated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EHatchStatus HatchStatus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDoorStatus DoorStatus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EGameState DisconnectionType;

public:
	DBDANALYTICS_API FDisconnectionDetailsAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FDisconnectionDetailsAnalytics) { return 0; }
