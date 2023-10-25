#pragma once

#include "CoreMinimal.h"
#include "EKillerHeight.h"
#include "KillerAttributesData.generated.h"

USTRUCT(BlueprintType)
struct FKillerAttributesData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float Speed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float TerrorRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EKillerHeight Height;

public:
	DEADBYDAYLIGHT_API FKillerAttributesData();
};

FORCEINLINE uint32 GetTypeHash(const FKillerAttributesData) { return 0; }
