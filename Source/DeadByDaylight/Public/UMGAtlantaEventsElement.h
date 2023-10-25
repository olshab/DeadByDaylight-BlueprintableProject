#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGAtlantaEventsElement.generated.h"

class UVerticalBox;
class UUMGPromoPackItemWidget;
class UTextBlock;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGAtlantaEventsElement : public UMobileBaseUserWidget
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UVerticalBox* ImageBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UTextBlock* ElementName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UUMGPromoPackItemWidget* CustomizationWidget;

public:
	UUMGAtlantaEventsElement();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaEventsElement) { return 0; }
