#pragma once

#include "CoreMinimal.h"
#include "EContextSection.h"
#include "UIComponent.h"
#include "ContextObserver.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDUIPRESENTERS_API UContextObserver : public UUIComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EContextSection ObservedContextSection;

public:
	UContextObserver();
};

FORCEINLINE uint32 GetTypeHash(const UContextObserver) { return 0; }
