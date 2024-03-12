#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "CharacterBioViewData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FCharacterBioViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText BioText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> BackgroundImage;

public:
	DBDUIVIEWINTERFACES_API FCharacterBioViewData();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterBioViewData) { return 0; }
