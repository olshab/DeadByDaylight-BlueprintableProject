#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGCommandDebugButton.generated.h"

class UTextBlock;
class UButton;

UCLASS(Blueprintable, EditInlineNew)
class UUMGCommandDebugButton : public UMobileBaseUserWidget
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UTextBlock* CommandLabel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UButton* CommandButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString CommandName;

private:
	UFUNCTION(BlueprintCallable)
	void TriggerCommand();

public:
	UUMGCommandDebugButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCommandDebugButton) { return 0; }
