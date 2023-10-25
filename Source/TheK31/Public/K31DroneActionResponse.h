#pragma once

#include "CoreMinimal.h"
#include "K31DroneActionRequest.h"
#include "EK31DroneActionResponse.h"
#include "K31DroneActionResponse.generated.h"

USTRUCT(BlueprintType)
struct FK31DroneActionResponse
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FK31DroneActionRequest Request;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Timestamp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EK31DroneActionResponse Response;

public:
	THEK31_API FK31DroneActionResponse();
};

FORCEINLINE uint32 GetTypeHash(const FK31DroneActionResponse) { return 0; }
