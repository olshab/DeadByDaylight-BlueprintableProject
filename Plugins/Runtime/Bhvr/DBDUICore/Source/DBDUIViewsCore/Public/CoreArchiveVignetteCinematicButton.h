#pragma once

#include "CoreMinimal.h"
#include "CoreTabWidget.h"
#include "CoreArchiveVignetteCinematicButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchiveVignetteCinematicButton : public UCoreTabWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsForceDisabled;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UnlockCinematic();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetIsForceDisabled(bool isForceDisabledNew);

public:
	UCoreArchiveVignetteCinematicButton();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchiveVignetteCinematicButton) { return 0; }
