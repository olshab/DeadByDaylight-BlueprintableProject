#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "ECurrencyType.h"
#include "SpecialEventCommunityChallengeData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSpecialEventCommunityChallengeData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECurrencyType CurrencyRewardType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> ObjectiveIcon;

public:
	DBDSHAREDTYPES_API FSpecialEventCommunityChallengeData();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialEventCommunityChallengeData) { return 0; }
