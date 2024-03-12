#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UObject/SoftObjectPtr.h"
#include "MainMenuButtonIcon.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FMainMenuButtonIcon: public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> Icon;

public:
	DBDUIVIEWINTERFACES_API FMainMenuButtonIcon();
};

FORCEINLINE uint32 GetTypeHash(const FMainMenuButtonIcon) { return 0; }
