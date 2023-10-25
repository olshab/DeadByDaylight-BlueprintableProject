#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CustomWidgetWrapperInitializer.generated.h"

class UCustomWidgetWrapper;

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UCustomWidgetWrapperInitializer : public UUserWidget
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UCustomWidgetWrapper* ListeningWrapper;

public:
	UCustomWidgetWrapperInitializer();
};

FORCEINLINE uint32 GetTypeHash(const UCustomWidgetWrapperInitializer) { return 0; }
