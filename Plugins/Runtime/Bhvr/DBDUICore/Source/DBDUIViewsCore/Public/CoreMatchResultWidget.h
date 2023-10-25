#pragma once

#include "CoreMinimal.h"
#include "EKillerMatchResult.h"
#include "MatchResultViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "EGameState.h"
#include "CoreMatchResultWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreMatchResultWidget : public UCoreBaseHudWidget, public IMatchResultViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _survivorDefaultResultText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EGameState, FText> _survivorResultTexts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _killerDefaultResultText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EKillerMatchResult, FText> _killerResultTexts;

public:
	UCoreMatchResultWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMatchResultWidget) { return 0; }
