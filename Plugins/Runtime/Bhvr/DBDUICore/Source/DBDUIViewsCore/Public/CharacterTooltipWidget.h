#pragma once

#include "CoreMinimal.h"
#include "TooltipWidget.h"
#include "CharacterTooltipViewData.h"
#include "ECharacterDifficulty.h"
#include "CharacterTooltipWidget.generated.h"

class UDBDTextBlock;
class UDBDRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCharacterTooltipWidget : public UTooltipWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* InstructionTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* LevelTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDTextBlock* LockDetailsTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDRichTextBlock* DifficultyRTB;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetTooltipData(const FCharacterTooltipViewData& characterViewData);

protected:
	UFUNCTION(BlueprintCallable)
	void SetLockDetails(const FCharacterTooltipViewData& characterViewData);

	UFUNCTION(BlueprintCallable)
	void SetLevel(int32 level);

	UFUNCTION(BlueprintCallable)
	void SetDifficulty(ECharacterDifficulty difficulty);

public:
	UCharacterTooltipWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCharacterTooltipWidget) { return 0; }
