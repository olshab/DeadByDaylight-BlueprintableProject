#pragma once

#include "CoreMinimal.h"
#include "BasePerkAnalytics.h"
#include "KnockoutSurvivorFoundAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FKnockoutSurvivorFoundAnalytics: public FBasePerkAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString RescuingSurvivorMirrorsId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString FoundSurvivorMirrorsId;

public:
	DBDANALYTICS_API FKnockoutSurvivorFoundAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FKnockoutSurvivorFoundAnalytics) { return 0; }
