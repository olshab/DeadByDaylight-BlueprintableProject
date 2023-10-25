#pragma once

#include "CoreMinimal.h"
#include "CharacterSlideData.h"
#include "MobileBaseUserWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGCharacterSlideShowWidget.generated.h"

class UTexture2D;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGCharacterSlideShowWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, TSoftObjectPtr<UTexture2D>> _perkCategoriesIcons;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SecondsBeforeNextSlide;

private:
	UFUNCTION(BlueprintCallable)
	void WaitAndFadeOut();

	UFUNCTION(BlueprintCallable)
	void SwitchCharacterSlide();

	UFUNCTION(BlueprintCallable)
	void FadeOut();

	UFUNCTION(BlueprintCallable)
	void FadeIn();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void DisplayCharacterSlide(const FCharacterSlideData& characterSlide);

public:
	UUMGCharacterSlideShowWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCharacterSlideShowWidget) { return 0; }
