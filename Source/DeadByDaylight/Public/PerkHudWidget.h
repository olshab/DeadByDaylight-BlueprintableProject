#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "PerkHudWidget.generated.h"

class UPerkActionButton;
class UCanvasPanel;

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UPerkHudWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCanvasPanel* PerksClickable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCanvasPanel* PerksExternal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftClassPtr<UPerkActionButton> AtlantaPerkActionButtonClass;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TMap<FName, UPerkActionButton*> _clickablePerksMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TMap<FName, UPerkActionButton*> _externalPerksMap;

public:
	UFUNCTION(BlueprintCallable)
	void RemoveExistingPerk(FName perkID, bool isExternal);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnPerkClickedHandler(FName perkID);

public:
	UPerkHudWidget();
};

FORCEINLINE uint32 GetTypeHash(const UPerkHudWidget) { return 0; }
