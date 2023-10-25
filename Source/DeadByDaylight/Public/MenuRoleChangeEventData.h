#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "MenuRoleChangeEventData.generated.h"

USTRUCT(BlueprintType)
struct FMenuRoleChangeEventData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EPlayerRole PlayerRole;

public:
	DEADBYDAYLIGHT_API FMenuRoleChangeEventData();
};

FORCEINLINE uint32 GetTypeHash(const FMenuRoleChangeEventData) { return 0; }
