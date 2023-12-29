#pragma once

#include "CoreMinimal.h"
#include "SubPresenter.h"
#include "EItemSorting.h"
#include "UObject/ScriptInterface.h"
#include "ProfileMenuCustomizationSubPresenter.generated.h"

class IProfileMenuCustomizationViewInterface;

UCLASS(Blueprintable)
class DBDUIPRESENTERS_API UProfileMenuCustomizationSubPresenter : public USubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TScriptInterface<IProfileMenuCustomizationViewInterface> _profileMenuCustomizationWidget;

private:
	UFUNCTION(BlueprintCallable)
	void OnRewardGridItemClicked(const int32 selectedIndex);

	UFUNCTION(BlueprintCallable)
	void OnEquipButtonClicked();

	UFUNCTION(BlueprintCallable)
	void OnCustomizationSortingChanged(const EItemSorting itemSorting);

public:
	UProfileMenuCustomizationSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UProfileMenuCustomizationSubPresenter) { return 0; }
