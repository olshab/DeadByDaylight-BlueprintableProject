#pragma once

#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "DefaultOutlineUpdateStrategy.generated.h"

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDefaultOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor _revealedColorToSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor _revealedColorToKiller;

public:
	UDefaultOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UDefaultOutlineUpdateStrategy) { return 0; }
