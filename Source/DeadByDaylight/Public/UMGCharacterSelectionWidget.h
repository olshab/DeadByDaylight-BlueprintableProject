#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "OnCharacterRoleButtonClickedEvent.h"
#include "OnCharacterInfoButtonClickedEvent.h"
#include "OnCharacterSelectedEvent.h"
#include "UMGCharacterSelectionWidget.generated.h"

class UUMGCharacterPageScrollWidget;
class UUMGCharacterSelectSubmenu;
class UWidgetSwitcher;
class UUMGCharacterInfoWidget;

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGCharacterSelectionWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnCharacterSelectedEvent OnCharacterSelected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnCharacterRoleButtonClickedEvent OnCharacterRoleButtonClicked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnCharacterInfoButtonClickedEvent OnCharacterInfoButtonClicked;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGCharacterPageScrollWidget* CharacterPageScrollWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGCharacterSelectSubmenu* CharacterSelectSubMenu;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGCharacterInfoWidget* CharacterInfoWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UWidgetSwitcher* CharacterSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isKiller;

protected:
	UFUNCTION(BlueprintCallable)
	void SwitchPanel();

	UFUNCTION(BlueprintCallable)
	void BroadcastSelectedCharacter(int32 characterIndex);

	UFUNCTION(BlueprintCallable)
	void BroadcastRoleButtonClicked();

public:
	UUMGCharacterSelectionWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCharacterSelectionWidget) { return 0; }
