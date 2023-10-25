#pragma once

#include "CoreMinimal.h"
#include "PathBuilder.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "PathBuilder_EQS.generated.h"

class UPathBuilder_EQS;

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UPathBuilder_EQS : public UPathBuilder
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FEQSParametrizedQueryExecutionRequest EQSRequest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NbMaxEQSRequests;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool MergeToSinglePathPoint;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UPathBuilder_EQS* _pendingEQSRequestBuilder;

public:
	UPathBuilder_EQS();
};

FORCEINLINE uint32 GetTypeHash(const UPathBuilder_EQS) { return 0; }
