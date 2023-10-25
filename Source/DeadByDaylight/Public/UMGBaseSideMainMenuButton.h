#pragma once

#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UMGBaseSideMainMenuButton.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGBaseSideMainMenuButton : public UUMGBaseButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* NotificationBadge;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _baseTextOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _highlightTextOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _baseIconOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _highlightIconOpacity;

public:
	UUMGBaseSideMainMenuButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGBaseSideMainMenuButton) { return 0; }
