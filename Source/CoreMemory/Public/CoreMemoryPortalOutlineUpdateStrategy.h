#pragma once

#include "CoreMinimal.h"
#include "DefaultOutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "CoreMemoryPortalOutlineUpdateStrategy.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UCoreMemoryPortalOutlineUpdateStrategy : public UDefaultOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor _outlineColor;

public:
	UCoreMemoryPortalOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryPortalOutlineUpdateStrategy) { return 0; }
