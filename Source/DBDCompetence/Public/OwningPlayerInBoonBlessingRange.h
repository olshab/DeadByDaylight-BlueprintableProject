#pragma once

#include "CoreMinimal.h"
#include "AnyActorPairQueryRangeIsTrue.h"
#include "OwningPlayerInBoonBlessingRange.generated.h"

class ATotem;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UOwningPlayerInBoonBlessingRange : public UAnyActorPairQueryRangeIsTrue
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ATotem* _boundTotem;

public:
	UOwningPlayerInBoonBlessingRange();
};

FORCEINLINE uint32 GetTypeHash(const UOwningPlayerInBoonBlessingRange) { return 0; }
