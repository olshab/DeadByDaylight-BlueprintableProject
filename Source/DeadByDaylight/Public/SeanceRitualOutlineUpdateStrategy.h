#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SourceBasedOutlineUpdateStrategy.h"
#include "SeanceRitualOutlineUpdateStrategy.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USeanceRitualOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	FLinearColor GetRevealColorToSurvivor() const;

public:
	USeanceRitualOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const USeanceRitualOutlineUpdateStrategy) { return 0; }
