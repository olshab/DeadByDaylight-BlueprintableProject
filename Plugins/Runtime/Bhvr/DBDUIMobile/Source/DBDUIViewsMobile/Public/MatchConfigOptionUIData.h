#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "ECustomMatchOptions.h"
#include "MatchConfigOptionUIData.generated.h"

class UPaperSprite;

USTRUCT(BlueprintType)
struct FMatchConfigOptionUIData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString StringId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText OptionName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TSoftObjectPtr<UPaperSprite> OptionIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ECustomMatchOptions OptionType;

public:
	DBDUIVIEWSMOBILE_API FMatchConfigOptionUIData();
};

FORCEINLINE uint32 GetTypeHash(const FMatchConfigOptionUIData) { return 0; }
