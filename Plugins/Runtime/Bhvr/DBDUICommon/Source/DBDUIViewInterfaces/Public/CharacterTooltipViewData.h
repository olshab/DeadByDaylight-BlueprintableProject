#pragma once

#include "CoreMinimal.h"
#include "ECharacterDifficulty.h"
#include "CharacterTooltipViewData.generated.h"

USTRUCT(BlueprintType)
struct FCharacterTooltipViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText Biography;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText DLCTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText PackId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText PackTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsNewInStore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsOwned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsAvailableInStore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsDLCPurchasable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ECharacterDifficulty Difficulty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText CharacterDisabledMessage;

public:
	DBDUIVIEWINTERFACES_API FCharacterTooltipViewData();
};

FORCEINLINE uint32 GetTypeHash(const FCharacterTooltipViewData) { return 0; }
