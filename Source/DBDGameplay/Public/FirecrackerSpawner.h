#pragma once

#include "CoreMinimal.h"
#include "BaseCamperCollectable.h"
#include "Templates/SubclassOf.h"
#include "FirecrackerSpawner.generated.h"

class AActor;

UCLASS(Blueprintable)
class DBDGAMEPLAY_API AFirecrackerSpawner : public ABaseCamperCollectable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> _firecrackerClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _possibleThrowHeight;

public:
	AFirecrackerSpawner();
};

FORCEINLINE uint32 GetTypeHash(const AFirecrackerSpawner) { return 0; }
