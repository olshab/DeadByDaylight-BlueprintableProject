#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGBloodStoreSubMenu.generated.h"

class UUMGBloodStoreTimer;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGBloodStoreSubMenu : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGBloodStoreTimer* SurvivorTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGBloodStoreTimer* KillerTimer;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetFaction(bool isKiller);

	UFUNCTION(BlueprintCallable)
	void BroadcastExpiredBloodWeb();

	UFUNCTION(BlueprintCallable)
	void BroadcastCharacterRoleButtonClicked();

public:
	UUMGBloodStoreSubMenu();
};

FORCEINLINE uint32 GetTypeHash(const UUMGBloodStoreSubMenu) { return 0; }
