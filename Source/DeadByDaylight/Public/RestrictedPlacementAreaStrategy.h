#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DBDTunableRowHandle.h"
#include "RestrictedPlacementAreaStrategy.generated.h"

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API URestrictedPlacementAreaStrategy : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDTunableRowHandle RestrictedRadius;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _useTunableForHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _maxHeightRestriction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxHeightRestrictionTunable;

public:
	URestrictedPlacementAreaStrategy();
};

FORCEINLINE uint32 GetTypeHash(const URestrictedPlacementAreaStrategy) { return 0; }
