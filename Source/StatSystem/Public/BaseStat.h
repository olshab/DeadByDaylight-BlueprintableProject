#pragma once

#include "CoreMinimal.h"
#include "StatModifier.h"
#include "BaseStat.generated.h"

USTRUCT(BlueprintType)
struct FBaseStat
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FStatModifier> _statModifiers;

public:
	STATSYSTEM_API FBaseStat();
};

FORCEINLINE uint32 GetTypeHash(const FBaseStat) { return 0; }
