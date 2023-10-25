#pragma once

#include "CoreMinimal.h"
#include "KeyTupleBool.generated.h"

USTRUCT(BlueprintType)
struct FKeyTupleBool
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FName Key;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool Value;

public:
	DEADBYDAYLIGHT_API FKeyTupleBool();
};

FORCEINLINE uint32 GetTypeHash(const FKeyTupleBool) { return 0; }
