#pragma once

#include "CoreMinimal.h"
#include "Perception/AISense.h"
#include "AISense_PointOfInterest.generated.h"

class AActor;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UAISense_PointOfInterest : public UAISense
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AActor*> _sources;

public:
	UAISense_PointOfInterest();
};

FORCEINLINE uint32 GetTypeHash(const UAISense_PointOfInterest) { return 0; }
