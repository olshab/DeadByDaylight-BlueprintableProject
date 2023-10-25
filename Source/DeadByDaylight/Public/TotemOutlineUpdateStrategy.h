#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SourceBasedOutlineUpdateStrategy.h"
#include "TotemOutlineUpdateStrategy.generated.h"

class UCurveLinearColor;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UTotemOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor _revealedColorToSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor _boonTotemRevealedColorToSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveLinearColor* _revealedColorToKiller;

public:
	UFUNCTION(BlueprintCallable)
	FLinearColor GetRevealColorToSurvivor() const;

public:
	UTotemOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UTotemOutlineUpdateStrategy) { return 0; }
