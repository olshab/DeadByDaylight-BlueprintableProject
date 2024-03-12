#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "Presenter.h"
#include "EOverlayTabs.h"
#include "SettingsPresenter.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIPRESENTERS_API USettingsPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UUserWidget> SettingsWidgetClass;

protected:
	UFUNCTION(BlueprintCallable)
	void OnTabEntered(const EOverlayTabs category);

private:
	UFUNCTION(BlueprintCallable)
	bool IsUMGEnabled() const;

public:
	USettingsPresenter();
};

FORCEINLINE uint32 GetTypeHash(const USettingsPresenter) { return 0; }
