#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "MatchboxAddon.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THENURSE_API UMatchboxAddon : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _speedModifier;

public:
	UMatchboxAddon();
};

FORCEINLINE uint32 GetTypeHash(const UMatchboxAddon) { return 0; }
