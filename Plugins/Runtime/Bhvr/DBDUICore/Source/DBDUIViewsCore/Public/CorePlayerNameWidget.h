#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "CorePlayerNameWidget.generated.h"

class UDBDTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCorePlayerNameWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* PlayerNameTB;

public:
	UFUNCTION(BlueprintCallable)
	void SetPlayerName(const FText& playerName);

public:
	UCorePlayerNameWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCorePlayerNameWidget) { return 0; }
