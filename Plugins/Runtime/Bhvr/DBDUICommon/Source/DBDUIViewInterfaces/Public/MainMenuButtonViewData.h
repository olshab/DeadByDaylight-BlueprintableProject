#pragma once

#include "CoreMinimal.h"
#include "MainMenuButtonViewData.generated.h"

USTRUCT(BlueprintType)
struct FMainMenuButtonViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Bonus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Timer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsNew;

public:
	DBDUIVIEWINTERFACES_API FMainMenuButtonViewData();
};

FORCEINLINE uint32 GetTypeHash(const FMainMenuButtonViewData) { return 0; }
