#pragma once

#include "CoreMinimal.h"
#include "ProfileMenuStatsViewInterface.h"
#include "CoreTabContentWidget.h"
#include "ProfileMenuStatsWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UProfileMenuStatsWidget : public UCoreTabContentWidget, public IProfileMenuStatsViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText PlayerLevelText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText PlayerLevelAndDevotionDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText KillerAndSurvivorGradesDescription;

public:
	UProfileMenuStatsWidget();
};

FORCEINLINE uint32 GetTypeHash(const UProfileMenuStatsWidget) { return 0; }
