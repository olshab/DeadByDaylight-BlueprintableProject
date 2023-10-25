#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniParameter.h"
#include "HoudiniParameterColor.generated.h"

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniParameterColor : public UHoudiniParameter
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor Color;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor DefaultColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsChildOfRamp;

public:
	UHoudiniParameterColor();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniParameterColor) { return 0; }
