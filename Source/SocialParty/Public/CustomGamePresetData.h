#pragma once

#include "CoreMinimal.h"
#include "CustomGameBotsData.h"
#include "CustomGamePresetData.generated.h"

USTRUCT(BlueprintType)
struct FCustomGamePresetData
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<uint8> _mapAvailabilities;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _arePerkAvailable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _areOfferingAvailable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _areItemAvailable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _areItemAddonAvailable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _areDlcContentAllowed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _isPrivateMatch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FCustomGameBotsData _botsData;

public:
	SOCIALPARTY_API FCustomGamePresetData();
};

FORCEINLINE uint32 GetTypeHash(const FCustomGamePresetData) { return 0; }
