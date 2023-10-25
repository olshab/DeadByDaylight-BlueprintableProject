#pragma once

#include "CoreMinimal.h"
#include "TeachableData.h"
#include "MobileBaseUserWidget.h"
#include "OnTeachableTooltipLongPressEvent.h"
#include "InventorySlotData.h"
#include "UObject/NoExportTypes.h"
#include "UMGTeachablePerkButton.generated.h"

class UPerkActionButton;
class UImage;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGTeachablePerkButton : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UPerkActionButton* TeachablePerkButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UImage* LockedStatusIcon;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FTeachableData _teachableData;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FOnTeachableTooltipLongPressEvent _onTeachablePerkTooltipLongPressEvent;

private:
	UFUNCTION(BlueprintCallable)
	void HandleTooltipLongPressedEvent(const FInventorySlotData& itemData, FVector2D position);

public:
	UUMGTeachablePerkButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGTeachablePerkButton) { return 0; }
