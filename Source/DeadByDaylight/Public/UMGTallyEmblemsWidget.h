#pragma once

#include "CoreMinimal.h"
#include "UMGTallyListElementWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGTallyEmblemsWidget.generated.h"

class UUMGTallyEmblemWidget;
class UHorizontalBox;

UCLASS(Blueprintable, EditInlineNew)
class UUMGTallyEmblemsWidget : public UUMGTallyListElementWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftClassPtr<UUMGTallyEmblemWidget> EmblemWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UHorizontalBox* EmblemsContainer;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UUMGTallyEmblemWidget*> _emblems;

public:
	UFUNCTION(BlueprintPure)
	TArray<UUMGTallyEmblemWidget*> GetEmblems() const;

public:
	UUMGTallyEmblemsWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGTallyEmblemsWidget) { return 0; }
