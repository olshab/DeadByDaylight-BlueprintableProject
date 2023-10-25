#pragma once

#include "CoreMinimal.h"
#include "AssignedPerkPropertiesV7.generated.h"

USTRUCT(BlueprintType)
struct FAssignedPerkPropertiesV7
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FName PerkId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	int32 PerkLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool IsTeachable;

public:
	DEADBYDAYLIGHT_API FAssignedPerkPropertiesV7();
};

FORCEINLINE uint32 GetTypeHash(const FAssignedPerkPropertiesV7) { return 0; }
