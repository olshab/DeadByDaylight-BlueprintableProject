#pragma once

#include "CoreMinimal.h"
#include "PlayerCardItemData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerCardItemData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString IconPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString SecondaryIconPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString AnimationFilePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString AnimationLinkageId;

public:
	DEADBYDAYLIGHT_API FPlayerCardItemData();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerCardItemData) { return 0; }
