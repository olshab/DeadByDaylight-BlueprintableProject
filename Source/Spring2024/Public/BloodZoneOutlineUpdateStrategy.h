#pragma once

#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "BloodZoneOutlineUpdateStrategy.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UBloodZoneOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor _outlineColor;

public:
	UBloodZoneOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UBloodZoneOutlineUpdateStrategy) { return 0; }
