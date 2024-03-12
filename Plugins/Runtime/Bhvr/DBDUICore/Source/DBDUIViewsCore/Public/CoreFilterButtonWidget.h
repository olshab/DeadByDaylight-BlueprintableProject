#pragma once

#include "CoreMinimal.h"
#include "CoreButtonWidget.h"
#include "EItemRarity.h"
#include "CoreFilterButtonWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreFilterButtonWidget : public UCoreButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isAvailableOption;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isOwnedOption;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EItemRarity _itemRarityFilterOption;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isToggled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _defaultToggleState;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateVisualState();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetupTextLabel(const FText& label);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetupOwnedTagLabel();

	UFUNCTION(BlueprintCallable)
	void SetToggledState(bool isToggled);

	UFUNCTION(BlueprintPure)
	bool IsToggled() const;

public:
	UCoreFilterButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreFilterButtonWidget) { return 0; }
