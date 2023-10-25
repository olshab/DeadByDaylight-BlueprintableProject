#pragma once

#include "CoreMinimal.h"
#include "UMGSettingContextWidget.h"
#include "UMGSettingTutorialContextWidget.generated.h"

class UUMGSettingContextButton;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGSettingTutorialContextWidget : public UUMGSettingContextWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGSettingContextButton* SurvivorTutorialButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGSettingContextButton* KillerTutorialButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGSettingContextButton* SurvivorCinematicButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGSettingContextButton* KillerCinematicButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGSettingContextButton* LoreCinematicButton;

public:
	UUMGSettingTutorialContextWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGSettingTutorialContextWidget) { return 0; }
