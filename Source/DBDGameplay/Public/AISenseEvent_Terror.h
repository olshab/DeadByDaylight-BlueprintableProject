#pragma once

#include "CoreMinimal.h"
#include "AITerrorEvent.h"
#include "Perception/AISenseEvent.h"
#include "AISenseEvent_Terror.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDGAMEPLAY_API UAISenseEvent_Terror : public UAISenseEvent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITerrorEvent Event;

public:
	UAISenseEvent_Terror();
};

FORCEINLINE uint32 GetTypeHash(const UAISenseEvent_Terror) { return 0; }
