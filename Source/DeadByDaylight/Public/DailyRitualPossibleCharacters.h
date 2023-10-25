#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "DailyRitualPossibleCharacters.generated.h"

USTRUCT(BlueprintType)
struct FDailyRitualPossibleCharacters
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> CharacterIDs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EPlayerRole> Roles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EPlayerRole> SelectOneCharacterFromRoles;

public:
	DEADBYDAYLIGHT_API FDailyRitualPossibleCharacters();
};

FORCEINLINE uint32 GetTypeHash(const FDailyRitualPossibleCharacters) { return 0; }
