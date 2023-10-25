#pragma once

#include "CoreMinimal.h"
#include "HoudiniParameter.h"
#include "HoudiniParameterFile.generated.h"

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniParameterFile : public UHoudiniParameter
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> Values;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> DefaultValues;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Filters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsReadOnly;

public:
	UHoudiniParameterFile();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniParameterFile) { return 0; }
