#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "AnimationPreviewCharacter.generated.h"

class APawn;

USTRUCT(BlueprintType)
struct FAnimationPreviewCharacter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerRole Role;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	APawn* SpawnedCharacter;

public:
	DEADBYDAYLIGHT_API FAnimationPreviewCharacter();
};

FORCEINLINE uint32 GetTypeHash(const FAnimationPreviewCharacter) { return 0; }
