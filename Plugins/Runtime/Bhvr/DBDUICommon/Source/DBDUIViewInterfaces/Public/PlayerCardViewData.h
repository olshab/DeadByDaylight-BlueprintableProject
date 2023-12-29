#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "Templates/SubclassOf.h"
#include "PlayerCardViewData.generated.h"

class UTexture2D;
class UUserWidget;

USTRUCT(BlueprintType)
struct FPlayerCardViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TSoftObjectPtr<UTexture2D> Icon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TSoftObjectPtr<UTexture2D> SecondaryIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TSubclassOf<UUserWidget> AnimationRef;

public:
	DBDUIVIEWINTERFACES_API FPlayerCardViewData();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerCardViewData) { return 0; }
