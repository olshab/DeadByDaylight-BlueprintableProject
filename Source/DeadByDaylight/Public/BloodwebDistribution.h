#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BloodwebDistribution.generated.h"

class UBloodwebTunables;
class UDBDDesignTunables;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UBloodwebDistribution : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UDBDDesignTunables* _designTunables;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UBloodwebTunables* _bloodwebTunables;

public:
	UBloodwebDistribution();
};

FORCEINLINE uint32 GetTypeHash(const UBloodwebDistribution) { return 0; }
