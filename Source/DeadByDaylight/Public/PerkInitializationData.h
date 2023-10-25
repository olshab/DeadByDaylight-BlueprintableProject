#pragma once

#include "CoreMinimal.h"
#include "EInputInteractionType.h"
#include "PerkInitializationData.generated.h"

USTRUCT(BlueprintType)
struct FPerkInitializationData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PerkLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInputInteractionType ActivatableInteractionInputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AuthorityDataSet;

public:
	DEADBYDAYLIGHT_API FPerkInitializationData();
};

FORCEINLINE uint32 GetTypeHash(const FPerkInitializationData) { return 0; }
