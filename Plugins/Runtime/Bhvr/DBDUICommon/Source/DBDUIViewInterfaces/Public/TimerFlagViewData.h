#pragma once

#include "CoreMinimal.h"
#include "ERemainingTimeFormat.h"
#include "UObject/NoExportTypes.h"
#include "EFlagType.h"
#include "EFlagSize.h"
#include "EFlagItemType.h"
#include "TimerFlagViewData.generated.h"

USTRUCT(BlueprintType)
struct FTimerFlagViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EFlagType FlagType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EFlagSize FlagSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EFlagItemType ItemType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString TimerText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool ShouldTick;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FDateTime EndDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ERemainingTimeFormat DisplayFormat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 NumberOfUnitsInDisplay;

public:
	DBDUIVIEWINTERFACES_API FTimerFlagViewData();
};

FORCEINLINE uint32 GetTypeHash(const FTimerFlagViewData) { return 0; }
