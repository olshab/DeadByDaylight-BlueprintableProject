#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SpawnInfo.generated.h"

USTRUCT(BlueprintType)
struct FSpawnInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UClass* ActorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform Transform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName AttachSocket;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AttachParentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UClass* AttachParentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> Tags;

public:
	DEADBYDAYLIGHT_API FSpawnInfo();
};

FORCEINLINE uint32 GetTypeHash(const FSpawnInfo) { return 0; }
