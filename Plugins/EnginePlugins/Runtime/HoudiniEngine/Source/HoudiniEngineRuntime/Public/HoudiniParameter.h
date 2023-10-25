#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHoudiniParameterType.h"
#include "HoudiniParameter.generated.h"

UCLASS(Blueprintable, DefaultToInstanced)
class HOUDINIENGINERUNTIME_API UHoudiniParameter : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Label;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EHoudiniParameterType ParmType;

	UPROPERTY(EditAnywhere)
	uint32 TupleSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DuplicateTransient)
	int32 NodeId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DuplicateTransient)
	int32 ParmId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DuplicateTransient)
	int32 ParentParmId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ChildIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsVisible;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsParentFolderVisible;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsDisabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHasChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bNeedsToTriggerUpdate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, DuplicateTransient)
	bool bIsDefault;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsSpare;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bJoinNext;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsChildOfMultiParm;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsDirectChildOfMultiParm;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DuplicateTransient)
	bool bPendingRevertToDefault;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DuplicateTransient)
	TArray<int32> TuplePendingRevertToDefault;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Help;

	UPROPERTY(EditAnywhere)
	uint32 TagCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ValueIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bHasExpression;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DuplicateTransient)
	bool bShowExpression;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ParamExpression;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FString> Tags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoUpdate;

public:
	UHoudiniParameter();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniParameter) { return 0; }
