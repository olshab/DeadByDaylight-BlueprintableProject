#pragma once

#include "CoreMinimal.h"
#include "SimpleCharacterDropdown.h"
#include "CharacterCamera.generated.h"

USTRUCT(BlueprintType)
struct FCharacterCamera
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Label;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSimpleCharacterDropdown Data;

public:
	DEADBYDAYLIGHT_API FCharacterCamera();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterCamera) { return 0; }
