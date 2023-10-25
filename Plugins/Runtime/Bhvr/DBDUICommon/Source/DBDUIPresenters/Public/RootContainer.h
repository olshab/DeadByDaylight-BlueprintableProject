#pragma once

#include "CoreMinimal.h"
#include "UIComponent.h"
#include "Templates/SubclassOf.h"
#include "EGameLayer.h"
#include "RootContainer.generated.h"

class UUserWidget;
class UPresenterParentWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIPRESENTERS_API URootContainer : public UUIComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EGameLayer GameLayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UnfocusedOpacity;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TMap<TSubclassOf<UPresenterParentWidget>, UPresenterParentWidget*> _presenterParentWidgets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UUserWidget* _rootWidget;

public:
	URootContainer();
};

FORCEINLINE uint32 GetTypeHash(const URootContainer) { return 0; }
