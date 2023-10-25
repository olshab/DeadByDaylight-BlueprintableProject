#pragma once

#include "CoreMinimal.h"
#include "TagStateBoolBase.generated.h"

USTRUCT(BlueprintType)
struct FTagStateBoolBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isTrue;

public:
	GAMEPLAYTAGUTILITIES_API FTagStateBoolBase();
};

FORCEINLINE uint32 GetTypeHash(const FTagStateBoolBase) { return 0; }
