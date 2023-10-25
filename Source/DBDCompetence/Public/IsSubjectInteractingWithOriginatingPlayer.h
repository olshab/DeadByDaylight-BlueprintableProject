#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "IsSubjectInteractingWithOriginatingPlayer.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UIsSubjectInteractingWithOriginatingPlayer : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

public:
	UIsSubjectInteractingWithOriginatingPlayer();
};

FORCEINLINE uint32 GetTypeHash(const UIsSubjectInteractingWithOriginatingPlayer) { return 0; }
