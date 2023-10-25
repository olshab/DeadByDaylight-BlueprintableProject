#pragma once

#include "CoreMinimal.h"
#include "HoudiniParameter.h"
#include "HoudiniParameterToggle.generated.h"

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniParameterToggle : public UHoudiniParameter
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> Values;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> DefaultValues;

public:
	UHoudiniParameterToggle();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniParameterToggle) { return 0; }
