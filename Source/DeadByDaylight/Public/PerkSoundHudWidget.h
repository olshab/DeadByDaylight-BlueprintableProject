#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "PerkSoundHudWidget.generated.h"

class UHorizontalBox;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UPerkSoundHudWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UHorizontalBox* PerkIcons;

public:
	UPerkSoundHudWidget();
};

FORCEINLINE uint32 GetTypeHash(const UPerkSoundHudWidget) { return 0; }
