#pragma once

#include "CoreMinimal.h"
#include "BaseBloodwebContentAdapter.h"
#include "BackendBloodwebContentAdapter.generated.h"

class UBloodwebGenerator;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UBackendBloodwebContentAdapter : public UBaseBloodwebContentAdapter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UBloodwebGenerator* _bloodwebBuilder;

public:
	UBackendBloodwebContentAdapter();
};

FORCEINLINE uint32 GetTypeHash(const UBackendBloodwebContentAdapter) { return 0; }
