#pragma once

#include "CoreMinimal.h"
#include "EGameState.h"
#include "PlayerStateData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerStateData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CharacterLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName EquipedFavorId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> EquipedPerkIds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> EquipedPerkLevels;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EGameState _playerGameState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _prestigeLevel;

public:
	DEADBYDAYLIGHT_API FPlayerStateData();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerStateData) { return 0; }
