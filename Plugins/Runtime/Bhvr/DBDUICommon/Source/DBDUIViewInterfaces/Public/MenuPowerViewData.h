#pragma once

#include "CoreMinimal.h"
#include "MenuLoadoutPartViewData.h"
#include "MenuPowerViewData.generated.h"

UCLASS(Blueprintable)
class DBDUIVIEWINTERFACES_API UMenuPowerViewData : public UMenuLoadoutPartViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText EventName;

public:
	UMenuPowerViewData();
};

FORCEINLINE uint32 GetTypeHash(const UMenuPowerViewData) { return 0; }
