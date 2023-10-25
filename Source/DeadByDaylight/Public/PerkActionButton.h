#pragma once

#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "UMGLoadoutItemButton.h"
#include "PerkActionButton.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UPerkActionButton : public UUMGLoadoutItemButton
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UTextBlock* TextUnlockLevelTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool Activatable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ESlateVisibility SelectedImageVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ESlateVisibility ClickableButtonVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ESlateVisibility ClickableImageVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ESlateVisibility ProgressbarVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float IdleTime;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateWidgetPercentage(float percentage);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetIsActivatable(bool isClickable);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetCanEverBeActivated();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void CallSetPerkLevel(const int32 level);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void CallHidePerkLevel();

public:
	UPerkActionButton();
};

FORCEINLINE uint32 GetTypeHash(const UPerkActionButton) { return 0; }
