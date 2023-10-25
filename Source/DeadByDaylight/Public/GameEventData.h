#pragma once

#include "CoreMinimal.h"
#include "GameEventData.generated.h"

class UObject;
class ADBDPlayer;
class AActor;

USTRUCT(BlueprintType)
struct FGameEventData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ADBDPlayer* Instigator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	AActor* Target;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float CustomValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UObject* CustomObjectParameter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 CustomIntValue;

public:
	DEADBYDAYLIGHT_API FGameEventData();
};

FORCEINLINE uint32 GetTypeHash(const FGameEventData) { return 0; }
