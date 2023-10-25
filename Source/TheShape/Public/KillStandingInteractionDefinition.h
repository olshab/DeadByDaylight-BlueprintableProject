#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "KillStandingInteractionDefinition.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class THESHAPE_API UKillStandingInteractionDefinition : public UInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _slasherFacingTolerance;

public:
	UKillStandingInteractionDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UKillStandingInteractionDefinition) { return 0; }
