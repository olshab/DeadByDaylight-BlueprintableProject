#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "TabWidgetData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FTabWidgetData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Key;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool HasNotification;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TSoftObjectPtr<UTexture2D> Icon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ForcesIconSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D IconSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AnalyticsName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsKillSwitchEnabled;

public:
	DBDUIVIEWINTERFACES_API FTabWidgetData();
};

FORCEINLINE uint32 GetTypeHash(const FTabWidgetData) { return 0; }
