#pragma once

#include "CoreMinimal.h"
#include "HoudiniBakedOutputObject.generated.h"

USTRUCT(BlueprintType)
struct FHoudiniBakedOutputObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Actor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Blueprint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ActorBakeName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString BakedObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString BakedComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> InstancedActors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> InstancedComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FString> LandscapeLayers;

public:
	HOUDINIENGINERUNTIME_API FHoudiniBakedOutputObject();
};

FORCEINLINE uint32 GetTypeHash(const FHoudiniBakedOutputObject) { return 0; }
