#pragma once

#include "CoreMinimal.h"
#include "HoudiniParameter.h"
#include "HoudiniParameterButtonStrip.generated.h"

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniParameterButtonStrip : public UHoudiniParameter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> Labels;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> Values;

public:
	UHoudiniParameterButtonStrip();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniParameterButtonStrip) { return 0; }
