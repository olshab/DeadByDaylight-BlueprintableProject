#pragma once

#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "DemogorgonPortalOutlineUpdateStrategy.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UDemogorgonPortalOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor _survivorAuraColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor _killerHiddenAuraColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor _killerExposedAuraColor;

public:
	UDemogorgonPortalOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UDemogorgonPortalOutlineUpdateStrategy) { return 0; }
