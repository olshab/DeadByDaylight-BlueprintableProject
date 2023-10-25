#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "InventorySlotData.h"
#include "UMGLobbyOfferingItemWidget.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGLobbyOfferingItemWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetOfferingData(const FInventorySlotData& data);

	UFUNCTION(BlueprintCallable)
	void HideOfferingItem();

protected:
	UFUNCTION(BlueprintCallable)
	TMap<FName, TSoftObjectPtr<UTexture2D>> GetOfferingIcons();

public:
	UUMGLobbyOfferingItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGLobbyOfferingItemWidget) { return 0; }
