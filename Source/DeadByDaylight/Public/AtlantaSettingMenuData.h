#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EAtlantaSettingMenuType.h"
#include "EOverlayTabs.h"
#include "EOverlayMode.h"
#include "AtlantaSettingMenuData.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaSettingMenuData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EOverlayTabs OverlayTab;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EOverlayMode OverlayMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAtlantaSettingMenuType MenuType;

public:
	DEADBYDAYLIGHT_API FAtlantaSettingMenuData();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaSettingMenuData) { return 0; }
