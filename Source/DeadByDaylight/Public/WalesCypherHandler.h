#pragma once

#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "WalesCypherHandler.generated.h"

class UWalesCypherParameters;

UCLASS(Blueprintable)
class UWalesCypherHandler : public ULocalPlayerSubsystem
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UWalesCypherParameters* _walesCypherParams;

public:
	UWalesCypherHandler();
};

FORCEINLINE uint32 GetTypeHash(const UWalesCypherHandler) { return 0; }
