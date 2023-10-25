#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "EPlayerRole.h"
#include "LoadoutBaseAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FLoadoutBaseAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LoadoutItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LoadoutItemAddOn1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LoadoutItemAddOn2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LoadoutPerk1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LoadoutPerk2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LoadoutPerk3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LoadoutPerk4;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LoadoutOffering;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerRole Role;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Rank;

public:
	DBDANALYTICS_API FLoadoutBaseAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FLoadoutBaseAnalytics) { return 0; }
