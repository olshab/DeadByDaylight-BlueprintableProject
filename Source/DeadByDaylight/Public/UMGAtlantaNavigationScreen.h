#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "PartyMemberUIData.h"
#include "ENavigationScreenButton.h"
#include "UMGAtlantaNavigationScreen.generated.h"

class UWidgetSwitcher;
class UUMGBankAndPlayerInfoWidget;
class UUMGPartySlotsWidget;
class UTextBlock;
class UUMGBaseCountdownWidget;
class UButton;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGAtlantaNavigationScreen : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UUMGBankAndPlayerInfoWidget* BankAndPlayerInfoWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UTextBlock* TextButtonStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ESlateVisibility PlayModeSelectionVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ESlateVisibility CharacterInfoVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ESlateVisibility BackButtonVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ESlateVisibility MenuButtonsVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ESlateVisibility ButtonRoleVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UButton* ButtonRole;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UWidgetSwitcher* BottomRightWidgetSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGPartySlotsWidget* PartyPlayerSlots;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGBaseCountdownWidget* PartyCountdownLarge;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FPartyMemberUIData> _partyMembers;

public:
	UFUNCTION(BlueprintPure)
	TArray<FPartyMemberUIData> GetPartyMembersData(int32 index) const;

	UFUNCTION(BlueprintCallable)
	void ButtonClickEvent(ENavigationScreenButton buttonid);

public:
	UUMGAtlantaNavigationScreen();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaNavigationScreen) { return 0; }
