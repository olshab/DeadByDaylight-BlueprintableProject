#pragma once

#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "GuardFlagOUtlineUpdateStrategy.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UGuardFlagOUtlineUpdateStrategy : public UOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor _killerColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor _survivorColor;

public:
	UGuardFlagOUtlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UGuardFlagOUtlineUpdateStrategy) { return 0; }
