#pragma once

#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "K28RemnantOutlineUpdateStrategy.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK28RemnantOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor _availableForTeleportSelectionColor;

public:
	UK28RemnantOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UK28RemnantOutlineUpdateStrategy) { return 0; }
