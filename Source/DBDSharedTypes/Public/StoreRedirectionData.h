#pragma once

#include "CoreMinimal.h"
#include "ECustomizationCategory.h"
#include "EPlayerRole.h"
#include "EStorePackType.h"
#include "StoreRedirectionData.generated.h"

USTRUCT(BlueprintType)
struct FStoreRedirectionData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CharacterIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECustomizationCategory Category;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ItemId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerRole PlayerRole;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PackId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EStorePackType PackType;

public:
	DBDSHAREDTYPES_API FStoreRedirectionData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreRedirectionData) { return 0; }
