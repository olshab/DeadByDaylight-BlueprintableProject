#pragma once

#include "CoreMinimal.h"
#include "ECharacterCameraViewType.h"
#include "CharacterViewTarget.generated.h"

USTRUCT(BlueprintType)
struct FCharacterViewTarget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECharacterCameraViewType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString RawData;

public:
	DEADBYDAYLIGHT_API FCharacterViewTarget();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterViewTarget) { return 0; }
