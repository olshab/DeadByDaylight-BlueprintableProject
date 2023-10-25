#pragma once

#include "CoreMinimal.h"
#include "AuthorityDiscernedCharacter.generated.h"

class ACharacter;

USTRUCT(BlueprintType)
struct FAuthorityDiscernedCharacter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ACharacter* _character;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isSighted;

public:
	GAMEPLAYUTILITIES_API FAuthorityDiscernedCharacter();
};

FORCEINLINE uint32 GetTypeHash(const FAuthorityDiscernedCharacter) { return 0; }
