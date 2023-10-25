#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ComponentToAddInfo.generated.h"

class UActorComponent;

USTRUCT(BlueprintType)
struct FComponentToAddInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UActorComponent> Component;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Name;

public:
	SPECIALEVENTUTILITIES_API FComponentToAddInfo();
};

FORCEINLINE uint32 GetTypeHash(const FComponentToAddInfo) { return 0; }
