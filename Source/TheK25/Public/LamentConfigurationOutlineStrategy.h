#pragma once

#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "LamentConfigurationOutlineStrategy.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class ULamentConfigurationOutlineStrategy : public UOutlineUpdateStrategy
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor _noChainHuntProgressColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor _chainHuntActiveColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor _killerColor;

public:
	ULamentConfigurationOutlineStrategy();
};

FORCEINLINE uint32 GetTypeHash(const ULamentConfigurationOutlineStrategy) { return 0; }
