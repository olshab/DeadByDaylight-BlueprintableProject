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
	TArray<uint8> mapAvails;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool perkAvail;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool offeringAvail;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool itemAvail;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool itemAddonAvail;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool dlcContentAllowed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool privateMatch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FCustomGameBotsData bots;

public:
	SOCIALPARTY_API FCustomGamePresetData();
};

FORCEINLINE uint32 GetTypeHash(const FCustomGamePresetData) { return 0; }
