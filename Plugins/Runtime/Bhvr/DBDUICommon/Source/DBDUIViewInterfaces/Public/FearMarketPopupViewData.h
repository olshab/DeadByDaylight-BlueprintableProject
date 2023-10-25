#pragma once

#include "CoreMinimal.h"
#include "GenericPopupViewData.h"
#include "FearMarketPopupViewData.generated.h"

class UMenuPerkViewData;

UCLASS(Blueprintable)
class DBDUIVIEWINTERFACES_API UFearMarketPopupViewData : public UGenericPopupViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMenuPerkViewData* ItemData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Cost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 BloodpointConversion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsPurchased;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AlreadyOwned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AvailableTokens;

public:
	UFearMarketPopupViewData();
};

FORCEINLINE uint32 GetTypeHash(const UFearMarketPopupViewData) { return 0; }
