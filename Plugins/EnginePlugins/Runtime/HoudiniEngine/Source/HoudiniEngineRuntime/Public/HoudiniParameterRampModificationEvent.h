#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHoudiniRampInterpolationType.h"
#include "HoudiniParameterRampModificationEvent.generated.h"

UCLASS(Blueprintable, DefaultToInstanced)
class HOUDINIENGINERUNTIME_API UHoudiniParameterRampModificationEvent : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool bIsInsertEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool bIsFloatRamp;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DeleteInstanceIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InsertPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InsertFloat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor InsertColor;

	UPROPERTY(EditAnywhere)
	EHoudiniRampInterpolationType InsertInterpolation;

public:
	UHoudiniParameterRampModificationEvent();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniParameterRampModificationEvent) { return 0; }
