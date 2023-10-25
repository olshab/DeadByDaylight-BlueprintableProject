#pragma once

#include "CoreMinimal.h"
#include "Presenter.h"
#include "Templates/SubclassOf.h"
#include "LightSensitivityPresenter.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIPRESENTERS_API ULightSensitivityPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> LightSensitivityScreenWidgetClass;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AutoCompleteTime;

private:
	UFUNCTION(BlueprintCallable)
	void OnContinue();

	UFUNCTION(BlueprintCallable)
	void OnCompletedFadeOut();

public:
	ULightSensitivityPresenter();
};

FORCEINLINE uint32 GetTypeHash(const ULightSensitivityPresenter) { return 0; }
