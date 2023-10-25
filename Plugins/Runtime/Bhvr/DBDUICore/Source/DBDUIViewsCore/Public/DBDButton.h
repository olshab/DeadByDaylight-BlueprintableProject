#pragma once

#include "CoreMinimal.h"
#include "Components/Button.h"
#include "DBDButton.generated.h"

UCLASS(Blueprintable)
class UDBDButton : public UButton
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool SendAnalyticsData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AnalyticsName;

public:
	UDBDButton();
};

FORCEINLINE uint32 GetTypeHash(const UDBDButton) { return 0; }
