#pragma once

#include "CoreMinimal.h"
#include "UMGCharacterPrestigeIcon.h"
#include "EPlayerRole.h"
#include "UMGCharacterPrestigeButton.generated.h"

class UCanvasPanel;
class UButton;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGCharacterPrestigeButton : public UUMGCharacterPrestigeIcon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UButton* PrestigeButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* PrestigeAnimationCanvas;

public:
	UFUNCTION(BlueprintCallable)
	void SetCharacterPrestigeData(bool canPrestige, const int32 prestigeLevel, const EPlayerRole role);

protected:
	UFUNCTION(BlueprintCallable)
	void OnPrestigeButtonClicked();

public:
	UUMGCharacterPrestigeButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCharacterPrestigeButton) { return 0; }
