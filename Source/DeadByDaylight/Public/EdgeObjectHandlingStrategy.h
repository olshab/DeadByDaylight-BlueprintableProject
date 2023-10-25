#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EdgeObjectHandlingStrategy.generated.h"

class UActorSpawner;

UCLASS(Blueprintable)
class UEdgeObjectHandlingStrategy : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UActorSpawner*> _edgeObjectSpawners;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UActorSpawner*> _edgeObjectBlockers;

public:
	UEdgeObjectHandlingStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UEdgeObjectHandlingStrategy) { return 0; }
