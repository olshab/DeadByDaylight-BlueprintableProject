#pragma once

#include "CoreMinimal.h"
#include "EContext.h"
#include "Presenter.h"
#include "Templates/SubclassOf.h"
#include "BasePopupPresenter.generated.h"

class UUserWidget;
class UBasePopupViewData;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DBDUIPRESENTERS_API UBasePopupPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EContext ObservedContext;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> PopupWidgetClass;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UBasePopupViewData* _viewData;

protected:
	UFUNCTION(BlueprintCallable)
	void OnContextLeave(EContext context);

	UFUNCTION(BlueprintCallable)
	void OnContextEnter(EContext context);

	UFUNCTION(BlueprintCallable)
	bool IsContextEntered() const;

public:
	UBasePopupPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UBasePopupPresenter) { return 0; }
