#pragma once

#include "CoreMinimal.h"
#include "DiscernibleCharacter.generated.h"

class ACharacter;

USTRUCT(BlueprintType)
struct FDiscernibleCharacter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ACharacter* _character;

public:
	GAMEPLAYUTILITIES_API FDiscernibleCharacter();
};

FORCEINLINE uint32 GetTypeHash(const FDiscernibleCharacter) { return 0; }
