#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "PerkAcquisitionAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FPerkAcquisitionAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CharacterName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PerkId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PerkSource;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Duplicate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PerkLevel;

public:
	DBDANALYTICS_API FPerkAcquisitionAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FPerkAcquisitionAnalytics) { return 0; }
