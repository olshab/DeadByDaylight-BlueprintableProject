#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InteractionDefinition.h"
#include "RekindleTotemInteraction.generated.h"

class ARekindledTotem;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEK26_API URekindleTotemInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _slasherFacingTolerance;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<ARekindledTotem> _rekindledTotemClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ARekindledTotem* _rekindledTotem;

public:
	URekindleTotemInteraction();
};

FORCEINLINE uint32 GetTypeHash(const URekindleTotemInteraction) { return 0; }
