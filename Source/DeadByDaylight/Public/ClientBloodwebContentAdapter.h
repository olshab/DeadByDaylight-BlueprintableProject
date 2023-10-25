#pragma once

#include "CoreMinimal.h"
#include "BaseBloodwebContentAdapter.h"
#include "ClientBloodwebContentAdapter.generated.h"

class UBloodwebGenerator;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UClientBloodwebContentAdapter : public UBaseBloodwebContentAdapter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UBloodwebGenerator* _bloodwebBuilder;

public:
	UClientBloodwebContentAdapter();
};

FORCEINLINE uint32 GetTypeHash(const UClientBloodwebContentAdapter) { return 0; }
