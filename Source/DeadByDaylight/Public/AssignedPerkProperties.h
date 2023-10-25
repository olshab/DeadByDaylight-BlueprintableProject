#pragma once

#include "CoreMinimal.h"
#include "AssignedPerkProperties.generated.h"

USTRUCT(BlueprintType)
struct FAssignedPerkProperties
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName PerkId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PerkLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsTeachable;

public:
	DEADBYDAYLIGHT_API FAssignedPerkProperties();
};

FORCEINLINE uint32 GetTypeHash(const FAssignedPerkProperties) { return 0; }
