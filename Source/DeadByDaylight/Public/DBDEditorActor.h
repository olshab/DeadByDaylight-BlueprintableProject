#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DBDEditorActor.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ADBDEditorActor : public AActor
{
	GENERATED_BODY()

public:
	ADBDEditorActor();
};

FORCEINLINE uint32 GetTypeHash(const ADBDEditorActor) { return 0; }
