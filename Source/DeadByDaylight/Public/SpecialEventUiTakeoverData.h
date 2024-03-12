#pragma once

#include "CoreMinimal.h"
#include "SpecialEventUiTakeoverData.generated.h"

USTRUCT(BlueprintType)
struct FSpecialEventUiTakeoverData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseMainMenuTakeover;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseEventEntryPopupTakeover;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseArchivesTakeover;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseStoreShrineTakeover;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseLobbyTakeover;

public:
	DEADBYDAYLIGHT_API FSpecialEventUiTakeoverData();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialEventUiTakeoverData) { return 0; }
