#pragma once

#include "CoreMinimal.h"
#include "StoreItemUnlockInfoViewData.h"
#include "EStoreCharactersActionButtonState.h"
#include "PriceTagViewData.h"
#include "StoreCharactersActionButtonsViewData.generated.h"

USTRUCT(BlueprintType)
struct FStoreCharactersActionButtonsViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EStoreCharactersActionButtonState UnlockState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EStoreCharactersActionButtonState EquipState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EStoreCharactersActionButtonState EquipAllState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EStoreCharactersActionButtonState SelectAllState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EStoreCharactersActionButtonState AlternativeUnlockState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EStoreCharactersActionButtonState PlayMoriState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EStoreCharactersActionButtonState ZoomCharmState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsCharmZoomed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FPriceTagViewData> PriceTagData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FStoreItemUnlockInfoViewData UnlockInfo;

public:
	DBDUIVIEWINTERFACES_API FStoreCharactersActionButtonsViewData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreCharactersActionButtonsViewData) { return 0; }
