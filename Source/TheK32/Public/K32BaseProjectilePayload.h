#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "K32BaseProjectilePayload.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FK32BaseProjectilePayload
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector StartLocationWorldSpace;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsMovingToActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector WorldPositionTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* TargetActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName TargetSocket;

public:
	THEK32_API FK32BaseProjectilePayload();
};

FORCEINLINE uint32 GetTypeHash(const FK32BaseProjectilePayload) { return 0; }
