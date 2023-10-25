#pragma once

#include "CoreMinimal.h"
#include "EPDGWorkResultState.h"
#include "OutputActorOwner.h"
#include "TOPWorkResultObject.generated.h"

class UHoudiniOutput;

USTRUCT(BlueprintType)
struct FTOPWorkResultObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NonTransactional)
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NonTransactional)
	FString FilePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NonTransactional)
	EPDGWorkResultState State;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NonTransactional)
	int32 WorkItemResultInfoIndex;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NonTransactional)
	TArray<UHoudiniOutput*> ResultOutputs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NonTransactional)
	bool bAutoBakedSinceLastLoad;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NonTransactional, meta=(AllowPrivateAccess=true))
	FOutputActorOwner OutputActorOwner;

public:
	HOUDINIENGINERUNTIME_API FTOPWorkResultObject();
};

FORCEINLINE uint32 GetTypeHash(const FTOPWorkResultObject) { return 0; }
