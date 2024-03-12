#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DBDBaseActor.generated.h"

class USceneComponent;

UCLASS(Blueprintable, Abstract)
class ADBDBaseActor : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USceneComponent* _rootComponent;

public:
	ADBDBaseActor();
};

FORCEINLINE uint32 GetTypeHash(const ADBDBaseActor) { return 0; }
