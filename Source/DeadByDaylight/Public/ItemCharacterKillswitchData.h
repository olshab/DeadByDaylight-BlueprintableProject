#pragma once

#include "CoreMinimal.h"
#include "DisabledItemData.h"
#include "CharacterFallbackData.h"
#include "ItemCharacterKillswitchData.generated.h"

USTRUCT(BlueprintType)
struct FItemCharacterKillswitchData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCharacterFallbackData CharacterFallback;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FCharacterFallbackData> FallbacksByGameType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FDisabledItemData> DisabledItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool DisabledItems_IsSet;

public:
	DEADBYDAYLIGHT_API FItemCharacterKillswitchData();
};

FORCEINLINE uint32 GetTypeHash(const FItemCharacterKillswitchData) { return 0; }
