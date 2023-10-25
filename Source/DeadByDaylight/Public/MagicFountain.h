#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Interactable.h"
#include "AIInteractableTargetInterface.h"
#include "MagicFountain.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API AMagicFountain : public AInteractable, public IAIInteractableTargetInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector AIInteractionOffset;

public:
	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	bool IsCorrupted() const;

public:
	AMagicFountain();
};

FORCEINLINE uint32 GetTypeHash(const AMagicFountain) { return 0; }
