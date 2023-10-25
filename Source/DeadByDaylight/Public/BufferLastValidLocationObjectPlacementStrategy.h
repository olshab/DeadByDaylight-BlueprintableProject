#pragma once

#include "CoreMinimal.h"
#include "ObjectPlacementUpdateStrategy.h"
#include "BufferLastValidLocationObjectPlacementStrategy.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBufferLastValidLocationObjectPlacementStrategy : public UObjectPlacementUpdateStrategy
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _maxDistanceToOwner;

public:
	UBufferLastValidLocationObjectPlacementStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UBufferLastValidLocationObjectPlacementStrategy) { return 0; }
