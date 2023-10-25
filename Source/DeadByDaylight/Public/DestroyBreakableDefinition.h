#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "InteractionDefinition.h"
#include "DestroyBreakableDefinition.generated.h"

class ABreakableBase;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDestroyBreakableDefinition : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _interactionTimePercentForDestroyEvent;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ABreakableBase* _breakable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _fastInteractionAnimThreshold;

protected:
	UFUNCTION(BlueprintPure)
	ABreakableBase* GetBreakable() const;

public:
	UDestroyBreakableDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UDestroyBreakableDefinition) { return 0; }
