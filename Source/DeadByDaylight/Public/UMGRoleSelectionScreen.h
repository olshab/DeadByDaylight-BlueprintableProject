#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "ERoleSelectionScreenButton.h"
#include "UMGRoleSelectionScreen.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGRoleSelectionScreen : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _newInboxMessageCount;

public:
	UFUNCTION(BlueprintCallable)
	void ButtonClickEvent(ERoleSelectionScreenButton buttonId);

public:
	UUMGRoleSelectionScreen();
};

FORCEINLINE uint32 GetTypeHash(const UUMGRoleSelectionScreen) { return 0; }
