#pragma once

#include "CoreMinimal.h"
#include "UMGAtlantaBaseEventsTemplate.h"
#include "Templates/SubclassOf.h"
#include "UMGAtlantaGenericEventTemplate.generated.h"

class UUMGAtlantaEventsElement;
class UHorizontalBox;
class UUMGPromoPackItemWidget;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGAtlantaGenericEventTemplate : public UUMGAtlantaBaseEventsTemplate
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UHorizontalBox* RelatedItemsBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUMGAtlantaEventsElement> EventsElementWBPReference;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUMGPromoPackItemWidget> CustomizationWBPReference;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUMGPromoPackItemWidget> CharacterWBPReference;

public:
	UUMGAtlantaGenericEventTemplate();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaGenericEventTemplate) { return 0; }
