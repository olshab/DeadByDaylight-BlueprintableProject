#pragma once

#include "CoreMinimal.h"
#include "AICharacterBehaviour.h"
#include "AICharacterEscapeCarried.generated.h"

class ACamperPlayer;
class UAICharacterEscapeCarriedData;

UCLASS(Blueprintable)
class UAICharacterEscapeCarried : public UAICharacterBehaviour
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ACamperPlayer* _camperPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UAICharacterEscapeCarriedData* _behaviourData;

public:
	UAICharacterEscapeCarried();
};

FORCEINLINE uint32 GetTypeHash(const UAICharacterEscapeCarried) { return 0; }
