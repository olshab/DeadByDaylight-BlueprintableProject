#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGGridPageScrollWidget.h"
#include "CharacterSlotData.h"
#include "UMGCharacterPageScrollWidget.generated.h"

class UUMGCharacterButton;

UCLASS(Blueprintable, EditInlineNew)
class UUMGCharacterPageScrollWidget : public UUMGGridPageScrollWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftClassPtr<UUMGCharacterButton> _characterButtonWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FCharacterSlotData> _charactersData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _charactersTitleText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _killersTitleText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _survivorsTitleText;

protected:
	UFUNCTION(BlueprintCallable)
	void HandleCharacterClicked(int32 characterIndex);

public:
	UUMGCharacterPageScrollWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCharacterPageScrollWidget) { return 0; }
