#pragma once

#include "CoreMinimal.h"
#include "EDetailsTabLayout.h"
#include "SpecialEventDetailsTabContentData.h"
#include "UObject/SoftObjectPtr.h"
#include "SpecialEventDetailsTabData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSpecialEventDetailsTabData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDetailsTabLayout Layout;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FSpecialEventDetailsTabContentData> Content;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> Image;

public:
	DBDSHAREDTYPES_API FSpecialEventDetailsTabData();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialEventDetailsTabData) { return 0; }
