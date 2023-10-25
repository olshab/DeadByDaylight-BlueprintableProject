#pragma once

#include "CoreMinimal.h"
#include "UMGGridPageScrollWidget.h"
#include "CustomMatchTabConfig.h"
#include "UMGAtlantaMatchConfigPageScroll.generated.h"

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGAtlantaMatchConfigPageScroll : public UUMGGridPageScrollWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCustomMatchTabConfig CharactersTabConfig;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCustomMatchTabConfig InventoryTabConfig;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCustomMatchTabConfig MapTabConfig;

public:
	UUMGAtlantaMatchConfigPageScroll();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaMatchConfigPageScroll) { return 0; }
