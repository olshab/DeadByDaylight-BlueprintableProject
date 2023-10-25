#pragma once

#include "CoreMinimal.h"
#include "HoudiniParameter.h"
#include "HoudiniParameterChoice.generated.h"

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniParameterChoice : public UHoudiniParameter
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 IntValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DefaultIntValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StringValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DefaultStringValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> StringChoiceValues;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> StringChoiceLabels;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsChildOfRamp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> IntValuesArray;

public:
	UHoudiniParameterChoice();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniParameterChoice) { return 0; }
