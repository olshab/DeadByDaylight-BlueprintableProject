#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGCharacterPrestigeIcon.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGCharacterPrestigeIcon : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* PrestigeImage;

public:
	UUMGCharacterPrestigeIcon();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCharacterPrestigeIcon) { return 0; }
