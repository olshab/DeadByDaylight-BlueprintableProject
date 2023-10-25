#pragma once

#include "CoreMinimal.h"
#include "Footstep.generated.h"

class UCurveFloat;
class UDBDDecalComponent;

USTRUCT(BlueprintType)
struct FFootstep
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UCurveFloat* FadeCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UCurveFloat* VeinsCurve;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDDecalComponent* _decal;

public:
	DBDGAMEPLAY_API FFootstep();
};

FORCEINLINE uint32 GetTypeHash(const FFootstep) { return 0; }
