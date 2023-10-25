#pragma once

#include "CoreMinimal.h"
#include "InteractionRequest.generated.h"

class UInteractionDefinition;
class ADBDPlayer;

USTRUCT(BlueprintType)
struct FInteractionRequest
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UInteractionDefinition* _interaction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _requester;

public:
	DEADBYDAYLIGHT_API FInteractionRequest();
};

FORCEINLINE uint32 GetTypeHash(const FInteractionRequest) { return 0; }
