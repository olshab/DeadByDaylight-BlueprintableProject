#pragma once

#include "CoreMinimal.h"
#include "FadingBlockFeedback.h"
#include "NiagaraBlockFeedback.generated.h"

class UNiagaraComponent;

UCLASS(Blueprintable, Abstract)
class ANiagaraBlockFeedback : public AFadingBlockFeedback
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UNiagaraComponent* _effect;

public:
	ANiagaraBlockFeedback();
};

FORCEINLINE uint32 GetTypeHash(const ANiagaraBlockFeedback) { return 0; }
