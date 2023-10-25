#pragma once

#include "CoreMinimal.h"
#include "HoudiniParameter.h"
#include "EHoudiniMultiParmModificationType.h"
#include "HoudiniParameterMultiParm.generated.h"

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniParameterMultiParm : public UHoudiniParameter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsShown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString TemplateName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MultiparmValue;

	UPROPERTY(EditAnywhere)
	uint32 MultiParmInstanceNum;

	UPROPERTY(EditAnywhere)
	uint32 MultiParmInstanceLength;

	UPROPERTY(EditAnywhere)
	uint32 MultiParmInstanceCount;

	UPROPERTY(EditAnywhere)
	uint32 InstanceStartOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EHoudiniMultiParmModificationType> MultiParmInstanceLastModifyArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DefaultInstanceCount;

public:
	UHoudiniParameterMultiParm();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniParameterMultiParm) { return 0; }
