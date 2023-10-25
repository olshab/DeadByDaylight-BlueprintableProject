#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "GuardOrderBase.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UGuardOrderBase : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _shouldWaitForCurrentInteraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _explodeInteractableAnimNotifyID;

public:
	UGuardOrderBase();
};

FORCEINLINE uint32 GetTypeHash(const UGuardOrderBase) { return 0; }
