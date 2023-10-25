#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "WormholeFatherTerminal.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class AWormholeFatherTerminal : public AInteractable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	USceneComponent* _wormholeKeyCardAttachment;

public:
	AWormholeFatherTerminal();
};

FORCEINLINE uint32 GetTypeHash(const AWormholeFatherTerminal) { return 0; }
