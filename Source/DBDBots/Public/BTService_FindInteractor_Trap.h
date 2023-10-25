#pragma once

#include "CoreMinimal.h"
#include "BTService_FindInteractor.h"
#include "InteractableWithInteractionId.h"
#include "AITunableParameter.h"
#include "AIRoll.h"
#include "BTService_FindInteractor_Trap.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTService_FindInteractor_Trap : public UBTService_FindInteractor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter HelpDestroyDemoPortal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAIRoll SeeStandardTrapRoll;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TrapGroundLocationOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FInteractableWithInteractionId> InteractableOnlyWithInteractionId;

public:
	UBTService_FindInteractor_Trap();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_FindInteractor_Trap) { return 0; }
