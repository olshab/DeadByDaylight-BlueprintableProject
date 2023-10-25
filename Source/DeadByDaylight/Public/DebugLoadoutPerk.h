#pragma once

#include "CoreMinimal.h"
#include "PerkDropdown.h"
#include "DebugLoadoutPerk.generated.h"

USTRUCT(BlueprintType)
struct FDebugLoadoutPerk
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPerkDropdown PerkDropdown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PerkLevel;

public:
	DEADBYDAYLIGHT_API FDebugLoadoutPerk();
};

FORCEINLINE uint32 GetTypeHash(const FDebugLoadoutPerk) { return 0; }
