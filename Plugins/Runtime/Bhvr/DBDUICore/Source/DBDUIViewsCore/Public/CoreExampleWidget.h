#pragma once

#include "CoreMinimal.h"
#include "ExampleViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "ExampleButtonClickDelegate.h"
#include "CoreExampleWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreExampleWidget : public UCoreBaseHudWidget, public IExampleViewInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString EditAnywhere;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString EditDefaultsOnly;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString EditInstanceOnly;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString EditNoBlueprint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString EditDefaultsOnlyBlueprintReadOnly;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString VisibleAnywhere;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString VisibleDefaultsOnly;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString VisibleInstanceOnly;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FExampleButtonClickDelegate ExampleButtonClickDelegate;

public:
	UCoreExampleWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreExampleWidget) { return 0; }
