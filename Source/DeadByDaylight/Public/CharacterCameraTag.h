#pragma once

#include "CoreMinimal.h"
#include "CharacterCamera.h"
#include "CharacterCameraTag.generated.h"

class ACameraActor;

USTRUCT(BlueprintType)
struct FCharacterCameraTag
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ACameraActor* Camera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCharacterCamera> Characters;

public:
	DEADBYDAYLIGHT_API FCharacterCameraTag();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterCameraTag) { return 0; }
