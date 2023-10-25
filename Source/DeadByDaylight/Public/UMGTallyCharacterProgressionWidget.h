#pragma once

#include "CoreMinimal.h"
#include "UMGTallyListElementWidget.h"
#include "UMGTallyCharacterProgressionWidget.generated.h"

class UUMGTallyCharacterProgressionBar;
class UTextBlock;
class UImage;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGTallyCharacterProgressionWidget : public UUMGTallyListElementWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGTallyCharacterProgressionBar* CharacterProgressionBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* TextCharacterCurrentExperience;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* TextExperienceForNextLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* TextExperienceEarned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* TextCurrentLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* CharacterPicture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* PrestigeIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* TextCharacterName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ExperiencePerSecond;

public:
	UFUNCTION(BlueprintCallable)
	void StartSequence();

private:
	UFUNCTION(BlueprintCallable)
	void StartNewLevel();

public:
	UFUNCTION(BlueprintCallable)
	void SetWidgetToFinalState();

private:
	UFUNCTION(BlueprintCallable)
	void OnFullBarOut();

	UFUNCTION(BlueprintCallable)
	void OnFullBarIn();

public:
	UUMGTallyCharacterProgressionWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGTallyCharacterProgressionWidget) { return 0; }
