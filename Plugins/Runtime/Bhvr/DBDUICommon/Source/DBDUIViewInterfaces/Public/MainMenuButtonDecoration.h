#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UObject/SoftObjectPtr.h"
#include "MainMenuButtonDecoration.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FMainMenuButtonDecoration: public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UUserWidget> Widget;

public:
	DBDUIVIEWINTERFACES_API FMainMenuButtonDecoration();
};

FORCEINLINE uint32 GetTypeHash(const FMainMenuButtonDecoration) { return 0; }
