#pragma once

#include "CoreMinimal.h"
#include "HoudiniParameter.h"
#include "HoudiniParameterString.generated.h"

class UObject;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniParameterString : public UHoudiniParameter
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> Values;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> DefaultValues;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UObject*> ChosenAssets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsAssetRef;

public:
	UHoudiniParameterString();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniParameterString) { return 0; }
