#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "ECustomMatchOptions.h"
#include "MatchConfigTabData.generated.h"

class UUMGAtlantaMatchConfigTab;
class UPaperSprite;

USTRUCT(BlueprintType)
struct FMatchConfigTabData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UUMGAtlantaMatchConfigTab> Widget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UPaperSprite> TabIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<ECustomMatchOptions, int32> DefaultOptionsID;

public:
	DBDUIVIEWSMOBILE_API FMatchConfigTabData();
};

FORCEINLINE uint32 GetTypeHash(const FMatchConfigTabData) { return 0; }
